/*
 * Reverse-Engineered Source for: libMtkOmxVdecEx.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libMtkOmxVdecEx"

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
#include "libMtkOmxVdecEx.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_VIDEO "/dev/video"

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
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: OmxIonMVAMap::getIonPhysicalAddress(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMap21getIonPhysicalAddressEii(void) {
    ALOGD("_ZN12OmxIonMVAMap21getIonPhysicalAddressEii() called");
    return 0;
}

/* Demangled: MtkVdec_GetConfig(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _Z17MtkVdec_GetConfigPv13OMX_INDEXTYPES_(void) {
    ALOGD("_Z17MtkVdec_GetConfigPv13OMX_INDEXTYPES_() called");
    return 0;
}

/* Demangled: MtkOmxVdec::ConvertFrame(MtkOmxVdec::_FrmBufStruct*, MtkOmxVdec::_FrmBufStruct*, int*, OMX_BOOL) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec12ConvertFrameEPNS_13_FrmBufStructES1_Pi8OMX_BOOL(void) {
    ALOGD("_ZN10MtkOmxVdec12ConvertFrameEPNS_13_FrmBufStructES1_Pi8OMX_BOOL() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleColorAspectChange(android::ColorAspects) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec23HandleColorAspectChangeEN7android12ColorAspectsE(void) {
    ALOGD("_ZN10MtkOmxVdec23HandleColorAspectChangeEN7android12ColorAspectsE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::getReconfigOutputPortSetting() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec28getReconfigOutputPortSettingEv(void) {
    ALOGD("_ZN10MtkOmxVdec28getReconfigOutputPortSettingEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleSetMtkOmxVdecThumbnailMode() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec32HandleSetMtkOmxVdecThumbnailModeEv(void) {
    ALOGD("_ZN10MtkOmxVdec32HandleSetMtkOmxVdecThumbnailModeEv() called");
    return 0;
}

/* Demangled: MtkV4L2Device::setFormatBistream(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device17setFormatBistreamEjj(void) {
    ALOGD("_ZN13MtkV4L2Device17setFormatBistreamEjj() called");
    return 0;
}

/* Demangled: MtkV4L2Device::setDevicePollInterrupt() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device22setDevicePollInterruptEv(void) {
    ALOGD("_ZN13MtkV4L2Device22setDevicePollInterruptEv() called");
    return 0;
}

/* Demangled: MtkVdec_SetConfig(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _Z17MtkVdec_SetConfigPv13OMX_INDEXTYPES_(void) {
    ALOGD("_Z17MtkVdec_SetConfigPv13OMX_INDEXTYPES_() called");
    return 0;
}

/* Demangled: MtkOmxVdec::FreeGeneralBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec17FreeGeneralBufferEv(void) {
    ALOGD("_ZN10MtkOmxVdec17FreeGeneralBufferEv() called");
    return 0;
}

/* Demangled: OmxMVAManager::init(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager4initEPKcS1_(void) {
    ALOGD("_ZN13OmxMVAManager4initEPKcS1_() called");
    return 0;
}

/* Demangled: MtkVdec_SendCommand(void*, OMX_COMMANDTYPE, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _Z19MtkVdec_SendCommandPv15OMX_COMMANDTYPEjS_(void) {
    ALOGD("_Z19MtkVdec_SendCommandPv15OMX_COMMANDTYPEjS_() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetCCQCriticalValue() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec19GetCCQCriticalValueEv(void) {
    ALOGD("_ZN10MtkOmxVdec19GetCCQCriticalValueEv() called");
    return 0;
}

/* Demangled: android::Vector<long long>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIxE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIxE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<v4l2_buffer*>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP11v4l2_bufferE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIP11v4l2_bufferE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::CodecTypeToString(MTK_VDEC_CODEC_ID, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec17CodecTypeToStringE17MTK_VDEC_CODEC_IDPc(void) {
    ALOGD("_ZN10MtkOmxVdec17CodecTypeToStringE17MTK_VDEC_CODEC_IDPc() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: MtkOmxVdec::CopyHDRColorDesc() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec16CopyHDRColorDescEv(void) {
    ALOGD("_ZN10MtkOmxVdec16CopyHDRColorDescEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleSetPortDefinition(OMX_PARAM_PORTDEFINITIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec23HandleSetPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec23HandleSetPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleColorConvertForFillBufferDone(unsigned int, OMX_BOOL) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec35HandleColorConvertForFillBufferDoneEj8OMX_BOOL(void) {
    ALOGD("_ZN10MtkOmxVdec35HandleColorConvertForFillBufferDoneEj8OMX_BOOL() called");
    return 0;
}

/* Demangled: MtkV4L2Device::IsStreamOn(V4L2QueueType) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device10IsStreamOnE13V4L2QueueType(void) {
    ALOGD("_ZN13MtkV4L2Device10IsStreamOnE13V4L2QueueType() called");
    return 0;
}

/* Demangled: android::Vector<v4l2_buffer*>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP11v4l2_bufferE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIP11v4l2_bufferE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetDateTimeStr(char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec14GetDateTimeStrEPcj(void) {
    ALOGD("_ZN10MtkOmxVdec14GetDateTimeStrEPcj() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: MtkOmxVdec::IsNotUsedBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec15IsNotUsedBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec15IsNotUsedBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::StreamOnFrameBufferQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec24StreamOnFrameBufferQueueEv(void) {
    ALOGD("_ZN10MtkOmxVdec24StreamOnFrameBufferQueueEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::AppInsight_OnInit(MTK_VDEC_CODEC_ID, v4l2_formatdesc, _VDEC_DRV_COLOR_PRIMARIES_E) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec17AppInsight_OnInitE17MTK_VDEC_CODEC_ID15v4l2_formatdesc27_VDEC_DRV_COLOR_PRIMARIES_E(void) {
    ALOGD("_ZN10MtkOmxVdec17AppInsight_OnInitE17MTK_VDEC_CODEC_ID15v4l2_formatdesc27_VDEC_DRV_COLOR_PRIMARIES_E() called");
    return 0;
}

/* Demangled: thread_exit_handler(int) */
extern "C" __attribute__((visibility("default"))) int _Z19thread_exit_handleri(void) {
    ALOGD("_Z19thread_exit_handleri() called");
    return 0;
}

/* Exported Object: AV1ProfileMapTable */
extern "C" __attribute__((visibility("default"))) void* AV1ProfileMapTable = NULL;

/* Demangled: MtkOmxVdec::FreeIonHandle(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec13FreeIonHandleEi(void) {
    ALOGD("_ZN10MtkOmxVdec13FreeIonHandleEi() called");
    return 0;
}

/* Demangled: MtkOmxVdec::needColorConvert() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec16needColorConvertEv(void) {
    ALOGD("_ZN10MtkOmxVdec16needColorConvertEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetupMetaIonHandleAndGetFrame(__VDEC_DRV_FRAMEBUF_T*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec29SetupMetaIonHandleAndGetFrameEP21__VDEC_DRV_FRAMEBUF_TPh(void) {
    ALOGD("_ZN10MtkOmxVdec29SetupMetaIonHandleAndGetFrameEP21__VDEC_DRV_FRAMEBUF_TPh() called");
    return 0;
}

/* Demangled: OmxMVAManager::getMapIndexFromHndl(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager19getMapIndexFromHndlEPv(void) {
    ALOGD("_ZN13OmxMVAManager19getMapIndexFromHndlEPv() called");
    return 0;
}

/* Demangled: MtkV4L2Device::StreamOnFrameBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device19StreamOnFrameBufferEv(void) {
    ALOGD("_ZN13MtkV4L2Device19StreamOnFrameBufferEv() called");
    return 0;
}

/* Demangled: void std::__1::__sort<bool (*&)(long long, long long), long long*>(long long*, long long*, bool (*&)(long long, long long)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__sortIRPFbxxEPxEEvT0_S5_T_(void) {
    ALOGD("_ZNSt3__16__sortIRPFbxxEPxEEvT0_S5_T_() called");
    return 0;
}

/* Demangled: MtkOmxVdecConvertP1Thread(void*) */
extern "C" __attribute__((visibility("default"))) int _Z25MtkOmxVdecConvertP1ThreadPv(void) {
    ALOGD("_Z25MtkOmxVdecConvertP1ThreadPv() called");
    return 0;
}

/* Demangled: CmdThreadRequestHandler::CmdThreadRequestHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN23CmdThreadRequestHandlerC2Ev(void) {
    ALOGD("_ZN23CmdThreadRequestHandlerC2Ev() called");
    return 0;
}

/* Demangled: MtkOmxVdec::Debug_MMDump(MtkOmxVdec::_FrmBufStruct*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec12Debug_MMDumpEPNS_13_FrmBufStructE(void) {
    ALOGD("_ZN10MtkOmxVdec12Debug_MMDumpEPNS_13_FrmBufStructE() called");
    return 0;
}

/* Demangled: MTK_OMX_FREE(void*) */
extern "C" __attribute__((visibility("default"))) int _Z12MTK_OMX_FREEPv(void) {
    ALOGD("_Z12MTK_OMX_FREEPv() called");
    return 0;
}

/* Demangled: OmxMVAManager::getMapIndexFromVa(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager17getMapIndexFromVaEPv(void) {
    ALOGD("_ZN13OmxMVAManager17getMapIndexFromVaEPv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::QureyVideoProfileLevel(unsigned int, OMX_VIDEO_PARAM_PROFILELEVELTYPE*, MTK_VDEC_PROFILE_MAP_ENTRY*, unsigned int, MTK_VDEC_LEVEL_MAP_ENTRY*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec22QureyVideoProfileLevelEjP32OMX_VIDEO_PARAM_PROFILELEVELTYPEP26MTK_VDEC_PROFILE_MAP_ENTRYjP24MTK_VDEC_LEVEL_MAP_ENTRYj(void) {
    ALOGD("_ZN10MtkOmxVdec22QureyVideoProfileLevelEjP32OMX_VIDEO_PARAM_PROFILELEVELTYPEP26MTK_VDEC_PROFILE_MAP_ENTRYjP24MTK_VDEC_LEVEL_MAP_ENTRYj() called");
    return 0;
}

/* Demangled: MtkV4L2Device::getInterlacing(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device14getInterlacingEPj(void) {
    ALOGD("_ZN13MtkV4L2Device14getInterlacingEPj() called");
    return 0;
}

/* Demangled: MtkV4L2Device::requestBufferBitstream(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device22requestBufferBitstreamEj(void) {
    ALOGD("_ZN13MtkV4L2Device22requestBufferBitstreamEj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::InsertInputBuf(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec14InsertInputBufEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec14InsertInputBufEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::EnableRRPriority(OMX_BOOL) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec16EnableRRPriorityE8OMX_BOOL(void) {
    ALOGD("_ZN10MtkOmxVdec16EnableRRPriorityE8OMX_BOOL() called");
    return 0;
}

/* Exported Object: MPEG2ProfileMapTable */
extern "C" __attribute__((visibility("default"))) void* MPEG2ProfileMapTable = NULL;

