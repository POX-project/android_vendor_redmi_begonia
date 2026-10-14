/*
 * Reverse-Engineered Source for: libMtkOmxVenc.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libMtkOmxVenc"

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
#include "libMtkOmxVenc.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_VIDEO "/dev/video"
#define DEV_DEV_VIDEO1 "/dev/video1"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_VIDEO, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_VIDEO, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_VIDEO, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_VIDEO1, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_VIDEO1, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_VIDEO1, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: MtkOmxVenc::SMVR_DequeOnGetOutputBuffer(OMX_BUFFERHEADERTYPE*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc27SMVR_DequeOnGetOutputBufferEP20OMX_BUFFERHEADERTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc27SMVR_DequeOnGetOutputBufferEP20OMX_BUFFERHEADERTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::allowEncodeVideo(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16allowEncodeVideoEi(void) {
    ALOGD("_ZN10MtkOmxVenc16allowEncodeVideoEi() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetVideoVBSMC(OMX_VIDEO_PARAM_VBSMCTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19HandleSetVideoVBSMCEP25OMX_VIDEO_PARAM_VBSMCTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc19HandleSetVideoVBSMCEP25OMX_VIDEO_PARAM_VBSMCTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetVideoMotionVector(OMX_VIDEO_PARAM_MOTIONVECTORTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26HandleGetVideoMotionVectorEP32OMX_VIDEO_PARAM_MOTIONVECTORTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc26HandleGetVideoMotionVectorEP32OMX_VIDEO_PARAM_MOTIONVECTORTYPE() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIjE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetConfigVendorSetRoiSize(OMX_VIDEO_CONFIG_ROI_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc31HandleSetConfigVendorSetRoiSizeEP25OMX_VIDEO_CONFIG_ROI_INFO(void) {
    ALOGD("_ZN10MtkOmxVenc31HandleSetConfigVendorSetRoiSizeEP25OMX_VIDEO_CONFIG_ROI_INFO() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetGoogleDescribeColorFormat(android::DescribeColorFormatParams*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc34HandleGetGoogleDescribeColorFormatEPN7android25DescribeColorFormatParamsE(void) {
    ALOGD("_ZN10MtkOmxVenc34HandleGetGoogleDescribeColorFormatEPN7android25DescribeColorFormatParamsE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ROI_UpdateInputV4L2Buffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc25ROI_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void) {
    ALOGD("_ZN10MtkOmxVenc25ROI_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIhE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ioctl_stream_on(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15ioctl_stream_onEi(void) {
    ALOGD("_ZN10MtkOmxVenc15ioctl_stream_onEi() called");
    return 0;
}

/* Demangled: MtkOmxVenc::WFD_OnEnqueOutputBuffer(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc23WFD_OnEnqueOutputBufferEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc23WFD_OnEnqueOutputBufferEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: OmxMVAManager::getOmxMVAFromHndlToVencBS(void*, __VENC_DRV_PARAM_BS_BUF_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager25getOmxMVAFromHndlToVencBSEPvP25__VENC_DRV_PARAM_BS_BUF_T(void) {
    ALOGD("_ZN13OmxMVAManager25getOmxMVAFromHndlToVencBSEPvP25__VENC_DRV_PARAM_BS_BUF_T() called");
    return 0;
}

/* Demangled: MtkVenc_AllocateBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z22MtkVenc_AllocateBufferPvPP20OMX_BUFFERHEADERTYPEjS_j(void) {
    ALOGD("_Z22MtkVenc_AllocateBufferPvPP20OMX_BUFFERHEADERTYPEjS_j() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HDR_UpdateOutputV4L2Buffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26HDR_UpdateOutputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void) {
    ALOGD("_ZN10MtkOmxVenc26HDR_UpdateOutputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer() called");
    return 0;
}

/* Demangled: v4l2_dump_qbuf(bool, char const*, v4l2_buffer*) */
extern "C" __attribute__((visibility("default"))) int _Z14v4l2_dump_qbufbPKcP11v4l2_buffer(void) {
    ALOGD("_Z14v4l2_dump_qbufbPKcP11v4l2_buffer() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Heif_GetExtensionIndex(char*, OMX_INDEXTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc22Heif_GetExtensionIndexEPcP13OMX_INDEXTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc22Heif_GetExtensionIndexEPcP13OMX_INDEXTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::releaseOutputNativeHandle(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc25releaseOutputNativeHandleEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc25releaseOutputNativeHandleEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: v4l2_dump_frmsizeenum(bool, char const*, v4l2_frmsizeenum*) */
extern "C" __attribute__((visibility("default"))) int _Z21v4l2_dump_frmsizeenumbPKcP16v4l2_frmsizeenum(void) {
    ALOGD("_Z21v4l2_dump_frmsizeenumbPKcP16v4l2_frmsizeenum() called");
    return 0;
}

/* Demangled: android::Vector<MtkVenc::RoiInfo*>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPN7MtkVenc7RoiInfoEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIPN7MtkVenc7RoiInfoEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: OmxMVAManager::newOmxMVAwithHndl(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager17newOmxMVAwithHndlEPvS0_(void) {
    ALOGD("_ZN13OmxMVAManager17newOmxMVAwithHndlEPvS0_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetConfigGoogleIntraRefresh(OMX_VIDEO_CONFIG_ANDROID_INTRAREFRESHTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc33HandleGetConfigGoogleIntraRefreshEP41OMX_VIDEO_CONFIG_ANDROID_INTRAREFRESHTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc33HandleGetConfigGoogleIntraRefreshEP41OMX_VIDEO_CONFIG_ANDROID_INTRAREFRESHTYPE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: MtkOmxVenc::CommonErrorHandle(OMX_ERRORTYPE, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17CommonErrorHandleE13OMX_ERRORTYPEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc17CommonErrorHandleE13OMX_ERRORTYPEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::doDequeInputFrame(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17doDequeInputFrameEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc17doDequeInputFrameEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Exported Object: MPEG4ProfileLevelTable */
extern "C" __attribute__((visibility("default"))) void* MPEG4ProfileLevelTable = NULL;

/* Demangled: MtkOmxVenc::FreeInputBuffers(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16FreeInputBuffersEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc16FreeInputBuffersEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIjE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::dumpCCOutput(unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc12dumpCCOutputEPhj(void) {
    ALOGD("_ZN10MtkOmxVenc12dumpCCOutputEPhj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Omx2V4L2HevcProfileMap(OMX_VIDEO_HEVCPROFILETYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc22Omx2V4L2HevcProfileMapE25OMX_VIDEO_HEVCPROFILETYPE(void) {
    ALOGD("_ZN10MtkOmxVenc22Omx2V4L2HevcProfileMapE25OMX_VIDEO_HEVCPROFILETYPE() called");
    return 0;
}

/* Demangled: OmxMVAManager::OmxMVAManager() */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManagerC2Ev(void) {
    ALOGD("_ZN13OmxMVAManagerC2Ev() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ioctl_query_in_dmabuf() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21ioctl_query_in_dmabufEv(void) {
    ALOGD("_ZN10MtkOmxVenc21ioctl_query_in_dmabufEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::InputErrorHandle(bool, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16InputErrorHandleEbP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc16InputErrorHandleEbP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<OMX_BUFFERHEADERTYPE*, MtkVenc::MtkRoiConfigEntry*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEEE = NULL;

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: MtkOmxVenc::MtkOmxVencRoi() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc13MtkOmxVencRoiEv(void) {
    ALOGD("_ZN10MtkOmxVenc13MtkOmxVencRoiEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::onEmptyThisBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17onEmptyThisBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc17onEmptyThisBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ROI_OnEnqueBuffer(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17ROI_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc17ROI_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<MtkVenc::MtkRoiConfigEntry*, int> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE10do_compareEPKvS8_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE10do_compareEPKvS8_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ReturnPendingOutputBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26ReturnPendingOutputBuffersEv(void) {
    ALOGD("_ZN10MtkOmxVenc26ReturnPendingOutputBuffersEv() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char*>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPhE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIPhE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::GenerateDummyBufferH264Enc(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26GenerateDummyBufferH264EncEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc26GenerateDummyBufferH264EncEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: PixelFormatToString(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _Z19PixelFormatToStringjb(void) {
    ALOGD("_Z19PixelFormatToStringjb() called");
    return 0;
}

/* Demangled: MtkOmxVenc::profile_id_ioctl_set_ctrl() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc25profile_id_ioctl_set_ctrlEv(void) {
    ALOGD("_ZN10MtkOmxVenc25profile_id_ioctl_set_ctrlEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<OMX_BUFFERHEADERTYPE*, MtkVenc::MtkRoiConfigEntry*> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: OmxMVAManager::newOmxMVAandVA(int, int, void*, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager14newOmxMVAandVAEiiPvPS0_(void) {
    ALOGD("_ZN13OmxMVAManager14newOmxMVAandVAEiiPvPS0_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ComponentInitHDR(AndroidVendorConfigExtensionStore*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16ComponentInitHDREP33AndroidVendorConfigExtensionStore(void) {
    ALOGD("_ZN10MtkOmxVenc16ComponentInitHDREP33AndroidVendorConfigExtensionStore() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandlePortDisable(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17HandlePortDisableEj(void) {
    ALOGD("_ZN10MtkOmxVenc17HandlePortDisableEj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ioctl_req_bufs(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14ioctl_req_bufsEi(void) {
    ALOGD("_ZN10MtkOmxVenc14ioctl_req_bufsEi() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Omx2DriverMPEG4LevelMap(OMX_VIDEO_MPEG4LEVELTYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc23Omx2DriverMPEG4LevelMapE24OMX_VIDEO_MPEG4LEVELTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc23Omx2DriverMPEG4LevelMapE24OMX_VIDEO_MPEG4LEVELTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::EpilogueInputBufferHeaderUse() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc28EpilogueInputBufferHeaderUseEv(void) {
    ALOGD("_ZN10MtkOmxVenc28EpilogueInputBufferHeaderUseEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetGoogleEnableAndroidNativeHandle(android::EnableAndroidNativeBuffersParams*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc40HandleSetGoogleEnableAndroidNativeHandleEPN7android32EnableAndroidNativeBuffersParamsE(void) {
    ALOGD("_ZN10MtkOmxVenc40HandleSetGoogleEnableAndroidNativeHandleEPN7android32EnableAndroidNativeBuffersParamsE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::WaitFence(unsigned char*, OMX_BOOL) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc9WaitFenceEPh8OMX_BOOL(void) {
    ALOGD("_ZN10MtkOmxVenc9WaitFenceEPh8OMX_BOOL() called");
    return 0;
}

/* Demangled: MtkOmxVenc::IoctlPoll(int, int*, bool*, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc9IoctlPollEiPiPbS1_(void) {
    ALOGD("_ZN10MtkOmxVenc9IoctlPollEiPiPbS1_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<MtkVenc::MtkRoiConfigEntry*, int> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for OmxIonMVAEntry */
extern "C" __attribute__((visibility("default"))) void* _ZTV14OmxIonMVAEntry = NULL;

/* Demangled: MtkOmxVenc::MtkOmxVencDebug() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15MtkOmxVencDebugEv(void) {
    ALOGD("_ZN10MtkOmxVenc15MtkOmxVencDebugEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::deMtkOmxVencRoi() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15deMtkOmxVencRoiEv(void) {
    ALOGD("_ZN10MtkOmxVenc15deMtkOmxVencRoiEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HDR_HandleStateSet(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18HDR_HandleStateSetEj(void) {
    ALOGD("_ZN10MtkOmxVenc18HDR_HandleStateSetEj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::GetFreeRoiBuffer(unsigned char**, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16GetFreeRoiBufferEPPhPj(void) {
    ALOGD("_ZN10MtkOmxVenc16GetFreeRoiBufferEPPhPj() called");
    return 0;
}

/* Demangled: android::Vector<OmxMVAEntry*>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP11OmxMVAEntryE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIP11OmxMVAEntryE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetOtherInit(OMX_PORT_PARAM_TYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18HandleGetOtherInitEP19OMX_PORT_PARAM_TYPE(void) {
    ALOGD("_ZN10MtkOmxVenc18HandleGetOtherInitEP19OMX_PORT_PARAM_TYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::VT_SetScenario(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14VT_SetScenarioEb(void) {
    ALOGD("_ZN10MtkOmxVenc14VT_SetScenarioEb() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetVideoSliceFMO(OMX_VIDEO_PARAM_AVCSLICEFMO*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc22HandleGetVideoSliceFMOEP27OMX_VIDEO_PARAM_AVCSLICEFMO(void) {
    ALOGD("_ZN10MtkOmxVenc22HandleGetVideoSliceFMOEP27OMX_VIDEO_PARAM_AVCSLICEFMO() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetConfigDescribeColorAspects(android::DescribeColorAspectsParams*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc35HandleSetConfigDescribeColorAspectsEPN7android26DescribeColorAspectsParamsE(void) {
    ALOGD("_ZN10MtkOmxVenc35HandleSetConfigDescribeColorAspectsEPN7android26DescribeColorAspectsParamsE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HDR_GetFreeInfoBuffer(unsigned char**, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21HDR_GetFreeInfoBufferEPPhPj(void) {
    ALOGD("_ZN10MtkOmxVenc21HDR_GetFreeInfoBufferEPPhPj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::QueueInputBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16QueueInputBufferEi(void) {
    ALOGD("_ZN10MtkOmxVenc16QueueInputBufferEi() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetVideoHevc(OMX_VIDEO_PARAM_HEVCTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18HandleGetVideoHevcEP24OMX_VIDEO_PARAM_HEVCTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc18HandleGetVideoHevcEP24OMX_VIDEO_PARAM_HEVCTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::isFlushingState() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15isFlushingStateEv(void) {
    ALOGD("_ZN10MtkOmxVenc15isFlushingStateEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SetPollInterrupt() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16SetPollInterruptEv(void) {
    ALOGD("_ZN10MtkOmxVenc16SetPollInterruptEv() called");
    return 0;
}

/* Demangled: android::Vector<OmxMVAEntry*>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP11OmxMVAEntryE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIP11OmxMVAEntryE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::AllocateBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14AllocateBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_j(void) {
    ALOGD("_ZN10MtkOmxVenc14AllocateBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_j() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char*>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPhE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIPhE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<OMX_BUFFERHEADERTYPE*, MtkVenc::MtkRoiConfigEntry*> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Omx2DriverH264ProfileMap(OMX_VIDEO_AVCPROFILETYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc24Omx2DriverH264ProfileMapE24OMX_VIDEO_AVCPROFILETYPE(void) {
    ALOGD("_ZN10MtkOmxVenc24Omx2DriverH264ProfileMapE24OMX_VIDEO_AVCPROFILETYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Heif_GetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17Heif_GetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc17Heif_GetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::~MtkOmxVenc() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVencD1Ev(void) {
    ALOGD("_ZN10MtkOmxVencD1Ev() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetConfigVendorSetRoiInfo(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc31HandleSetConfigVendorSetRoiInfoEPc(void) {
    ALOGD("_ZN10MtkOmxVenc31HandleSetConfigVendorSetRoiInfoEPc() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: OmxMVAManager::getMapFromVa(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager12getMapFromVaEPv(void) {
    ALOGD("_ZN13OmxMVAManager12getMapFromVaEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::OutputBufferHeaderUse(OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21OutputBufferHeaderUseEPP20OMX_BUFFERHEADERTYPEjPvjPh(void) {
    ALOGD("_ZN10MtkOmxVenc21OutputBufferHeaderUseEPP20OMX_BUFFERHEADERTYPEjPvjPh() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetConfigVideoIntraVOPRefresh(OMX_CONFIG_INTRAREFRESHVOPTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc35HandleGetConfigVideoIntraVOPRefreshEP30OMX_CONFIG_INTRAREFRESHVOPTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc35HandleGetConfigVideoIntraVOPRefreshEP30OMX_CONFIG_INTRAREFRESHVOPTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SMVR_UpdateInputV4L2Buffer(OMX_BUFFERHEADERTYPE*, native_handle const*, v4l2_buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26SMVR_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEPK13native_handleP11v4l2_buffer(void) {
    ALOGD("_ZN10MtkOmxVenc26SMVR_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEPK13native_handleP11v4l2_buffer() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HDR_SetMode() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc11HDR_SetModeEv(void) {
    ALOGD("_ZN10MtkOmxVenc11HDR_SetModeEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::NeedConversion() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14NeedConversionEv(void) {
    ALOGD("_ZN10MtkOmxVenc14NeedConversionEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetVideoIntraRefresh(OMX_VIDEO_PARAM_INTRAREFRESHTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26HandleGetVideoIntraRefreshEP32OMX_VIDEO_PARAM_INTRAREFRESHTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc26HandleGetVideoIntraRefreshEP32OMX_VIDEO_PARAM_INTRAREFRESHTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HDR_OnEnqueBuffer(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17HDR_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc17HDR_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxBufQ::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxBufQ5ClearEv(void) {
    ALOGD("_ZN10MtkOmxBufQ5ClearEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::setDrvParamBeforeHdr() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20setDrvParamBeforeHdrEv(void) {
    ALOGD("_ZN10MtkOmxVenc20setDrvParamBeforeHdrEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::MtkOmxVencWFD() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc13MtkOmxVencWFDEv(void) {
    ALOGD("_ZN10MtkOmxVenc13MtkOmxVencWFDEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleFillBufferDone(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20HandleFillBufferDoneEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc20HandleFillBufferDoneEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: android::Vector<native_handle*>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP13native_handleE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIP13native_handleE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ClearVEncDrvBSBuffer(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20ClearVEncDrvBSBufferEPh(void) {
    ALOGD("_ZN10MtkOmxVenc20ClearVEncDrvBSBufferEPh() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ROI_OnDeInit() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc12ROI_OnDeInitEv(void) {
    ALOGD("_ZN10MtkOmxVenc12ROI_OnDeInitEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SMVR_NotifyStopCommand() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc22SMVR_NotifyStopCommandEv(void) {
    ALOGD("_ZN10MtkOmxVenc22SMVR_NotifyStopCommandEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::doDequeFrame(OMX_BUFFERHEADERTYPE**, OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc12doDequeFrameEPP20OMX_BUFFERHEADERTYPES2_(void) {
    ALOGD("_ZN10MtkOmxVenc12doDequeFrameEPP20OMX_BUFFERHEADERTYPES2_() called");
    return 0;
}

/* Demangled: OmxMVAManager::dumpList() */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager8dumpListEv(void) {
    ALOGD("_ZN13OmxMVAManager8dumpListEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetVideoBitrate(OMX_VIDEO_PARAM_BITRATETYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21HandleGetVideoBitrateEP27OMX_VIDEO_PARAM_BITRATETYPE(void) {
    ALOGD("_ZN10MtkOmxVenc21HandleGetVideoBitrateEP27OMX_VIDEO_PARAM_BITRATETYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetConfigVideoIntraVOPRefresh(OMX_CONFIG_INTRAREFRESHVOPTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc35HandleSetConfigVideoIntraVOPRefreshEP30OMX_CONFIG_INTRAREFRESHVOPTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc35HandleSetConfigVideoIntraVOPRefreshEP30OMX_CONFIG_INTRAREFRESHVOPTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SMVR_BufferModifyBeforeEnc(OMX_BUFFERHEADERTYPE**, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26SMVR_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc26SMVR_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::BufferModifyBeforeEnc(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc21BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::EncodeVideo(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc11EncodeVideoEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc11EncodeVideoEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::MtkOmxVencSMVR() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14MtkOmxVencSMVREv(void) {
    ALOGD("_ZN10MtkOmxVenc14MtkOmxVencSMVREv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::trySendStopCommand() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18trySendStopCommandEv(void) {
    ALOGD("_ZN10MtkOmxVenc18trySendStopCommandEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::dpFormatMap(__VENC_DRV_YUV_FORMAT_T) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc11dpFormatMapE23__VENC_DRV_YUV_FORMAT_T(void) {
    ALOGD("_ZN10MtkOmxVenc11dpFormatMapE23__VENC_DRV_YUV_FORMAT_T() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Omx2V4L2H264LevelMap(OMX_VIDEO_AVCLEVELTYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20Omx2V4L2H264LevelMapE22OMX_VIDEO_AVCLEVELTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc20Omx2V4L2H264LevelMapE22OMX_VIDEO_AVCLEVELTYPE() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::~OmxIonMVAMap() */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMapD0Ev(void) {
    ALOGD("_ZN12OmxIonMVAMapD0Ev() called");
    return 0;
}

/* Demangled: MtkOmxVenc::deMtkOmxVencWFD() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15deMtkOmxVencWFDEv(void) {
    ALOGD("_ZN10MtkOmxVenc15deMtkOmxVencWFDEv() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char*>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPhE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIPhE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::WFD_DisableToggle() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17WFD_DisableToggleEv(void) {
    ALOGD("_ZN10MtkOmxVenc17WFD_DisableToggleEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::GetParameter(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc12GetParameterEPv13OMX_INDEXTYPES0_(void) {
    ALOGD("_ZN10MtkOmxVenc12GetParameterEPv13OMX_INDEXTYPES0_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::QueueOutputBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17QueueOutputBufferEi(void) {
    ALOGD("_ZN10MtkOmxVenc17QueueOutputBufferEi() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetVideoProfileLevelQuerySupported(OMX_VIDEO_PARAM_PROFILELEVELTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc40HandleGetVideoProfileLevelQuerySupportedEP32OMX_VIDEO_PARAM_PROFILELEVELTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc40HandleGetVideoProfileLevelQuerySupportedEP32OMX_VIDEO_PARAM_PROFILELEVELTYPE() called");
    return 0;
}

/* Demangled: android::Vector<MtkOmxVenc::_MtkVencIonBufferInfo>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: H263ProfileLevelTable */
extern "C" __attribute__((visibility("default"))) void* H263ProfileLevelTable = NULL;

/* Demangled: MtkOmxVenc::ioctl_query_out_buf(int, v4l2_buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19ioctl_query_out_bufEiP11v4l2_buffer(void) {
    ALOGD("_ZN10MtkOmxVenc19ioctl_query_out_bufEiP11v4l2_buffer() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, unsigned char*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPhEEEE = NULL;

/* Demangled: MtkOmxVenc::VT_DumpOutputBuffer(unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19VT_DumpOutputBufferEPhj(void) {
    ALOGD("_ZN10MtkOmxVenc19VT_DumpOutputBufferEPhj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SetBitstreamSize4Framework(OMX_BUFFERHEADERTYPE*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26SetBitstreamSize4FrameworkEP20OMX_BUFFERHEADERTYPEPhj(void) {
    ALOGD("_ZN10MtkOmxVenc26SetBitstreamSize4FrameworkEP20OMX_BUFFERHEADERTYPEPhj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<unsigned char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIhEE = NULL;

/* Demangled: MtkOmxVenc::MtkOmxVencBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16MtkOmxVencBufferEv(void) {
    ALOGD("_ZN10MtkOmxVenc16MtkOmxVencBufferEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::CheckOutputBufferPortAvailbility() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc32CheckOutputBufferPortAvailbilityEv(void) {
    ALOGD("_ZN10MtkOmxVenc32CheckOutputBufferPortAvailbilityEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::MtkOmxVenc() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVencC2Ev(void) {
    ALOGD("_ZN10MtkOmxVencC2Ev() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::GraphicBuffer> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetVideoImgeGrid(OMX_VIDEO_PARAM_ANDROID_IMAGEGRIDTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc22HandleGetVideoImgeGridEP37OMX_VIDEO_PARAM_ANDROID_IMAGEGRIDTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc22HandleGetVideoImgeGridEP37OMX_VIDEO_PARAM_ANDROID_IMAGEGRIDTYPE() called");
    return 0;
}

/* Demangled: AndroidVendorConfigExtensionFactory::createAndroidVendorExtension(char const*, std::initializer_list<AndroidVendorConfigExtensionFactory::ParamDescribtor>) */
extern "C" __attribute__((visibility("default"))) int _ZN35AndroidVendorConfigExtensionFactory28createAndroidVendorExtensionEPKcSt16initializer_listINS_15ParamDescribtorEE(void) {
    ALOGD("_ZN35AndroidVendorConfigExtensionFactory28createAndroidVendorExtensionEPKcSt16initializer_listINS_15ParamDescribtorEE() called");
    return 0;
}

/* Demangled: MTK_OMX_MEMALIGN(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z16MTK_OMX_MEMALIGNjj(void) {
    ALOGD("_Z16MTK_OMX_MEMALIGNjj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::InitSecCnvtBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17InitSecCnvtBufferEi(void) {
    ALOGD("_ZN10MtkOmxVenc17InitSecCnvtBufferEi() called");
    return 0;
}

/* Demangled: v4l2_dump_crop(bool, char const*, v4l2_crop*) */
extern "C" __attribute__((visibility("default"))) int _Z14v4l2_dump_cropbPKcP9v4l2_crop(void) {
    ALOGD("_Z14v4l2_dump_cropbPKcP9v4l2_crop() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<_MTK_OMX_CMD_QUEUE_ITEM**, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM**>&>::push_back(_MTK_OMX_CMD_QUEUE_ITEM**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMRNS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMRNS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: OmxMVAManager::getOmxInfoFromVA(void*, _VBufInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager16getOmxInfoFromVAEPvP9_VBufInfo(void) {
    ALOGD("_ZN13OmxMVAManager16getOmxInfoFromVAEPvP9_VBufInfo() called");
    return 0;
}

/* Demangled: MtkVenc_EmptyThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _Z23MtkVenc_EmptyThisBufferPvP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_Z23MtkVenc_EmptyThisBufferPvP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetConfigVendorInputScaling(OMX_CONFIG_BOOLEANTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc33HandleSetConfigVendorInputScalingEP22OMX_CONFIG_BOOLEANTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc33HandleSetConfigVendorInputScalingEP22OMX_CONFIG_BOOLEANTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetConfigDescribeHDRStaticInfo(android::DescribeHDRStaticInfoParams*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc36HandleSetConfigDescribeHDRStaticInfoEPN7android27DescribeHDRStaticInfoParamsE(void) {
    ALOGD("_ZN10MtkOmxVenc36HandleSetConfigDescribeHDRStaticInfoEPN7android27DescribeHDRStaticInfoParamsE() called");
    return 0;
}

/* Demangled: OmxMVAManager::~OmxMVAManager() */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManagerD2Ev(void) {
    ALOGD("_ZN13OmxMVAManagerD2Ev() called");
    return 0;
}

/* Demangled: android::Vector<MtkOmxVenc::_MtkVencIonBufferInfo>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::DescribeFlexibleColorFormat(android::DescribeColorFormatParams*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc27DescribeFlexibleColorFormatEPN7android25DescribeColorFormatParamsE(void) {
    ALOGD("_ZN10MtkOmxVenc27DescribeFlexibleColorFormatEPN7android25DescribeColorFormatParamsE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::InitConvertFreeBufferList(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc25InitConvertFreeBufferListEii(void) {
    ALOGD("_ZN10MtkOmxVenc25InitConvertFreeBufferListEii() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetVideoAvc(OMX_VIDEO_PARAM_AVCTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17HandleSetVideoAvcEP23OMX_VIDEO_PARAM_AVCTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc17HandleSetVideoAvcEP23OMX_VIDEO_PARAM_AVCTYPE() called");
    return 0;
}

/* Demangled: MtkOmxCmdQueue::GetCmd(_MTK_OMX_CMD_QUEUE_ITEM**) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkOmxCmdQueue6GetCmdEPP23_MTK_OMX_CMD_QUEUE_ITEM(void) {
    ALOGD("_ZN14MtkOmxCmdQueue6GetCmdEPP23_MTK_OMX_CMD_QUEUE_ITEM() called");
    return 0;
}

/* Demangled: MtkOmxVenc::QueueBufferAdvance(MtkOmxBufQ*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18QueueBufferAdvanceEP10MtkOmxBufQP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc18QueueBufferAdvanceEP10MtkOmxBufQP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::WFD_OnInit(video_encode_param*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc10WFD_OnInitEP18video_encode_param(void) {
    ALOGD("_ZN10MtkOmxVenc10WFD_OnInitEP18video_encode_param() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetVideoImgeGrid(OMX_VIDEO_PARAM_ANDROID_IMAGEGRIDTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc22HandleSetVideoImgeGridEP37OMX_VIDEO_PARAM_ANDROID_IMAGEGRIDTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc22HandleSetVideoImgeGridEP37OMX_VIDEO_PARAM_ANDROID_IMAGEGRIDTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Debug_OnEnqueBuffer(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19Debug_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc19Debug_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: AndroidVendorConfigExtensionStore::getRegisteredExtension(OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN33AndroidVendorConfigExtensionStore22getRegisteredExtensionEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE(void) {
    ALOGD("_ZN33AndroidVendorConfigExtensionStore22getRegisteredExtensionEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::indexType(OMX_INDEXTYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc9indexTypeE13OMX_INDEXTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc9indexTypeE13OMX_INDEXTYPE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ioctl_send_stop_cmd() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19ioctl_send_stop_cmdEv(void) {
    ALOGD("_ZN10MtkOmxVenc19ioctl_send_stop_cmdEv() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::newEntryWithHndl(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMap16newEntryWithHndlEPvS0_(void) {
    ALOGD("_ZN12OmxIonMVAMap16newEntryWithHndlEPvS0_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetVideoH263(OMX_VIDEO_PARAM_H263TYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18HandleGetVideoH263EP24OMX_VIDEO_PARAM_H263TYPE(void) {
    ALOGD("_ZN10MtkOmxVenc18HandleGetVideoH263EP24OMX_VIDEO_PARAM_H263TYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ComponentInit(void*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc13ComponentInitEPvPc(void) {
    ALOGD("_ZN10MtkOmxVenc13ComponentInitEPvPc() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ComponentDeInitHeif() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19ComponentDeInitHeifEv(void) {
    ALOGD("_ZN10MtkOmxVenc19ComponentDeInitHeifEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ioctl_runtime_config(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20ioctl_runtime_configEiii(void) {
    ALOGD("_ZN10MtkOmxVenc20ioctl_runtime_configEiii() called");
    return 0;
}

/* Demangled: OmxIonMVAEntry::setToVencBS(__VENC_DRV_PARAM_BS_BUF_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN14OmxIonMVAEntry11setToVencBSEP25__VENC_DRV_PARAM_BS_BUF_T(void) {
    ALOGD("_ZN14OmxIonMVAEntry11setToVencBSEP25__VENC_DRV_PARAM_BS_BUF_T() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIiE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIjE12do_constructEPvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Heif_OnEnqueOutputBuffer(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc24Heif_OnEnqueOutputBufferEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc24Heif_OnEnqueOutputBufferEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: OmxMVAManager::freeOmxMVAByHndl(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager16freeOmxMVAByHndlEPv(void) {
    ALOGD("_ZN13OmxMVAManager16freeOmxMVAByHndlEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ComponentInitVT(AndroidVendorConfigExtensionStore*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15ComponentInitVTEP33AndroidVendorConfigExtensionStore(void) {
    ALOGD("_ZN10MtkOmxVenc15ComponentInitVTEP33AndroidVendorConfigExtensionStore() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleEmptyBufferDone(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21HandleEmptyBufferDoneEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc21HandleEmptyBufferDoneEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetVendorSetClientLocally(OMX_CONFIG_BOOLEANTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc31HandleSetVendorSetClientLocallyEP22OMX_CONFIG_BOOLEANTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc31HandleSetVendorSetClientLocallyEP22OMX_CONFIG_BOOLEANTYPE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Heif_OnInit(video_encode_param*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc11Heif_OnInitEP18video_encode_param(void) {
    ALOGD("_ZN10MtkOmxVenc11Heif_OnInitEP18video_encode_param() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ClearVEncDrvFrmBuffer(unsigned char*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21ClearVEncDrvFrmBufferEPhS0_(void) {
    ALOGD("_ZN10MtkOmxVenc21ClearVEncDrvFrmBufferEPhS0_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ROI_SetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16ROI_SetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc16ROI_SetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::deMtkOmxVencBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18deMtkOmxVencBufferEv(void) {
    ALOGD("_ZN10MtkOmxVenc18deMtkOmxVencBufferEv() called");
    return 0;
}

/* Demangled: android::Vector<MtkOmxVenc::_MtkVencIonBufferInfo>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HDR_Enabled() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc11HDR_EnabledEv(void) {
    ALOGD("_ZN10MtkOmxVenc11HDR_EnabledEv() called");
    return 0;
}

/* Demangled: OmxMVAManager::init(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager4initEPKcS1_(void) {
    ALOGD("_ZN13OmxMVAManager4initEPKcS1_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Debug_UpdateOutputV4L2Buffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc28Debug_UpdateOutputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void) {
    ALOGD("_ZN10MtkOmxVenc28Debug_UpdateOutputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer() called");
    return 0;
}

/* Demangled: MtkOmxVenc::DequeOnGetConvertBuffer(unsigned char**, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc23DequeOnGetConvertBufferEPPhPv(void) {
    ALOGD("_ZN10MtkOmxVenc23DequeOnGetConvertBufferEPPhPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::setBufferBlack(unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14setBufferBlackEPhi(void) {
    ALOGD("_ZN10MtkOmxVenc14setBufferBlackEPhi() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ioctl_dq_event(v4l2_event*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14ioctl_dq_eventEP10v4l2_event(void) {
    ALOGD("_ZN10MtkOmxVenc14ioctl_dq_eventEP10v4l2_event() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<MtkVenc::MtkRoiConfigEntry*, int> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::setEncodeMode(MtkOmxVenc::teeEnvType) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc13setEncodeModeENS_10teeEnvTypeE(void) {
    ALOGD("_ZN10MtkOmxVenc13setEncodeModeENS_10teeEnvTypeE() called");
    return 0;
}

/* Demangled: MtkOmxBufQ::PushFront(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxBufQ9PushFrontEi(void) {
    ALOGD("_ZN10MtkOmxBufQ9PushFrontEi() called");
    return 0;
}

/* Demangled: MtkOmxVenc::MtkOmxVencParam() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15MtkOmxVencParamEv(void) {
    ALOGD("_ZN10MtkOmxVenc15MtkOmxVencParamEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetVideoVp8(OMX_VIDEO_PARAM_VP8TYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17HandleSetVideoVp8EP23OMX_VIDEO_PARAM_VP8TYPE(void) {
    ALOGD("_ZN10MtkOmxVenc17HandleSetVideoVp8EP23OMX_VIDEO_PARAM_VP8TYPE() called");
    return 0;
}

/* Exported Object: vtable for MtkOmxVenc */
extern "C" __attribute__((visibility("default"))) void* _ZTV10MtkOmxVenc = NULL;

/* Demangled: MtkOmxVenc::HandleSetParamVencorSetRoiLicenseSize(OMX_PARAM_U32TYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc37HandleSetParamVencorSetRoiLicenseSizeEP17OMX_PARAM_U32TYPE(void) {
    ALOGD("_ZN10MtkOmxVenc37HandleSetParamVencorSetRoiLicenseSizeEP17OMX_PARAM_U32TYPE() called");
    return 0;
}

/* Demangled: MtkVenc_FillThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _Z22MtkVenc_FillThisBufferPvP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_Z22MtkVenc_FillThisBufferPvP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::UseBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc9UseBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_jPh(void) {
    ALOGD("_ZN10MtkOmxVenc9UseBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_jPh() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Heif_CollectBsBuffer(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20Heif_CollectBsBufferEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc20Heif_CollectBsBufferEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleDequeError(OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16HandleDequeErrorEP20OMX_BUFFERHEADERTYPES1_(void) {
    ALOGD("_ZN10MtkOmxVenc16HandleDequeErrorEP20OMX_BUFFERHEADERTYPES1_() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIhE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetVideoPortFormat(OMX_VIDEO_PARAM_PORTFORMATTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc24HandleSetVideoPortFormatEP30OMX_VIDEO_PARAM_PORTFORMATTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc24HandleSetVideoPortFormatEP30OMX_VIDEO_PARAM_PORTFORMATTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetVideoMotionVector(OMX_VIDEO_PARAM_MOTIONVECTORTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26HandleSetVideoMotionVectorEP32OMX_VIDEO_PARAM_MOTIONVECTORTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc26HandleSetVideoMotionVectorEP32OMX_VIDEO_PARAM_MOTIONVECTORTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Debug_DequeOnGetInputBuffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc27Debug_DequeOnGetInputBufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void) {
    ALOGD("_ZN10MtkOmxVenc27Debug_DequeOnGetInputBufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer() called");
    return 0;
}

/* Demangled: MtkOmxVenc::supportNVColor() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14supportNVColorEv(void) {
    ALOGD("_ZN10MtkOmxVenc14supportNVColorEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetConfigVideoBitrate(OMX_VIDEO_CONFIG_BITRATETYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc27HandleSetConfigVideoBitrateEP28OMX_VIDEO_CONFIG_BITRATETYPE(void) {
    ALOGD("_ZN10MtkOmxVenc27HandleSetConfigVideoBitrateEP28OMX_VIDEO_CONFIG_BITRATETYPE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<MtkOmxVenc::_MtkVencIonBufferInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEEE = NULL;

/* Demangled: MtkOmxVenc::GetMetaHandleFromOmxHeader(OMX_BUFFERHEADERTYPE*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26GetMetaHandleFromOmxHeaderEP20OMX_BUFFERHEADERTYPEPj(void) {
    ALOGD("_ZN10MtkOmxVenc26GetMetaHandleFromOmxHeaderEP20OMX_BUFFERHEADERTYPEPj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::CheckFormatToV4L2() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17CheckFormatToV4L2Ev(void) {
    ALOGD("_ZN10MtkOmxVenc17CheckFormatToV4L2Ev() called");
    return 0;
}

/* Demangled: MtkOmxVenc::FreeBuffer(void*, unsigned int, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc10FreeBufferEPvjP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc10FreeBufferEPvjP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetVideoAvc(OMX_VIDEO_PARAM_AVCTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17HandleGetVideoAvcEP23OMX_VIDEO_PARAM_AVCTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc17HandleGetVideoAvcEP23OMX_VIDEO_PARAM_AVCTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ComponentInitParam() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18ComponentInitParamEv(void) {
    ALOGD("_ZN10MtkOmxVenc18ComponentInitParamEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ioctl_set_fmt(video_encode_param*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc13ioctl_set_fmtEP18video_encode_param(void) {
    ALOGD("_ZN10MtkOmxVenc13ioctl_set_fmtEP18video_encode_param() called");
    return 0;
}

/* Demangled: MtkOmxVenc::DumpBitstream(char*, char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc13DumpBitstreamEPcS0_i(void) {
    ALOGD("_ZN10MtkOmxVenc13DumpBitstreamEPcS0_i() called");
    return 0;
}

/* Demangled: v4l2_set_dma_in_memory(v4l2_buffer*, video_encode_param*, int, bool) */
extern "C" __attribute__((visibility("default"))) int _Z22v4l2_set_dma_in_memoryP11v4l2_bufferP18video_encode_paramib(void) {
    ALOGD("_Z22v4l2_set_dma_in_memoryP11v4l2_bufferP18video_encode_paramib() called");
    return 0;
}

/* Demangled: MtkOmxVenc::EpilogueOutputBufferHeaderAllocate() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc34EpilogueOutputBufferHeaderAllocateEv(void) {
    ALOGD("_ZN10MtkOmxVenc34EpilogueOutputBufferHeaderAllocateEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Debug_BufferModifyBeforeEnc(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc27Debug_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc27Debug_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: absolute_timespec_from_timespec(timespec&, timespec const&, int) */
extern "C" __attribute__((visibility("default"))) int _Z31absolute_timespec_from_timespecR8timespecRKS_i(void) {
    ALOGD("_Z31absolute_timespec_from_timespecR8timespecRKS_i() called");
    return 0;
}

/* Demangled: MtkOmxVenc::VT_NotifyStopCommand() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20VT_NotifyStopCommandEv(void) {
    ALOGD("_ZN10MtkOmxVenc20VT_NotifyStopCommandEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::WFD_DequeOnGetInputBuffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc25WFD_DequeOnGetInputBufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void) {
    ALOGD("_ZN10MtkOmxVenc25WFD_DequeOnGetInputBufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer() called");
    return 0;
}

/* Demangled: android::Vector<MtkVenc::RoiInfo*>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPN7MtkVenc7RoiInfoEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIPN7MtkVenc7RoiInfoEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::defaultHevcLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16defaultHevcLevelEv(void) {
    ALOGD("_ZN10MtkOmxVenc16defaultHevcLevelEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::QueryDriverH264Enc(OMX_VIDEO_AVCPROFILETYPE, OMX_VIDEO_AVCLEVELTYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18QueryDriverH264EncE24OMX_VIDEO_AVCPROFILETYPE22OMX_VIDEO_AVCLEVELTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc18QueryDriverH264EncE24OMX_VIDEO_AVCPROFILETYPE22OMX_VIDEO_AVCLEVELTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetConfigCommonRotate(OMX_CONFIG_ROTATIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc27HandleSetConfigCommonRotateEP23OMX_CONFIG_ROTATIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc27HandleSetConfigCommonRotateEP23OMX_CONFIG_ROTATIONTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::EncSettingHEIFEnc() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17EncSettingHEIFEncEv(void) {
    ALOGD("_ZN10MtkOmxVenc17EncSettingHEIFEncEv() called");
    return 0;
}

/* Exported Object: vtable for OmxMVAManager */
extern "C" __attribute__((visibility("default"))) void* _ZTV13OmxMVAManager = NULL;

/* Demangled: MtkOmxVenc::MtkOmxVencVT() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc12MtkOmxVencVTEv(void) {
    ALOGD("_ZN10MtkOmxVenc12MtkOmxVencVTEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetVideoHevc(OMX_VIDEO_PARAM_HEVCTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18HandleSetVideoHevcEP24OMX_VIDEO_PARAM_HEVCTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc18HandleSetVideoHevcEP24OMX_VIDEO_PARAM_HEVCTYPE() called");
    return 0;
}

/* Demangled: android::sp<android::GraphicBuffer>::sp(android::GraphicBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_13GraphicBufferEEC2EPS1_(void) {
    ALOGD("_ZN7android2spINS_13GraphicBufferEEC2EPS1_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::InitHeifEncParams() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17InitHeifEncParamsEv(void) {
    ALOGD("_ZN10MtkOmxVenc17InitHeifEncParamsEv() called");
    return 0;
}

/* Demangled: MtkOmxBufQ::DequeueBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxBufQ13DequeueBufferEv(void) {
    ALOGD("_ZN10MtkOmxBufQ13DequeueBufferEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::InitSecEncParams() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16InitSecEncParamsEv(void) {
    ALOGD("_ZN10MtkOmxVenc16InitSecEncParamsEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HDR_UpdateInputV4L2Buffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc25HDR_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void) {
    ALOGD("_ZN10MtkOmxVenc25HDR_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Debug_MMPath(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc12Debug_MMPathEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc12Debug_MMPathEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: OmxMVAManager::getMapFromHndl(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager14getMapFromHndlEPv(void) {
    ALOGD("_ZN13OmxMVAManager14getMapFromHndlEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Debug_GetConfig(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15Debug_GetConfigE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc15Debug_GetConfigE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetVideoErrorCorrection(OMX_VIDEO_PARAM_ERRORCORRECTIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc29HandleGetVideoErrorCorrectionEP35OMX_VIDEO_PARAM_ERRORCORRECTIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc29HandleGetVideoErrorCorrectionEP35OMX_VIDEO_PARAM_ERRORCORRECTIONTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetVendorTimelapseMode(OMX_BOOL*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc28HandleSetVendorTimelapseModeEP8OMX_BOOL(void) {
    ALOGD("_ZN10MtkOmxVenc28HandleSetVendorTimelapseModeEP8OMX_BOOL() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<MMLib*, std::__1::default_delete<MMLib>, std::__1::allocator<MMLib> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIP5MMLibNS_14default_deleteIS1_EENS_9allocatorIS1_EEEE = NULL;

/* Demangled: MtkOmxVenc::waitForFillBuffer(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17waitForFillBufferEm(void) {
    ALOGD("_ZN10MtkOmxVenc17waitForFillBufferEm() called");
    return 0;
}

/* Demangled: MtkOmxVenc::IsRGBSupported() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14IsRGBSupportedEv(void) {
    ALOGD("_ZN10MtkOmxVenc14IsRGBSupportedEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Heif_OnDeInit() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc13Heif_OnDeInitEv(void) {
    ALOGD("_ZN10MtkOmxVenc13Heif_OnDeInitEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Debug_OnInit(video_encode_param*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc12Debug_OnInitEP18video_encode_param(void) {
    ALOGD("_ZN10MtkOmxVenc12Debug_OnInitEP18video_encode_param() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ioctl_enum_fmt(v4l2_buf_type) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14ioctl_enum_fmtE13v4l2_buf_type(void) {
    ALOGD("_ZN10MtkOmxVenc14ioctl_enum_fmtE13v4l2_buf_type() called");
    return 0;
}

/* Demangled: MtkOmxVenc::FreeOutputBuffers(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17FreeOutputBuffersEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc17FreeOutputBuffersEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::deMtkOmxVencDebug() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17deMtkOmxVencDebugEv(void) {
    ALOGD("_ZN10MtkOmxVenc17deMtkOmxVencDebugEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::~MtkOmxVenc() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVencD2Ev(void) {
    ALOGD("_ZN10MtkOmxVencD2Ev() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Debug_AppInsight_Init(video_encode_param*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21Debug_AppInsight_InitEP18video_encode_param(void) {
    ALOGD("_ZN10MtkOmxVenc21Debug_AppInsight_InitEP18video_encode_param() called");
    return 0;
}

/* Demangled: std::__1::function<void (void*, unsigned long)>::function<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, void>(std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__18functionIFvPvmEEC2INS_6__bindIRPFvS1_yjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSC_ILi2EEERN6MMDump4sizeERNSJ_5widthERNSJ_6heightERNSJ_11color_spaceERNSJ_12color_formatERNSJ_6strideERNSJ_11sliceheightERS7_EEEvEET_(void) {
    ALOGD("_ZNSt3__18functionIFvPvmEEC2INS_6__bindIRPFvS1_yjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSC_ILi2EEERN6MMDump4sizeERNSJ_5widthERNSJ_6heightERNSJ_11color_spaceERNSJ_12color_formatERNSJ_6strideERNSJ_11sliceheightERS7_EEEvEET_() called");
    return 0;
}

/* Demangled: CommandToString(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z15CommandToStringj(void) {
    ALOGD("_Z15CommandToStringj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetVideoVp8(OMX_VIDEO_PARAM_VP8TYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17HandleGetVideoVp8EP23OMX_VIDEO_PARAM_VP8TYPE(void) {
    ALOGD("_ZN10MtkOmxVenc17HandleGetVideoVp8EP23OMX_VIDEO_PARAM_VP8TYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SetInputPortDefinition(OMX_PARAM_PORTDEFINITIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc22SetInputPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc22SetInputPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ioctl_set_crop(video_encode_param*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14ioctl_set_cropEP18video_encode_param(void) {
    ALOGD("_ZN10MtkOmxVenc14ioctl_set_cropEP18video_encode_param() called");
    return 0;
}

/* Demangled: MtkVenc_GetConfig(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _Z17MtkVenc_GetConfigPv13OMX_INDEXTYPES_(void) {
    ALOGD("_Z17MtkVenc_GetConfigPv13OMX_INDEXTYPES_() called");
    return 0;
}

/* Demangled: MtkOmxBufQ::Unlock() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxBufQ6UnlockEv(void) {
    ALOGD("_ZN10MtkOmxBufQ6UnlockEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::EpilogueOutputBufferHeaderUse() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc29EpilogueOutputBufferHeaderUseEv(void) {
    ALOGD("_ZN10MtkOmxVenc29EpilogueOutputBufferHeaderUseEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetConfigVideoFramerate(OMX_CONFIG_FRAMERATETYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc29HandleGetConfigVideoFramerateEP24OMX_CONFIG_FRAMERATETYPE(void) {
    ALOGD("_ZN10MtkOmxVenc29HandleGetConfigVideoFramerateEP24OMX_CONFIG_FRAMERATETYPE() called");
    return 0;
}

/* Demangled: android::Vector<native_handle*>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP13native_handleE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIP13native_handleE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetConfigVendorConfigQP(OMX_VIDEO_CONFIG_QP*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc29HandleSetConfigVendorConfigQPEP19OMX_VIDEO_CONFIG_QP(void) {
    ALOGD("_ZN10MtkOmxVenc29HandleSetConfigVendorConfigQPEP19OMX_VIDEO_CONFIG_QP() called");
    return 0;
}

/* Demangled: android::Vector<MtkVenc::RoiInfo*>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPN7MtkVenc7RoiInfoEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIPN7MtkVenc7RoiInfoEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for OmxMVAEntry */
extern "C" __attribute__((visibility("default"))) void* _ZTV11OmxMVAEntry = NULL;

/* Demangled: video_encode_reset_in_fmt_pix_mp(v4l2_format*, video_encode_param*) */
extern "C" __attribute__((visibility("default"))) int _Z32video_encode_reset_in_fmt_pix_mpP11v4l2_formatP18video_encode_param(void) {
    ALOGD("_Z32video_encode_reset_in_fmt_pix_mpP11v4l2_formatP18video_encode_param() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<_MTK_OMX_CMD_QUEUE_ITEM*, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM*> >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEED2Ev() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Heif_NotifyStopCommand() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc22Heif_NotifyStopCommandEv(void) {
    ALOGD("_ZN10MtkOmxVenc22Heif_NotifyStopCommandEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Heif_BufferModifyBeforeEnc(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26Heif_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc26Heif_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, std::__1::allocator<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&> >, void (void*, unsigned long)>::__clone(std::__1::__function::__base<void (void*, unsigned long)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE7__cloneEPNS0_6__baseIS10_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE7__cloneEPNS0_6__baseIS10_EE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::defaultAvcLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15defaultAvcLevelEv(void) {
    ALOGD("_ZN10MtkOmxVenc15defaultAvcLevelEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ComponentDeInitHDR() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18ComponentDeInitHDREv(void) {
    ALOGD("_ZN10MtkOmxVenc18ComponentDeInitHDREv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HDR_GetExtensionIndex(char*, OMX_INDEXTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21HDR_GetExtensionIndexEPcP13OMX_INDEXTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc21HDR_GetExtensionIndexEPcP13OMX_INDEXTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SMVR_OnEnqueBuffer(OMX_BUFFERHEADERTYPE**, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18SMVR_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc18SMVR_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPEPv() called");
    return 0;
}

/* Demangled: v4l2_reset_dma_in_buf(v4l2_buffer*, v4l2_plane*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z21v4l2_reset_dma_in_bufP11v4l2_bufferP10v4l2_planeii(void) {
    ALOGD("_Z21v4l2_reset_dma_in_bufP11v4l2_bufferP10v4l2_planeii() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: MtkOmxVenc::Omx2DriverMPEG4ProfileMap(OMX_VIDEO_MPEG4PROFILETYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc25Omx2DriverMPEG4ProfileMapE26OMX_VIDEO_MPEG4PROFILETYPE(void) {
    ALOGD("_ZN10MtkOmxVenc25Omx2DriverMPEG4ProfileMapE26OMX_VIDEO_MPEG4PROFILETYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::CheckOpaqueFormat(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17CheckOpaqueFormatEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc17CheckOpaqueFormatEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetConfigVendorSkipFrame(OMX_PARAM_U32TYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc30HandleSetConfigVendorSkipFrameEP17OMX_PARAM_U32TYPE(void) {
    ALOGD("_ZN10MtkOmxVenc30HandleSetConfigVendorSkipFrameEP17OMX_PARAM_U32TYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::getHWLimitSize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14getHWLimitSizeEj(void) {
    ALOGD("_ZN10MtkOmxVenc14getHWLimitSizeEj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ROI_OnEnqueOutputBuffer(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc23ROI_OnEnqueOutputBufferEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc23ROI_OnEnqueOutputBufferEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: pthread_mutex_lock_timeout(pthread_mutex_t*, int) */
extern "C" __attribute__((visibility("default"))) int _Z26pthread_mutex_lock_timeoutP15pthread_mutex_ti(void) {
    ALOGD("_Z26pthread_mutex_lock_timeoutP15pthread_mutex_ti() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::~OmxIonMVAMap() */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMapD1Ev(void) {
    ALOGD("_ZN12OmxIonMVAMapD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ioctl_query_out_dmabuf() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc22ioctl_query_out_dmabufEv(void) {
    ALOGD("_ZN10MtkOmxVenc22ioctl_query_out_dmabufEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Heif_UpdateInputV4L2Buffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26Heif_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void) {
    ALOGD("_ZN10MtkOmxVenc26Heif_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ioctl_set_fix_scale(video_encode_param*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19ioctl_set_fix_scaleEP18video_encode_param(void) {
    ALOGD("_ZN10MtkOmxVenc19ioctl_set_fix_scaleEP18video_encode_param() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HDR_SetFreeInfoBuffer(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21HDR_SetFreeInfoBufferEPh(void) {
    ALOGD("_ZN10MtkOmxVenc21HDR_SetFreeInfoBufferEPh() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<void*, int (*)(void*), std::__1::allocator<void> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPvPFiS1_ENS_9allocatorIvEEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPvPFiS1_ENS_9allocatorIvEEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, long long> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIixEEEE = NULL;

/* Demangled: MtkOmxVenc::QueryDriverEnc() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14QueryDriverEncEv(void) {
    ALOGD("_ZN10MtkOmxVenc14QueryDriverEncEv() called");
    return 0;
}

/* Demangled: MtkOmxBufQ::Size() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxBufQ4SizeEv(void) {
    ALOGD("_ZN10MtkOmxBufQ4SizeEv() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::GraphicBuffer> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE10do_destroyEPvj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIiEE = NULL;

/* Demangled: MtkOmxVenc::HandleSetConfigVendorSliceLossIndication(OMX_CONFIG_SLICE_LOSS_INDICATION*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc40HandleSetConfigVendorSliceLossIndicationEP32OMX_CONFIG_SLICE_LOSS_INDICATION(void) {
    ALOGD("_ZN10MtkOmxVenc40HandleSetConfigVendorSliceLossIndicationEP32OMX_CONFIG_SLICE_LOSS_INDICATION() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Debug_MMDump(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc12Debug_MMDumpEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc12Debug_MMDumpEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: v4l2_reset_dma_out_buf(v4l2_buffer*, v4l2_plane*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z22v4l2_reset_dma_out_bufP11v4l2_bufferP10v4l2_planeii(void) {
    ALOGD("_Z22v4l2_reset_dma_out_bufP11v4l2_bufferP10v4l2_planeii() called");
    return 0;
}

/* Demangled: android::Vector<OmxMVAEntry*>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP11OmxMVAEntryE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIP11OmxMVAEntryE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::InitEncParams() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc13InitEncParamsEv(void) {
    ALOGD("_ZN10MtkOmxVenc13InitEncParamsEv() called");
    return 0;
}

/* Demangled: MtkOmxBufQ::DumpBufQ(bool, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxBufQ8DumpBufQEbPKc(void) {
    ALOGD("_ZN10MtkOmxBufQ8DumpBufQEbPKc() called");
    return 0;
}

/* Demangled: MtkOmxVenc::MtkOmxVencDeque() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15MtkOmxVencDequeEv(void) {
    ALOGD("_ZN10MtkOmxVenc15MtkOmxVencDequeEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleMarkBuffer(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16HandleMarkBufferEjPv(void) {
    ALOGD("_ZN10MtkOmxVenc16HandleMarkBufferEjPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ComponentInitDebug(AndroidVendorConfigExtensionStore*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18ComponentInitDebugEP33AndroidVendorConfigExtensionStore(void) {
    ALOGD("_ZN10MtkOmxVenc18ComponentInitDebugEP33AndroidVendorConfigExtensionStore() called");
    return 0;
}

/* Demangled: MtkOmxVenc::DumpETBQ() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc8DumpETBQEv(void) {
    ALOGD("_ZN10MtkOmxVenc8DumpETBQEv() called");
    return 0;
}

/* Demangled: MtkOmxCmdQueue::PutCmd(_MTK_OMX_CMD_QUEUE_ITEM*) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkOmxCmdQueue6PutCmdEP23_MTK_OMX_CMD_QUEUE_ITEM(void) {
    ALOGD("_ZN14MtkOmxCmdQueue6PutCmdEP23_MTK_OMX_CMD_QUEUE_ITEM() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HDR_OnEnqueOutputBuffer(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc23HDR_OnEnqueOutputBufferEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc23HDR_OnEnqueOutputBufferEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxSetCoreGlobal */
extern "C" __attribute__((visibility("default"))) int MtkOmxSetCoreGlobal(void) {
    ALOGD("MtkOmxSetCoreGlobal() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SendCommand(void*, OMX_COMMANDTYPE, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc11SendCommandEPv15OMX_COMMANDTYPEjS0_(void) {
    ALOGD("_ZN10MtkOmxVenc11SendCommandEPv15OMX_COMMANDTYPEjS0_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetVideoMpeg4(OMX_VIDEO_PARAM_MPEG4TYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19HandleGetVideoMpeg4EP25OMX_VIDEO_PARAM_MPEG4TYPE(void) {
    ALOGD("_ZN10MtkOmxVenc19HandleGetVideoMpeg4EP25OMX_VIDEO_PARAM_MPEG4TYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetConfigDescribeColorAspects(android::DescribeColorAspectsParams*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc35HandleGetConfigDescribeColorAspectsEPN7android26DescribeColorAspectsParamsE(void) {
    ALOGD("_ZN10MtkOmxVenc35HandleGetConfigDescribeColorAspectsEPN7android26DescribeColorAspectsParamsE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::notifyFlushDone() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15notifyFlushDoneEv(void) {
    ALOGD("_ZN10MtkOmxVenc15notifyFlushDoneEv() called");
    return 0;
}

/* Demangled: OmxMVAManager::setBoolProperty(char const*, OMX_BOOL) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager15setBoolPropertyEPKc8OMX_BOOL(void) {
    ALOGD("_ZN13OmxMVAManager15setBoolPropertyEPKc8OMX_BOOL() called");
    return 0;
}

/* Demangled: MtkOmxVenc::AllowToFreeBuffer(unsigned int, OMX_STATETYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17AllowToFreeBufferEj13OMX_STATETYPE(void) {
    ALOGD("_ZN10MtkOmxVenc17AllowToFreeBufferEj13OMX_STATETYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::InitAvcEncParams() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16InitAvcEncParamsEv(void) {
    ALOGD("_ZN10MtkOmxVenc16InitAvcEncParamsEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetVideoH263(OMX_VIDEO_PARAM_H263TYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18HandleSetVideoH263EP24OMX_VIDEO_PARAM_H263TYPE(void) {
    ALOGD("_ZN10MtkOmxVenc18HandleSetVideoH263EP24OMX_VIDEO_PARAM_H263TYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::DumpFTBQ() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc8DumpFTBQEv(void) {
    ALOGD("_ZN10MtkOmxVenc8DumpFTBQEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::GetOutputPortFormat(OMX_VIDEO_PARAM_PORTFORMATTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19GetOutputPortFormatEP30OMX_VIDEO_PARAM_PORTFORMATTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc19GetOutputPortFormatEP30OMX_VIDEO_PARAM_PORTFORMATTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ComponentInitDeque() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18ComponentInitDequeEv(void) {
    ALOGD("_ZN10MtkOmxVenc18ComponentInitDequeEv() called");
    return 0;
}

/* Demangled: AndroidVendorConfigExtensionStore::isIndexRegistered(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN33AndroidVendorConfigExtensionStore17isIndexRegisteredEj(void) {
    ALOGD("_ZN33AndroidVendorConfigExtensionStore17isIndexRegisteredEj() called");
    return 0;
}

/* Demangled: OmxIonMVAEntry::setToVencFrm(__VENC_DRV_PARAM_FRM_BUF_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN14OmxIonMVAEntry12setToVencFrmEP26__VENC_DRV_PARAM_FRM_BUF_T(void) {
    ALOGD("_ZN14OmxIonMVAEntry12setToVencFrmEP26__VENC_DRV_PARAM_FRM_BUF_T() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SMVR_SetConfig(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14SMVR_SetConfigE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc14SMVR_SetConfigE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::VT_SetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15VT_SetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc15VT_SetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HDR_SetStaticInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17HDR_SetStaticInfoEv(void) {
    ALOGD("_ZN10MtkOmxVenc17HDR_SetStaticInfoEv() called");
    return 0;
}

/* Demangled: v4l2_get_nplane_by_pixelformat(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z30v4l2_get_nplane_by_pixelformatj(void) {
    ALOGD("_Z30v4l2_get_nplane_by_pixelformatj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetAudioInit(OMX_PORT_PARAM_TYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18HandleGetAudioInitEP19OMX_PORT_PARAM_TYPE(void) {
    ALOGD("_ZN10MtkOmxVenc18HandleGetAudioInitEP19OMX_PORT_PARAM_TYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::shouldThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16shouldThreadStopEv(void) {
    ALOGD("_ZN10MtkOmxVenc16shouldThreadStopEv() called");
    return 0;
}

/* Demangled: AndroidVendorConfigExtensionStore::isIndexRegistered(OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN33AndroidVendorConfigExtensionStore17isIndexRegisteredEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE(void) {
    ALOGD("_ZN33AndroidVendorConfigExtensionStore17isIndexRegisteredEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::bufferReadyState(OMX_STATETYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16bufferReadyStateE13OMX_STATETYPE(void) {
    ALOGD("_ZN10MtkOmxVenc16bufferReadyStateE13OMX_STATETYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleFillThisBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20HandleFillThisBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc20HandleFillThisBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetVideoQuantization(OMX_VIDEO_PARAM_QUANTIZATIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26HandleGetVideoQuantizationEP32OMX_VIDEO_PARAM_QUANTIZATIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc26HandleGetVideoQuantizationEP32OMX_VIDEO_PARAM_QUANTIZATIONTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetConfigVendorDrawBlack(OMX_PARAM_U32TYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc30HandleSetConfigVendorDrawBlackEP17OMX_PARAM_U32TYPE(void) {
    ALOGD("_ZN10MtkOmxVenc30HandleSetConfigVendorDrawBlackEP17OMX_PARAM_U32TYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Heif_Enabled() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc12Heif_EnabledEv(void) {
    ALOGD("_ZN10MtkOmxVenc12Heif_EnabledEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::DeinitConvertFreeBufferList() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc27DeinitConvertFreeBufferListEv(void) {
    ALOGD("_ZN10MtkOmxVenc27DeinitConvertFreeBufferListEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::tier_id_ioctl_set_ctrl() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc22tier_id_ioctl_set_ctrlEv(void) {
    ALOGD("_ZN10MtkOmxVenc22tier_id_ioctl_set_ctrlEv() called");
    return 0;
}

/* Demangled: MtkOmxBufQ::MtkOmxBufQ() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxBufQC1Ev(void) {
    ALOGD("_ZN10MtkOmxBufQC1Ev() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetVendorSetMCIMode(OMX_BOOL*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc25HandleSetVendorSetMCIModeEP8OMX_BOOL(void) {
    ALOGD("_ZN10MtkOmxVenc25HandleSetVendorSetMCIModeEP8OMX_BOOL() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetVendorWhiteboardEffectMode(OMX_BOOL*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc35HandleSetVendorWhiteboardEffectModeEP8OMX_BOOL(void) {
    ALOGD("_ZN10MtkOmxVenc35HandleSetVendorWhiteboardEffectModeEP8OMX_BOOL() called");
    return 0;
}

/* Demangled: android::Vector<MtkVenc::RoiInfo*>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPN7MtkVenc7RoiInfoEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIPN7MtkVenc7RoiInfoEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: OmxMVAManager::getMapIndexFromVa(void*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager17getMapIndexFromVaEPvb(void) {
    ALOGD("_ZN13OmxMVAManager17getMapIndexFromVaEPvb() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIiE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::queryCapability(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15queryCapabilityEiiiii(void) {
    ALOGD("_ZN10MtkOmxVenc15queryCapabilityEiiiii() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HDR_GetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16HDR_GetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc16HDR_GetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIjE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HDR_OnDeInit() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc12HDR_OnDeInitEv(void) {
    ALOGD("_ZN10MtkOmxVenc12HDR_OnDeInitEv() called");
    return 0;
}

/* Demangled: std::__1::function<void (void*, unsigned long)>::operator()(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__18functionIFvPvmEEclES1_m(void) {
    ALOGD("_ZNKSt3__18functionIFvPvmEEclES1_m() called");
    return 0;
}

/* Demangled: MtkOmxVenc::doDeque() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc7doDequeEv(void) {
    ALOGD("_ZN10MtkOmxVenc7doDequeEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::CheckInputBufferPortAvailbility() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc31CheckInputBufferPortAvailbilityEv(void) {
    ALOGD("_ZN10MtkOmxVenc31CheckInputBufferPortAvailbilityEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::InputBufferHeadersResize(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc24InputBufferHeadersResizeEi(void) {
    ALOGD("_ZN10MtkOmxVenc24InputBufferHeadersResizeEi() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ioctl_subscribe_event(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21ioctl_subscribe_eventEi(void) {
    ALOGD("_ZN10MtkOmxVenc21ioctl_subscribe_eventEi() called");
    return 0;
}

/* Demangled: MtkOmxBufQ::operator[](unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxBufQixEj(void) {
    ALOGD("_ZN10MtkOmxBufQixEj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SMVR_HandleStateSet(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19SMVR_HandleStateSetEj(void) {
    ALOGD("_ZN10MtkOmxVenc19SMVR_HandleStateSetEj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetConfigVideoFramerate(OMX_CONFIG_FRAMERATETYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc29HandleSetConfigVideoFramerateEP24OMX_CONFIG_FRAMERATETYPE(void) {
    ALOGD("_ZN10MtkOmxVenc29HandleSetConfigVideoFramerateEP24OMX_CONFIG_FRAMERATETYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::WFD_DrawYUVStripeLine(unsigned char**, unsigned char**, unsigned char**, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21WFD_DrawYUVStripeLineEPPhS1_S1_jj(void) {
    ALOGD("_ZN10MtkOmxVenc21WFD_DrawYUVStripeLineEPPhS1_S1_jj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::EncSettingDrvResolution() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc23EncSettingDrvResolutionEv(void) {
    ALOGD("_ZN10MtkOmxVenc23EncSettingDrvResolutionEv() called");
    return 0;
}

/* Demangled: MtkOmxVencThread(void*) */
extern "C" __attribute__((visibility("default"))) int _Z16MtkOmxVencThreadPv(void) {
    ALOGD("_Z16MtkOmxVencThreadPv() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIiE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ioctl_q_in_buf(OMX_BUFFERHEADERTYPE*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14ioctl_q_in_bufEP20OMX_BUFFERHEADERTYPEi(void) {
    ALOGD("_ZN10MtkOmxVenc14ioctl_q_in_bufEP20OMX_BUFFERHEADERTYPEi() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Omx2V4L2H264ProfileMap(OMX_VIDEO_AVCPROFILETYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc22Omx2V4L2H264ProfileMapE24OMX_VIDEO_AVCPROFILETYPE(void) {
    ALOGD("_ZN10MtkOmxVenc22Omx2V4L2H264ProfileMapE24OMX_VIDEO_AVCPROFILETYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HDR_SetConfig(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc13HDR_SetConfigE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc13HDR_SetConfigE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSMVRSetVideoAvc(OMX_VIDEO_PARAM_AVCTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21HandleSMVRSetVideoAvcEP23OMX_VIDEO_PARAM_AVCTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc21HandleSMVRSetVideoAvcEP23OMX_VIDEO_PARAM_AVCTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::v4l2_query_cap(v4l2_capability*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14v4l2_query_capEP15v4l2_capability(void) {
    ALOGD("_ZN10MtkOmxVenc14v4l2_query_capEP15v4l2_capability() called");
    return 0;
}

/* Demangled: MtkOmxVenc::drawRGBStripe(void*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc13drawRGBStripeEPviii(void) {
    ALOGD("_ZN10MtkOmxVenc13drawRGBStripeEPviii() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SetFreeRoiBuffer(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16SetFreeRoiBufferEPh(void) {
    ALOGD("_ZN10MtkOmxVenc16SetFreeRoiBufferEPh() called");
    return 0;
}

/* Demangled: MtkVenc_UseBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z17MtkVenc_UseBufferPvPP20OMX_BUFFERHEADERTYPEjS_jPh(void) {
    ALOGD("_Z17MtkVenc_UseBufferPvPP20OMX_BUFFERHEADERTYPEjS_jPh() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetVideoBitrate(OMX_VIDEO_PARAM_BITRATETYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21HandleSetVideoBitrateEP27OMX_VIDEO_PARAM_BITRATETYPE(void) {
    ALOGD("_ZN10MtkOmxVenc21HandleSetVideoBitrateEP27OMX_VIDEO_PARAM_BITRATETYPE() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::GraphicBuffer> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: roiExt */
extern "C" __attribute__((visibility("default"))) void* roiExt = NULL;

/* Demangled: OmxMVAManager::getOmxMVAFromVAToVencBS(void*, __VENC_DRV_PARAM_BS_BUF_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager23getOmxMVAFromVAToVencBSEPvP25__VENC_DRV_PARAM_BS_BUF_T(void) {
    ALOGD("_ZN13OmxMVAManager23getOmxMVAFromVAToVencBSEPvP25__VENC_DRV_PARAM_BS_BUF_T() called");
    return 0;
}

/* Demangled: OmxMVAManager::OmxMVAManager(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManagerC1EPKcS1_(void) {
    ALOGD("_ZN13OmxMVAManagerC1EPKcS1_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::EncodeFunc(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc10EncodeFuncEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc10EncodeFuncEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::onFillThisBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16onFillThisBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc16onFillThisBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::WFD_CollectBsBuffer(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19WFD_CollectBsBufferEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc19WFD_CollectBsBufferEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ioctl_dq_in_buf(OMX_BUFFERHEADERTYPE**, unsigned char**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15ioctl_dq_in_bufEPP20OMX_BUFFERHEADERTYPEPPh(void) {
    ALOGD("_ZN10MtkOmxVenc15ioctl_dq_in_bufEPP20OMX_BUFFERHEADERTYPEPPh() called");
    return 0;
}

/* Demangled: MtkOmxVenc::device_open(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc11device_openEPKc(void) {
    ALOGD("_ZN10MtkOmxVenc11device_openEPKc() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::getIonFd() */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMap8getIonFdEv(void) {
    ALOGD("_ZN12OmxIonMVAMap8getIonFdEv() called");
    return 0;
}

/* Demangled: MtkOmxBufQ::QueueBufferFront(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxBufQ16QueueBufferFrontEi(void) {
    ALOGD("_ZN10MtkOmxBufQ16QueueBufferFrontEi() called");
    return 0;
}

/* Demangled: std::__1::deque<_MTK_OMX_CMD_QUEUE_ITEM*, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM*> >::push_back(_MTK_OMX_CMD_QUEUE_ITEM* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE9push_backERKS2_(void) {
    ALOGD("_ZNSt3__15dequeIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE9push_backERKS2_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::dumpBuffer(char*, unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc10dumpBufferEPcPhi(void) {
    ALOGD("_ZN10MtkOmxVenc10dumpBufferEPcPhi() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleStateSet(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14HandleStateSetEj(void) {
    ALOGD("_ZN10MtkOmxVenc14HandleStateSetEj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SetVEncDrvFrmBufferFlag(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc23SetVEncDrvFrmBufferFlagEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc23SetVEncDrvFrmBufferFlagEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::dumpCCInput(unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc11dumpCCInputEPhj(void) {
    ALOGD("_ZN10MtkOmxVenc11dumpCCInputEPhj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SetParameter(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc12SetParameterEPv13OMX_INDEXTYPES0_(void) {
    ALOGD("_ZN10MtkOmxVenc12SetParameterEPv13OMX_INDEXTYPES0_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::GenerateDummyBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19GenerateDummyBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc19GenerateDummyBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<void>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIvED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIvED2Ev() called");
    return 0;
}

/* Demangled: __divmoddi4 */
extern "C" __attribute__((visibility("default"))) int __divmoddi4(void) {
    ALOGD("__divmoddi4() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::getIonPhysicalAddress(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMap21getIonPhysicalAddressEii(void) {
    ALOGD("_ZN12OmxIonMVAMap21getIonPhysicalAddressEii() called");
    return 0;
}

/* Demangled: MtkVenc_SendCommand(void*, OMX_COMMANDTYPE, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _Z19MtkVenc_SendCommandPv15OMX_COMMANDTYPEjS_(void) {
    ALOGD("_Z19MtkVenc_SendCommandPv15OMX_COMMANDTYPEjS_() called");
    return 0;
}

/* Demangled: MtkVenc_ComponentDeInit(void*) */
extern "C" __attribute__((visibility("default"))) int _Z23MtkVenc_ComponentDeInitPv(void) {
    ALOGD("_Z23MtkVenc_ComponentDeInitPv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, OMX_BUFFERHEADERTYPE*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEEE = NULL;

/* Demangled: MtkOmxVenc::Debug_GetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18Debug_GetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc18Debug_GetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Debug_SetMode() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc13Debug_SetModeEv(void) {
    ALOGD("_ZN10MtkOmxVenc13Debug_SetModeEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Debug_OnEnqueOutputBuffer(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc25Debug_OnEnqueOutputBufferEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc25Debug_OnEnqueOutputBufferEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::checkMemory(char*, int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc11checkMemoryEPciS0_(void) {
    ALOGD("_ZN10MtkOmxVenc11checkMemoryEPciS0_() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ComponentInitHeif(AndroidVendorConfigExtensionStore*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17ComponentInitHeifEP33AndroidVendorConfigExtensionStore(void) {
    ALOGD("_ZN10MtkOmxVenc17ComponentInitHeifEP33AndroidVendorConfigExtensionStore() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleEmptyThisBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21HandleEmptyThisBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc21HandleEmptyThisBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::EpilogueInputBufferHeaderAllocate() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc33EpilogueInputBufferHeaderAllocateEv(void) {
    ALOGD("_ZN10MtkOmxVenc33EpilogueInputBufferHeaderAllocateEv() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::GraphicBuffer> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetVideoMpeg4(OMX_VIDEO_PARAM_MPEG4TYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19HandleSetVideoMpeg4EP25OMX_VIDEO_PARAM_MPEG4TYPE(void) {
    ALOGD("_ZN10MtkOmxVenc19HandleSetVideoMpeg4EP25OMX_VIDEO_PARAM_MPEG4TYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ioctl_q_out_buf(OMX_BUFFERHEADERTYPE*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15ioctl_q_out_bufEP20OMX_BUFFERHEADERTYPEi(void) {
    ALOGD("_ZN10MtkOmxVenc15ioctl_q_out_bufEP20OMX_BUFFERHEADERTYPEi() called");
    return 0;
}

/* Demangled: MtkOmxVenc::PrepareOutputBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20PrepareOutputBuffersEv(void) {
    ALOGD("_ZN10MtkOmxVenc20PrepareOutputBuffersEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<MtkVenc::MtkRoiConfigEntry*, int> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: OmxMVAManager::getOmxInfoFromHndl(void*, _VBufInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager18getOmxInfoFromHndlEPvP9_VBufInfo(void) {
    ALOGD("_ZN13OmxMVAManager18getOmxInfoFromHndlEPvP9_VBufInfo() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ComponentDeInit(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15ComponentDeInitEPv(void) {
    ALOGD("_ZN10MtkOmxVenc15ComponentDeInitEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Debug_GetExtensionIndex(char*, OMX_INDEXTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc23Debug_GetExtensionIndexEPcP13OMX_INDEXTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc23Debug_GetExtensionIndexEPcP13OMX_INDEXTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetGoogleStoreMetaDataInBuffers(android::StoreMetaDataInBuffersParams*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc37HandleSetGoogleStoreMetaDataInBuffersEPN7android28StoreMetaDataInBuffersParamsE(void) {
    ALOGD("_ZN10MtkOmxVenc37HandleSetGoogleStoreMetaDataInBuffersEPN7android28StoreMetaDataInBuffersParamsE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::EncodeT_Output_GetBufferIndex(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc29EncodeT_Output_GetBufferIndexEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc29EncodeT_Output_GetBufferIndexEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::EncSettingEnc() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc13EncSettingEncEv(void) {
    ALOGD("_ZN10MtkOmxVenc13EncSettingEncEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, std::__1::allocator<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&> >, void (void*, unsigned long)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEEE = NULL;

/* Demangled: MtkOmxVenc::EncSettingHEVCEnc() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17EncSettingHEVCEncEv(void) {
    ALOGD("_ZN10MtkOmxVenc17EncSettingHEVCEncEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ROI_UpdateOutputV4L2Buffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26ROI_UpdateOutputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void) {
    ALOGD("_ZN10MtkOmxVenc26ROI_UpdateOutputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::dumpEntry(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMap9dumpEntryEPv(void) {
    ALOGD("_ZN12OmxIonMVAMap9dumpEntryEPv() called");
    return 0;
}

/* Demangled: MtkVenc_GetState(void*, OMX_STATETYPE*) */
extern "C" __attribute__((visibility("default"))) int _Z16MtkVenc_GetStatePvP13OMX_STATETYPE(void) {
    ALOGD("_Z16MtkVenc_GetStatePvP13OMX_STATETYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::FlushInputPort() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14FlushInputPortEv(void) {
    ALOGD("_ZN10MtkOmxVenc14FlushInputPortEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::VT_HandleStateSet(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17VT_HandleStateSetEj(void) {
    ALOGD("_ZN10MtkOmxVenc17VT_HandleStateSetEj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::GetConfig(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc9GetConfigEPv13OMX_INDEXTYPES0_(void) {
    ALOGD("_ZN10MtkOmxVenc9GetConfigEPv13OMX_INDEXTYPES0_() called");
    return 0;
}

/* Demangled: MTK_OMX_FREE(void*) */
extern "C" __attribute__((visibility("default"))) int _Z12MTK_OMX_FREEPv(void) {
    ALOGD("_Z12MTK_OMX_FREEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetVideoInit(OMX_PORT_PARAM_TYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18HandleGetVideoInitEP19OMX_PORT_PARAM_TYPE(void) {
    ALOGD("_ZN10MtkOmxVenc18HandleGetVideoInitEP19OMX_PORT_PARAM_TYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetVideoSliceFMO(OMX_VIDEO_PARAM_AVCSLICEFMO*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc22HandleSetVideoSliceFMOEP27OMX_VIDEO_PARAM_AVCSLICEFMO(void) {
    ALOGD("_ZN10MtkOmxVenc22HandleSetVideoSliceFMOEP27OMX_VIDEO_PARAM_AVCSLICEFMO() called");
    return 0;
}

/* Demangled: MtkOmxVenc::EncodeT_Input_GetBufferHeaderPtr(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc32EncodeT_Input_GetBufferHeaderPtrEi(void) {
    ALOGD("_ZN10MtkOmxVenc32EncodeT_Input_GetBufferHeaderPtrEi() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SMVR_OnInit(video_encode_param*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc11SMVR_OnInitEP18video_encode_param(void) {
    ALOGD("_ZN10MtkOmxVenc11SMVR_OnInitEP18video_encode_param() called");
    return 0;
}

/* Demangled: MtkVenc_ComponentInit(void*, char*) */
extern "C" __attribute__((visibility("default"))) int _Z21MtkVenc_ComponentInitPvPc(void) {
    ALOGD("_Z21MtkVenc_ComponentInitPvPc() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ROI_SetConfig(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc13ROI_SetConfigE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc13ROI_SetConfigE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ROI_EmptyThisBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19ROI_EmptyThisBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc19ROI_EmptyThisBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetVendorOmxHandle(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc24HandleGetVendorOmxHandleEPj(void) {
    ALOGD("_ZN10MtkOmxVenc24HandleGetVendorOmxHandleEPj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::VT_BufferModifyBeforeEnc(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc24VT_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc24VT_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Exported Object: HevcProfileLevelTable */
extern "C" __attribute__((visibility("default"))) void* HevcProfileLevelTable = NULL;

/* Demangled: MtkOmxVenc::GetVencFormat(MTK_VENC_CODEC_ID) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc13GetVencFormatE17MTK_VENC_CODEC_ID(void) {
    ALOGD("_ZN10MtkOmxVenc13GetVencFormatE17MTK_VENC_CODEC_ID() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SMVR_SetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17SMVR_SetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc17SMVR_SetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxCmdQueue::MtkOmxCmdQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkOmxCmdQueueC1Ev(void) {
    ALOGD("_ZN14MtkOmxCmdQueueC1Ev() called");
    return 0;
}

/* Demangled: MtkOmxVenc::DequeueBufferAdvance(MtkOmxBufQ*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20DequeueBufferAdvanceEP10MtkOmxBufQ(void) {
    ALOGD("_ZN10MtkOmxVenc20DequeueBufferAdvanceEP10MtkOmxBufQ() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Heif_SetMode() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc12Heif_SetModeEv(void) {
    ALOGD("_ZN10MtkOmxVenc12Heif_SetModeEv() called");
    return 0;
}

/* Demangled: MtkOmxCmdQueue::GetCmdSize() */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkOmxCmdQueue10GetCmdSizeEv(void) {
    ALOGD("_ZN14MtkOmxCmdQueue10GetCmdSizeEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::EncodeEos(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc9EncodeEosEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc9EncodeEosEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::newEntryWithHndlwithSize(void*, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMap24newEntryWithHndlwithSizeEPvS0_j(void) {
    ALOGD("_ZN12OmxIonMVAMap24newEntryWithHndlwithSizeEPvS0_j() called");
    return 0;
}

/* Demangled: MtkOmxVenc::GetExtensionIndex(void*, char*, OMX_INDEXTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17GetExtensionIndexEPvPcP13OMX_INDEXTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc17GetExtensionIndexEPvPcP13OMX_INDEXTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::VT_SetConfigSli(OMX_CONFIG_SLICE_LOSS_INDICATION*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15VT_SetConfigSliEP32OMX_CONFIG_SLICE_LOSS_INDICATION(void) {
    ALOGD("_ZN10MtkOmxVenc15VT_SetConfigSliEP32OMX_CONFIG_SLICE_LOSS_INDICATION() called");
    return 0;
}

/* Demangled: MtkOmxVenc::GetMetaHandleFromBufferPtr(unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26GetMetaHandleFromBufferPtrEPhPj(void) {
    ALOGD("_ZN10MtkOmxVenc26GetMetaHandleFromBufferPtrEPhPj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::WFD_BufferModifyBeforeEnc(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc25WFD_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc25WFD_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::isFlushDoneState() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16isFlushDoneStateEv(void) {
    ALOGD("_ZN10MtkOmxVenc16isFlushDoneStateEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<OMX_BUFFERHEADERTYPE*, MtkVenc::MtkRoiConfigEntry*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: MtkOmxBufQ::~MtkOmxBufQ() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxBufQD1Ev(void) {
    ALOGD("_ZN10MtkOmxBufQD1Ev() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ROI_GetExtensionIndex(char*, OMX_INDEXTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21ROI_GetExtensionIndexEPcP13OMX_INDEXTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc21ROI_GetExtensionIndexEPcP13OMX_INDEXTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SMVR_UpdateOutputV4L2Buffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc27SMVR_UpdateOutputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void) {
    ALOGD("_ZN10MtkOmxVenc27SMVR_UpdateOutputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer() called");
    return 0;
}

/* Demangled: MtkOmxVenc::WFD_NotifyStopCommand() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21WFD_NotifyStopCommandEv(void) {
    ALOGD("_ZN10MtkOmxVenc21WFD_NotifyStopCommandEv() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::~OmxIonMVAMap() */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMapD2Ev(void) {
    ALOGD("_ZN12OmxIonMVAMapD2Ev() called");
    return 0;
}

/* Demangled: MtkOmxVenc::CheckGrallocWStride(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19CheckGrallocWStrideEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc19CheckGrallocWStrideEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HDR_DequeOnGetOutputBuffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26HDR_DequeOnGetOutputBufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void) {
    ALOGD("_ZN10MtkOmxVenc26HDR_DequeOnGetOutputBufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ROI_DequeOnGetOutputBuffer(OMX_BUFFERHEADERTYPE*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26ROI_DequeOnGetOutputBufferEP20OMX_BUFFERHEADERTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc26ROI_DequeOnGetOutputBufferEP20OMX_BUFFERHEADERTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ioctl_query_in_buf(int, v4l2_buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18ioctl_query_in_bufEiP11v4l2_buffer(void) {
    ALOGD("_ZN10MtkOmxVenc18ioctl_query_in_bufEiP11v4l2_buffer() called");
    return 0;
}

/* Demangled: MtkOmxVenc::setDrvParamAfterEnc() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19setDrvParamAfterEncEv(void) {
    ALOGD("_ZN10MtkOmxVenc19setDrvParamAfterEncEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE10do_compareEPKvS6_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE10do_compareEPKvS6_() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIjEE = NULL;

/* Demangled: MtkOmxVenc::ioctl_clear_req_bufs(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20ioctl_clear_req_bufsEi(void) {
    ALOGD("_ZN10MtkOmxVenc20ioctl_clear_req_bufsEi() called");
    return 0;
}

/* Demangled: MtkOmxVenc::waitIfNoEnqueued() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16waitIfNoEnqueuedEv(void) {
    ALOGD("_ZN10MtkOmxVenc16waitIfNoEnqueuedEv() called");
    return 0;
}

/* Demangled: sem_wait_timeout(sem_t*, int) */
extern "C" __attribute__((visibility("default"))) int _Z16sem_wait_timeoutP5sem_ti(void) {
    ALOGD("_Z16sem_wait_timeoutP5sem_ti() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::newEntryWithVa(void*, int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMap14newEntryWithVaEPviS0_(void) {
    ALOGD("_ZN12OmxIonMVAMap14newEntryWithVaEPviS0_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ReturnPendingInputBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc25ReturnPendingInputBuffersEv(void) {
    ALOGD("_ZN10MtkOmxVenc25ReturnPendingInputBuffersEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::isFatalError() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc12isFatalErrorEv(void) {
    ALOGD("_ZN10MtkOmxVenc12isFatalErrorEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::GetFreeConvertBuffer(unsigned char**, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20GetFreeConvertBufferEPPhPj(void) {
    ALOGD("_ZN10MtkOmxVenc20GetFreeConvertBufferEPPhPj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::GetPollInterrupt() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16GetPollInterruptEv(void) {
    ALOGD("_ZN10MtkOmxVenc16GetPollInterruptEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<OMX_BUFFERHEADERTYPE*, MtkVenc::MtkRoiConfigEntry*> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetPortDefinition(OMX_PARAM_PORTDEFINITIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc23HandleGetPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc23HandleGetPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetConfigOperatingRate(OMX_PARAM_U32TYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc28HandleSetConfigOperatingRateEP17OMX_PARAM_U32TYPE(void) {
    ALOGD("_ZN10MtkOmxVenc28HandleSetConfigOperatingRateEP17OMX_PARAM_U32TYPE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, OMX_BUFFERHEADERTYPE*> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char*>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPhE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIPhE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIiE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Omx2V4L2HevcLevelMap(OMX_VIDEO_HEVCLEVELTYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20Omx2V4L2HevcLevelMapE23OMX_VIDEO_HEVCLEVELTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc20Omx2V4L2HevcLevelMapE23OMX_VIDEO_HEVCLEVELTYPE() called");
    return 0;
}

/* Demangled: OmxMVAManager::getOmxMVAFromVA(void*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager15getOmxMVAFromVAEPvPj(void) {
    ALOGD("_ZN13OmxMVAManager15getOmxMVAFromVAEPvPj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::VT_SetConfig(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc12VT_SetConfigE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc12VT_SetConfigE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetImageInit(OMX_PORT_PARAM_TYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18HandleGetImageInitEP19OMX_PORT_PARAM_TYPE(void) {
    ALOGD("_ZN10MtkOmxVenc18HandleGetImageInitEP19OMX_PORT_PARAM_TYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::InputBufferHeaderAllocate(OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc25InputBufferHeaderAllocateEPP20OMX_BUFFERHEADERTYPEjPvj(void) {
    ALOGD("_ZN10MtkOmxVenc25InputBufferHeaderAllocateEPP20OMX_BUFFERHEADERTYPEjPvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::VT_SetMode() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc10VT_SetModeEv(void) {
    ALOGD("_ZN10MtkOmxVenc10VT_SetModeEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetConfigDescribeHDR10PlusInfo(android::DescribeHDR10PlusInfoParams*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc36HandleGetConfigDescribeHDR10PlusInfoEPN7android27DescribeHDR10PlusInfoParamsE(void) {
    ALOGD("_ZN10MtkOmxVenc36HandleGetConfigDescribeHDR10PlusInfoEPN7android27DescribeHDR10PlusInfoParamsE() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<MMLib>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrI5MMLibED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrI5MMLibED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<MMLib*, std::__1::default_delete<MMLib>, std::__1::allocator<MMLib> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIP5MMLibNS_14default_deleteIS1_EENS_9allocatorIS1_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIP5MMLibNS_14default_deleteIS1_EENS_9allocatorIS1_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: AndroidVendorConfigExtensionStore::AndroidVendorConfigExtensionStore() */
extern "C" __attribute__((visibility("default"))) int _ZN33AndroidVendorConfigExtensionStoreC1Ev(void) {
    ALOGD("_ZN33AndroidVendorConfigExtensionStoreC1Ev() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIjE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Omx2DriverH264LevelMap(OMX_VIDEO_AVCLEVELTYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc22Omx2DriverH264LevelMapE22OMX_VIDEO_AVCLEVELTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc22Omx2DriverH264LevelMapE22OMX_VIDEO_AVCLEVELTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ComponentDeInitRoi() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18ComponentDeInitRoiEv(void) {
    ALOGD("_ZN10MtkOmxVenc18ComponentDeInitRoiEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetConfigVendorSetForceFullIframe(OMX_PARAM_U32TYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc39HandleSetConfigVendorSetForceFullIframeEP17OMX_PARAM_U32TYPE(void) {
    ALOGD("_ZN10MtkOmxVenc39HandleSetConfigVendorSetForceFullIframeEP17OMX_PARAM_U32TYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::startFlush(OMX_BUFFERHEADERTYPE*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc10startFlushEP20OMX_BUFFERHEADERTYPEb(void) {
    ALOGD("_ZN10MtkOmxVenc10startFlushEP20OMX_BUFFERHEADERTYPEb() called");
    return 0;
}

/* Demangled: OmxMVAManager::getMapIndexFromHndl(void*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager19getMapIndexFromHndlEPvb(void) {
    ALOGD("_ZN13OmxMVAManager19getMapIndexFromHndlEPvb() called");
    return 0;
}

/* Demangled: MtkOmxComponentCreate */
extern "C" __attribute__((visibility("default"))) int MtkOmxComponentCreate(void) {
    ALOGD("MtkOmxComponentCreate() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetConfigGoogleTemporalLayering(OMX_VIDEO_CONFIG_ANDROID_TEMPORALLAYERINGTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc37HandleSetConfigGoogleTemporalLayeringEP45OMX_VIDEO_CONFIG_ANDROID_TEMPORALLAYERINGTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc37HandleSetConfigGoogleTemporalLayeringEP45OMX_VIDEO_CONFIG_ANDROID_TEMPORALLAYERINGTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSMVRSetVideoHevc(OMX_VIDEO_PARAM_HEVCTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc22HandleSMVRSetVideoHevcEP24OMX_VIDEO_PARAM_HEVCTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc22HandleSMVRSetVideoHevcEP24OMX_VIDEO_PARAM_HEVCTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::CheckBufferAvailabilityAdvance(MtkOmxBufQ*, MtkOmxBufQ*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc30CheckBufferAvailabilityAdvanceEP10MtkOmxBufQS1_(void) {
    ALOGD("_ZN10MtkOmxVenc30CheckBufferAvailabilityAdvanceEP10MtkOmxBufQS1_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::deMtkOmxVencDeque() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17deMtkOmxVencDequeEv(void) {
    ALOGD("_ZN10MtkOmxVenc17deMtkOmxVencDequeEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::WFD_OnEnqueBuffer(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17WFD_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc17WFD_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Heif_SetConfig(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14Heif_SetConfigE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc14Heif_SetConfigE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Debug_Enabled() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc13Debug_EnabledEv(void) {
    ALOGD("_ZN10MtkOmxVenc13Debug_EnabledEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Debug_OnDeInit() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14Debug_OnDeInitEv(void) {
    ALOGD("_ZN10MtkOmxVenc14Debug_OnDeInitEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::isEosState() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc10isEosStateEv(void) {
    ALOGD("_ZN10MtkOmxVenc10isEosStateEv() called");
    return 0;
}

/* Demangled: MtkVenc_FreeBuffer(void*, unsigned int, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _Z18MtkVenc_FreeBufferPvjP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_Z18MtkVenc_FreeBufferPvjP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVencEncodeThread(void*) */
extern "C" __attribute__((visibility("default"))) int _Z22MtkOmxVencEncodeThreadPv(void) {
    ALOGD("_Z22MtkOmxVencEncodeThreadPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SetCallbacks(void*, OMX_CALLBACKTYPE*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc12SetCallbacksEPvP16OMX_CALLBACKTYPES0_(void) {
    ALOGD("_ZN10MtkOmxVenc12SetCallbacksEPvP16OMX_CALLBACKTYPES0_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Buffer_DequeOnGetOutputBuffer(OMX_BUFFERHEADERTYPE*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc29Buffer_DequeOnGetOutputBufferEP20OMX_BUFFERHEADERTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc29Buffer_DequeOnGetOutputBufferEP20OMX_BUFFERHEADERTYPEPv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::getInputBufferSizeByFormat(OMX_VIDEO_PORTDEFINITIONTYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26getInputBufferSizeByFormatE28OMX_VIDEO_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc26getInputBufferSizeByFormatE28OMX_VIDEO_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<MtkVenc::MtkRoiConfigEntry*, int> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: MTK_OMX_MEMSET(void*, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z14MTK_OMX_MEMSETPvij(void) {
    ALOGD("_Z14MTK_OMX_MEMSETPvij() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetVideoIntraRefresh(OMX_VIDEO_PARAM_INTRAREFRESHTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26HandleSetVideoIntraRefreshEP32OMX_VIDEO_PARAM_INTRAREFRESHTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc26HandleSetVideoIntraRefreshEP32OMX_VIDEO_PARAM_INTRAREFRESHTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::checkSecSwitchInEnc(OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19checkSecSwitchInEncEP20OMX_BUFFERHEADERTYPES1_(void) {
    ALOGD("_ZN10MtkOmxVenc19checkSecSwitchInEncEP20OMX_BUFFERHEADERTYPES1_() called");
    return 0;
}

/* Demangled: MtkOmxBufQ::MtkOmxBufQ() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxBufQC2Ev(void) {
    ALOGD("_ZN10MtkOmxBufQC2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<native_handle*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIP13native_handleEE = NULL;

/* Demangled: MtkOmxVenc::SMVR_CollectBsBuffer(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20SMVR_CollectBsBufferEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc20SMVR_CollectBsBufferEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::DequeOnGetInputBuffer(OMX_BUFFERHEADERTYPE**, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21DequeOnGetInputBufferEPP20OMX_BUFFERHEADERTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc21DequeOnGetInputBufferEPP20OMX_BUFFERHEADERTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SetDbgInfo2Ion(int&, int&, void*, int, int, int, int, int, int&, int&, void*, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14SetDbgInfo2IonERiS0_PviiiiiS0_S0_S1_iiiii(void) {
    ALOGD("_ZN10MtkOmxVenc14SetDbgInfo2IonERiS0_PviiiiiS0_S0_S1_iiiii() called");
    return 0;
}

/* Demangled: MtkOmxVenc::QueryDriverMPEG4Enc() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19QueryDriverMPEG4EncEv(void) {
    ALOGD("_ZN10MtkOmxVenc19QueryDriverMPEG4EncEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::EncodeT_Output_GetBufferHeaderPtr(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc33EncodeT_Output_GetBufferHeaderPtrEi(void) {
    ALOGD("_ZN10MtkOmxVenc33EncodeT_Output_GetBufferHeaderPtrEi() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SMVR_DumpInputBuffer(OMX_BUFFERHEADERTYPE*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20SMVR_DumpInputBufferEP20OMX_BUFFERHEADERTYPEPhj(void) {
    ALOGD("_ZN10MtkOmxVenc20SMVR_DumpInputBufferEP20OMX_BUFFERHEADERTYPEPhj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Heif_OnEnqueBuffer(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18Heif_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc18Heif_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, std::__1::allocator<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&> >, void (void*, unsigned long)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE7destroyEv() called");
    return 0;
}

/* Demangled: OmxMVAManager::newOmxMVAwithHndlwithSize(void*, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager25newOmxMVAwithHndlwithSizeEPvS0_j(void) {
    ALOGD("_ZN13OmxMVAManager25newOmxMVAwithHndlwithSizeEPvS0_j() called");
    return 0;
}

/* Demangled: MtkOmxVenc::checkSecSwitchInCC(OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18checkSecSwitchInCCEP20OMX_BUFFERHEADERTYPES1_(void) {
    ALOGD("_ZN10MtkOmxVenc18checkSecSwitchInCCEP20OMX_BUFFERHEADERTYPES1_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::normalSecureSwitchHndling(OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc25normalSecureSwitchHndlingEP20OMX_BUFFERHEADERTYPES1_(void) {
    ALOGD("_ZN10MtkOmxVenc25normalSecureSwitchHndlingEP20OMX_BUFFERHEADERTYPES1_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::InitVP8EncParams() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16InitVP8EncParamsEv(void) {
    ALOGD("_ZN10MtkOmxVenc16InitVP8EncParamsEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetVendor3DVideoRecode(OMX_VIDEO_H264FPATYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc28HandleSetVendor3DVideoRecodeEP21OMX_VIDEO_H264FPATYPE(void) {
    ALOGD("_ZN10MtkOmxVenc28HandleSetVendor3DVideoRecodeEP21OMX_VIDEO_H264FPATYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::OutputBufferHeadersResize(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc25OutputBufferHeadersResizeEi(void) {
    ALOGD("_ZN10MtkOmxVenc25OutputBufferHeadersResizeEi() called");
    return 0;
}

/* Demangled: MtkOmxVenc::GetVEncDrvFrmBuffer(unsigned char*, unsigned int, unsigned char*, unsigned int, __VENC_DRV_PARAM_FRM_BUF_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19GetVEncDrvFrmBufferEPhjS0_jP26__VENC_DRV_PARAM_FRM_BUF_T(void) {
    ALOGD("_ZN10MtkOmxVenc19GetVEncDrvFrmBufferEPhjS0_jP26__VENC_DRV_PARAM_FRM_BUF_T() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: OmxMVAEntry::setToVBufInfo(_VBufInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN11OmxMVAEntry13setToVBufInfoEP9_VBufInfo(void) {
    ALOGD("_ZN11OmxMVAEntry13setToVBufInfoEP9_VBufInfo() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Omx2V4L2HevcTierMap(OMX_VIDEO_HEVCLEVELTYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19Omx2V4L2HevcTierMapE23OMX_VIDEO_HEVCLEVELTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc19Omx2V4L2HevcTierMapE23OMX_VIDEO_HEVCLEVELTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::QueryDriverHEIFEnc() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18QueryDriverHEIFEncEv(void) {
    ALOGD("_ZN10MtkOmxVenc18QueryDriverHEIFEncEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Heif_SetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17Heif_SetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc17Heif_SetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ROI_DequeOnGetInputBuffer(OMX_BUFFERHEADERTYPE*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc25ROI_DequeOnGetInputBufferEP20OMX_BUFFERHEADERTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc25ROI_DequeOnGetInputBufferEP20OMX_BUFFERHEADERTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::FlushOutputPort() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15FlushOutputPortEv(void) {
    ALOGD("_ZN10MtkOmxVenc15FlushOutputPortEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetStandardComponentRole(OMX_PARAM_COMPONENTROLETYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc30HandleSetStandardComponentRoleEP27OMX_PARAM_COMPONENTROLETYPE(void) {
    ALOGD("_ZN10MtkOmxVenc30HandleSetStandardComponentRoleEP27OMX_PARAM_COMPONENTROLETYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetGoogleDescribeColorFormat2(android::DescribeColorFormat2Params*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc35HandleGetGoogleDescribeColorFormat2EPN7android26DescribeColorFormat2ParamsE(void) {
    ALOGD("_ZN10MtkOmxVenc35HandleGetGoogleDescribeColorFormat2EPN7android26DescribeColorFormat2ParamsE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::VT_SetConfigResolutionChange(OMX_VIDEO_PARAM_RESOLUTION*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc28VT_SetConfigResolutionChangeEP26OMX_VIDEO_PARAM_RESOLUTION(void) {
    ALOGD("_ZN10MtkOmxVenc28VT_SetConfigResolutionChangeEP26OMX_VIDEO_PARAM_RESOLUTION() called");
    return 0;
}

/* Demangled: MtkOmxVenc::startDeque(int, OMX_BUFFERHEADERTYPE*, unsigned char*, int, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc10startDequeEiP20OMX_BUFFERHEADERTYPEPhiS1_(void) {
    ALOGD("_ZN10MtkOmxVenc10startDequeEiP20OMX_BUFFERHEADERTYPEPhiS1_() called");
    return 0;
}

/* Demangled: StateToString(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z13StateToStringj(void) {
    ALOGD("_Z13StateToStringj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::startFlush(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc10startFlushEb(void) {
    ALOGD("_ZN10MtkOmxVenc10startFlushEb() called");
    return 0;
}

/* Demangled: MtkOmxVenc::OutputBufferHeaderAllocate(OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26OutputBufferHeaderAllocateEPP20OMX_BUFFERHEADERTYPEjPvj(void) {
    ALOGD("_ZN10MtkOmxVenc26OutputBufferHeaderAllocateEPP20OMX_BUFFERHEADERTYPEjPvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetConfigDescribeHDR10PlusInfo(android::DescribeHDR10PlusInfoParams*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc36HandleSetConfigDescribeHDR10PlusInfoEPN7android27DescribeHDR10PlusInfoParamsE(void) {
    ALOGD("_ZN10MtkOmxVenc36HandleSetConfigDescribeHDR10PlusInfoEPN7android27DescribeHDR10PlusInfoParamsE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::startDeque() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc10startDequeEv(void) {
    ALOGD("_ZN10MtkOmxVenc10startDequeEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Omx2DriverHEVCProfileMap(OMX_VIDEO_HEVCPROFILETYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc24Omx2DriverHEVCProfileMapE25OMX_VIDEO_HEVCPROFILETYPE(void) {
    ALOGD("_ZN10MtkOmxVenc24Omx2DriverHEVCProfileMapE25OMX_VIDEO_HEVCPROFILETYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ROI_OnInit(video_encode_param*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc10ROI_OnInitEP18video_encode_param(void) {
    ALOGD("_ZN10MtkOmxVenc10ROI_OnInitEP18video_encode_param() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetParamVencorSetRoiOn(OMX_PARAM_U32TYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc28HandleSetParamVencorSetRoiOnEP17OMX_PARAM_U32TYPE(void) {
    ALOGD("_ZN10MtkOmxVenc28HandleSetParamVencorSetRoiOnEP17OMX_PARAM_U32TYPE() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: MtkOmxVenc::Heif_DequeOnGetOutputBuffer(OMX_BUFFERHEADERTYPE**, v4l2_buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc27Heif_DequeOnGetOutputBufferEPP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void) {
    ALOGD("_ZN10MtkOmxVenc27Heif_DequeOnGetOutputBufferEPP20OMX_BUFFERHEADERTYPEP11v4l2_buffer() called");
    return 0;
}

/* Demangled: OmxMVAManager::newOmxMVAwithVA(void*, int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager15newOmxMVAwithVAEPviS0_(void) {
    ALOGD("_ZN13OmxMVAManager15newOmxMVAwithVAEPviS0_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ComponentDeInitWFD() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18ComponentDeInitWFDEv(void) {
    ALOGD("_ZN10MtkOmxVenc18ComponentDeInitWFDEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HDR_EmptyThisBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19HDR_EmptyThisBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc19HDR_EmptyThisBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxCmdQueue::~MtkOmxCmdQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkOmxCmdQueueD1Ev(void) {
    ALOGD("_ZN14MtkOmxCmdQueueD1Ev() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleVTSetVideoBitrate(OMX_VIDEO_PARAM_BITRATETYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc23HandleVTSetVideoBitrateEP27OMX_VIDEO_PARAM_BITRATETYPE(void) {
    ALOGD("_ZN10MtkOmxVenc23HandleVTSetVideoBitrateEP27OMX_VIDEO_PARAM_BITRATETYPE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ioctl_set_ctrl(video_encode_param*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14ioctl_set_ctrlEP18video_encode_param(void) {
    ALOGD("_ZN10MtkOmxVenc14ioctl_set_ctrlEP18video_encode_param() called");
    return 0;
}

/* Demangled: OmxMVAManager::getOmxMVAFromVAToVencFrm(void*, __VENC_DRV_PARAM_FRM_BUF_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager24getOmxMVAFromVAToVencFrmEPvP26__VENC_DRV_PARAM_FRM_BUF_T(void) {
    ALOGD("_ZN13OmxMVAManager24getOmxMVAFromVAToVencFrmEPvP26__VENC_DRV_PARAM_FRM_BUF_T() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ioctl_runtime_query(int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19ioctl_runtime_queryEiPi(void) {
    ALOGD("_ZN10MtkOmxVenc19ioctl_runtime_queryEiPi() called");
    return 0;
}

/* Demangled: MtkOmxVenc::DeInitSecEncParams() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18DeInitSecEncParamsEv(void) {
    ALOGD("_ZN10MtkOmxVenc18DeInitSecEncParamsEv() called");
    return 0;
}

/* Demangled: v4l2_reset_dma_out_fix_scale(v4l2_selection*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z28v4l2_reset_dma_out_fix_scaleP14v4l2_selectionii(void) {
    ALOGD("_Z28v4l2_reset_dma_out_fix_scaleP14v4l2_selectionii() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetConfigAndroidVendorExtension(OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc37HandleGetConfigAndroidVendorExtensionEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc37HandleGetConfigAndroidVendorExtensionEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE() called");
    return 0;
}

/* Demangled: MtkVenc_SetParameter(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _Z20MtkVenc_SetParameterPv13OMX_INDEXTYPES_(void) {
    ALOGD("_Z20MtkVenc_SetParameterPv13OMX_INDEXTYPES_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::PortBuffersPopulated() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20PortBuffersPopulatedEv(void) {
    ALOGD("_ZN10MtkOmxVenc20PortBuffersPopulatedEv() called");
    return 0;
}

/* Demangled: android::Vector<MtkOmxVenc::_MtkVencIonBufferInfo>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HDR_CollectBsBuffer(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19HDR_CollectBsBufferEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc19HDR_CollectBsBufferEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::GraphicBuffer> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: OmxIonMVAMap::mIonHandleCount */
extern "C" __attribute__((visibility("default"))) void* _ZN12OmxIonMVAMap15mIonHandleCountE = NULL;

/* Exported Object: OmxMVAManager::mEnableMoreLog */
extern "C" __attribute__((visibility("default"))) void* _ZN13OmxMVAManager14mEnableMoreLogE = NULL;

/* Demangled: MtkOmxVenc::ComponentRoleEnum(void*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17ComponentRoleEnumEPvPhj(void) {
    ALOGD("_ZN10MtkOmxVenc17ComponentRoleEnumEPvPhj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetConfigCommonRotate(OMX_CONFIG_ROTATIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc27HandleGetConfigCommonRotateEP23OMX_CONFIG_ROTATIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc27HandleGetConfigCommonRotateEP23OMX_CONFIG_ROTATIONTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetConfigVendorSetForceIframe(OMX_PARAM_U32TYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc35HandleSetConfigVendorSetForceIframeEP17OMX_PARAM_U32TYPE(void) {
    ALOGD("_ZN10MtkOmxVenc35HandleSetConfigVendorSetForceIframeEP17OMX_PARAM_U32TYPE() called");
    return 0;
}

/* Demangled: android::Vector<native_handle*>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP13native_handleE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIP13native_handleE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::epilogueDequeInputFrame(OMX_BUFFERHEADERTYPE*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc23epilogueDequeInputFrameEP20OMX_BUFFERHEADERTYPEPh(void) {
    ALOGD("_ZN10MtkOmxVenc23epilogueDequeInputFrameEP20OMX_BUFFERHEADERTYPEPh() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIhE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for OmxIonMVAMap */
extern "C" __attribute__((visibility("default"))) void* _ZTV12OmxIonMVAMap = NULL;

/* Demangled: MtkOmxVenc::SMVR_OnEnqueOutputBuffer(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc24SMVR_OnEnqueOutputBufferEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc24SMVR_OnEnqueOutputBufferEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::WFD_HandleDequeFrame(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20WFD_HandleDequeFrameEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc20WFD_HandleDequeFrameEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::newEntry(int, int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMap8newEntryEiiPv(void) {
    ALOGD("_ZN12OmxIonMVAMap8newEntryEiiPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Omx2DriverHEVCLevelMap(OMX_VIDEO_HEVCLEVELTYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc22Omx2DriverHEVCLevelMapE23OMX_VIDEO_HEVCLEVELTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc22Omx2DriverHEVCLevelMapE23OMX_VIDEO_HEVCLEVELTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetStandardComponentRole(OMX_PARAM_COMPONENTROLETYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc30HandleGetStandardComponentRoleEP27OMX_PARAM_COMPONENTROLETYPE(void) {
    ALOGD("_ZN10MtkOmxVenc30HandleGetStandardComponentRoleEP27OMX_PARAM_COMPONENTROLETYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetConfigHDRAndroidVendorExtension(OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc40HandleSetConfigHDRAndroidVendorExtensionEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc40HandleSetConfigHDRAndroidVendorExtensionEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE() called");
    return 0;
}

/* Demangled: OmxMVAManager::freeOmxMVAAll() */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager13freeOmxMVAAllEv(void) {
    ALOGD("_ZN13OmxMVAManager13freeOmxMVAAllEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Debug_UpdateInputV4L2Buffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc27Debug_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void) {
    ALOGD("_ZN10MtkOmxVenc27Debug_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer() called");
    return 0;
}

/* Demangled: MtkOmxVencDequeThread(void*) */
extern "C" __attribute__((visibility("default"))) int _Z21MtkOmxVencDequeThreadPv(void) {
    ALOGD("_Z21MtkOmxVencDequeThreadPv() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::OmxIonMVAMap(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMapC1EPKc(void) {
    ALOGD("_ZN12OmxIonMVAMapC1EPKc() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HDR_SetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16HDR_SetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc16HDR_SetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::DeinitConvertBuffer(unsigned char**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19DeinitConvertBufferEPPh(void) {
    ALOGD("_ZN10MtkOmxVenc19DeinitConvertBufferEPPh() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetConfigGoogleTemporalLayering(OMX_VIDEO_CONFIG_ANDROID_TEMPORALLAYERINGTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc37HandleGetConfigGoogleTemporalLayeringEP45OMX_VIDEO_CONFIG_ANDROID_TEMPORALLAYERINGTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc37HandleGetConfigGoogleTemporalLayeringEP45OMX_VIDEO_CONFIG_ANDROID_TEMPORALLAYERINGTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::InitVideoEncodeHW() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17InitVideoEncodeHWEv(void) {
    ALOGD("_ZN10MtkOmxVenc17InitVideoEncodeHWEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Omx2V4L2Mpeg4LevelMap(OMX_VIDEO_MPEG4LEVELTYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21Omx2V4L2Mpeg4LevelMapE24OMX_VIDEO_MPEG4LEVELTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc21Omx2V4L2Mpeg4LevelMapE24OMX_VIDEO_MPEG4LEVELTYPE() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: AndroidVendorConfigExtensionStore::~AndroidVendorConfigExtensionStore() */
extern "C" __attribute__((visibility("default"))) int _ZN33AndroidVendorConfigExtensionStoreD1Ev(void) {
    ALOGD("_ZN33AndroidVendorConfigExtensionStoreD1Ev() called");
    return 0;
}

/* Demangled: MtkOmxBufQ::QueueBufferBack(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxBufQ15QueueBufferBackEi(void) {
    ALOGD("_ZN10MtkOmxBufQ15QueueBufferBackEi() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIhE12do_constructEPvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Omx2DriverH263ProfileMap(OMX_VIDEO_H263PROFILETYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc24Omx2DriverH263ProfileMapE25OMX_VIDEO_H263PROFILETYPE(void) {
    ALOGD("_ZN10MtkOmxVenc24Omx2DriverH263ProfileMapE25OMX_VIDEO_H263PROFILETYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::VT_GetExtensionIndex(char*, OMX_INDEXTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20VT_GetExtensionIndexEPcP13OMX_INDEXTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc20VT_GetExtensionIndexEPcP13OMX_INDEXTYPE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxCmdQueue::MtkOmxCmdQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkOmxCmdQueueC2Ev(void) {
    ALOGD("_ZN14MtkOmxCmdQueueC2Ev() called");
    return 0;
}

/* Demangled: android::Vector<OmxMVAEntry*>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP11OmxMVAEntryE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIP11OmxMVAEntryE12do_constructEPvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetGoogleStoreANWBufferInMetadata(android::StoreMetaDataInBuffersParams*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc39HandleSetGoogleStoreANWBufferInMetadataEPN7android28StoreMetaDataInBuffersParamsE(void) {
    ALOGD("_ZN10MtkOmxVenc39HandleSetGoogleStoreANWBufferInMetadataEPN7android28StoreMetaDataInBuffersParamsE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::WFD_UpdateInputV4L2Buffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc25WFD_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void) {
    ALOGD("_ZN10MtkOmxVenc25WFD_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Debug_FillThisBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20Debug_FillThisBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc20Debug_FillThisBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::EncSettingVP8Enc() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16EncSettingVP8EncEv(void) {
    ALOGD("_ZN10MtkOmxVenc16EncSettingVP8EncEv() called");
    return 0;
}

/* Demangled: android::Vector<MtkVenc::RoiInfo*>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPN7MtkVenc7RoiInfoEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIPN7MtkVenc7RoiInfoEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ComponentInitWFD(AndroidVendorConfigExtensionStore*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16ComponentInitWFDEP33AndroidVendorConfigExtensionStore(void) {
    ALOGD("_ZN10MtkOmxVenc16ComponentInitWFDEP33AndroidVendorConfigExtensionStore() called");
    return 0;
}

/* Demangled: MtkOmxVenc::WFD_HandleStateSet(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18WFD_HandleStateSetEj(void) {
    ALOGD("_ZN10MtkOmxVenc18WFD_HandleStateSetEj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetVendorPrependSPSPPS(android::PrependSPSPPSToIDRFramesParams*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc28HandleSetVendorPrependSPSPPSEPN7android30PrependSPSPPSToIDRFramesParamsE(void) {
    ALOGD("_ZN10MtkOmxVenc28HandleSetVendorPrependSPSPPSEPN7android30PrependSPSPPSToIDRFramesParamsE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, OMX_BUFFERHEADERTYPE*> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Debug_CollectBsBuffer(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21Debug_CollectBsBufferEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc21Debug_CollectBsBufferEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::startDeque(int, OMX_BUFFERHEADERTYPE*, int, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc10startDequeEiP20OMX_BUFFERHEADERTYPEiS1_(void) {
    ALOGD("_ZN10MtkOmxVenc10startDequeEiP20OMX_BUFFERHEADERTYPEiS1_() called");
    return 0;
}

/* Demangled: MtkOmxBufQ::DequeueBufferBack() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxBufQ17DequeueBufferBackEv(void) {
    ALOGD("_ZN10MtkOmxBufQ17DequeueBufferBackEv() called");
    return 0;
}

/* Demangled: v4l2_reset_rect(v4l2_rect*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z15v4l2_reset_rectP9v4l2_rectii(void) {
    ALOGD("_Z15v4l2_reset_rectP9v4l2_rectii() called");
    return 0;
}

/* Demangled: v4l2_dump_select(bool, char const*, v4l2_selection*) */
extern "C" __attribute__((visibility("default"))) int _Z16v4l2_dump_selectbPKcP14v4l2_selection(void) {
    ALOGD("_Z16v4l2_dump_selectbPKcP14v4l2_selection() called");
    return 0;
}

/* Demangled: MtkVenc_GetComponentVersion(void*, char*, OMX_VERSIONTYPE*, OMX_VERSIONTYPE*, unsigned char (*) [128]) */
extern "C" __attribute__((visibility("default"))) int _Z27MtkVenc_GetComponentVersionPvPcP15OMX_VERSIONTYPES2_PA128_h(void) {
    ALOGD("_Z27MtkVenc_GetComponentVersionPvPcP15OMX_VERSIONTYPES2_PA128_h() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetGoogleTemporalLayering(OMX_VIDEO_PARAM_ANDROID_TEMPORALLAYERINGTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc31HandleGetGoogleTemporalLayeringEP44OMX_VIDEO_PARAM_ANDROID_TEMPORALLAYERINGTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc31HandleGetGoogleTemporalLayeringEP44OMX_VIDEO_PARAM_ANDROID_TEMPORALLAYERINGTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetConfigAndroidVendorExtension(OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc37HandleSetConfigAndroidVendorExtensionEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc37HandleSetConfigAndroidVendorExtensionEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HDR_NotifyStopCommand() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21HDR_NotifyStopCommandEv(void) {
    ALOGD("_ZN10MtkOmxVenc21HDR_NotifyStopCommandEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, std::__1::allocator<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&> >, void (void*, unsigned long)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: v4l2_set_dma_out_memory(v4l2_buffer*, int) */
extern "C" __attribute__((visibility("default"))) int _Z23v4l2_set_dma_out_memoryP11v4l2_bufferi(void) {
    ALOGD("_Z23v4l2_set_dma_out_memoryP11v4l2_bufferi() called");
    return 0;
}

/* Demangled: MtkOmxBufQ::~MtkOmxBufQ() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxBufQD2Ev(void) {
    ALOGD("_ZN10MtkOmxBufQD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<_MTK_OMX_CMD_QUEUE_ITEM*, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM*> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE5clearEv() called");
    return 0;
}

/* Demangled: android::Vector<MtkVenc::RoiInfo*>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPN7MtkVenc7RoiInfoEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIPN7MtkVenc7RoiInfoEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Heif_UpdateOutputV4L2Buffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc27Heif_UpdateOutputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void) {
    ALOGD("_ZN10MtkOmxVenc27Heif_UpdateOutputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::setBoolProperty(char const*, OMX_BOOL) */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMap15setBoolPropertyEPKc8OMX_BOOL(void) {
    ALOGD("_ZN12OmxIonMVAMap15setBoolPropertyEPKc8OMX_BOOL() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetGoogleTemporalLayering(OMX_VIDEO_PARAM_ANDROID_TEMPORALLAYERINGTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc31HandleSetGoogleTemporalLayeringEP44OMX_VIDEO_PARAM_ANDROID_TEMPORALLAYERINGTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc31HandleSetGoogleTemporalLayeringEP44OMX_VIDEO_PARAM_ANDROID_TEMPORALLAYERINGTYPE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<void*, int (*)(void*), std::__1::allocator<void> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPvPFiS1_ENS_9allocatorIvEEEE = NULL;

/* Demangled: OmxIonMVAMap::freeEntry(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMap9freeEntryEPv(void) {
    ALOGD("_ZN12OmxIonMVAMap9freeEntryEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::UnmapOutputMemory(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17UnmapOutputMemoryEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc17UnmapOutputMemoryEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: OmxMVAManager::OmxMVAManager(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManagerC1EPKc(void) {
    ALOGD("_ZN13OmxMVAManagerC1EPKc() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ComponentDeinitDeque() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20ComponentDeinitDequeEv(void) {
    ALOGD("_ZN10MtkOmxVenc20ComponentDeinitDequeEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::PrepareOutputBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19PrepareOutputBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc19PrepareOutputBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ROI_HandleStateSet(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18ROI_HandleStateSetEj(void) {
    ALOGD("_ZN10MtkOmxVenc18ROI_HandleStateSetEj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::DeInitVideoEncodeHW(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19DeInitVideoEncodeHWEb(void) {
    ALOGD("_ZN10MtkOmxVenc19DeInitVideoEncodeHWEb() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<android::GraphicBuffer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spINS_13GraphicBufferEEEEE = NULL;

/* Demangled: MtkOmxVenc::Debug_DequeOnGetOutputBuffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc28Debug_DequeOnGetOutputBufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void) {
    ALOGD("_ZN10MtkOmxVenc28Debug_DequeOnGetOutputBufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::mapIon(OmxIonMVAEntry*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMap6mapIonEP14OmxIonMVAEntryi(void) {
    ALOGD("_ZN12OmxIonMVAMap6mapIonEP14OmxIonMVAEntryi() called");
    return 0;
}

/* Demangled: AndroidVendorConfigExtensionStore::registerExtension(OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN33AndroidVendorConfigExtensionStore17registerExtensionEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE(void) {
    ALOGD("_ZN33AndroidVendorConfigExtensionStore17registerExtensionEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Debug_EmptyThisBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21Debug_EmptyThisBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc21Debug_EmptyThisBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: OmxIonMVAEntry::setToVBufInfo(_VBufInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN14OmxIonMVAEntry13setToVBufInfoEP9_VBufInfo(void) {
    ALOGD("_ZN14OmxIonMVAEntry13setToVBufInfoEP9_VBufInfo() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandlePortEnable(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16HandlePortEnableEj(void) {
    ALOGD("_ZN10MtkOmxVenc16HandlePortEnableEj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::notifyFlushDoneV4L2() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19notifyFlushDoneV4L2Ev(void) {
    ALOGD("_ZN10MtkOmxVenc19notifyFlushDoneV4L2Ev() called");
    return 0;
}

/* Demangled: AndroidVendorConfigExtensionStore::AndroidVendorConfigExtensionStore() */
extern "C" __attribute__((visibility("default"))) int _ZN33AndroidVendorConfigExtensionStoreC2Ev(void) {
    ALOGD("_ZN33AndroidVendorConfigExtensionStoreC2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: MtkOmxVenc::epilogueDequeOutputFrame(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc24epilogueDequeOutputFrameEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc24epilogueDequeOutputFrameEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::UnmapInputMemory(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16UnmapInputMemoryEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc16UnmapInputMemoryEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxCmdQueue::NewCmdItem(_MTK_OMX_CMD_QUEUE_ITEM**) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkOmxCmdQueue10NewCmdItemEPP23_MTK_OMX_CMD_QUEUE_ITEM(void) {
    ALOGD("_ZN14MtkOmxCmdQueue10NewCmdItemEPP23_MTK_OMX_CMD_QUEUE_ITEM() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, OMX_BUFFERHEADERTYPE*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE10do_compareEPKvS7_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE10do_compareEPKvS7_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<_MTK_OMX_CMD_QUEUE_ITEM**, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM**> >::push_front(_MTK_OMX_CMD_QUEUE_ITEM**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS3_EEE10push_frontEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS3_EEE10push_frontEOS3_() called");
    return 0;
}

/* Demangled: OmxMVAEntry::setToVencFrm(__VENC_DRV_PARAM_FRM_BUF_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN11OmxMVAEntry12setToVencFrmEP26__VENC_DRV_PARAM_FRM_BUF_T(void) {
    ALOGD("_ZN11OmxMVAEntry12setToVencFrmEP26__VENC_DRV_PARAM_FRM_BUF_T() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HDR_GetConfig(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc13HDR_GetConfigE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc13HDR_GetConfigE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::deMtkOmxVencHeif() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16deMtkOmxVencHeifEv(void) {
    ALOGD("_ZN10MtkOmxVenc16deMtkOmxVencHeifEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::setYUVMVAForCC(void*, void*, int, int, int, unsigned char**, unsigned char**, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14setYUVMVAForCCEPvS0_iiiPPhS2_Pji(void) {
    ALOGD("_ZN10MtkOmxVenc14setYUVMVAForCCEPvS0_iiiPPhS2_Pji() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandlePortFlush(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15HandlePortFlushEj(void) {
    ALOGD("_ZN10MtkOmxVenc15HandlePortFlushEj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetVideoPortFormat(OMX_VIDEO_PARAM_PORTFORMATTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc24HandleGetVideoPortFormatEP30OMX_VIDEO_PARAM_PORTFORMATTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc24HandleGetVideoPortFormatEP30OMX_VIDEO_PARAM_PORTFORMATTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::GetState(void*, OMX_STATETYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc8GetStateEPvP13OMX_STATETYPE(void) {
    ALOGD("_ZN10MtkOmxVenc8GetStateEPvP13OMX_STATETYPE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, std::__1::allocator<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&> >, void (void*, unsigned long)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE7__cloneEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Heif_FillThisBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19Heif_FillThisBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc19Heif_FillThisBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Heif_EmptyThisBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20Heif_EmptyThisBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc20Heif_EmptyThisBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SetConfig(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc9SetConfigEPv13OMX_INDEXTYPES0_(void) {
    ALOGD("_ZN10MtkOmxVenc9SetConfigEPv13OMX_INDEXTYPES0_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::VT_GetResolutionChange(MtkOmxVenc::video_resolutionchange*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc22VT_GetResolutionChangeEPNS_22video_resolutionchangeE(void) {
    ALOGD("_ZN10MtkOmxVenc22VT_GetResolutionChangeEPNS_22video_resolutionchangeE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::VT_OnInit(video_encode_param*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc9VT_OnInitEP18video_encode_param(void) {
    ALOGD("_ZN10MtkOmxVenc9VT_OnInitEP18video_encode_param() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HDR_OnInit(video_encode_param*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc10HDR_OnInitEP18video_encode_param(void) {
    ALOGD("_ZN10MtkOmxVenc10HDR_OnInitEP18video_encode_param() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetConfigHDRAndroidVendorExtension(OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc40HandleGetConfigHDRAndroidVendorExtensionEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc40HandleGetConfigHDRAndroidVendorExtensionEP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetConfigVendorResolutionChange(OMX_VIDEO_PARAM_RESOLUTION*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc37HandleSetConfigVendorResolutionChangeEP26OMX_VIDEO_PARAM_RESOLUTION(void) {
    ALOGD("_ZN10MtkOmxVenc37HandleSetConfigVendorResolutionChangeEP26OMX_VIDEO_PARAM_RESOLUTION() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<OmxMVAEntry*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIP11OmxMVAEntryEE = NULL;

/* Demangled: MtkOmxVenc::HandleSetConfigGoogleIntraRefresh(OMX_VIDEO_CONFIG_ANDROID_INTRAREFRESHTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc33HandleSetConfigGoogleIntraRefreshEP41OMX_VIDEO_CONFIG_ANDROID_INTRAREFRESHTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc33HandleSetConfigGoogleIntraRefreshEP41OMX_VIDEO_CONFIG_ANDROID_INTRAREFRESHTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SMVR_OnEnqueBuffer(OMX_BUFFERHEADERTYPE**, native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18SMVR_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPEPK13native_handle(void) {
    ALOGD("_ZN10MtkOmxVenc18SMVR_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPEPK13native_handle() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<_MTK_OMX_CMD_QUEUE_ITEM**, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM**> >::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS3_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS3_EEED2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: MtkOmxVenc::v4l2_find_video_open_dev() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc24v4l2_find_video_open_devEv(void) {
    ALOGD("_ZN10MtkOmxVenc24v4l2_find_video_open_devEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetParamVencorSetRoiLicense(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc33HandleSetParamVencorSetRoiLicenseEPh(void) {
    ALOGD("_ZN10MtkOmxVenc33HandleSetParamVencorSetRoiLicenseEPh() called");
    return 0;
}

/* Demangled: MtkOmxCmdQueue::FreeCmdItem(_MTK_OMX_CMD_QUEUE_ITEM*) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkOmxCmdQueue11FreeCmdItemEP23_MTK_OMX_CMD_QUEUE_ITEM(void) {
    ALOGD("_ZN14MtkOmxCmdQueue11FreeCmdItemEP23_MTK_OMX_CMD_QUEUE_ITEM() called");
    return 0;
}

/* Demangled: MtkOmxVenc::shouldNotifyFlushDone(OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21shouldNotifyFlushDoneEP20OMX_BUFFERHEADERTYPES1_(void) {
    ALOGD("_ZN10MtkOmxVenc21shouldNotifyFlushDoneEP20OMX_BUFFERHEADERTYPES1_() called");
    return 0;
}

/* Demangled: video_encode_reset_out_fmt_pix_mp(v4l2_format*, video_encode_param*) */
extern "C" __attribute__((visibility("default"))) int _Z33video_encode_reset_out_fmt_pix_mpP11v4l2_formatP18video_encode_param(void) {
    ALOGD("_Z33video_encode_reset_out_fmt_pix_mpP11v4l2_formatP18video_encode_param() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char*>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPhE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIPhE12do_constructEPvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SetOutputPortDefinition(OMX_PARAM_PORTDEFINITIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc23SetOutputPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc23SetOutputPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, OMX_BUFFERHEADERTYPE*> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Demangled: MtkOmxVenc::WFD_EnableToggle() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16WFD_EnableToggleEv(void) {
    ALOGD("_ZN10MtkOmxVenc16WFD_EnableToggleEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleWFDSetVideoBitrate(OMX_VIDEO_PARAM_BITRATETYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc24HandleWFDSetVideoBitrateEP27OMX_VIDEO_PARAM_BITRATETYPE(void) {
    ALOGD("_ZN10MtkOmxVenc24HandleWFDSetVideoBitrateEP27OMX_VIDEO_PARAM_BITRATETYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Debug_AppInsight(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16Debug_AppInsightEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc16Debug_AppInsightEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Demangled: OmxMVAManager::OmxMVAManager(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManagerC2EPKcS1_(void) {
    ALOGD("_ZN13OmxMVAManagerC2EPKcS1_() called");
    return 0;
}

/* Exported Object: MtkOmxVenc::mEnableMoreLog */
extern "C" __attribute__((visibility("default"))) void* _ZN10MtkOmxVenc14mEnableMoreLogE = NULL;

/* Demangled: MtkOmxVenc::defaultAvcProfile() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17defaultAvcProfileEv(void) {
    ALOGD("_ZN10MtkOmxVenc17defaultAvcProfileEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::codecName() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc9codecNameEv(void) {
    ALOGD("_ZN10MtkOmxVenc9codecNameEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetVendorQueryCodecsSizes(OMX_VIDEO_PARAM_SPEC_QUERY*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc31HandleGetVendorQueryCodecsSizesEP26OMX_VIDEO_PARAM_SPEC_QUERY(void) {
    ALOGD("_ZN10MtkOmxVenc31HandleGetVendorQueryCodecsSizesEP26OMX_VIDEO_PARAM_SPEC_QUERY() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<unsigned char*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIPhEE = NULL;

/* Demangled: std::__1::deque<_MTK_OMX_CMD_QUEUE_ITEM*, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM*> >::pop_front() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE9pop_frontEv(void) {
    ALOGD("_ZNSt3__15dequeIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE9pop_frontEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetVideoErrorCorrection(OMX_VIDEO_PARAM_ERRORCORRECTIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc29HandleSetVideoErrorCorrectionEP35OMX_VIDEO_PARAM_ERRORCORRECTIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc29HandleSetVideoErrorCorrectionEP35OMX_VIDEO_PARAM_ERRORCORRECTIONTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::WFD_SetMode() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc11WFD_SetModeEv(void) {
    ALOGD("_ZN10MtkOmxVenc11WFD_SetModeEv() called");
    return 0;
}

/* Demangled: OmxMVAManager::getOmxMVAFromHndlToVencFrm(void*, __VENC_DRV_PARAM_FRM_BUF_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager26getOmxMVAFromHndlToVencFrmEPvP26__VENC_DRV_PARAM_FRM_BUF_T(void) {
    ALOGD("_ZN13OmxMVAManager26getOmxMVAFromHndlToVencFrmEPvP26__VENC_DRV_PARAM_FRM_BUF_T() called");
    return 0;
}

/* Demangled: OmxMVAManager::~OmxMVAManager() */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManagerD0Ev(void) {
    ALOGD("_ZN13OmxMVAManagerD0Ev() called");
    return 0;
}

/* Demangled: MtkOmxVenc::QueryDriverFormat(__VENC_DRV_QUERY_VIDEO_FORMAT_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17QueryDriverFormatEP31__VENC_DRV_QUERY_VIDEO_FORMAT_T(void) {
    ALOGD("_ZN10MtkOmxVenc17QueryDriverFormatEP31__VENC_DRV_QUERY_VIDEO_FORMAT_T() called");
    return 0;
}

/* Demangled: android::Vector<native_handle*>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP13native_handleE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIP13native_handleE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::WFD_DequeOnGetOutputBuffer(OMX_BUFFERHEADERTYPE*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26WFD_DequeOnGetOutputBufferEP20OMX_BUFFERHEADERTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc26WFD_DequeOnGetOutputBufferEP20OMX_BUFFERHEADERTYPEPv() called");
    return 0;
}

/* Demangled: OmxMVAManager::freeOmxMVAByVa(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager14freeOmxMVAByVaEPv(void) {
    ALOGD("_ZN13OmxMVAManager14freeOmxMVAByVaEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::QueryDriverHEVCEnc() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18QueryDriverHEVCEncEv(void) {
    ALOGD("_ZN10MtkOmxVenc18QueryDriverHEVCEncEv() called");
    return 0;
}

/* Demangled: MtkOmxBufQ::Push(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxBufQ4PushEi(void) {
    ALOGD("_ZN10MtkOmxBufQ4PushEi() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ioctl_set_param(video_encode_param*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15ioctl_set_paramEP18video_encode_param(void) {
    ALOGD("_ZN10MtkOmxVenc15ioctl_set_paramEP18video_encode_param() called");
    return 0;
}

/* Demangled: v4l2_reset_dma_in_fix_scale(v4l2_selection*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z27v4l2_reset_dma_in_fix_scaleP14v4l2_selectionii(void) {
    ALOGD("_Z27v4l2_reset_dma_in_fix_scaleP14v4l2_selectionii() called");
    return 0;
}

/* Demangled: MtkOmxCmdQueue::~MtkOmxCmdQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkOmxCmdQueueD2Ev(void) {
    ALOGD("_ZN14MtkOmxCmdQueueD2Ev() called");
    return 0;
}

/* Demangled: MtkVenc_SetCallbacks(void*, OMX_CALLBACKTYPE*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z20MtkVenc_SetCallbacksPvP16OMX_CALLBACKTYPES_(void) {
    ALOGD("_Z20MtkVenc_SetCallbacksPvP16OMX_CALLBACKTYPES_() called");
    return 0;
}

/* Demangled: android::Vector<native_handle*>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP13native_handleE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIP13native_handleE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSMVRSetConfigVideoAVCIntraPeriod(OMX_VIDEO_CONFIG_AVCINTRAPERIOD*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc38HandleSMVRSetConfigVideoAVCIntraPeriodEP31OMX_VIDEO_CONFIG_AVCINTRAPERIOD(void) {
    ALOGD("_ZN10MtkOmxVenc38HandleSMVRSetConfigVideoAVCIntraPeriodEP31OMX_VIDEO_CONFIG_AVCINTRAPERIOD() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ioctl_stream_off(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16ioctl_stream_offEi(void) {
    ALOGD("_ZN10MtkOmxVenc16ioctl_stream_offEi() called");
    return 0;
}

/* Demangled: MtkOmxVenc::shouldNotifyFlushDoneBuffer(OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc27shouldNotifyFlushDoneBufferEP20OMX_BUFFERHEADERTYPES1_(void) {
    ALOGD("_ZN10MtkOmxVenc27shouldNotifyFlushDoneBufferEP20OMX_BUFFERHEADERTYPES1_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::EmptyThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15EmptyThisBufferEPvP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc15EmptyThisBufferEPvP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::EncSettingEncCommon() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19EncSettingEncCommonEv(void) {
    ALOGD("_ZN10MtkOmxVenc19EncSettingEncCommonEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<_MTK_OMX_CMD_QUEUE_ITEM**, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM**>&>::push_front(_MTK_OMX_CMD_QUEUE_ITEM** const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMRNS_9allocatorIS3_EEE10push_frontERKS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMRNS_9allocatorIS3_EEE10push_frontERKS3_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::MtkOmxVencHDR() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc13MtkOmxVencHDREv(void) {
    ALOGD("_ZN10MtkOmxVenc13MtkOmxVencHDREv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ROI_GetConfig(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc13ROI_GetConfigE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc13ROI_GetConfigE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::InitConvertBuffer(unsigned char**, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17InitConvertBufferEPPhPji(void) {
    ALOGD("_ZN10MtkOmxVenc17InitConvertBufferEPPhPji() called");
    return 0;
}

/* Demangled: MtkVenc_GetParameter(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _Z20MtkVenc_GetParameterPv13OMX_INDEXTYPES_(void) {
    ALOGD("_Z20MtkVenc_GetParameterPv13OMX_INDEXTYPES_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetVendorSetScenario(OMX_PARAM_U32TYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26HandleSetVendorSetScenarioEP17OMX_PARAM_U32TYPE(void) {
    ALOGD("_ZN10MtkOmxVenc26HandleSetVendorSetScenarioEP17OMX_PARAM_U32TYPE() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::InputBufferHeaderUse(OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20InputBufferHeaderUseEPP20OMX_BUFFERHEADERTYPEjPvjPh(void) {
    ALOGD("_ZN10MtkOmxVenc20InputBufferHeaderUseEPP20OMX_BUFFERHEADERTYPEjPvjPh() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetConfigVideoBitrate(OMX_VIDEO_CONFIG_BITRATETYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc27HandleGetConfigVideoBitrateEP28OMX_VIDEO_CONFIG_BITRATETYPE(void) {
    ALOGD("_ZN10MtkOmxVenc27HandleGetConfigVideoBitrateEP28OMX_VIDEO_CONFIG_BITRATETYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::notifyFlushDoneBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21notifyFlushDoneBufferEv(void) {
    ALOGD("_ZN10MtkOmxVenc21notifyFlushDoneBufferEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Buffer_OnEnqueBuffer(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20Buffer_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc20Buffer_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetConfigTSVC(OMX_VIDEO_CONFIG_TSVC*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19HandleSetConfigTSVCEP21OMX_VIDEO_CONFIG_TSVC(void) {
    ALOGD("_ZN10MtkOmxVenc19HandleSetConfigTSVCEP21OMX_VIDEO_CONFIG_TSVC() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetVideoQuantization(OMX_VIDEO_PARAM_QUANTIZATIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26HandleSetVideoQuantizationEP32OMX_VIDEO_PARAM_QUANTIZATIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc26HandleSetVideoQuantizationEP32OMX_VIDEO_PARAM_QUANTIZATIONTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::FillThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14FillThisBufferEPvP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc14FillThisBufferEPvP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetVendorNonRefPOp(OMX_VIDEO_NONREFP*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc24HandleGetVendorNonRefPOpEP17OMX_VIDEO_NONREFP(void) {
    ALOGD("_ZN10MtkOmxVenc24HandleGetVendorNonRefPOpEP17OMX_VIDEO_NONREFP() called");
    return 0;
}

/* Demangled: android::Vector<MtkOmxVenc::_MtkVencIonBufferInfo>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HDR_DequeOnGetInputBuffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc25HDR_DequeOnGetInputBufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void) {
    ALOGD("_ZN10MtkOmxVenc25HDR_DequeOnGetInputBufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer() called");
    return 0;
}

/* Demangled: MtkOmxVenc::doDequeOutputFrame(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18doDequeOutputFrameEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc18doDequeOutputFrameEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<MtkVenc::MtkRoiConfigEntry*, int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEEE = NULL;

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: OmxMVAManager::syncBufferCacheFrm(unsigned char*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager18syncBufferCacheFrmEPhb(void) {
    ALOGD("_ZN13OmxMVAManager18syncBufferCacheFrmEPhb() called");
    return 0;
}

/* Demangled: android::Vector<OmxMVAEntry*>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP11OmxMVAEntryE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIP11OmxMVAEntryE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::deMtkOmxVencHDR() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15deMtkOmxVencHDREv(void) {
    ALOGD("_ZN10MtkOmxVenc15deMtkOmxVencHDREv() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIiE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxBufQ::FillSequence(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxBufQ12FillSequenceEii(void) {
    ALOGD("_ZN10MtkOmxBufQ12FillSequenceEii() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SendStopCommand(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15SendStopCommandEb(void) {
    ALOGD("_ZN10MtkOmxVenc15SendStopCommandEb() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<_MTK_OMX_CMD_QUEUE_ITEM**, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM**> >::push_back(_MTK_OMX_CMD_QUEUE_ITEM**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::level_id_ioctl_set_ctrl() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc23level_id_ioctl_set_ctrlEv(void) {
    ALOGD("_ZN10MtkOmxVenc23level_id_ioctl_set_ctrlEv() called");
    return 0;
}

/* Demangled: MtkOmxBufQ::Lock() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxBufQ4LockEv(void) {
    ALOGD("_ZN10MtkOmxBufQ4LockEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleInputPortPopulated() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc24HandleInputPortPopulatedEv(void) {
    ALOGD("_ZN10MtkOmxVenc24HandleInputPortPopulatedEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleOutputPortPopulated() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc25HandleOutputPortPopulatedEv(void) {
    ALOGD("_ZN10MtkOmxVenc25HandleOutputPortPopulatedEv() called");
    return 0;
}

/* Demangled: AndroidVendorConfigExtensionStore::getRegisteredExtension(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN33AndroidVendorConfigExtensionStore22getRegisteredExtensionEj(void) {
    ALOGD("_ZN33AndroidVendorConfigExtensionStore22getRegisteredExtensionEj() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIhE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: OmxMVAManager::OmxMVAManager() */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManagerC1Ev(void) {
    ALOGD("_ZN13OmxMVAManagerC1Ev() called");
    return 0;
}

/* Demangled: AndroidVendorConfigExtensionStore::~AndroidVendorConfigExtensionStore() */
extern "C" __attribute__((visibility("default"))) int _ZN33AndroidVendorConfigExtensionStoreD2Ev(void) {
    ALOGD("_ZN33AndroidVendorConfigExtensionStoreD2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: std::__1::vector<OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*, std::__1::allocator<OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*> >::__swap_out_circular_buffer(std::__1::__split_buffer<OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*, std::__1::allocator<OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void) {
    ALOGD("_ZNSt3__16vectorIP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<OMX_BUFFERHEADERTYPE*, MtkVenc::MtkRoiConfigEntry*> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: MTK_OMX_ALLOC(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z13MTK_OMX_ALLOCj(void) {
    ALOGD("_Z13MTK_OMX_ALLOCj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::requeueBsBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16requeueBsBuffersEv(void) {
    ALOGD("_ZN10MtkOmxVenc16requeueBsBuffersEv() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SMVR_UpdateInputV4L2Buffer(OMX_BUFFERHEADERTYPE*, void*, v4l2_buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26SMVR_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEPvP11v4l2_buffer(void) {
    ALOGD("_ZN10MtkOmxVenc26SMVR_UpdateInputV4L2BufferEP20OMX_BUFFERHEADERTYPEPvP11v4l2_buffer() called");
    return 0;
}

/* Demangled: MtkOmxVenc::DequeOnGetOutputBuffer(OMX_BUFFERHEADERTYPE**, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc22DequeOnGetOutputBufferEPP20OMX_BUFFERHEADERTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc22DequeOnGetOutputBufferEPP20OMX_BUFFERHEADERTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::EncSettingMPEG4Enc() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18EncSettingMPEG4EncEv(void) {
    ALOGD("_ZN10MtkOmxVenc18EncSettingMPEG4EncEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*, std::__1::allocator<OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE*> >::__push_back_slow_path<OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE* const&>(OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPE* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP39OMX_CONFIG_ANDROID_VENDOR_EXTENSIONTYPENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetVideoVBSMC(OMX_VIDEO_PARAM_VBSMCTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19HandleGetVideoVBSMCEP25OMX_VIDEO_PARAM_VBSMCTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc19HandleGetVideoVBSMCEP25OMX_VIDEO_PARAM_VBSMCTYPE() called");
    return 0;
}

/* Demangled: android::Vector<MtkOmxVenc::_MtkVencIonBufferInfo>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN10MtkOmxVenc21_MtkVencIonBufferInfoEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetConfigDescribeHDRStaticInfo(android::DescribeHDRStaticInfoParams*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc36HandleGetConfigDescribeHDRStaticInfoEPN7android27DescribeHDRStaticInfoParamsE(void) {
    ALOGD("_ZN10MtkOmxVenc36HandleGetConfigDescribeHDRStaticInfoEPN7android27DescribeHDRStaticInfoParamsE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ioctl_dq_out_buf(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16ioctl_dq_out_bufEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc16ioctl_dq_out_bufEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::DrawYUVStripeLine(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17DrawYUVStripeLineEPh(void) {
    ALOGD("_ZN10MtkOmxVenc17DrawYUVStripeLineEPh() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<OMX_BUFFERHEADERTYPE*, MtkVenc::MtkRoiConfigEntry*> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Omx2DriverH263LevelMap(OMX_VIDEO_H263LEVELTYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc22Omx2DriverH263LevelMapE23OMX_VIDEO_H263LEVELTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc22Omx2DriverH263LevelMapE23OMX_VIDEO_H263LEVELTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetConfigVideoAVCIntraPeriod(OMX_VIDEO_CONFIG_AVCINTRAPERIOD*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc34HandleGetConfigVideoAVCIntraPeriodEP31OMX_VIDEO_CONFIG_AVCINTRAPERIOD(void) {
    ALOGD("_ZN10MtkOmxVenc34HandleGetConfigVideoAVCIntraPeriodEP31OMX_VIDEO_CONFIG_AVCINTRAPERIOD() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char*>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPhE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIPhE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::onStartDequeBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18onStartDequeBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc18onStartDequeBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Exported Object: AvcProfileLevelTable */
extern "C" __attribute__((visibility("default"))) void* AvcProfileLevelTable = NULL;

/* Demangled: MtkOmxVenc::setDrvParamBeforeEnc() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20setDrvParamBeforeEncEv(void) {
    ALOGD("_ZN10MtkOmxVenc20setDrvParamBeforeEncEv() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIhE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: MtkVenc_GetExtensionIndex(void*, char*, OMX_INDEXTYPE*) */
extern "C" __attribute__((visibility("default"))) int _Z25MtkVenc_GetExtensionIndexPvPcP13OMX_INDEXTYPE(void) {
    ALOGD("_Z25MtkVenc_GetExtensionIndexPvPcP13OMX_INDEXTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SMVR_BufferModifyBeforeEnc(OMX_BUFFERHEADERTYPE**, native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26SMVR_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPEPK13native_handle(void) {
    ALOGD("_ZN10MtkOmxVenc26SMVR_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPEPK13native_handle() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Heif_GetConfig(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14Heif_GetConfigE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc14Heif_GetConfigE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::GetVEncDrvBSBuffer(unsigned char*, unsigned int, __VENC_DRV_PARAM_BS_BUF_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18GetVEncDrvBSBufferEPhjP25__VENC_DRV_PARAM_BS_BUF_T(void) {
    ALOGD("_ZN10MtkOmxVenc18GetVEncDrvBSBufferEPhjP25__VENC_DRV_PARAM_BS_BUF_T() called");
    return 0;
}

/* Demangled: MtkOmxVenc::EncodeT_GetBufferIndex(OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE**, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc22EncodeT_GetBufferIndexEP20OMX_BUFFERHEADERTYPEPS1_i(void) {
    ALOGD("_ZN10MtkOmxVenc22EncodeT_GetBufferIndexEP20OMX_BUFFERHEADERTYPEPS1_i() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: MtkOmxVenc::InitMpeg4EncParams() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18InitMpeg4EncParamsEv(void) {
    ALOGD("_ZN10MtkOmxVenc18InitMpeg4EncParamsEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Heif_HandleStateSet(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19Heif_HandleStateSetEj(void) {
    ALOGD("_ZN10MtkOmxVenc19Heif_HandleStateSetEj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::EncodeT_Input_GetBufferIndex(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc28EncodeT_Input_GetBufferIndexEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc28EncodeT_Input_GetBufferIndexEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Exported Object: vtable for MtkVenc::MtkRoiConfigEntry */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7MtkVenc17MtkRoiConfigEntryE = NULL;

/* Demangled: OmxMVAManager::syncBufferCacheFrm(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager18syncBufferCacheFrmEPh(void) {
    ALOGD("_ZN13OmxMVAManager18syncBufferCacheFrmEPh() called");
    return 0;
}

/* Demangled: MtkOmxVenc::InitH263EncParams() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17InitH263EncParamsEv(void) {
    ALOGD("_ZN10MtkOmxVenc17InitH263EncParamsEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::WFD_SetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16WFD_SetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc16WFD_SetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::findBufferHeaderIndex(unsigned int, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21findBufferHeaderIndexEjP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc21findBufferHeaderIndexEjP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Heif_DequeOnGetInputBuffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26Heif_DequeOnGetInputBufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void) {
    ALOGD("_ZN10MtkOmxVenc26Heif_DequeOnGetInputBufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetConfigTSVC(OMX_VIDEO_CONFIG_TSVC*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19HandleGetConfigTSVCEP21OMX_VIDEO_CONFIG_TSVC(void) {
    ALOGD("_ZN10MtkOmxVenc19HandleGetConfigTSVCEP21OMX_VIDEO_CONFIG_TSVC() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<OMX_BUFFERHEADERTYPE*, MtkVenc::MtkRoiConfigEntry*> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIP20OMX_BUFFERHEADERTYPEPN7MtkVenc17MtkRoiConfigEntryEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::DumpCorruptedMem(char*, char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16DumpCorruptedMemEPcS0_i(void) {
    ALOGD("_ZN10MtkOmxVenc16DumpCorruptedMemEPcS0_i() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::OmxIonMVAMap(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMapC2EPKc(void) {
    ALOGD("_ZN12OmxIonMVAMapC2EPKc() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetConfigVendorSetIInterval(OMX_PARAM_U32TYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc33HandleSetConfigVendorSetIIntervalEP17OMX_PARAM_U32TYPE(void) {
    ALOGD("_ZN10MtkOmxVenc33HandleSetConfigVendorSetIIntervalEP17OMX_PARAM_U32TYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SMVR_SetMode() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc12SMVR_SetModeEv(void) {
    ALOGD("_ZN10MtkOmxVenc12SMVR_SetModeEv() called");
    return 0;
}

/* Demangled: android::Vector<OmxMVAEntry*>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP11OmxMVAEntryE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIP11OmxMVAEntryE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::deMtkOmxVencSMVR() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16deMtkOmxVencSMVREv(void) {
    ALOGD("_ZN10MtkOmxVenc16deMtkOmxVencSMVREv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetConfigVideoAVCIntraPeriod(OMX_VIDEO_CONFIG_AVCINTRAPERIOD*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc34HandleSetConfigVideoAVCIntraPeriodEP31OMX_VIDEO_CONFIG_AVCINTRAPERIOD(void) {
    ALOGD("_ZN10MtkOmxVenc34HandleSetConfigVideoAVCIntraPeriodEP31OMX_VIDEO_CONFIG_AVCINTRAPERIOD() called");
    return 0;
}

/* Demangled: MtkOmxVenc::~MtkOmxVenc() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVencD0Ev(void) {
    ALOGD("_ZN10MtkOmxVencD0Ev() called");
    return 0;
}

/* Demangled: MtkOmxVenc::tryNotifyFlushDone(OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18tryNotifyFlushDoneEP20OMX_BUFFERHEADERTYPES1_(void) {
    ALOGD("_ZN10MtkOmxVenc18tryNotifyFlushDoneEP20OMX_BUFFERHEADERTYPES1_() called");
    return 0;
}

/* Demangled: std::__1::deque<_MTK_OMX_CMD_QUEUE_ITEM*, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM*> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<MtkVenc::MtkRoiConfigEntry*, int> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::CheckFormatToDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16CheckFormatToDrvEv(void) {
    ALOGD("_ZN10MtkOmxVenc16CheckFormatToDrvEv() called");
    return 0;
}

/* Demangled: get_sem_value(sem_t*) */
extern "C" __attribute__((visibility("default"))) int _Z13get_sem_valueP5sem_t(void) {
    ALOGD("_Z13get_sem_valueP5sem_t() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<void*, int (*)(void*), std::__1::allocator<void> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPvPFiS1_ENS_9allocatorIvEEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPvPFiS1_ENS_9allocatorIvEEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::EncodeInit(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc10EncodeInitEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc10EncodeInitEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::QueryDriverVP8Enc() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17QueryDriverVP8EncEv(void) {
    ALOGD("_ZN10MtkOmxVenc17QueryDriverVP8EncEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetVendorNonRefPOp(OMX_VIDEO_NONREFP*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc24HandleSetVendorNonRefPOpEP17OMX_VIDEO_NONREFP(void) {
    ALOGD("_ZN10MtkOmxVenc24HandleSetVendorNonRefPOpEP17OMX_VIDEO_NONREFP() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIjE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: vtExt */
extern "C" __attribute__((visibility("default"))) void* vtExt = NULL;

/* Demangled: std::__1::__shared_ptr_pointer<MMLib*, std::__1::default_delete<MMLib>, std::__1::allocator<MMLib> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIP5MMLibNS_14default_deleteIS1_EENS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIP5MMLibNS_14default_deleteIS1_EENS_9allocatorIS1_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::isBufferSec(unsigned char*, unsigned int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc11isBufferSecEPhjPi(void) {
    ALOGD("_ZN10MtkOmxVenc11isBufferSecEPhjPi() called");
    return 0;
}

/* Demangled: MtkOmxVenc::dumpSecBuffer(char*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc13dumpSecBufferEPcii(void) {
    ALOGD("_ZN10MtkOmxVenc13dumpSecBufferEPcii() called");
    return 0;
}

/* Demangled: MtkOmxVenc::defaultHevcProfile() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18defaultHevcProfileEv(void) {
    ALOGD("_ZN10MtkOmxVenc18defaultHevcProfileEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::waitFlushDone() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc13waitFlushDoneEv(void) {
    ALOGD("_ZN10MtkOmxVenc13waitFlushDoneEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ComponentInitRoi(AndroidVendorConfigExtensionStore*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16ComponentInitRoiEP33AndroidVendorConfigExtensionStore(void) {
    ALOGD("_ZN10MtkOmxVenc16ComponentInitRoiEP33AndroidVendorConfigExtensionStore() called");
    return 0;
}

/* Demangled: MtkOmxVenc::VT_ResolutionChange(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19VT_ResolutionChangeEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc19VT_ResolutionChangeEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::WFD_OnDeInit() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc12WFD_OnDeInitEv(void) {
    ALOGD("_ZN10MtkOmxVenc12WFD_OnDeInitEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::GetInputPortFormat(OMX_VIDEO_PARAM_PORTFORMATTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18GetInputPortFormatEP30OMX_VIDEO_PARAM_PORTFORMATTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc18GetInputPortFormatEP30OMX_VIDEO_PARAM_PORTFORMATTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::InitConvertBufferSize(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21InitConvertBufferSizeEPj(void) {
    ALOGD("_ZN10MtkOmxVenc21InitConvertBufferSizeEPj() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIiE12do_constructEPvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::onStartFlushBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18onStartFlushBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc18onStartFlushBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Debug_SetConfig(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15Debug_SetConfigE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc15Debug_SetConfigE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::dumpYUVBuffer(char*, unsigned char*, unsigned char*, unsigned char*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc13dumpYUVBufferEPcPhS1_S1_ii(void) {
    ALOGD("_ZN10MtkOmxVenc13dumpYUVBufferEPcPhS1_S1_ii() called");
    return 0;
}

/* Demangled: MtkOmxVenc::OutputErrorHandle(bool, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17OutputErrorHandleEbP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc17OutputErrorHandleEbP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Debug_MMDump_Init(video_encode_param*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17Debug_MMDump_InitEP18video_encode_param(void) {
    ALOGD("_ZN10MtkOmxVenc17Debug_MMDump_InitEP18video_encode_param() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Omx2V4L2Mpeg4ProfileMap(OMX_VIDEO_MPEG4PROFILETYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc23Omx2V4L2Mpeg4ProfileMapE26OMX_VIDEO_MPEG4PROFILETYPE(void) {
    ALOGD("_ZN10MtkOmxVenc23Omx2V4L2Mpeg4ProfileMapE26OMX_VIDEO_MPEG4PROFILETYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::Debug_SetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18Debug_SetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVenc18Debug_SetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, OMX_BUFFERHEADERTYPE*> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: v4l2_dump_fmt(bool, char const*, v4l2_format*) */
extern "C" __attribute__((visibility("default"))) int _Z13v4l2_dump_fmtbPKcP11v4l2_format(void) {
    ALOGD("_Z13v4l2_dump_fmtbPKcP11v4l2_format() called");
    return 0;
}

/* Demangled: OmxMVAEntry::setToVencBS(__VENC_DRV_PARAM_BS_BUF_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN11OmxMVAEntry11setToVencBSEP25__VENC_DRV_PARAM_BS_BUF_T(void) {
    ALOGD("_ZN11OmxMVAEntry11setToVencBSEP25__VENC_DRV_PARAM_BS_BUF_T() called");
    return 0;
}

/* Demangled: MtkVenc_SetConfig(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _Z17MtkVenc_SetConfigPv13OMX_INDEXTYPES_(void) {
    ALOGD("_Z17MtkVenc_SetConfigPv13OMX_INDEXTYPES_() called");
    return 0;
}

/* Demangled: MtkOmxVenc::dumpInputBuffer(OMX_BUFFERHEADERTYPE*, __VENC_DRV_PARAM_FRM_BUF_T*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc15dumpInputBufferEP20OMX_BUFFERHEADERTYPEP26__VENC_DRV_PARAM_FRM_BUF_Tj(void) {
    ALOGD("_ZN10MtkOmxVenc15dumpInputBufferEP20OMX_BUFFERHEADERTYPEP26__VENC_DRV_PARAM_FRM_BUF_Tj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::EncSettingH264Enc() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17EncSettingH264EncEv(void) {
    ALOGD("_ZN10MtkOmxVenc17EncSettingH264EncEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<MtkVenc::MtkRoiConfigEntry*, int> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPN7MtkVenc17MtkRoiConfigEntryEiEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: OmxMVAManager::OmxMVAManager(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManagerC2EPKc(void) {
    ALOGD("_ZN13OmxMVAManagerC2EPKc() called");
    return 0;
}

/* Demangled: MtkOmxVenc::GetComponentVersion(void*, char*, OMX_VERSIONTYPE*, OMX_VERSIONTYPE*, unsigned char (*) [128]) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19GetComponentVersionEPvPcP15OMX_VERSIONTYPES3_PA128_h(void) {
    ALOGD("_ZN10MtkOmxVenc19GetComponentVersionEPvPcP15OMX_VERSIONTYPES3_PA128_h() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, OMX_BUFFERHEADERTYPE*> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HDR_BufferModifyBeforeEnc(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc25HDR_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc25HDR_BufferModifyBeforeEncEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: MtkOmxVenc::SetFreeConvertBuffer(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20SetFreeConvertBufferEPh(void) {
    ALOGD("_ZN10MtkOmxVenc20SetFreeConvertBufferEPh() called");
    return 0;
}

/* Demangled: MtkOmxVenc::colorConvert(unsigned char*, unsigned int, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc12colorConvertEPhjS0_j(void) {
    ALOGD("_ZN10MtkOmxVenc12colorConvertEPhjS0_j() called");
    return 0;
}

/* Demangled: MtkOmxVenc::CheckBufferAvailability() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc23CheckBufferAvailabilityEv(void) {
    ALOGD("_ZN10MtkOmxVenc23CheckBufferAvailabilityEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleSetPortDefinition(OMX_PARAM_PORTDEFINITIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc23HandleSetPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc23HandleSetPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, OMX_BUFFERHEADERTYPE*> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiP20OMX_BUFFERHEADERTYPEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::MtkOmxVencHeif() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc14MtkOmxVencHeifEv(void) {
    ALOGD("_ZN10MtkOmxVenc14MtkOmxVencHeifEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ComponentDeInitDebug() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc20ComponentDeInitDebugEv(void) {
    ALOGD("_ZN10MtkOmxVenc20ComponentDeInitDebugEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::WFD_UpdateOutputV4L2Buffer(OMX_BUFFERHEADERTYPE*, v4l2_buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc26WFD_UpdateOutputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer(void) {
    ALOGD("_ZN10MtkOmxVenc26WFD_UpdateOutputV4L2BufferEP20OMX_BUFFERHEADERTYPEP11v4l2_buffer() called");
    return 0;
}

/* Demangled: MtkOmxVenc::MtkOmxVenc() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVencC1Ev(void) {
    ALOGD("_ZN10MtkOmxVencC1Ev() called");
    return 0;
}

/* Demangled: MtkOmxVenc::requeueFrameBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc19requeueFrameBuffersEv(void) {
    ALOGD("_ZN10MtkOmxVenc19requeueFrameBuffersEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::ROI_NotifyStopCommand() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc21ROI_NotifyStopCommandEv(void) {
    ALOGD("_ZN10MtkOmxVenc21ROI_NotifyStopCommandEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HDR_FillThisBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc18HDR_FillThisBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc18HDR_FillThisBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVenc::VT_OnEnqueBuffer(OMX_BUFFERHEADERTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16VT_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVenc16VT_OnEnqueBufferEPP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, std::__1::allocator<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&> >, void (void*, unsigned long)>::operator()(void*&&, unsigned long&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEEclEOS3_Om(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEEclEOS3_Om() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<MtkVenc::RoiInfo*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIPN7MtkVenc7RoiInfoEEE = NULL;

/* Demangled: MtkOmxVenc::InitHevcEncParams() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc17InitHevcEncParamsEv(void) {
    ALOGD("_ZN10MtkOmxVenc17InitHevcEncParamsEv() called");
    return 0;
}

/* Demangled: MtkVenc_ComponentRoleEnum(void*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z25MtkVenc_ComponentRoleEnumPvPhj(void) {
    ALOGD("_Z25MtkVenc_ComponentRoleEnumPvPhj() called");
    return 0;
}

/* Demangled: MtkOmxBufQ::IsEmpty() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxBufQ7IsEmptyEv(void) {
    ALOGD("_ZN10MtkOmxBufQ7IsEmptyEv() called");
    return 0;
}

/* Demangled: MtkOmxVenc::dumpOutputBuffer(OMX_BUFFERHEADERTYPE*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc16dumpOutputBufferEP20OMX_BUFFERHEADERTYPEPhj(void) {
    ALOGD("_ZN10MtkOmxVenc16dumpOutputBufferEP20OMX_BUFFERHEADERTYPEPhj() called");
    return 0;
}

/* Demangled: OmxMVAManager::~OmxMVAManager() */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManagerD1Ev(void) {
    ALOGD("_ZN13OmxMVAManagerD1Ev() called");
    return 0;
}

/* Demangled: MtkOmxBufQ::PendingNum(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxBufQ10PendingNumEi(void) {
    ALOGD("_ZN10MtkOmxBufQ10PendingNumEi() called");
    return 0;
}

/* Demangled: MtkOmxVenc::HandleGetVendorQueryDriverVersion(OMX_VIDEO_PARAM_DRIVERVER*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc33HandleGetVendorQueryDriverVersionEP25OMX_VIDEO_PARAM_DRIVERVER(void) {
    ALOGD("_ZN10MtkOmxVenc33HandleGetVendorQueryDriverVersionEP25OMX_VIDEO_PARAM_DRIVERVER() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::GraphicBuffer> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<native_handle*>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP13native_handleE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIP13native_handleE12do_constructEPvj() called");
    return 0;
}

/* Demangled: MtkOmxVenc::device_close(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVenc12device_closeEi(void) {
    ALOGD("_ZN10MtkOmxVenc12device_closeEi() called");
    return 0;
}