/* Demangled: MtkOmxVdec::SetColorFormat_MTKYUV_10BIT_H_JUMP(OMX_PARAM_PORTDEFINITIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec34SetColorFormat_MTKYUV_10BIT_H_JUMPEP28OMX_PARAM_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec34SetColorFormat_MTKYUV_10BIT_H_JUMPEP28OMX_PARAM_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Demangled: MtkV4L2Device::getPixelFormat(_VDEC_DRV_PIXEL_FORMAT_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device14getPixelFormatEP24_VDEC_DRV_PIXEL_FORMAT_T(void) {
    ALOGD("_ZN13MtkV4L2Device14getPixelFormatEP24_VDEC_DRV_PIXEL_FORMAT_T() called");
    return 0;
}

/* Demangled: MtkOmxVdec::OMXGetOutputBufferFd(__VDEC_DRV_FRAMEBUF_T**, int*, int*, unsigned int, char, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec20OMXGetOutputBufferFdEPP21__VDEC_DRV_FRAMEBUF_TPiS3_jcPv(void) {
    ALOGD("_ZN10MtkOmxVdec20OMXGetOutputBufferFdEPP21__VDEC_DRV_FRAMEBUF_TPiS3_jcPv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::getIonFdByHeaderIndex(int, int*, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec21getIonFdByHeaderIndexEiPiiS0_(void) {
    ALOGD("_ZN10MtkOmxVdec21getIonFdByHeaderIndexEiPiiS0_() called");
    return 0;
}

/* Demangled: MtkOmxVdec::UseBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec9UseBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_jPh(void) {
    ALOGD("_ZN10MtkOmxVdec9UseBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_jPh() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetupBufferInfoForMJPEG() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec23SetupBufferInfoForMJPEGEv(void) {
    ALOGD("_ZN10MtkOmxVdec23SetupBufferInfoForMJPEGEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_() called");
    return 0;
}

/* Demangled: OmxMVAManager::getOmxMVAFromVA(void*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager15getOmxMVAFromVAEPvPj(void) {
    ALOGD("_ZN13OmxMVAManager15getOmxMVAFromVAEPvPj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetComponentVersion(void*, char*, OMX_VERSIONTYPE*, OMX_VERSIONTYPE*, unsigned char (*) [128]) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec19GetComponentVersionEPvPcP15OMX_VERSIONTYPES3_PA128_h(void) {
    ALOGD("_ZN10MtkOmxVdec19GetComponentVersionEPvPcP15OMX_VERSIONTYPES3_PA128_h() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleFillBufferDone_FlushCache(OMX_BUFFERHEADERTYPE*, OMX_BOOL) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec31HandleFillBufferDone_FlushCacheEP20OMX_BUFFERHEADERTYPE8OMX_BOOL(void) {
    ALOGD("_ZN10MtkOmxVdec31HandleFillBufferDone_FlushCacheEP20OMX_BUFFERHEADERTYPE8OMX_BOOL() called");
    return 0;
}

/* Demangled: MtkV4L2Device::getAspectRatio(unsigned short*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device14getAspectRatioEPtS0_(void) {
    ALOGD("_ZN13MtkV4L2Device14getAspectRatioEPtS0_() called");
    return 0;
}

/* Demangled: MtkOmxVdecDecodeThread(void*) */
extern "C" __attribute__((visibility("default"))) int _Z22MtkOmxVdecDecodeThreadPv(void) {
    ALOGD("_Z22MtkOmxVdecDecodeThreadPv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetBufferCheckSum(char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec17GetBufferCheckSumEPcj(void) {
    ALOGD("_ZN10MtkOmxVdec17GetBufferCheckSumEPcj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::DeQueueMDPBufferRecoder() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec23DeQueueMDPBufferRecoderEv(void) {
    ALOGD("_ZN10MtkOmxVdec23DeQueueMDPBufferRecoderEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<_MTK_OMX_CMD_QUEUE_ITEM**, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM**> >::push_back(_MTK_OMX_CMD_QUEUE_ITEM**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Demangled: MtkOmxVdec::pixcelFormatToColorFormat(_VDEC_DRV_PIXEL_FORMAT_T, char) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec25pixcelFormatToColorFormatE24_VDEC_DRV_PIXEL_FORMAT_Tc(void) {
    ALOGD("_ZN10MtkOmxVdec25pixcelFormatToColorFormatE24_VDEC_DRV_PIXEL_FORMAT_Tc() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::FillThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec14FillThisBufferEPvP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec14FillThisBufferEPvP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: OmxIonMVAMap::getIonFd() */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMap8getIonFdEv(void) {
    ALOGD("_ZN12OmxIonMVAMap8getIonFdEv() called");
    return 0;
}

/* Demangled: MtkV4L2Device::initialize(V4L2DeviceType, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device10initializeE14V4L2DeviceTypePv(void) {
    ALOGD("_ZN13MtkV4L2Device10initializeE14V4L2DeviceTypePv() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIiE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<long long>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIxE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIxE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: writeBufferToFile(char const*, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z17writeBufferToFilePKcPvj(void) {
    ALOGD("_Z17writeBufferToFilePKcPvj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::DeQueueOutputColorConvertSrcBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec34DeQueueOutputColorConvertSrcBufferEv(void) {
    ALOGD("_ZN10MtkOmxVdec34DeQueueOutputColorConvertSrcBufferEv() called");
    return 0;
}

/* Exported Object: format_fourcc */
extern "C" __attribute__((visibility("default"))) void* format_fourcc = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: get_sem_value(sem_t*) */
extern "C" __attribute__((visibility("default"))) int _Z13get_sem_valueP5sem_t(void) {
    ALOGD("_Z13get_sem_valueP5sem_t() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SendCommand(void*, OMX_COMMANDTYPE, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec11SendCommandEPv15OMX_COMMANDTYPEjS0_(void) {
    ALOGD("_ZN10MtkOmxVdec11SendCommandEPv15OMX_COMMANDTYPEjS0_() called");
    return 0;
}

/* Demangled: MtkOmxVdec::DumpInputEnabled() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec16DumpInputEnabledEv(void) {
    ALOGD("_ZN10MtkOmxVdec16DumpInputEnabledEv() called");
    return 0;
}

/* Demangled: android::Vector<long long>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIxE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIxE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<_FenceAndBufIdxMap> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorI18_FenceAndBufIdxMapEE = NULL;

/* Demangled: OmxMVAManager::getOmxInfoFromVA(void*, _VBufInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager16getOmxInfoFromVAEPvP9_VBufInfo(void) {
    ALOGD("_ZN13OmxMVAManager16getOmxInfoFromVAEPvP9_VBufInfo() called");
    return 0;
}

/* Demangled: OmxMVAManager::~OmxMVAManager() */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManagerD2Ev(void) {
    ALOGD("_ZN13OmxMVAManagerD2Ev() called");
    return 0;
}

/* Demangled: android::Vector<OmxMVAEntry*>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP11OmxMVAEntryE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIP11OmxMVAEntryE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxSetCoreGlobal */
extern "C" __attribute__((visibility("default"))) int MtkOmxSetCoreGlobal(void) {
    ALOGD("MtkOmxSetCoreGlobal() called");
    return 0;
}

/* Demangled: MtkOmxVdec::FdDebugDump() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec11FdDebugDumpEv(void) {
    ALOGD("_ZN10MtkOmxVdec11FdDebugDumpEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandlePortEnable(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec16HandlePortEnableEj(void) {
    ALOGD("_ZN10MtkOmxVdec16HandlePortEnableEj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetMetaHandleFromBufferPtr(unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec26GetMetaHandleFromBufferPtrEPhPj(void) {
    ALOGD("_ZN10MtkOmxVdec26GetMetaHandleFromBufferPtrEPhPj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleGetDescribeColorFormat(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec28HandleGetDescribeColorFormatEPv(void) {
    ALOGD("_ZN10MtkOmxVdec28HandleGetDescribeColorFormatEPv() called");
    return 0;
}

/* Demangled: MtkV4L2Device::flushBitstreamQ() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device15flushBitstreamQEv(void) {
    ALOGD("_ZN13MtkV4L2Device15flushBitstreamQEv() called");
    return 0;
}

/* Demangled: std::__1::deque<_MTK_OMX_CMD_QUEUE_ITEM*, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM*> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: OmxMVAManager::freeOmxMVAAll() */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager13freeOmxMVAAllEv(void) {
    ALOGD("_ZN13OmxMVAManager13freeOmxMVAAllEv() called");
    return 0;
}

/* Demangled: android::Vector<long long>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIxE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIxE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: MtkV4L2Device::FindVideoOpenDev() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device16FindVideoOpenDevEv(void) {
    ALOGD("_ZN13MtkV4L2Device16FindVideoOpenDevEv() called");
    return 0;
}

/* Demangled: V4L2QueueRecorder::~V4L2QueueRecorder() */
extern "C" __attribute__((visibility("default"))) int _ZN17V4L2QueueRecorderD1Ev(void) {
    ALOGD("_ZN17V4L2QueueRecorderD1Ev() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<MMLib>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrI5MMLibED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrI5MMLibED2Ev() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetupMetaSecureHandleAndGetFrame(__VDEC_DRV_FRAMEBUF_T*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec32SetupMetaSecureHandleAndGetFrameEP21__VDEC_DRV_FRAMEBUF_TPh(void) {
    ALOGD("_ZN10MtkOmxVdec32SetupMetaSecureHandleAndGetFrameEP21__VDEC_DRV_FRAMEBUF_TPh() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetupBufferInfoForVP9() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec21SetupBufferInfoForVP9Ev(void) {
    ALOGD("_ZN10MtkOmxVdec21SetupBufferInfoForVP9Ev() called");
    return 0;
}

/* Demangled: MtkOmxVdec::UseAndroidNativeBuffer_CheckNormalBuffer(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec40UseAndroidNativeBuffer_CheckNormalBufferEPvS0_(void) {
    ALOGD("_ZN10MtkOmxVdec40UseAndroidNativeBuffer_CheckNormalBufferEPvS0_() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetColorFormat_MTKYUV_UFO_10BIT_H_JUMP(OMX_PARAM_PORTDEFINITIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec38SetColorFormat_MTKYUV_UFO_10BIT_H_JUMPEP28OMX_PARAM_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec38SetColorFormat_MTKYUV_UFO_10BIT_H_JUMPEP28OMX_PARAM_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::InitVc1Params() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec13InitVc1ParamsEv(void) {
    ALOGD("_ZN10MtkOmxVdec13InitVc1ParamsEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIiE12do_constructEPvj() called");
    return 0;
}

/* Demangled: V4L2QueueRecorder::getSize() */
extern "C" __attribute__((visibility("default"))) int _ZN17V4L2QueueRecorder7getSizeEv(void) {
    ALOGD("_ZN17V4L2QueueRecorder7getSizeEv() called");
    return 0;
}

/* Demangled: show_uptime() */
extern "C" __attribute__((visibility("default"))) int _Z11show_uptimev(void) {
    ALOGD("_Z11show_uptimev() called");
    return 0;
}

/* Demangled: MtkVdec_FillThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _Z22MtkVdec_FillThisBufferPvP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_Z22MtkVdec_FillThisBufferPvP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::handlePendingEvent() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec18handlePendingEventEv(void) {
    ALOGD("_ZN10MtkOmxVdec18handlePendingEventEv() called");
    return 0;
}

/* Demangled: MtkV4L2Device::getColorDesc(__VDEC_DRV_COLORDESC_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device12getColorDescEP22__VDEC_DRV_COLORDESC_T(void) {
    ALOGD("_ZN13MtkV4L2Device12getColorDescEP22__VDEC_DRV_COLORDESC_T() called");
    return 0;
}

/* Demangled: MtkV4L2Device::setNALSizeLength(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device16setNALSizeLengthEj(void) {
    ALOGD("_ZN13MtkV4L2Device16setNALSizeLengthEj() called");
    return 0;
}

/* Demangled: std::__1::function<void (void*, unsigned long)>::function<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, void>(std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__18functionIFvPvmEEC2INS_6__bindIRPFvS1_yjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSC_ILi2EEERN6MMDump4sizeERNSJ_5widthERNSJ_6heightERNSJ_11color_spaceERNSJ_12color_formatERNSJ_6strideERNSJ_11sliceheightERS7_EEEvEET_(void) {
    ALOGD("_ZNSt3__18functionIFvPvmEEC2INS_6__bindIRPFvS1_yjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSC_ILi2EEERN6MMDump4sizeERNSJ_5widthERNSJ_6heightERNSJ_11color_spaceERNSJ_12color_formatERNSJ_6strideERNSJ_11sliceheightERS7_EEEvEET_() called");
    return 0;
}

/* Exported Object: OmxVdecPerfLogValue */
extern "C" __attribute__((visibility("default"))) void* OmxVdecPerfLogValue = NULL;

/* Demangled: MtkOmxVdec::InitMpeg4Params() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec15InitMpeg4ParamsEv(void) {
    ALOGD("_ZN10MtkOmxVdec15InitMpeg4ParamsEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::DescribeFlexibleColorFormat(android::DescribeColorFormatParams*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec27DescribeFlexibleColorFormatEPN7android25DescribeColorFormatParamsE(void) {
    ALOGD("_ZN10MtkOmxVdec27DescribeFlexibleColorFormatEPN7android25DescribeColorFormatParamsE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::WaitFence(OMX_BUFFERHEADERTYPE*, OMX_BOOL) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec9WaitFenceEP20OMX_BUFFERHEADERTYPE8OMX_BOOL(void) {
    ALOGD("_ZN10MtkOmxVdec9WaitFenceEP20OMX_BUFFERHEADERTYPE8OMX_BOOL() called");
    return 0;
}

/* Demangled: android::Vector<_FenceAndBufIdxMap>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI18_FenceAndBufIdxMapE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorI18_FenceAndBufIdxMapE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::newEntryWithVa(void*, int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMap14newEntryWithVaEPviS0_(void) {
    ALOGD("_ZN12OmxIonMVAMap14newEntryWithVaEPviS0_() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::~OmxIonMVAMap() */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMapD2Ev(void) {
    ALOGD("_ZN12OmxIonMVAMapD2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: android::Vector<long long>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIxE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIxE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: H263ProfileMapTable */
extern "C" __attribute__((visibility("default"))) void* H263ProfileMapTable = NULL;

/* Demangled: MtkV4L2Device::~MtkV4L2Device() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2DeviceD2Ev(void) {
    ALOGD("_ZN13MtkV4L2DeviceD2Ev() called");
    return 0;
}

/* Demangled: MtkOmxVdec::ReturnPendingInputBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec25ReturnPendingInputBuffersEv(void) {
    ALOGD("_ZN10MtkOmxVdec25ReturnPendingInputBuffersEv() called");
    return 0;
}

/* Demangled: MtkV4L2Device::StreamOnBitstream() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device17StreamOnBitstreamEv(void) {
    ALOGD("_ZN13MtkV4L2Device17StreamOnBitstreamEv() called");
    return 0;
}

/* Demangled: std::__1::deque<_MTK_OMX_CMD_QUEUE_ITEM*, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM*> >::pop_front() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE9pop_frontEv(void) {
    ALOGD("_ZNSt3__15dequeIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE9pop_frontEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::initCodec_PortReconfig(OMX_BUFFERHEADERTYPE*, int, int, unsigned short, unsigned short, OMX_BOOL*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec22initCodec_PortReconfigEP20OMX_BUFFERHEADERTYPEiittP8OMX_BOOL(void) {
    ALOGD("_ZN10MtkOmxVdec22initCodec_PortReconfigEP20OMX_BUFFERHEADERTYPEiittP8OMX_BOOL() called");
    return 0;
}

/* Demangled: MtkV4L2Device::SetupBufferFlag(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device15SetupBufferFlagEi(void) {
    ALOGD("_ZN13MtkV4L2Device15SetupBufferFlagEi() called");
    return 0;
}

/* Demangled: MtkV4L2Device::updateDebugInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device15updateDebugInfoEv(void) {
    ALOGD("_ZN13MtkV4L2Device15updateDebugInfoEv() called");
    return 0;
}

/* Demangled: MTK_OMX_MEMALIGN(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z16MTK_OMX_MEMALIGNjj(void) {
    ALOGD("_Z16MTK_OMX_MEMALIGNjj() called");
    return 0;
}

/* Demangled: MtkOmxCmdQueue::MtkOmxCmdQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkOmxCmdQueueC2Ev(void) {
    ALOGD("_ZN14MtkOmxCmdQueueC2Ev() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: MtkV4L2Device::dumpDebugInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device13dumpDebugInfoEv(void) {
    ALOGD("_ZN13MtkV4L2Device13dumpDebugInfoEv() called");
    return 0;
}

/* Demangled: MtkV4L2Device::setDecodeMode(__VDEC_DRV_SET_DECODE_MODE_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device13setDecodeModeEP28__VDEC_DRV_SET_DECODE_MODE_T(void) {
    ALOGD("_ZN13MtkV4L2Device13setDecodeModeEP28__VDEC_DRV_SET_DECODE_MODE_T() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::deleteKeyAfterSearch(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMap20deleteKeyAfterSearchEPvi(void) {
    ALOGD("_ZN12OmxIonMVAMap20deleteKeyAfterSearchEPvi() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: MtkV4L2Device::checkSupportGeneralBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device25checkSupportGeneralBufferEv(void) {
    ALOGD("_ZN13MtkV4L2Device25checkSupportGeneralBufferEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::UseAndroidNativeBuffer_CheckSecureBuffer(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec40UseAndroidNativeBuffer_CheckSecureBufferEPvS0_(void) {
    ALOGD("_ZN10MtkOmxVdec40UseAndroidNativeBuffer_CheckSecureBufferEPvS0_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<MMLib*, std::__1::default_delete<MMLib>, std::__1::allocator<MMLib> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIP5MMLibNS_14default_deleteIS1_EENS_9allocatorIS1_EEEE = NULL;

/* Demangled: OmxMVAManager::getOmxMVAFromVAToVencFrm(void*, __VENC_DRV_PARAM_FRM_BUF_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager24getOmxMVAFromVAToVencFrmEPvP26__VENC_DRV_PARAM_FRM_BUF_T(void) {
    ALOGD("_ZN13OmxMVAManager24getOmxMVAFromVAToVencFrmEPvP26__VENC_DRV_PARAM_FRM_BUF_T() called");
    return 0;
}

/* Demangled: OmxMVAManager::OmxMVAManager() */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManagerC1Ev(void) {
    ALOGD("_ZN13OmxMVAManagerC1Ev() called");
    return 0;
}

/* Demangled: MtkOmxVdec::EmptyThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec15EmptyThisBufferEPvP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec15EmptyThisBufferEPvP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::QueryDriverFormat(__VDEC_DRV_QUERY_VIDEO_FORMAT_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec17QueryDriverFormatEP31__VDEC_DRV_QUERY_VIDEO_FORMAT_T(void) {
    ALOGD("_ZN10MtkOmxVdec17QueryDriverFormatEP31__VDEC_DRV_QUERY_VIDEO_FORMAT_T() called");
    return 0;
}

/* Demangled: MtkOmxVdec::BufQWDT(WDT_BUFFER_TYPE, long long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec7BufQWDTE15WDT_BUFFER_TYPExj(void) {
    ALOGD("_ZN10MtkOmxVdec7BufQWDTE15WDT_BUFFER_TYPExj() called");
    return 0;
}

/* Demangled: MtkV4L2Device::setWaitKeyFrame(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device15setWaitKeyFrameEj(void) {
    ALOGD("_ZN13MtkV4L2Device15setWaitKeyFrameEj() called");
    return 0;
}

/* Exported Object: VP8ProfileMapTable */
extern "C" __attribute__((visibility("default"))) void* VP8ProfileMapTable = NULL;

/* Demangled: MtkV4L2Device::CheckState(MtkV4L2Device_State) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device10CheckStateE19MtkV4L2Device_State(void) {
    ALOGD("_ZN13MtkV4L2Device10CheckStateE19MtkV4L2Device_State() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<void*, int (*)(void*), std::__1::allocator<void> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPvPFiS1_ENS_9allocatorIvEEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPvPFiS1_ENS_9allocatorIvEEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: OmxIonMVAEntry::hasThisKey(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14OmxIonMVAEntry10hasThisKeyEi(void) {
    ALOGD("_ZN14OmxIonMVAEntry10hasThisKeyEi() called");
    return 0;
}

/* Demangled: MTK_OMX_MEMSET(void*, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z14MTK_OMX_MEMSETPvij(void) {
    ALOGD("_Z14MTK_OMX_MEMSETPvij() called");
    return 0;
}

/* Demangled: MtkVdec_AllocateBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z22MtkVdec_AllocateBufferPvPP20OMX_BUFFERHEADERTYPEjS_j(void) {
    ALOGD("_Z22MtkVdec_AllocateBufferPvPP20OMX_BUFFERHEADERTYPEjS_j() called");
    return 0;
}

/* Demangled: MtkV4L2Device::dequeueFrameBuffer(int*, MtkV4L2Device_FRAME_BUF_PARAM*) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device18dequeueFrameBufferEPiP29MtkV4L2Device_FRAME_BUF_PARAM(void) {
    ALOGD("_ZN13MtkV4L2Device18dequeueFrameBufferEPiP29MtkV4L2Device_FRAME_BUF_PARAM() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, std::__1::allocator<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&> >, void (void*, unsigned long)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE7__cloneEv() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::findKeyForSearch(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMap16findKeyForSearchEPv(void) {
    ALOGD("_ZN12OmxIonMVAMap16findKeyForSearchEPv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::AllocateIonBuffer(int, unsigned int, _VdecIonBufInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec17AllocateIonBufferEijP15_VdecIonBufInfo(void) {
    ALOGD("_ZN10MtkOmxVdec17AllocateIonBufferEijP15_VdecIonBufInfo() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetInputPortStrut() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec17GetInputPortStrutEv(void) {
    ALOGD("_ZN10MtkOmxVdec17GetInputPortStrutEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::dequeueFrameBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec18dequeueFrameBufferEv(void) {
    ALOGD("_ZN10MtkOmxVdec18dequeueFrameBufferEv() called");
    return 0;
}

/* Demangled: MtkV4L2Device::flushFrameBufferQ() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device17flushFrameBufferQEv(void) {
    ALOGD("_ZN13MtkV4L2Device17flushFrameBufferQEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::getV4L2Format(MTK_VDEC_CODEC_ID) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec13getV4L2FormatE17MTK_VDEC_CODEC_ID(void) {
    ALOGD("_ZN10MtkOmxVdec13getV4L2FormatE17MTK_VDEC_CODEC_ID() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetupBufferInfoForVC1() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec21SetupBufferInfoForVC1Ev(void) {
    ALOGD("_ZN10MtkOmxVdec21SetupBufferInfoForVC1Ev() called");
    return 0;
}

/* Exported Object: MPEG2LevelMapTable */
extern "C" __attribute__((visibility("default"))) void* MPEG2LevelMapTable = NULL;

/* Demangled: android::Vector<v4l2_buffer*>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP11v4l2_bufferE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIP11v4l2_bufferE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: HDRTransferMap */
extern "C" __attribute__((visibility("default"))) void* HDRTransferMap = NULL;

/* Demangled: MtkOmxVdec::InitVp9SecParams() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec16InitVp9SecParamsEv(void) {
    ALOGD("_ZN10MtkOmxVdec16InitVp9SecParamsEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::QueueOutputColorConvertDstBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec32QueueOutputColorConvertDstBufferEi(void) {
    ALOGD("_ZN10MtkOmxVdec32QueueOutputColorConvertDstBufferEi() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, std::__1::allocator<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&> >, void (void*, unsigned long)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<MMLib*, std::__1::default_delete<MMLib>, std::__1::allocator<MMLib> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIP5MMLibNS_14default_deleteIS1_EENS_9allocatorIS1_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIP5MMLibNS_14default_deleteIS1_EENS_9allocatorIS1_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::checkIfHDRNeedInternalConvert() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec29checkIfHDRNeedInternalConvertEv(void) {
    ALOGD("_ZN10MtkOmxVdec29checkIfHDRNeedInternalConvertEv() called");
    return 0;
}

/* Demangled: MtkV4L2Device::getCrop(v4l2_crop*) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device7getCropEP9v4l2_crop(void) {
    ALOGD("_ZN13MtkV4L2Device7getCropEP9v4l2_crop() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: OmxMVAManager::newOmxMVAwithHndl(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager17newOmxMVAwithHndlEPvS0_(void) {
    ALOGD("_ZN13OmxMVAManager17newOmxMVAwithHndlEPvS0_() called");
    return 0;
}

/* Demangled: MtkOmxVdec::ComponentInit(void*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec13ComponentInitEPvPc(void) {
    ALOGD("_ZN10MtkOmxVdec13ComponentInitEPvPc() called");
    return 0;
}

/* Demangled: MtkOmxVdec::findBufferHeaderIndex(unsigned int, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec21findBufferHeaderIndexEjP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec21findBufferHeaderIndexEjP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE10do_compareEPKvS6_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE10do_compareEPKvS6_() called");
    return 0;
}

/* Demangled: V4L2QueueRecorder::getElement(int) */
extern "C" __attribute__((visibility("default"))) int _ZN17V4L2QueueRecorder10getElementEi(void) {
    ALOGD("_ZN17V4L2QueueRecorder10getElementEi() called");
    return 0;
}

/* Demangled: MtkVdec_SetCallbacks(void*, OMX_CALLBACKTYPE*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z20MtkVdec_SetCallbacksPvP16OMX_CALLBACKTYPES_(void) {
    ALOGD("_Z20MtkVdec_SetCallbacksPvP16OMX_CALLBACKTYPES_() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetMetaHandleFromOmxHeader(OMX_BUFFERHEADERTYPE*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec26GetMetaHandleFromOmxHeaderEP20OMX_BUFFERHEADERTYPEPj(void) {
    ALOGD("_ZN10MtkOmxVdec26GetMetaHandleFromOmxHeaderEP20OMX_BUFFERHEADERTYPEPj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::~MtkOmxVdec() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdecD1Ev(void) {
    ALOGD("_ZN10MtkOmxVdecD1Ev() called");
    return 0;
}

/* Demangled: MtkV4L2Device::MtkV4L2Device() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2DeviceC1Ev(void) {
    ALOGD("_ZN13MtkV4L2DeviceC1Ev() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIiE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<long long>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIxE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIxE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::InitMpeg2Params() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec15InitMpeg2ParamsEv(void) {
    ALOGD("_ZN10MtkOmxVdec15InitMpeg2ParamsEv() called");
    return 0;
}

/* Exported Object: vtable for MtkOmxVdec */
extern "C" __attribute__((visibility("default"))) void* _ZTV10MtkOmxVdec = NULL;

/* Exported Object: HevcLevelMapTable */
extern "C" __attribute__((visibility("default"))) void* HevcLevelMapTable = NULL;

/* Demangled: MtkOmxVdec::SetColorFormat_MTKYUV(OMX_PARAM_PORTDEFINITIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec21SetColorFormat_MTKYUVEP28OMX_PARAM_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec21SetColorFormat_MTKYUVEP28OMX_PARAM_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Demangled: MtkVdec_EmptyThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _Z23MtkVdec_EmptyThisBufferPvP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_Z23MtkVdec_EmptyThisBufferPvP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxCmdQueue::GetCmdSize(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkOmxCmdQueue10GetCmdSizeEi(void) {
    ALOGD("_ZN14MtkOmxCmdQueue10GetCmdSizeEi() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetOutputPortDefinition(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec23GetOutputPortDefinitionEPv(void) {
    ALOGD("_ZN10MtkOmxVdec23GetOutputPortDefinitionEPv() called");
    return 0;
}

/* Demangled: OmxMVAManager::freeOmxMVAByVa(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager14freeOmxMVAByVaEPv(void) {
    ALOGD("_ZN13OmxMVAManager14freeOmxMVAByVaEPv() called");
    return 0;
}

/* Demangled: bool std::__1::__insertion_sort_incomplete<bool (*&)(long long, long long), long long*>(long long*, long long*, bool (*&)(long long, long long)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__insertion_sort_incompleteIRPFbxxEPxEEbT0_S5_T_(void) {
    ALOGD("_ZNSt3__127__insertion_sort_incompleteIRPFbxxEPxEEbT0_S5_T_() called");
    return 0;
}

/* Demangled: MtkV4L2Device::FourccString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device12FourccStringEi(void) {
    ALOGD("_ZN13MtkV4L2Device12FourccStringEi() called");
    return 0;
}

/* Demangled: V4L2QueueRecorder::putElement(v4l2_buffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN17V4L2QueueRecorder10putElementEP11v4l2_buffer(void) {
    ALOGD("_ZN17V4L2QueueRecorder10putElementEP11v4l2_buffer() called");
    return 0;
}

/* Demangled: OmxMVAManager::getOmxMVAFromVAToVencBS(void*, __VENC_DRV_PARAM_BS_BUF_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager23getOmxMVAFromVAToVencBSEPvP25__VENC_DRV_PARAM_BS_BUF_T(void) {
    ALOGD("_ZN13OmxMVAManager23getOmxMVAFromVAToVencBSEPvP25__VENC_DRV_PARAM_BS_BUF_T() called");
    return 0;
}

/* Demangled: CmdThreadRequestHandler::clearRequest(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN23CmdThreadRequestHandler12clearRequestEj(void) {
    ALOGD("_ZN23CmdThreadRequestHandler12clearRequestEj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleFillThisBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec20HandleFillThisBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec20HandleFillThisBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIiEE = NULL;

/* Demangled: MtkV4L2Device::setMPEG4FrameSize(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device17setMPEG4FrameSizeEii(void) {
    ALOGD("_ZN13MtkV4L2Device17setMPEG4FrameSizeEii() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, std::__1::allocator<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&> >, void (void*, unsigned long)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEEE = NULL;

/* Demangled: StateToString(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z13StateToStringj(void) {
    ALOGD("_Z13StateToStringj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::QueueBackupCSDData() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec18QueueBackupCSDDataEv(void) {
    ALOGD("_ZN10MtkOmxVdec18QueueBackupCSDDataEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::PortBuffersPopulated() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec20PortBuffersPopulatedEv(void) {
    ALOGD("_ZN10MtkOmxVdec20PortBuffersPopulatedEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::handleResolutionChange() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec22handleResolutionChangeEv(void) {
    ALOGD("_ZN10MtkOmxVdec22handleResolutionChangeEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::ComponentDeInit(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec15ComponentDeInitEPv(void) {
    ALOGD("_ZN10MtkOmxVdec15ComponentDeInitEPv() called");
    return 0;
}

/* Demangled: MtkV4L2Device::dequeueBitstream(int*, int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device16dequeueBitstreamEPiS0_Pj(void) {
    ALOGD("_ZN13MtkV4L2Device16dequeueBitstreamEPiS0_Pj() called");
    return 0;
}

/* Demangled: MtkV4L2Device::setFixedMaxOutputBuffer(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device23setFixedMaxOutputBufferEii(void) {
    ALOGD("_ZN13MtkV4L2Device23setFixedMaxOutputBufferEii() called");
    return 0;
}

/* Demangled: OmxMVAManager::syncBufferCacheFrm(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager18syncBufferCacheFrmEPvj(void) {
    ALOGD("_ZN13OmxMVAManager18syncBufferCacheFrmEPvj() called");
    return 0;
}

/* Demangled: FakeVdecDrvDecode(MtkOmxVdec*, OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _Z17FakeVdecDrvDecodeP10MtkOmxVdecP20OMX_BUFFERHEADERTYPES2_(void) {
    ALOGD("_Z17FakeVdecDrvDecodeP10MtkOmxVdecP20OMX_BUFFERHEADERTYPES2_() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleUseIonBuffer(void*, UseIonBufferParams*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec18HandleUseIonBufferEPvP18UseIonBufferParams(void) {
    ALOGD("_ZN10MtkOmxVdec18HandleUseIonBufferEPvP18UseIonBufferParams() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetupMetaIonHandle(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec18SetupMetaIonHandleEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec18SetupMetaIonHandleEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::needColorConvertWithoutMetaMode() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec31needColorConvertWithoutMetaModeEv(void) {
    ALOGD("_ZN10MtkOmxVdec31needColorConvertWithoutMetaModeEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::RemoveForInputAtPTS(long long) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec19RemoveForInputAtPTSEx(void) {
    ALOGD("_ZN10MtkOmxVdec19RemoveForInputAtPTSEx() called");
    return 0;
}

/* Demangled: MtkOmxVdec::IsFreeBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec12IsFreeBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec12IsFreeBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::newEntryWithHndl(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMap16newEntryWithHndlEPvS0_(void) {
    ALOGD("_ZN12OmxIonMVAMap16newEntryWithHndlEPvS0_() called");
    return 0;
}

/* Demangled: MtkOmxVdecConvertP2Thread(void*) */
extern "C" __attribute__((visibility("default"))) int _Z25MtkOmxVdecConvertP2ThreadPv(void) {
    ALOGD("_Z25MtkOmxVdecConvertP2ThreadPv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::dequeueBitstreamBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec22dequeueBitstreamBufferEv(void) {
    ALOGD("_ZN10MtkOmxVdec22dequeueBitstreamBufferEv() called");
    return 0;
}

/* Demangled: MtkV4L2Device::setOperatingRate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device16setOperatingRateEj(void) {
    ALOGD("_ZN13MtkV4L2Device16setOperatingRateEj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetOutputPortDefinition(OMX_PARAM_PORTDEFINITIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec23SetOutputPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec23SetOutputPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetColorFormat_MTKYUV_FCM(OMX_PARAM_PORTDEFINITIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec25SetColorFormat_MTKYUV_FCMEP28OMX_PARAM_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec25SetColorFormat_MTKYUV_FCMEP28OMX_PARAM_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Demangled: MtkVdec_GetExtensionIndex(void*, char*, OMX_INDEXTYPE*) */
extern "C" __attribute__((visibility("default"))) int _Z25MtkVdec_GetExtensionIndexPvPcP13OMX_INDEXTYPE(void) {
    ALOGD("_Z25MtkVdec_GetExtensionIndexPvPcP13OMX_INDEXTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::InitVp9Params() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec13InitVp9ParamsEv(void) {
    ALOGD("_ZN10MtkOmxVdec13InitVp9ParamsEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::FillHDR10PlusInfo(__VDEC_DRV_H265_GENERAL_DATA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec17FillHDR10PlusInfoEP30__VDEC_DRV_H265_GENERAL_DATA_T(void) {
    ALOGD("_ZN10MtkOmxVdec17FillHDR10PlusInfoEP30__VDEC_DRV_H265_GENERAL_DATA_T() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleGetVideoProfileLevelQuerySupported(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec40HandleGetVideoProfileLevelQuerySupportedEPv(void) {
    ALOGD("_ZN10MtkOmxVdec40HandleGetVideoProfileLevelQuerySupportedEPv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<v4l2_buffer*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIP11v4l2_bufferEE = NULL;

/* Demangled: MtkVdec_GetParameter(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _Z20MtkVdec_GetParameterPv13OMX_INDEXTYPES_(void) {
    ALOGD("_Z20MtkVdec_GetParameterPv13OMX_INDEXTYPES_() called");
    return 0;
}

/* Demangled: MtkOmxVdec::DequeueCCDBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec16DequeueCCDBufferEv(void) {
    ALOGD("_ZN10MtkOmxVdec16DequeueCCDBufferEv() called");
    return 0;
}

/* Exported Object: MPEG4ProfileMapTable */
extern "C" __attribute__((visibility("default"))) void* MPEG4ProfileMapTable = NULL;

/* Demangled: android::Vector<v4l2_buffer*>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP11v4l2_bufferE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIP11v4l2_bufferE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::IsAVPFEnabled() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec13IsAVPFEnabledEv(void) {
    ALOGD("_ZN10MtkOmxVdec13IsAVPFEnabledEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::InitHEIFParams() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec14InitHEIFParamsEv(void) {
    ALOGD("_ZN10MtkOmxVdec14InitHEIFParamsEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::checkIfNeed2Poll(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec16checkIfNeed2PollEb(void) {
    ALOGD("_ZN10MtkOmxVdec16checkIfNeed2PollEb() called");
    return 0;
}

/* Demangled: CmdThreadRequestHandler::~CmdThreadRequestHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN23CmdThreadRequestHandlerD2Ev(void) {
    ALOGD("_ZN23CmdThreadRequestHandlerD2Ev() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleViLTEInitHWErr() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec20HandleViLTEInitHWErrEv(void) {
    ALOGD("_ZN10MtkOmxVdec20HandleViLTEInitHWErrEv() called");
    return 0;
}

/* Demangled: OmxMVAManager::getOmxMVAFromHndlToVencFrm(void*, __VENC_DRV_PARAM_FRM_BUF_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager26getOmxMVAFromHndlToVencFrmEPvP26__VENC_DRV_PARAM_FRM_BUF_T(void) {
    ALOGD("_ZN13OmxMVAManager26getOmxMVAFromHndlToVencFrmEPvP26__VENC_DRV_PARAM_FRM_BUF_T() called");
    return 0;
}

/* Demangled: MtkOmxVdec::ComponentRoleEnum(void*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec17ComponentRoleEnumEPvPhj(void) {
    ALOGD("_ZN10MtkOmxVdec17ComponentRoleEnumEPvPhj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleMinUndequeuedBufs(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec23HandleMinUndequeuedBufsEPj(void) {
    ALOGD("_ZN10MtkOmxVdec23HandleMinUndequeuedBufsEPj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleColorConvertForFillBufferDone_2(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec37HandleColorConvertForFillBufferDone_2Ejj(void) {
    ALOGD("_ZN10MtkOmxVdec37HandleColorConvertForFillBufferDone_2Ejj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<_MTK_OMX_CMD_QUEUE_ITEM**, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM**> >::push_front(_MTK_OMX_CMD_QUEUE_ITEM**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS3_EEE10push_frontEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS3_EEE10push_frontEOS3_() called");
    return 0;
}

/* Demangled: MtkOmxVdec::CloseInputDumpFile() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec18CloseInputDumpFileEv(void) {
    ALOGD("_ZN10MtkOmxVdec18CloseInputDumpFileEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::QueueMDPBufferRecoder(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec21QueueMDPBufferRecoderEiii(void) {
    ALOGD("_ZN10MtkOmxVdec21QueueMDPBufferRecoderEiii() called");
    return 0;
}

/* Demangled: MtkOmxVdec::CheckICSLaterGetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec25CheckICSLaterGetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVdec25CheckICSLaterGetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: android::Vector<OmxMVAEntry*>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP11OmxMVAEntryE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIP11OmxMVAEntryE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::initCodecParam(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec14initCodecParamEPc(void) {
    ALOGD("_ZN10MtkOmxVdec14initCodecParamEPc() called");
    return 0;
}

/* Demangled: MtkOmxVdec::ColorAspectsDiffer(android::ColorAspects, android::ColorAspects) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec18ColorAspectsDifferEN7android12ColorAspectsES1_(void) {
    ALOGD("_ZN10MtkOmxVdec18ColorAspectsDifferEN7android12ColorAspectsES1_() called");
    return 0;
}

/* Demangled: MtkOmxVdec::QueueOutputColorConvertSrcBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec32QueueOutputColorConvertSrcBufferEi(void) {
    ALOGD("_ZN10MtkOmxVdec32QueueOutputColorConvertSrcBufferEi() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<_MTK_OMX_CMD_QUEUE_ITEM*, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM*> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<_MTK_OMX_CMD_QUEUE_ITEM**, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM**>&>::push_back(_MTK_OMX_CMD_QUEUE_ITEM**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMRNS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMRNS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Demangled: MtkOmxVdec::RemoveForInputPTS() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec17RemoveForInputPTSEv(void) {
    ALOGD("_ZN10MtkOmxVdec17RemoveForInputPTSEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetColorFormat_NV12(OMX_PARAM_PORTDEFINITIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec19SetColorFormat_NV12EP28OMX_PARAM_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec19SetColorFormat_NV12EP28OMX_PARAM_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Demangled: MtkV4L2Device::getCapFmt() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device9getCapFmtEv(void) {
    ALOGD("_ZN13MtkV4L2Device9getCapFmtEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetColorFormat_MTKYUV_UFO_10BIT_V_JUMP(OMX_PARAM_PORTDEFINITIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec38SetColorFormat_MTKYUV_UFO_10BIT_V_JUMPEP28OMX_PARAM_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec38SetColorFormat_MTKYUV_UFO_10BIT_V_JUMPEP28OMX_PARAM_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::setBoolProperty(char const*, OMX_BOOL) */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMap15setBoolPropertyEPKc8OMX_BOOL(void) {
    ALOGD("_ZN12OmxIonMVAMap15setBoolPropertyEPKc8OMX_BOOL() called");
    return 0;
}

/* Demangled: OmxMVAManager::OmxMVAManager(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManagerC1EPKcS1_(void) {
    ALOGD("_ZN13OmxMVAManagerC1EPKcS1_() called");
    return 0;
}

/* Exported Object: HDRColorPrimariesMap */
extern "C" __attribute__((visibility("default"))) void* HDRColorPrimariesMap = NULL;

/* Demangled: MtkOmxVdec::DumpETBQ() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec8DumpETBQEv(void) {
    ALOGD("_ZN10MtkOmxVdec8DumpETBQEv() called");
    return 0;
}

/* Demangled: MtkV4L2Device::subscribeEvent() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device14subscribeEventEv(void) {
    ALOGD("_ZN13MtkV4L2Device14subscribeEventEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetupBufferInfoForCrossMount() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec28SetupBufferInfoForCrossMountEv(void) {
    ALOGD("_ZN10MtkOmxVdec28SetupBufferInfoForCrossMountEv() called");
    return 0;
}

/* Demangled: MtkVdec_SetParameter(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _Z20MtkVdec_SetParameterPv13OMX_INDEXTYPES_(void) {
    ALOGD("_Z20MtkVdec_SetParameterPv13OMX_INDEXTYPES_() called");
    return 0;
}

/* Demangled: MtkOmxVdec::getChipName() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec11getChipNameEv(void) {
    ALOGD("_ZN10MtkOmxVdec11getChipNameEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetColorFormat(OMX_PARAM_PORTDEFINITIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec14SetColorFormatEP28OMX_PARAM_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec14SetColorFormatEP28OMX_PARAM_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::ColorSpcToMM(_VDEC_DRV_COLOR_PRIMARIES_E) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec12ColorSpcToMME27_VDEC_DRV_COLOR_PRIMARIES_E(void) {
    ALOGD("_ZN10MtkOmxVdec12ColorSpcToMME27_VDEC_DRV_COLOR_PRIMARIES_E() called");
    return 0;
}

/* Demangled: MtkV4L2Device::deviceIoctl(int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device11deviceIoctlEiPv(void) {
    ALOGD("_ZN13MtkV4L2Device11deviceIoctlEiPv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::DeInitVideoDecodeHW() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec19DeInitVideoDecodeHWEv(void) {
    ALOGD("_ZN10MtkOmxVdec19DeInitVideoDecodeHWEv() called");
    return 0;
}

/* Demangled: CmdThreadRequestHandler::CmdThreadRequestHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN23CmdThreadRequestHandlerC1Ev(void) {
    ALOGD("_ZN23CmdThreadRequestHandlerC1Ev() called");
    return 0;
}

/* Demangled: MtkOmxComponentCreate */
extern "C" __attribute__((visibility("default"))) int MtkOmxComponentCreate(void) {
    ALOGD("MtkOmxComponentCreate() called");
    return 0;
}

/* Demangled: MtkOmxVdec::InitMJpegParams() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec15InitMJpegParamsEv(void) {
    ALOGD("_ZN10MtkOmxVdec15InitMJpegParamsEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetDisplayBuffer(OMX_BOOL, __VDEC_DRV_FRAMEBUF_T**, MtkV4L2Device_FRAME_BUF_PARAM*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec16GetDisplayBufferE8OMX_BOOLPP21__VDEC_DRV_FRAMEBUF_TP29MtkV4L2Device_FRAME_BUF_PARAM(void) {
    ALOGD("_ZN10MtkOmxVdec16GetDisplayBufferE8OMX_BOOLPP21__VDEC_DRV_FRAMEBUF_TP29MtkV4L2Device_FRAME_BUF_PARAM() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleFillBufferDone_TSCheck(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec28HandleFillBufferDone_TSCheckEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec28HandleFillBufferDone_TSCheckEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Exported Object: MPEG4LevelMapTable */
extern "C" __attribute__((visibility("default"))) void* MPEG4LevelMapTable = NULL;

/* Demangled: MtkOmxVdec::HandleLegacyModeCropChange() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec26HandleLegacyModeCropChangeEv(void) {
    ALOGD("_ZN10MtkOmxVdec26HandleLegacyModeCropChangeEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetState(void*, OMX_STATETYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec8GetStateEPvP13OMX_STATETYPE(void) {
    ALOGD("_ZN10MtkOmxVdec8GetStateEPvP13OMX_STATETYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetM4UFrame(__VDEC_DRV_FRAMEBUF_T*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec11GetM4UFrameEP21__VDEC_DRV_FRAMEBUF_TPh(void) {
    ALOGD("_ZN10MtkOmxVdec11GetM4UFrameEP21__VDEC_DRV_FRAMEBUF_TPh() called");
    return 0;
}

/* Demangled: MtkV4L2Device::getSupportedFixBuffers(char*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device22getSupportedFixBuffersEPcb(void) {
    ALOGD("_ZN13MtkV4L2Device22getSupportedFixBuffersEPcb() called");
    return 0;
}

/* Demangled: MtkV4L2Device::queuedFrameBufferCount() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device22queuedFrameBufferCountEv(void) {
    ALOGD("_ZN13MtkV4L2Device22queuedFrameBufferCountEv() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIiE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: V4L2QueueRecorder::V4L2QueueRecorder() */
extern "C" __attribute__((visibility("default"))) int _ZN17V4L2QueueRecorderC2Ev(void) {
    ALOGD("_ZN17V4L2QueueRecorderC2Ev() called");
    return 0;
}

/* Demangled: OmxMVAEntry::setToVencBS(__VENC_DRV_PARAM_BS_BUF_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN11OmxMVAEntry11setToVencBSEP25__VENC_DRV_PARAM_BS_BUF_T(void) {
    ALOGD("_ZN11OmxMVAEntry11setToVencBSEP25__VENC_DRV_PARAM_BS_BUF_T() called");
    return 0;
}

/* Demangled: OmxMVAManager::newOmxMVAandVA(int, int, void*, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager14newOmxMVAandVAEiiPvPS0_(void) {
    ALOGD("_ZN13OmxMVAManager14newOmxMVAandVAEiiPvPS0_() called");
    return 0;
}

/* Demangled: MtkV4L2Device::getDPBSize(unsigned int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device10getDPBSizeEPjj(void) {
    ALOGD("_ZN13MtkV4L2Device10getDPBSizeEPjj() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::dumpEntry(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMap9dumpEntryEPv(void) {
    ALOGD("_ZN12OmxIonMVAMap9dumpEntryEPv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleGetPortDefinition(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec23HandleGetPortDefinitionEPv(void) {
    ALOGD("_ZN10MtkOmxVdec23HandleGetPortDefinitionEPv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::needColorConvertWithMetaMode() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec28needColorConvertWithMetaModeEv(void) {
    ALOGD("_ZN10MtkOmxVdec28needColorConvertWithMetaModeEv() called");
    return 0;
}

/* Demangled: MtkV4L2Device::devicePoll(int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device10devicePollEPii(void) {
    ALOGD("_ZN13MtkV4L2Device10devicePollEPii() called");
    return 0;
}

/* Demangled: MtkV4L2Device::queuedBitstreamCount() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device20queuedBitstreamCountEv(void) {
    ALOGD("_ZN13MtkV4L2Device20queuedBitstreamCountEv() called");
    return 0;
}

/* Exported Object: HevcProfileMapTable */
extern "C" __attribute__((visibility("default"))) void* HevcProfileMapTable = NULL;

/* Demangled: MtkOmxVdec::SetColorFormat_MTKYUV_UFO_10BIT_H(OMX_PARAM_PORTDEFINITIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec33SetColorFormat_MTKYUV_UFO_10BIT_HEP28OMX_PARAM_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec33SetColorFormat_MTKYUV_UFO_10BIT_HEP28OMX_PARAM_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, unsigned char*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPhEEEE = NULL;

/* Demangled: MtkOmxVdec::dumpBuffer(char*, unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec10dumpBufferEPcPhi(void) {
    ALOGD("_ZN10MtkOmxVdec10dumpBufferEPcPhi() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetInputPortDefinition(OMX_PARAM_PORTDEFINITIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec22SetInputPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec22SetInputPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, std::__1::allocator<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&> >, void (void*, unsigned long)>::__clone(std::__1::__function::__base<void (void*, unsigned long)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE7__cloneEPNS0_6__baseIS10_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE7__cloneEPNS0_6__baseIS10_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, std::__1::allocator<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&> >, void (void*, unsigned long)>::operator()(void*&&, unsigned long&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEEclEOS3_Om(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEEclEOS3_Om() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleFillBufferDone_DI_SetColorFormat(OMX_BUFFERHEADERTYPE*, OMX_BOOL) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec38HandleFillBufferDone_DI_SetColorFormatEP20OMX_BUFFERHEADERTYPE8OMX_BOOL(void) {
    ALOGD("_ZN10MtkOmxVdec38HandleFillBufferDone_DI_SetColorFormatEP20OMX_BUFFERHEADERTYPE8OMX_BOOL() called");
    return 0;
}

/* Demangled: MtkOmxVdec::DumpFTBQ() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec8DumpFTBQEv(void) {
    ALOGD("_ZN10MtkOmxVdec8DumpFTBQEv() called");
    return 0;
}

/* Exported Object: OmxIonMVAMap::mIonHandleCount */
extern "C" __attribute__((visibility("default"))) void* _ZN12OmxIonMVAMap15mIonHandleCountE = NULL;

/* Demangled: MtkOmxVdec::CheckOutputBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec17CheckOutputBufferEv(void) {
    ALOGD("_ZN10MtkOmxVdec17CheckOutputBufferEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetOutputPortStrut() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec18GetOutputPortStrutEv(void) {
    ALOGD("_ZN10MtkOmxVdec18GetOutputPortStrutEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::AllocateGeneralBuffer(unsigned int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec21AllocateGeneralBufferEjPi(void) {
    ALOGD("_ZN10MtkOmxVdec21AllocateGeneralBufferEjPi() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleEmptyBufferDone(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec21HandleEmptyBufferDoneEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec21HandleEmptyBufferDoneEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<void*, int (*)(void*), std::__1::allocator<void> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPvPFiS1_ENS_9allocatorIvEEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPvPFiS1_ENS_9allocatorIvEEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::InitRvParams() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec12InitRvParamsEv(void) {
    ALOGD("_ZN10MtkOmxVdec12InitRvParamsEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetParameter(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec12SetParameterEPv13OMX_INDEXTYPES0_(void) {
    ALOGD("_ZN10MtkOmxVdec12SetParameterEPv13OMX_INDEXTYPES0_() called");
    return 0;
}

/* Demangled: MtkOmxVdec::InitAv1Params() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec13InitAv1ParamsEv(void) {
    ALOGD("_ZN10MtkOmxVdec13InitAv1ParamsEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::decodeRoutine(OMX_BUFFERHEADERTYPE*, OMX_BOOL*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec13decodeRoutineEP20OMX_BUFFERHEADERTYPEP8OMX_BOOL(void) {
    ALOGD("_ZN10MtkOmxVdec13decodeRoutineEP20OMX_BUFFERHEADERTYPEP8OMX_BOOL() called");
    return 0;
}

/* Demangled: MtkV4L2Device::StreamOffBitstream() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device18StreamOffBitstreamEv(void) {
    ALOGD("_ZN13MtkV4L2Device18StreamOffBitstreamEv() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::mapIon(OmxIonMVAEntry*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMap6mapIonEP14OmxIonMVAEntryi(void) {
    ALOGD("_ZN12OmxIonMVAMap6mapIonEP14OmxIonMVAEntryi() called");
    return 0;
}

/* Demangled: MtkOmxCmdQueue::~MtkOmxCmdQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkOmxCmdQueueD2Ev(void) {
    ALOGD("_ZN14MtkOmxCmdQueueD2Ev() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetVDECSrting(MTK_VDEC_CODEC_ID, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec13GetVDECSrtingE17MTK_VDEC_CODEC_IDPv(void) {
    ALOGD("_ZN10MtkOmxVdec13GetVDECSrtingE17MTK_VDEC_CODEC_IDPv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, std::__1::allocator<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&> >, void (void*, unsigned long)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetM4UFrameandBitstreamBuffer(__VDEC_DRV_FRAMEBUF_T*, unsigned char*, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec29GetM4UFrameandBitstreamBufferEP21__VDEC_DRV_FRAMEBUF_TPhjS2_(void) {
    ALOGD("_ZN10MtkOmxVdec29GetM4UFrameandBitstreamBufferEP21__VDEC_DRV_FRAMEBUF_TPhjS2_() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIiE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<MMLib*, std::__1::default_delete<MMLib>, std::__1::allocator<MMLib> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIP5MMLibNS_14default_deleteIS1_EENS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIP5MMLibNS_14default_deleteIS1_EENS_9allocatorIS1_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: OmxMVAManager::getOmxInfoFromHndl(void*, _VBufInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager18getOmxInfoFromHndlEPvP9_VBufInfo(void) {
    ALOGD("_ZN13OmxMVAManager18getOmxInfoFromHndlEPvP9_VBufInfo() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<OmxMVAEntry*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIP11OmxMVAEntryEE = NULL;

/* Demangled: __setBufParameter(native_handle const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z17__setBufParameterPK13native_handleii(void) {
    ALOGD("_Z17__setBufParameterPK13native_handleii() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetExtensionIndex(void*, char*, OMX_INDEXTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec17GetExtensionIndexEPvPcP13OMX_INDEXTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec17GetExtensionIndexEPvPcP13OMX_INDEXTYPE() called");
    return 0;
}

/* Demangled: MtkV4L2Device::checkFlushDone() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device14checkFlushDoneEv(void) {
    ALOGD("_ZN13MtkV4L2Device14checkFlushDoneEv() called");
    return 0;
}

/* Demangled: absolute_timespec_from_timespec(timespec&, timespec const&, int) */
extern "C" __attribute__((visibility("default"))) int _Z31absolute_timespec_from_timespecR8timespecRKS_i(void) {
    ALOGD("_Z31absolute_timespec_from_timespecR8timespecRKS_i() called");
    return 0;
}

/* Demangled: OmxMVAManager::~OmxMVAManager() */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManagerD1Ev(void) {
    ALOGD("_ZN13OmxMVAManagerD1Ev() called");
    return 0;
}

/* Demangled: MtkOmxVdec::checkIfNeedPortReconfig() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec23checkIfNeedPortReconfigEv(void) {
    ALOGD("_ZN10MtkOmxVdec23checkIfNeedPortReconfigEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleSetMtkOmxVdecUseClearMotion() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec33HandleSetMtkOmxVdecUseClearMotionEv(void) {
    ALOGD("_ZN10MtkOmxVdec33HandleSetMtkOmxVdecUseClearMotionEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<long long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIxEE = NULL;

/* Demangled: MtkOmxVdec::DecodeVideo(OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec11DecodeVideoEP20OMX_BUFFERHEADERTYPES1_(void) {
    ALOGD("_ZN10MtkOmxVdec11DecodeVideoEP20OMX_BUFFERHEADERTYPES1_() called");
    return 0;
}

/* Demangled: OmxMVAManager::newOmxMVAwithVA(void*, int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager15newOmxMVAwithVAEPviS0_(void) {
    ALOGD("_ZN13OmxMVAManager15newOmxMVAwithVAEPviS0_() called");
    return 0;
}

/* Demangled: OmxMVAManager::dumpList() */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager8dumpListEv(void) {
    ALOGD("_ZN13OmxMVAManager8dumpListEv() called");
    return 0;
}

/* Demangled: android::Vector<OmxMVAEntry*>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP11OmxMVAEntryE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIP11OmxMVAEntryE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetGrallocExtraQPSum(native_handle const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec20SetGrallocExtraQPSumEPK13native_handlei(void) {
    ALOGD("_ZN10MtkOmxVdec20SetGrallocExtraQPSumEPK13native_handlei() called");
    return 0;
}

/* Demangled: android::Vector<_FenceAndBufIdxMap>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI18_FenceAndBufIdxMapE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorI18_FenceAndBufIdxMapE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<_FenceAndBufIdxMap>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI18_FenceAndBufIdxMapE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorI18_FenceAndBufIdxMapE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<_MTK_OMX_CMD_QUEUE_ITEM*, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM*> >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEED2Ev() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetPixelFormatString(_VDEC_DRV_PIXEL_FORMAT_T) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec20GetPixelFormatStringE24_VDEC_DRV_PIXEL_FORMAT_T(void) {
    ALOGD("_ZN10MtkOmxVdec20GetPixelFormatStringE24_VDEC_DRV_PIXEL_FORMAT_T() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetupBufferInfoForMPEG2() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec23SetupBufferInfoForMPEG2Ev(void) {
    ALOGD("_ZN10MtkOmxVdec23SetupBufferInfoForMPEG2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<void*, int (*)(void*), std::__1::allocator<void> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPvPFiS1_ENS_9allocatorIvEEEE = NULL;

/* Demangled: MtkOmxVdec::GetInputBuf(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec11GetInputBufEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec11GetInputBufEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetupBufferInfoForVP8() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec21SetupBufferInfoForVP8Ev(void) {
    ALOGD("_ZN10MtkOmxVdec21SetupBufferInfoForVP8Ev() called");
    return 0;
}

/* Demangled: MtkV4L2Device::needToDumpDebugInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device19needToDumpDebugInfoEv(void) {
    ALOGD("_ZN13MtkV4L2Device19needToDumpDebugInfoEv() called");
    return 0;
}

/* Demangled: MtkOmxVdecPollThread(void*) */
extern "C" __attribute__((visibility("default"))) int _Z20MtkOmxVdecPollThreadPv(void) {
    ALOGD("_Z20MtkOmxVdecPollThreadPv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::FlushOutputPort() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec15FlushOutputPortEv(void) {
    ALOGD("_ZN10MtkOmxVdec15FlushOutputPortEv() called");
    return 0;
}

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleStateSet(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec14HandleStateSetEj(void) {
    ALOGD("_ZN10MtkOmxVdec14HandleStateSetEj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::CheckSetParamState() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec18CheckSetParamStateEv(void) {
    ALOGD("_ZN10MtkOmxVdec18CheckSetParamStateEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetColorFormatbyDrvType(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec23SetColorFormatbyDrvTypeEi(void) {
    ALOGD("_ZN10MtkOmxVdec23SetColorFormatbyDrvTypeEi() called");
    return 0;
}

/* Exported Object: OmxMVAManager::mEnableMoreLog */
extern "C" __attribute__((visibility("default"))) void* _ZN13OmxMVAManager14mEnableMoreLogE = NULL;

/* Demangled: OmxMVAManager::OmxMVAManager(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManagerC1EPKc(void) {
    ALOGD("_ZN13OmxMVAManagerC1EPKc() called");
    return 0;
}

/* Demangled: MtkOmxVdec::decodeRoutine_EOS(OMX_BUFFERHEADERTYPE*, OMX_BOOL*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec17decodeRoutine_EOSEP20OMX_BUFFERHEADERTYPEP8OMX_BOOL(void) {
    ALOGD("_ZN10MtkOmxVdec17decodeRoutine_EOSEP20OMX_BUFFERHEADERTYPEP8OMX_BOOL() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::~OmxIonMVAMap() */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMapD1Ev(void) {
    ALOGD("_ZN12OmxIonMVAMapD1Ev() called");
    return 0;
}

/* Exported Object: vtable for OmxMVAEntry */
extern "C" __attribute__((visibility("default"))) void* _ZTV11OmxMVAEntry = NULL;

/* Demangled: MtkOmxVdec::HandlePortFlush(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec15HandlePortFlushEj(void) {
    ALOGD("_ZN10MtkOmxVdec15HandlePortFlushEj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleGrallocExtra(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec18HandleGrallocExtraEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec18HandleGrallocExtraEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::canQueueFrameBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec19canQueueFrameBufferEv(void) {
    ALOGD("_ZN10MtkOmxVdec19canQueueFrameBufferEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::UpdateColorAspectsParams() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec24UpdateColorAspectsParamsEv(void) {
    ALOGD("_ZN10MtkOmxVdec24UpdateColorAspectsParamsEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::MtkOmxVdec() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdecC2Ev(void) {
    ALOGD("_ZN10MtkOmxVdecC2Ev() called");
    return 0;
}

/* Demangled: MtkV4L2Device::~MtkV4L2Device() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2DeviceD1Ev(void) {
    ALOGD("_ZN13MtkV4L2DeviceD1Ev() called");
    return 0;
}

/* Demangled: MtkOmxVdec::BackupPendingCSDData(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec20BackupPendingCSDDataEi(void) {
    ALOGD("_ZN10MtkOmxVdec20BackupPendingCSDDataEi() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetIonPhysicalAddress(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec21GetIonPhysicalAddressEii(void) {
    ALOGD("_ZN10MtkOmxVdec21GetIonPhysicalAddressEii() called");
    return 0;
}

/* Demangled: MtkOmxVdec::AlignBufferSize(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec15AlignBufferSizeEPv(void) {
    ALOGD("_ZN10MtkOmxVdec15AlignBufferSizeEPv() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<void>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIvED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIvED2Ev() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandlePortDisable(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec17HandlePortDisableEj(void) {
    ALOGD("_ZN10MtkOmxVdec17HandlePortDisableEj() called");
    return 0;
}

/* Demangled: MtkOmxCmdQueue::FreeCmdItem(_MTK_OMX_CMD_QUEUE_ITEM*) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkOmxCmdQueue11FreeCmdItemEP23_MTK_OMX_CMD_QUEUE_ITEM(void) {
    ALOGD("_ZN14MtkOmxCmdQueue11FreeCmdItemEP23_MTK_OMX_CMD_QUEUE_ITEM() called");
    return 0;
}

/* Demangled: MtkOmxCmdQueue::MtkOmxCmdQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkOmxCmdQueueC1Ev(void) {
    ALOGD("_ZN14MtkOmxCmdQueueC1Ev() called");
    return 0;
}

/* Demangled: OmxMVAEntry::setToVencFrm(__VENC_DRV_PARAM_FRM_BUF_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN11OmxMVAEntry12setToVencFrmEP26__VENC_DRV_PARAM_FRM_BUF_T(void) {
    ALOGD("_ZN11OmxMVAEntry12setToVencFrmEP26__VENC_DRV_PARAM_FRM_BUF_T() called");
    return 0;
}

/* Demangled: MtkVdec_ComponentInit(void*, char*) */
extern "C" __attribute__((visibility("default"))) int _Z21MtkVdec_ComponentInitPvPc(void) {
    ALOGD("_Z21MtkVdec_ComponentInitPvPc() called");
    return 0;
}

/* Demangled: android::Vector<_FenceAndBufIdxMap>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI18_FenceAndBufIdxMapE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorI18_FenceAndBufIdxMapE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: bOmxVdecPerfLogEnable */
extern "C" __attribute__((visibility("default"))) void* bOmxVdecPerfLogEnable = NULL;

/* Demangled: MtkOmxVdec::InitVideoDecodeHW(int*, int*, unsigned short*, unsigned short*, unsigned char*, unsigned int*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec17InitVideoDecodeHWEPiS0_PtS1_PhPjP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec17InitVideoDecodeHWEPiS0_PtS1_PhPjP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::InitS263Params() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec14InitS263ParamsEv(void) {
    ALOGD("_ZN10MtkOmxVdec14InitS263ParamsEv() called");
    return 0;
}

/* Demangled: MtkV4L2Device::setFixBufferMode(_VDEC_DRV_FIXED_MAX_OUTPUT_BUFFER_T_*) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device16setFixBufferModeEP36_VDEC_DRV_FIXED_MAX_OUTPUT_BUFFER_T_(void) {
    ALOGD("_ZN13MtkV4L2Device16setFixBufferModeEP36_VDEC_DRV_FIXED_MAX_OUTPUT_BUFFER_T_() called");
    return 0;
}

/* Demangled: android::Vector<_FenceAndBufIdxMap>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI18_FenceAndBufIdxMapE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorI18_FenceAndBufIdxMapE12do_constructEPvj() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__sort4<bool (*&)(long long, long long), long long*>(long long*, long long*, long long*, long long*, bool (*&)(long long, long long)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17__sort4IRPFbxxEPxEEjT0_S5_S5_S5_T_(void) {
    ALOGD("_ZNSt3__17__sort4IRPFbxxEPxEEjT0_S5_S5_S5_T_() called");
    return 0;
}

/* Exported Object: VP8LevelMapTable */
extern "C" __attribute__((visibility("default"))) void* VP8LevelMapTable = NULL;

/* Demangled: MtkV4L2Device::setSecureMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device13setSecureModeEi(void) {
    ALOGD("_ZN13MtkV4L2Device13setSecureModeEi() called");
    return 0;
}

/* Demangled: MtkV4L2Device::ChangeState(MtkV4L2Device_State) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device11ChangeStateE19MtkV4L2Device_State(void) {
    ALOGD("_ZN13MtkV4L2Device11ChangeStateE19MtkV4L2Device_State() called");
    return 0;
}

/* Demangled: MtkOmxVdec::InitAvcSecParams() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec16InitAvcSecParamsEv(void) {
    ALOGD("_ZN10MtkOmxVdec16InitAvcSecParamsEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::DequeueInputBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec18DequeueInputBufferEv(void) {
    ALOGD("_ZN10MtkOmxVdec18DequeueInputBufferEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetBitstreamBuffer(unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec18GetBitstreamBufferEPhj(void) {
    ALOGD("_ZN10MtkOmxVdec18GetBitstreamBufferEPhj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::FindQueueOutputBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec21FindQueueOutputBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec21FindQueueOutputBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::CheckColorConvertBufferSize() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec27CheckColorConvertBufferSizeEv(void) {
    ALOGD("_ZN10MtkOmxVdec27CheckColorConvertBufferSizeEv() called");
    return 0;
}

/* Demangled: MtkVdec_GetState(void*, OMX_STATETYPE*) */
extern "C" __attribute__((visibility("default"))) int _Z16MtkVdec_GetStatePvP13OMX_STATETYPE(void) {
    ALOGD("_Z16MtkVdec_GetStatePvP13OMX_STATETYPE() called");
    return 0;
}

/* Demangled: MtkV4L2Device::requestBufferFrameBuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device24requestBufferFrameBufferEj(void) {
    ALOGD("_ZN13MtkV4L2Device24requestBufferFrameBufferEj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: vtable for OmxIonMVAEntry */
extern "C" __attribute__((visibility("default"))) void* _ZTV14OmxIonMVAEntry = NULL;

/* Demangled: MtkOmxVdec::CheckICSLaterSetParameters(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec26CheckICSLaterSetParametersEPv13OMX_INDEXTYPES0_(void) {
    ALOGD("_ZN10MtkOmxVdec26CheckICSLaterSetParametersEPv13OMX_INDEXTYPES0_() called");
    return 0;
}

/* Demangled: MtkVdec_ComponentDeInit(void*) */
extern "C" __attribute__((visibility("default"))) int _Z23MtkVdec_ComponentDeInitPv(void) {
    ALOGD("_Z23MtkVdec_ComponentDeInitPv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::~MtkOmxVdec() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdecD0Ev(void) {
    ALOGD("_ZN10MtkOmxVdecD0Ev() called");
    return 0;
}

/* Demangled: MtkOmxVdec::InitH263Params() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec14InitH263ParamsEv(void) {
    ALOGD("_ZN10MtkOmxVdec14InitH263ParamsEv() called");
    return 0;
}

/* Demangled: myDescendingSort(long long, long long) */
extern "C" __attribute__((visibility("default"))) int _Z16myDescendingSortxx(void) {
    ALOGD("_Z16myDescendingSortxx() called");
    return 0;
}

/* Demangled: MtkV4L2Device::getVideoProfileLevel(unsigned int, __VDEC_DRV_QUERY_VIDEO_FORMAT_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device20getVideoProfileLevelEjP31__VDEC_DRV_QUERY_VIDEO_FORMAT_T(void) {
    ALOGD("_ZN13MtkV4L2Device20getVideoProfileLevelEjP31__VDEC_DRV_QUERY_VIDEO_FORMAT_T() called");
    return 0;
}

/* Demangled: CommandToString(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z15CommandToStringj(void) {
    ALOGD("_Z15CommandToStringj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetConfig(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec9SetConfigEPv13OMX_INDEXTYPES0_(void) {
    ALOGD("_ZN10MtkOmxVdec9SetConfigEPv13OMX_INDEXTYPES0_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetColorFormat_MTKYUV_UFO_10BIT_V(OMX_PARAM_PORTDEFINITIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec33SetColorFormat_MTKYUV_UFO_10BIT_VEP28OMX_PARAM_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec33SetColorFormat_MTKYUV_UFO_10BIT_VEP28OMX_PARAM_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Demangled: MtkV4L2Device::dequeueEvent() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device12dequeueEventEv(void) {
    ALOGD("_ZN13MtkV4L2Device12dequeueEventEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::checkIfNeed2WakeupDecoder() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec25checkIfNeed2WakeupDecoderEv(void) {
    ALOGD("_ZN10MtkOmxVdec25checkIfNeed2WakeupDecoderEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::PrepareAvaliableColorConvertBuffer(int, OMX_BOOL) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec34PrepareAvaliableColorConvertBufferEi8OMX_BOOL(void) {
    ALOGD("_ZN10MtkOmxVdec34PrepareAvaliableColorConvertBufferEi8OMX_BOOL() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleColorConvertForFillBufferDone_1(unsigned int, OMX_BOOL) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec37HandleColorConvertForFillBufferDone_1Ej8OMX_BOOL(void) {
    ALOGD("_ZN10MtkOmxVdec37HandleColorConvertForFillBufferDone_1Ej8OMX_BOOL() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleAllInit(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec13HandleAllInitE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVdec13HandleAllInitE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::CheckTeeType() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec12CheckTeeTypeEv(void) {
    ALOGD("_ZN10MtkOmxVdec12CheckTeeTypeEv() called");
    return 0;
}

/* Demangled: MtkV4L2Device::QueryCap(v4l2_capability*) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device8QueryCapEP15v4l2_capability(void) {
    ALOGD("_ZN13MtkV4L2Device8QueryCapEP15v4l2_capability() called");
    return 0;
}

/* Demangled: MtkOmxVdec::queueBitstreamBuffer(int*, OMX_BOOL*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec20queueBitstreamBufferEPiP8OMX_BOOL(void) {
    ALOGD("_ZN10MtkOmxVdec20queueBitstreamBufferEPiP8OMX_BOOL() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetConfig(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec9GetConfigEPv13OMX_INDEXTYPES0_(void) {
    ALOGD("_ZN10MtkOmxVdec9GetConfigEPv13OMX_INDEXTYPES0_() called");
    return 0;
}

/* Exported Object: AV1LevelMapTable */
extern "C" __attribute__((visibility("default"))) void* AV1LevelMapTable = NULL;

/* Demangled: android::Vector<OmxMVAEntry*>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP11OmxMVAEntryE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIP11OmxMVAEntryE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::FillHDRColorDesc(__VDEC_DRV_COLORDESC_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec16FillHDRColorDescEP22__VDEC_DRV_COLORDESC_T(void) {
    ALOGD("_ZN10MtkOmxVdec16FillHDRColorDescEP22__VDEC_DRV_COLORDESC_T() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleViLTEBufferDone(OMX_BUFFERHEADERTYPE*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec21HandleViLTEBufferDoneEP20OMX_BUFFERHEADERTYPEj(void) {
    ALOGD("_ZN10MtkOmxVdec21HandleViLTEBufferDoneEP20OMX_BUFFERHEADERTYPEj() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetFrmBuf(long long, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec9GetFrmBufExP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec9GetFrmBufExP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Exported Object: VP9LevelMapTable */
extern "C" __attribute__((visibility("default"))) void* VP9LevelMapTable = NULL;

/* Demangled: MtkOmxVdec::InitHEVCParams() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec14InitHEVCParamsEv(void) {
    ALOGD("_ZN10MtkOmxVdec14InitHEVCParamsEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetInputBufferFromETBQ() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec22GetInputBufferFromETBQEv(void) {
    ALOGD("_ZN10MtkOmxVdec22GetInputBufferFromETBQEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetColorFormat_YUV420Planar(OMX_PARAM_PORTDEFINITIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec27SetColorFormat_YUV420PlanarEP28OMX_PARAM_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec27SetColorFormat_YUV420PlanarEP28OMX_PARAM_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Demangled: OmxMVAManager::OmxMVAManager(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManagerC2EPKc(void) {
    ALOGD("_ZN13OmxMVAManagerC2EPKc() called");
    return 0;
}

/* Demangled: MtkOmxVdec::FlushGeneralBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec18FlushGeneralBufferEv(void) {
    ALOGD("_ZN10MtkOmxVdec18FlushGeneralBufferEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::RemoveInputBufferFromETBQ() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec25RemoveInputBufferFromETBQEv(void) {
    ALOGD("_ZN10MtkOmxVdec25RemoveInputBufferFromETBQEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::needLegacyMode() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec14needLegacyModeEv(void) {
    ALOGD("_ZN10MtkOmxVdec14needLegacyModeEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::needColorConvertWithNativeWindow() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec32needColorConvertWithNativeWindowEv(void) {
    ALOGD("_ZN10MtkOmxVdec32needColorConvertWithNativeWindowEv() called");
    return 0;
}

/* Demangled: MtkV4L2Device::getPicInfo(__VDEC_DRV_PICINFO_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device10getPicInfoEP20__VDEC_DRV_PICINFO_T(void) {
    ALOGD("_ZN13MtkV4L2Device10getPicInfoEP20__VDEC_DRV_PICINFO_T() called");
    return 0;
}

/* Exported Object: H263LevelMapTable */
extern "C" __attribute__((visibility("default"))) void* H263LevelMapTable = NULL;

/* Exported Object: vtable for OmxMVAManager */
extern "C" __attribute__((visibility("default"))) void* _ZTV13OmxMVAManager = NULL;

/* Demangled: MtkOmxVdec::QueueInputBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec16QueueInputBufferEi(void) {
    ALOGD("_ZN10MtkOmxVdec16QueueInputBufferEi() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleEmptyThisBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec21HandleEmptyThisBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec21HandleEmptyThisBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxCmdQueue::GetCmd(_MTK_OMX_CMD_QUEUE_ITEM**, OMX_BOOL) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkOmxCmdQueue6GetCmdEPP23_MTK_OMX_CMD_QUEUE_ITEM8OMX_BOOL(void) {
    ALOGD("_ZN14MtkOmxCmdQueue6GetCmdEPP23_MTK_OMX_CMD_QUEUE_ITEM8OMX_BOOL() called");
    return 0;
}

/* Exported Object: HDRMatrixCoeffMap */
extern "C" __attribute__((visibility("default"))) void* HDRMatrixCoeffMap = NULL;

/* Demangled: MtkV4L2Device::setFormatFrameBuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device20setFormatFrameBufferEj(void) {
    ALOGD("_ZN13MtkV4L2Device20setFormatFrameBufferEj() called");
    return 0;
}

/* Demangled: std::__1::deque<_MTK_OMX_CMD_QUEUE_ITEM*, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM*> >::push_back(_MTK_OMX_CMD_QUEUE_ITEM* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE9push_backERKS2_(void) {
    ALOGD("_ZNSt3__15dequeIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE9push_backERKS2_() called");
    return 0;
}

/* Demangled: CmdThreadRequestHandler::~CmdThreadRequestHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN23CmdThreadRequestHandlerD1Ev(void) {
    ALOGD("_ZN23CmdThreadRequestHandlerD1Ev() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIiE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: MTK_OMX_ALLOC(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z13MTK_OMX_ALLOCj(void) {
    ALOGD("_Z13MTK_OMX_ALLOCj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::DecodeVideoEx(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec13DecodeVideoExEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec13DecodeVideoExEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::DISetGrallocExtra(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec17DISetGrallocExtraEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec17DISetGrallocExtraEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleGetPortFormat(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec19HandleGetPortFormatEPv(void) {
    ALOGD("_ZN10MtkOmxVdec19HandleGetPortFormatEPv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::ComponentDeInitDebug() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec20ComponentDeInitDebugEv(void) {
    ALOGD("_ZN10MtkOmxVdec20ComponentDeInitDebugEv() called");
    return 0;
}

/* Demangled: MtkOmxCmdQueue::NewCmdItem(_MTK_OMX_CMD_QUEUE_ITEM**) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkOmxCmdQueue10NewCmdItemEPP23_MTK_OMX_CMD_QUEUE_ITEM(void) {
    ALOGD("_ZN14MtkOmxCmdQueue10NewCmdItemEPP23_MTK_OMX_CMD_QUEUE_ITEM() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleUseAndroidNativeBuffer(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec28HandleUseAndroidNativeBufferEPvS0_(void) {
    ALOGD("_ZN10MtkOmxVdec28HandleUseAndroidNativeBufferEPvS0_() called");
    return 0;
}

/* Demangled: MtkOmxVdec::supportAutoEnlarge() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec18supportAutoEnlargeEv(void) {
    ALOGD("_ZN10MtkOmxVdec18supportAutoEnlargeEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Demangled: android::Vector<v4l2_buffer*>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP11v4l2_bufferE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIP11v4l2_bufferE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::FreeBuffer(void*, unsigned int, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec10FreeBufferEPvjP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec10FreeBufferEPvjP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::ComponentInitDebug() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec18ComponentInitDebugEv(void) {
    ALOGD("_ZN10MtkOmxVdec18ComponentInitDebugEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleSetVideoPortFormat(OMX_PARAM_PORTDEFINITIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec24HandleSetVideoPortFormatEP28OMX_PARAM_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec24HandleSetVideoPortFormatEP28OMX_PARAM_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetupBufferInfoForMPEG4() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec23SetupBufferInfoForMPEG4Ev(void) {
    ALOGD("_ZN10MtkOmxVdec23SetupBufferInfoForMPEG4Ev() called");
    return 0;
}

/* Demangled: V4L2QueueRecorder::~V4L2QueueRecorder() */
extern "C" __attribute__((visibility("default"))) int _ZN17V4L2QueueRecorderD2Ev(void) {
    ALOGD("_ZN17V4L2QueueRecorderD2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: OmxMVAEntry::setToVBufInfo(_VBufInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN11OmxMVAEntry13setToVBufInfoEP9_VBufInfo(void) {
    ALOGD("_ZN11OmxMVAEntry13setToVBufInfoEP9_VBufInfo() called");
    return 0;
}

/* Demangled: MtkOmxVdec::InsertFrmBuf(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec12InsertFrmBufEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec12InsertFrmBufEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetFreeInputBuffer(OMX_BOOL, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec18GetFreeInputBufferE8OMX_BOOLP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec18GetFreeInputBufferE8OMX_BOOLP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Exported Object: AvcLevelMapTable */
extern "C" __attribute__((visibility("default"))) void* AvcLevelMapTable = NULL;

/* Demangled: MtkOmxVdec::RemoveInputBuf(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec14RemoveInputBufEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec14RemoveInputBufEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::dequeueBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec14dequeueBuffersEv(void) {
    ALOGD("_ZN10MtkOmxVdec14dequeueBuffersEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GrallocExtraSetBufParameter(native_handle const*, unsigned int, unsigned int, long long, char, char) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec27GrallocExtraSetBufParameterEPK13native_handlejjxcc(void) {
    ALOGD("_ZN10MtkOmxVdec27GrallocExtraSetBufParameterEPK13native_handlejjxcc() called");
    return 0;
}

/* Demangled: void std::__1::__insertion_sort_3<bool (*&)(long long, long long), long long*>(long long*, long long*, bool (*&)(long long, long long)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__118__insertion_sort_3IRPFbxxEPxEEvT0_S5_T_(void) {
    ALOGD("_ZNSt3__118__insertion_sort_3IRPFbxxEPxEEvT0_S5_T_() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: MtkOmxVdec::isThereCmdThreadRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec23isThereCmdThreadRequestEv(void) {
    ALOGD("_ZN10MtkOmxVdec23isThereCmdThreadRequestEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::InsertionSortForInputPTS(long long) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec24InsertionSortForInputPTSEx(void) {
    ALOGD("_ZN10MtkOmxVdec24InsertionSortForInputPTSEx() called");
    return 0;
}

/* Demangled: MtkV4L2Device::queueBitstream(int, int, int, int, long long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device14queueBitstreamEiiiixi(void) {
    ALOGD("_ZN13MtkV4L2Device14queueBitstreamEiiiixi() called");
    return 0;
}

/* Demangled: android::Vector<_FenceAndBufIdxMap>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI18_FenceAndBufIdxMapE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorI18_FenceAndBufIdxMapE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::AllocateBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec14AllocateBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_j(void) {
    ALOGD("_ZN10MtkOmxVdec14AllocateBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_j() called");
    return 0;
}

/* Demangled: MtkOmxVdec::CheckFreeBuffer(OMX_BOOL) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec15CheckFreeBufferE8OMX_BOOL(void) {
    ALOGD("_ZN10MtkOmxVdec15CheckFreeBufferE8OMX_BOOL() called");
    return 0;
}

/* Demangled: MtkOmxVdec::QueueOutputBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec17QueueOutputBufferEi(void) {
    ALOGD("_ZN10MtkOmxVdec17QueueOutputBufferEi() called");
    return 0;
}

/* Demangled: MtkOmxVdec::CheckKKLaterSetParameters(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec25CheckKKLaterSetParametersE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVdec25CheckKKLaterSetParametersE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: MtkV4L2Device::setQueuedFrameBufCount(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device22setQueuedFrameBufCountEj(void) {
    ALOGD("_ZN13MtkV4L2Device22setQueuedFrameBufCountEj() called");
    return 0;
}

/* Exported Object: AvcProfileMapTable */
extern "C" __attribute__((visibility("default"))) void* AvcProfileMapTable = NULL;

/* Demangled: MtkV4L2Device::StreamOffFrameBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device20StreamOffFrameBufferEv(void) {
    ALOGD("_ZN13MtkV4L2Device20StreamOffFrameBufferEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::Debug_Enabled() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec13Debug_EnabledEv(void) {
    ALOGD("_ZN10MtkOmxVdec13Debug_EnabledEv() called");
    return 0;
}

/* Exported Object: vtable for OmxIonMVAMap */
extern "C" __attribute__((visibility("default"))) void* _ZTV12OmxIonMVAMap = NULL;

/* Demangled: sem_wait_timeout(sem_t*, int) */
extern "C" __attribute__((visibility("default"))) int _Z16sem_wait_timeoutP5sem_ti(void) {
    ALOGD("_Z16sem_wait_timeoutP5sem_ti() called");
    return 0;
}

/* Demangled: OmxMVAManager::getOmxMVAFromHndlToVencBS(void*, __VENC_DRV_PARAM_BS_BUF_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager25getOmxMVAFromHndlToVencBSEPvP25__VENC_DRV_PARAM_BS_BUF_T(void) {
    ALOGD("_ZN13OmxMVAManager25getOmxMVAFromHndlToVencBSEPvP25__VENC_DRV_PARAM_BS_BUF_T() called");
    return 0;
}

/* Demangled: MtkOmxVdecThread(void*) */
extern "C" __attribute__((visibility("default"))) int _Z16MtkOmxVdecThreadPv(void) {
    ALOGD("_Z16MtkOmxVdecThreadPv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleGetVdecVideoSpecQuerySupported(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec36HandleGetVdecVideoSpecQuerySupportedEPv(void) {
    ALOGD("_ZN10MtkOmxVdec36HandleGetVdecVideoSpecQuerySupportedEPv() called");
    return 0;
}

/* Demangled: MtkV4L2Device::queueFrameBuffer(int, int, int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device16queueFrameBufferEiiiib(void) {
    ALOGD("_ZN13MtkV4L2Device16queueFrameBufferEiiiib() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetParameter(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec12GetParameterEPv13OMX_INDEXTYPES0_(void) {
    ALOGD("_ZN10MtkOmxVdec12GetParameterEPv13OMX_INDEXTYPES0_() called");
    return 0;
}

/* Demangled: MtkV4L2Device::checkVideoFormat(__VDEC_DRV_QUERY_VIDEO_FORMAT_T*, __VDEC_DRV_QUERY_VIDEO_FORMAT_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device16checkVideoFormatEP31__VDEC_DRV_QUERY_VIDEO_FORMAT_TS1_(void) {
    ALOGD("_ZN13MtkV4L2Device16checkVideoFormatEP31__VDEC_DRV_QUERY_VIDEO_FORMAT_TS1_() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::OmxIonMVAMap(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMapC1EPKc(void) {
    ALOGD("_ZN12OmxIonMVAMapC1EPKc() called");
    return 0;
}

/* Demangled: OmxMVAManager::OmxMVAManager(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManagerC2EPKcS1_(void) {
    ALOGD("_ZN13OmxMVAManagerC2EPKcS1_() called");
    return 0;
}

/* Demangled: MtkOmxVdec::InitVpxParams() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec13InitVpxParamsEv(void) {
    ALOGD("_ZN10MtkOmxVdec13InitVpxParamsEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::InitXvidParams() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec14InitXvidParamsEv(void) {
    ALOGD("_ZN10MtkOmxVdec14InitXvidParamsEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<_MTK_OMX_CMD_QUEUE_ITEM**, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM**> >::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS3_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS3_EEED2Ev() called");
    return 0;
}

/* Demangled: MtkOmxVdec::InitCommonParam(char*, OMX_VIDEO_CODINGTYPE, char*, OMX_VIDEO_CODINGTYPE, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec15InitCommonParamEPc20OMX_VIDEO_CODINGTYPES0_S1_iiii(void) {
    ALOGD("_ZN10MtkOmxVdec15InitCommonParamEPc20OMX_VIDEO_CODINGTYPES0_S1_iiii() called");
    return 0;
}

/* Demangled: getTickCountMs() */
extern "C" __attribute__((visibility("default"))) int _Z14getTickCountMsv(void) {
    ALOGD("_Z14getTickCountMsv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::OpenInputDumpFile() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec17OpenInputDumpFileEv(void) {
    ALOGD("_ZN10MtkOmxVdec17OpenInputDumpFileEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetParameterSrting(OMX_INDEXTYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec18GetParameterSrtingE13OMX_INDEXTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec18GetParameterSrtingE13OMX_INDEXTYPE() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetColorFormat_MTKYUV_UFO(OMX_PARAM_PORTDEFINITIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec25SetColorFormat_MTKYUV_UFOEP28OMX_PARAM_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec25SetColorFormat_MTKYUV_UFOEP28OMX_PARAM_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Demangled: OmxMVAManager::OmxMVAManager() */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManagerC2Ev(void) {
    ALOGD("_ZN13OmxMVAManagerC2Ev() called");
    return 0;
}

/* Demangled: MtkOmxVdec::dumpInputBuffer(OMX_BUFFERHEADERTYPE*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec15dumpInputBufferEP20OMX_BUFFERHEADERTYPEPhj(void) {
    ALOGD("_ZN10MtkOmxVdec15dumpInputBufferEP20OMX_BUFFERHEADERTYPEPhj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetInputPortViLTE() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec17SetInputPortViLTEEv(void) {
    ALOGD("_ZN10MtkOmxVdec17SetInputPortViLTEEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetGeneralBufferSize() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec20GetGeneralBufferSizeEv(void) {
    ALOGD("_ZN10MtkOmxVdec20GetGeneralBufferSizeEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::IsInETBQ(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec8IsInETBQEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec8IsInETBQEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: V4L2QueueRecorder::V4L2QueueRecorder() */
extern "C" __attribute__((visibility("default"))) int _ZN17V4L2QueueRecorderC1Ev(void) {
    ALOGD("_ZN17V4L2QueueRecorderC1Ev() called");
    return 0;
}

/* Demangled: MtkVdec_GetComponentVersion(void*, char*, OMX_VERSIONTYPE*, OMX_VERSIONTYPE*, unsigned char (*) [128]) */
extern "C" __attribute__((visibility("default"))) int _Z27MtkVdec_GetComponentVersionPvPcP15OMX_VERSIONTYPES2_PA128_h(void) {
    ALOGD("_Z27MtkVdec_GetComponentVersionPvPcP15OMX_VERSIONTYPES2_PA128_h() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetCallbacks(void*, OMX_CALLBACKTYPE*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec12SetCallbacksEPvP16OMX_CALLBACKTYPES0_(void) {
    ALOGD("_ZN10MtkOmxVdec12SetCallbacksEPvP16OMX_CALLBACKTYPES0_() called");
    return 0;
}

/* Demangled: MtkOmxVdec::CheckMLaterSetParameters(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec24CheckMLaterSetParametersE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN10MtkOmxVdec24CheckMLaterSetParametersE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetIonHandleFromGraphicHandle(unsigned int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec29GetIonHandleFromGraphicHandleEPjPi(void) {
    ALOGD("_ZN10MtkOmxVdec29GetIonHandleFromGraphicHandleEPjPi() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetupBufferInfoForAV1() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec21SetupBufferInfoForAV1Ev(void) {
    ALOGD("_ZN10MtkOmxVdec21SetupBufferInfoForAV1Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Exported Object: OmxVdecLogValue */
extern "C" __attribute__((visibility("default"))) void* OmxVdecLogValue = NULL;

/* Demangled: MtkOmxVdec::SetupBufferInfoForH264() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec22SetupBufferInfoForH264Ev(void) {
    ALOGD("_ZN10MtkOmxVdec22SetupBufferInfoForH264Ev() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetupBufferInfoForHEVC() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec22SetupBufferInfoForHEVCEv(void) {
    ALOGD("_ZN10MtkOmxVdec22SetupBufferInfoForHEVCEv() called");
    return 0;
}

/* Demangled: __divmoddi4 */
extern "C" __attribute__((visibility("default"))) int __divmoddi4(void) {
    ALOGD("__divmoddi4() called");
    return 0;
}

/* Demangled: CmdThreadRequestHandler::getRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN23CmdThreadRequestHandler10getRequestEv(void) {
    ALOGD("_ZN23CmdThreadRequestHandler10getRequestEv() called");
    return 0;
}

/* Exported Object: VP9ProfileMapTable */
extern "C" __attribute__((visibility("default"))) void* VP9ProfileMapTable = NULL;

/* Demangled: MtkOmxVdec::HandleFillBufferDone(OMX_BUFFERHEADERTYPE*, OMX_BOOL, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec20HandleFillBufferDoneEP20OMX_BUFFERHEADERTYPE8OMX_BOOLi(void) {
    ALOGD("_ZN10MtkOmxVdec20HandleFillBufferDoneEP20OMX_BUFFERHEADERTYPE8OMX_BOOLi() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetInputBufferCheckSum(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec22GetInputBufferCheckSumEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec22GetInputBufferCheckSumEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::initCodec(OMX_BUFFERHEADERTYPE*, OMX_BOOL*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec9initCodecEP20OMX_BUFFERHEADERTYPEP8OMX_BOOL(void) {
    ALOGD("_ZN10MtkOmxVdec9initCodecEP20OMX_BUFFERHEADERTYPEP8OMX_BOOL() called");
    return 0;
}

/* Demangled: MtkV4L2Device::GetStateString(MtkV4L2Device_State, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device14GetStateStringE19MtkV4L2Device_StatePc(void) {
    ALOGD("_ZN13MtkV4L2Device14GetStateStringE19MtkV4L2Device_StatePc() called");
    return 0;
}

/* Demangled: OmxMVAManager::setBoolProperty(char const*, OMX_BOOL) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager15setBoolPropertyEPKc8OMX_BOOL(void) {
    ALOGD("_ZN13OmxMVAManager15setBoolPropertyEPKc8OMX_BOOL() called");
    return 0;
}

/* Demangled: MtkVdec_FreeBuffer(void*, unsigned int, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _Z18MtkVdec_FreeBufferPvjP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_Z18MtkVdec_FreeBufferPvjP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::RemoveFrmBuf(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec12RemoveFrmBufEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec12RemoveFrmBufEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::InitHEVCSecParams() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec17InitHEVCSecParamsEv(void) {
    ALOGD("_ZN10MtkOmxVdec17InitHEVCSecParamsEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::~MtkOmxVdec() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdecD2Ev(void) {
    ALOGD("_ZN10MtkOmxVdecD2Ev() called");
    return 0;
}

/* Demangled: MtkV4L2Device::MtkV4L2Device() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2DeviceC2Ev(void) {
    ALOGD("_ZN13MtkV4L2DeviceC2Ev() called");
    return 0;
}

/* Demangled: MtkOmxVdec::queueBuffers(int*, OMX_BOOL*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec12queueBuffersEPiP8OMX_BOOL(void) {
    ALOGD("_ZN10MtkOmxVdec12queueBuffersEPiP8OMX_BOOL() called");
    return 0;
}

/* Demangled: MtkOmxCmdQueue::PutCmd(_MTK_OMX_CMD_QUEUE_ITEM*) */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkOmxCmdQueue6PutCmdEP23_MTK_OMX_CMD_QUEUE_ITEM(void) {
    ALOGD("_ZN14MtkOmxCmdQueue6PutCmdEP23_MTK_OMX_CMD_QUEUE_ITEM() called");
    return 0;
}

/* Demangled: MtkOmxVdec::FlushInputPort() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec14FlushInputPortEv(void) {
    ALOGD("_ZN10MtkOmxVdec14FlushInputPortEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleFillBufferDone_FillBufferToFramework(OMX_BUFFERHEADERTYPE*, OMX_BOOL, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec42HandleFillBufferDone_FillBufferToFrameworkEP20OMX_BUFFERHEADERTYPE8OMX_BOOLi(void) {
    ALOGD("_ZN10MtkOmxVdec42HandleFillBufferDone_FillBufferToFrameworkEP20OMX_BUFFERHEADERTYPE8OMX_BOOLi() called");
    return 0;
}

/* Demangled: MtkOmxCmdQueue::~MtkOmxCmdQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN14MtkOmxCmdQueueD1Ev(void) {
    ALOGD("_ZN14MtkOmxCmdQueueD1Ev() called");
    return 0;
}

/* Exported Object: bOmxVdecLogEnable */
extern "C" __attribute__((visibility("default"))) void* bOmxVdecLogEnable = NULL;

/* Demangled: MtkOmxVdec::InitAvcParams() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec13InitAvcParamsEv(void) {
    ALOGD("_ZN10MtkOmxVdec13InitAvcParamsEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::InitAv1SecParams() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec16InitAv1SecParamsEv(void) {
    ALOGD("_ZN10MtkOmxVdec16InitAv1SecParamsEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::CheckGetParamState() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec18CheckGetParamStateEv(void) {
    ALOGD("_ZN10MtkOmxVdec18CheckGetParamStateEv() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: std::__1::function<void (void*, unsigned long)>::operator()(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__18functionIFvPvmEEclES1_m(void) {
    ALOGD("_ZNKSt3__18functionIFvPvmEEclES1_m() called");
    return 0;
}

/* Demangled: OmxMVAManager::~OmxMVAManager() */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManagerD0Ev(void) {
    ALOGD("_ZN13OmxMVAManagerD0Ev() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetupMetaSecureHandle(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec21SetupMetaSecureHandleEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec21SetupMetaSecureHandleEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: MtkV4L2Device::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device5resetEv(void) {
    ALOGD("_ZN13MtkV4L2Device5resetEv() called");
    return 0;
}

/* Demangled: android::Vector<OmxMVAEntry*>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP11OmxMVAEntryE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIP11OmxMVAEntryE12do_constructEPvj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::MtkOmxVdecDebug() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec15MtkOmxVdecDebugEv(void) {
    ALOGD("_ZN10MtkOmxVdec15MtkOmxVdecDebugEv() called");
    return 0;
}

/* Demangled: MtkV4L2Device::updateCapFmt() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device12updateCapFmtEv(void) {
    ALOGD("_ZN13MtkV4L2Device12updateCapFmtEv() called");
    return 0;
}

/* Demangled: MtkVdec_UseBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z17MtkVdec_UseBufferPvPP20OMX_BUFFERHEADERTYPEjS_jPh(void) {
    ALOGD("_Z17MtkVdec_UseBufferPvPP20OMX_BUFFERHEADERTYPEjS_jPh() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleMarkBuffer(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec16HandleMarkBufferEjPv(void) {
    ALOGD("_ZN10MtkOmxVdec16HandleMarkBufferEjPv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleFillBufferDone_FillBufferToPostProcess(OMX_BUFFERHEADERTYPE*, OMX_BOOL) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec44HandleFillBufferDone_FillBufferToPostProcessEP20OMX_BUFFERHEADERTYPE8OMX_BOOL(void) {
    ALOGD("_ZN10MtkOmxVdec44HandleFillBufferDone_FillBufferToPostProcessEP20OMX_BUFFERHEADERTYPE8OMX_BOOL() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<_MTK_OMX_CMD_QUEUE_ITEM**, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM**>&>::push_front(_MTK_OMX_CMD_QUEUE_ITEM** const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMRNS_9allocatorIS3_EEE10push_frontERKS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMRNS_9allocatorIS3_EEE10push_frontERKS3_() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__sort3<bool (*&)(long long, long long), long long*>(long long*, long long*, long long*, bool (*&)(long long, long long)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17__sort3IRPFbxxEPxEEjT0_S5_S5_T_(void) {
    ALOGD("_ZNSt3__17__sort3IRPFbxxEPxEEjT0_S5_S5_T_() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetColorFormat_YV12(OMX_PARAM_PORTDEFINITIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec19SetColorFormat_YV12EP28OMX_PARAM_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec19SetColorFormat_YV12EP28OMX_PARAM_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Demangled: MtkOmxVdec::Debug_MMDump_Init(MTK_VDEC_CODEC_ID, v4l2_formatdesc, _VDEC_DRV_COLOR_PRIMARIES_E, MtkOmxVdec::_FrmBufStruct*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec17Debug_MMDump_InitE17MTK_VDEC_CODEC_ID15v4l2_formatdesc27_VDEC_DRV_COLOR_PRIMARIES_EPNS_13_FrmBufStructE(void) {
    ALOGD("_ZN10MtkOmxVdec17Debug_MMDump_InitE17MTK_VDEC_CODEC_ID15v4l2_formatdesc27_VDEC_DRV_COLOR_PRIMARIES_EPNS_13_FrmBufStructE() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: MtkOmxVdec::IsHDRSetByFramework() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec19IsHDRSetByFrameworkEv(void) {
    ALOGD("_ZN10MtkOmxVdec19IsHDRSetByFrameworkEv() called");
    return 0;
}

/* Demangled: _calculate_crc32(unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z16_calculate_crc32Phj(void) {
    ALOGD("_Z16_calculate_crc32Phj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::GetOutputPortFormat(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec19GetOutputPortFormatEPv(void) {
    ALOGD("_ZN10MtkOmxVdec19GetOutputPortFormatEPv() called");
    return 0;
}

/* Demangled: OmxMVAManager::freeOmxMVAByHndl(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OmxMVAManager16freeOmxMVAByHndlEPv(void) {
    ALOGD("_ZN13OmxMVAManager16freeOmxMVAByHndlEPv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, long long> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIixEEEE = NULL;

/* Demangled: OmxIonMVAMap::~OmxIonMVAMap() */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMapD0Ev(void) {
    ALOGD("_ZN12OmxIonMVAMapD0Ev() called");
    return 0;
}

/* Demangled: MtkOmxVdec::ReturnPendingOutputBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec26ReturnPendingOutputBuffersEv(void) {
    ALOGD("_ZN10MtkOmxVdec26ReturnPendingOutputBuffersEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::MtkOmxVdec() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdecC1Ev(void) {
    ALOGD("_ZN10MtkOmxVdecC1Ev() called");
    return 0;
}

/* Demangled: pthread_mutex_lock_timeout(pthread_mutex_t*, int) */
extern "C" __attribute__((visibility("default"))) int _Z26pthread_mutex_lock_timeoutP15pthread_mutex_ti(void) {
    ALOGD("_Z26pthread_mutex_lock_timeoutP15pthread_mutex_ti() called");
    return 0;
}

/* Demangled: OmxIonMVAEntry::setToVBufInfo(_VBufInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN14OmxIonMVAEntry13setToVBufInfoEP9_VBufInfo(void) {
    ALOGD("_ZN14OmxIonMVAEntry13setToVBufInfoEP9_VBufInfo() called");
    return 0;
}

/* Demangled: MtkOmxVdec::CheckLogEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec14CheckLogEnableEv(void) {
    ALOGD("_ZN10MtkOmxVdec14CheckLogEnableEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetFreeGeneralBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec20SetFreeGeneralBufferEi(void) {
    ALOGD("_ZN10MtkOmxVdec20SetFreeGeneralBufferEi() called");
    return 0;
}

/* Demangled: MtkOmxVdec::Debug_MMPath() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec12Debug_MMPathEv(void) {
    ALOGD("_ZN10MtkOmxVdec12Debug_MMPathEv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::HandleEnableAndroidNativeBuffers(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec32HandleEnableAndroidNativeBuffersEPv(void) {
    ALOGD("_ZN10MtkOmxVdec32HandleEnableAndroidNativeBuffersEPv() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetColorFormat_MTKYUV_UFO_AUO(OMX_PARAM_PORTDEFINITIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec29SetColorFormat_MTKYUV_UFO_AUOEP28OMX_PARAM_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec29SetColorFormat_MTKYUV_UFO_AUOEP28OMX_PARAM_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::newEntry(int, int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMap8newEntryEiiPv(void) {
    ALOGD("_ZN12OmxIonMVAMap8newEntryEiiPv() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::freeEntry(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMap9freeEntryEPv(void) {
    ALOGD("_ZN12OmxIonMVAMap9freeEntryEPv() called");
    return 0;
}

/* Demangled: android::Vector<OmxMVAEntry*>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP11OmxMVAEntryE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIP11OmxMVAEntryE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::ConfigIonBuffer(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec15ConfigIonBufferEii(void) {
    ALOGD("_ZN10MtkOmxVdec15ConfigIonBufferEii() called");
    return 0;
}

/* Demangled: MtkOmxVdec::DequeueOutputBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec19DequeueOutputBufferEv(void) {
    ALOGD("_ZN10MtkOmxVdec19DequeueOutputBufferEv() called");
    return 0;
}

/* Demangled: MtkV4L2Device::deinitialize() */
extern "C" __attribute__((visibility("default"))) int _ZN13MtkV4L2Device12deinitializeEv(void) {
    ALOGD("_ZN13MtkV4L2Device12deinitializeEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::SetColorFormat_MTKYUV_10BIT_V_JUMP(OMX_PARAM_PORTDEFINITIONTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec34SetColorFormat_MTKYUV_10BIT_V_JUMPEP28OMX_PARAM_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN10MtkOmxVdec34SetColorFormat_MTKYUV_10BIT_V_JUMPEP28OMX_PARAM_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Demangled: android::Vector<v4l2_buffer*>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP11v4l2_bufferE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIP11v4l2_bufferE12do_constructEPvj() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: OmxIonMVAMap::OmxIonMVAMap(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12OmxIonMVAMapC2EPKc(void) {
    ALOGD("_ZN12OmxIonMVAMapC2EPKc() called");
    return 0;
}

/* Demangled: MtkVdec_ComponentRoleEnum(void*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z25MtkVdec_ComponentRoleEnumPvPhj(void) {
    ALOGD("_Z25MtkVdec_ComponentRoleEnumPvPhj() called");
    return 0;
}

/* Demangled: MtkOmxVdec::ValidateAndRemovePTS(long long) */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec20ValidateAndRemovePTSEx(void) {
    ALOGD("_ZN10MtkOmxVdec20ValidateAndRemovePTSEx() called");
    return 0;
}

/* Demangled: MtkOmxVdec::DeQueueOutputColorConvertDstBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec34DeQueueOutputColorConvertDstBufferEv(void) {
    ALOGD("_ZN10MtkOmxVdec34DeQueueOutputColorConvertDstBufferEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: V4L2QueueRecorder::eraseElement(int) */
extern "C" __attribute__((visibility("default"))) int _ZN17V4L2QueueRecorder12eraseElementEi(void) {
    ALOGD("_ZN17V4L2QueueRecorder12eraseElementEi() called");
    return 0;
}

/* Demangled: MtkOmxVdec::queueFrameBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN10MtkOmxVdec16queueFrameBufferEv(void) {
    ALOGD("_ZN10MtkOmxVdec16queueFrameBufferEv() called");
    return 0;
}

/* Demangled: CmdThreadRequestHandler::setRequest(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN23CmdThreadRequestHandler10setRequestEj(void) {
    ALOGD("_ZN23CmdThreadRequestHandler10setRequestEj() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}
