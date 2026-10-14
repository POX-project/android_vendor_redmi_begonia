/*
 * Reverse-Engineered ABI Specification for: libMtkOmxVdecEx.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libMtkOmxVdecEx.so
 */

#ifndef BEGONIA_RE_LIBMTKOMXVDECEX_H
#define BEGONIA_RE_LIBMTKOMXVDECEX_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN12OmxIonMVAMap21getIonPhysicalAddressEii */
/* Demangled: OmxIonMVAMap::getIonPhysicalAddress(int, int) */
int _ZN12OmxIonMVAMap21getIonPhysicalAddressEii(void);

/* Symbol: _Z17MtkVdec_GetConfigPv13OMX_INDEXTYPES_ */
/* Demangled: MtkVdec_GetConfig(void*, OMX_INDEXTYPE, void*) */
int _Z17MtkVdec_GetConfigPv13OMX_INDEXTYPES_(void);

/* Symbol: _ZN10MtkOmxVdec12ConvertFrameEPNS_13_FrmBufStructES1_Pi8OMX_BOOL */
/* Demangled: MtkOmxVdec::ConvertFrame(MtkOmxVdec::_FrmBufStruct*, MtkOmxVdec::_FrmBufStruct*, int*, OMX_BOOL) */
int _ZN10MtkOmxVdec12ConvertFrameEPNS_13_FrmBufStructES1_Pi8OMX_BOOL(void);

/* Symbol: _ZN10MtkOmxVdec23HandleColorAspectChangeEN7android12ColorAspectsE */
/* Demangled: MtkOmxVdec::HandleColorAspectChange(android::ColorAspects) */
int _ZN10MtkOmxVdec23HandleColorAspectChangeEN7android12ColorAspectsE(void);

/* Symbol: _ZN10MtkOmxVdec28getReconfigOutputPortSettingEv */
/* Demangled: MtkOmxVdec::getReconfigOutputPortSetting() */
int _ZN10MtkOmxVdec28getReconfigOutputPortSettingEv(void);

/* Symbol: _ZN10MtkOmxVdec32HandleSetMtkOmxVdecThumbnailModeEv */
/* Demangled: MtkOmxVdec::HandleSetMtkOmxVdecThumbnailMode() */
int _ZN10MtkOmxVdec32HandleSetMtkOmxVdecThumbnailModeEv(void);

/* Symbol: _ZN13MtkV4L2Device17setFormatBistreamEjj */
/* Demangled: MtkV4L2Device::setFormatBistream(unsigned int, unsigned int) */
int _ZN13MtkV4L2Device17setFormatBistreamEjj(void);

/* Symbol: _ZN13MtkV4L2Device22setDevicePollInterruptEv */
/* Demangled: MtkV4L2Device::setDevicePollInterrupt() */
int _ZN13MtkV4L2Device22setDevicePollInterruptEv(void);

/* Symbol: _Z17MtkVdec_SetConfigPv13OMX_INDEXTYPES_ */
/* Demangled: MtkVdec_SetConfig(void*, OMX_INDEXTYPE, void*) */
int _Z17MtkVdec_SetConfigPv13OMX_INDEXTYPES_(void);

/* Symbol: _ZN10MtkOmxVdec17FreeGeneralBufferEv */
/* Demangled: MtkOmxVdec::FreeGeneralBuffer() */
int _ZN10MtkOmxVdec17FreeGeneralBufferEv(void);

/* Symbol: _ZN13OmxMVAManager4initEPKcS1_ */
/* Demangled: OmxMVAManager::init(char const*, char const*) */
int _ZN13OmxMVAManager4initEPKcS1_(void);

/* Symbol: _Z19MtkVdec_SendCommandPv15OMX_COMMANDTYPEjS_ */
/* Demangled: MtkVdec_SendCommand(void*, OMX_COMMANDTYPE, unsigned int, void*) */
int _Z19MtkVdec_SendCommandPv15OMX_COMMANDTYPEjS_(void);

/* Symbol: _ZN10MtkOmxVdec19GetCCQCriticalValueEv */
/* Demangled: MtkOmxVdec::GetCCQCriticalValue() */
int _ZN10MtkOmxVdec19GetCCQCriticalValueEv(void);

/* Symbol: _ZNK7android6VectorIxE8do_splatEPvPKvj */
/* Demangled: android::Vector<long long>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIxE8do_splatEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIP11v4l2_bufferE10do_destroyEPvj */
/* Demangled: android::Vector<v4l2_buffer*>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIP11v4l2_bufferE10do_destroyEPvj(void);

/* Symbol: _ZN10MtkOmxVdec17CodecTypeToStringE17MTK_VDEC_CODEC_IDPc */
/* Demangled: MtkOmxVdec::CodecTypeToString(MTK_VDEC_CODEC_ID, char*) */
int _ZN10MtkOmxVdec17CodecTypeToStringE17MTK_VDEC_CODEC_IDPc(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZN10MtkOmxVdec16CopyHDRColorDescEv */
/* Demangled: MtkOmxVdec::CopyHDRColorDesc() */
int _ZN10MtkOmxVdec16CopyHDRColorDescEv(void);

/* Symbol: _ZN10MtkOmxVdec23HandleSetPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE */
/* Demangled: MtkOmxVdec::HandleSetPortDefinition(OMX_PARAM_PORTDEFINITIONTYPE*) */
int _ZN10MtkOmxVdec23HandleSetPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE(void);

/* Symbol: _ZN10MtkOmxVdec35HandleColorConvertForFillBufferDoneEj8OMX_BOOL */
/* Demangled: MtkOmxVdec::HandleColorConvertForFillBufferDone(unsigned int, OMX_BOOL) */
int _ZN10MtkOmxVdec35HandleColorConvertForFillBufferDoneEj8OMX_BOOL(void);

/* Symbol: _ZN13MtkV4L2Device10IsStreamOnE13V4L2QueueType */
/* Demangled: MtkV4L2Device::IsStreamOn(V4L2QueueType) */
int _ZN13MtkV4L2Device10IsStreamOnE13V4L2QueueType(void);

/* Symbol: _ZNK7android6VectorIP11v4l2_bufferE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<v4l2_buffer*>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIP11v4l2_bufferE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVdec14GetDateTimeStrEPcj */
/* Demangled: MtkOmxVdec::GetDateTimeStr(char*, unsigned int) */
int _ZN10MtkOmxVdec14GetDateTimeStrEPcj(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _ZN10MtkOmxVdec15IsNotUsedBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::IsNotUsedBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec15IsNotUsedBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVdec24StreamOnFrameBufferQueueEv */
/* Demangled: MtkOmxVdec::StreamOnFrameBufferQueue() */
int _ZN10MtkOmxVdec24StreamOnFrameBufferQueueEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVdec17AppInsight_OnInitE17MTK_VDEC_CODEC_ID15v4l2_formatdesc27_VDEC_DRV_COLOR_PRIMARIES_E */
/* Demangled: MtkOmxVdec::AppInsight_OnInit(MTK_VDEC_CODEC_ID, v4l2_formatdesc, _VDEC_DRV_COLOR_PRIMARIES_E) */
int _ZN10MtkOmxVdec17AppInsight_OnInitE17MTK_VDEC_CODEC_ID15v4l2_formatdesc27_VDEC_DRV_COLOR_PRIMARIES_E(void);

/* Symbol: _Z19thread_exit_handleri */
/* Demangled: thread_exit_handler(int) */
int _Z19thread_exit_handleri(void);

/* Symbol: AV1ProfileMapTable */
/* Demangled: AV1ProfileMapTable */
extern void* AV1ProfileMapTable;

/* Symbol: _ZN10MtkOmxVdec13FreeIonHandleEi */
/* Demangled: MtkOmxVdec::FreeIonHandle(int) */
int _ZN10MtkOmxVdec13FreeIonHandleEi(void);

/* Symbol: _ZN10MtkOmxVdec16needColorConvertEv */
/* Demangled: MtkOmxVdec::needColorConvert() */
int _ZN10MtkOmxVdec16needColorConvertEv(void);

/* Symbol: _ZN10MtkOmxVdec29SetupMetaIonHandleAndGetFrameEP21__VDEC_DRV_FRAMEBUF_TPh */
/* Demangled: MtkOmxVdec::SetupMetaIonHandleAndGetFrame(__VDEC_DRV_FRAMEBUF_T*, unsigned char*) */
int _ZN10MtkOmxVdec29SetupMetaIonHandleAndGetFrameEP21__VDEC_DRV_FRAMEBUF_TPh(void);

/* Symbol: _ZN13OmxMVAManager19getMapIndexFromHndlEPv */
/* Demangled: OmxMVAManager::getMapIndexFromHndl(void*) */
int _ZN13OmxMVAManager19getMapIndexFromHndlEPv(void);

/* Symbol: _ZN13MtkV4L2Device19StreamOnFrameBufferEv */
/* Demangled: MtkV4L2Device::StreamOnFrameBuffer() */
int _ZN13MtkV4L2Device19StreamOnFrameBufferEv(void);

/* Symbol: _ZNSt3__16__sortIRPFbxxEPxEEvT0_S5_T_ */
/* Demangled: void std::__1::__sort<bool (*&)(long long, long long), long long*>(long long*, long long*, bool (*&)(long long, long long)) */
int _ZNSt3__16__sortIRPFbxxEPxEEvT0_S5_T_(void);

/* Symbol: _Z25MtkOmxVdecConvertP1ThreadPv */
/* Demangled: MtkOmxVdecConvertP1Thread(void*) */
int _Z25MtkOmxVdecConvertP1ThreadPv(void);

/* Symbol: _ZN23CmdThreadRequestHandlerC2Ev */
/* Demangled: CmdThreadRequestHandler::CmdThreadRequestHandler() */
int _ZN23CmdThreadRequestHandlerC2Ev(void);

/* Symbol: _ZN10MtkOmxVdec12Debug_MMDumpEPNS_13_FrmBufStructE */
/* Demangled: MtkOmxVdec::Debug_MMDump(MtkOmxVdec::_FrmBufStruct*) */
int _ZN10MtkOmxVdec12Debug_MMDumpEPNS_13_FrmBufStructE(void);

/* Symbol: _Z12MTK_OMX_FREEPv */
/* Demangled: MTK_OMX_FREE(void*) */
int _Z12MTK_OMX_FREEPv(void);

/* Symbol: _ZN13OmxMVAManager17getMapIndexFromVaEPv */
/* Demangled: OmxMVAManager::getMapIndexFromVa(void*) */
int _ZN13OmxMVAManager17getMapIndexFromVaEPv(void);

/* Symbol: _ZN10MtkOmxVdec22QureyVideoProfileLevelEjP32OMX_VIDEO_PARAM_PROFILELEVELTYPEP26MTK_VDEC_PROFILE_MAP_ENTRYjP24MTK_VDEC_LEVEL_MAP_ENTRYj */
/* Demangled: MtkOmxVdec::QureyVideoProfileLevel(unsigned int, OMX_VIDEO_PARAM_PROFILELEVELTYPE*, MTK_VDEC_PROFILE_MAP_ENTRY*, unsigned int, MTK_VDEC_LEVEL_MAP_ENTRY*, unsigned int) */
int _ZN10MtkOmxVdec22QureyVideoProfileLevelEjP32OMX_VIDEO_PARAM_PROFILELEVELTYPEP26MTK_VDEC_PROFILE_MAP_ENTRYjP24MTK_VDEC_LEVEL_MAP_ENTRYj(void);

/* Symbol: _ZN13MtkV4L2Device14getInterlacingEPj */
/* Demangled: MtkV4L2Device::getInterlacing(unsigned int*) */
int _ZN13MtkV4L2Device14getInterlacingEPj(void);

/* Symbol: _ZN13MtkV4L2Device22requestBufferBitstreamEj */
/* Demangled: MtkV4L2Device::requestBufferBitstream(unsigned int) */
int _ZN13MtkV4L2Device22requestBufferBitstreamEj(void);

/* Symbol: _ZN10MtkOmxVdec14InsertInputBufEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::InsertInputBuf(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec14InsertInputBufEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVdec16EnableRRPriorityE8OMX_BOOL */
/* Demangled: MtkOmxVdec::EnableRRPriority(OMX_BOOL) */
int _ZN10MtkOmxVdec16EnableRRPriorityE8OMX_BOOL(void);

/* Symbol: MPEG2ProfileMapTable */
/* Demangled: MPEG2ProfileMapTable */
extern void* MPEG2ProfileMapTable;

/* Symbol: _ZN10MtkOmxVdec34SetColorFormat_MTKYUV_10BIT_H_JUMPEP28OMX_PARAM_PORTDEFINITIONTYPE */
/* Demangled: MtkOmxVdec::SetColorFormat_MTKYUV_10BIT_H_JUMP(OMX_PARAM_PORTDEFINITIONTYPE*) */
int _ZN10MtkOmxVdec34SetColorFormat_MTKYUV_10BIT_H_JUMPEP28OMX_PARAM_PORTDEFINITIONTYPE(void);

/* Symbol: _ZN13MtkV4L2Device14getPixelFormatEP24_VDEC_DRV_PIXEL_FORMAT_T */
/* Demangled: MtkV4L2Device::getPixelFormat(_VDEC_DRV_PIXEL_FORMAT_T*) */
int _ZN13MtkV4L2Device14getPixelFormatEP24_VDEC_DRV_PIXEL_FORMAT_T(void);

/* Symbol: _ZN10MtkOmxVdec20OMXGetOutputBufferFdEPP21__VDEC_DRV_FRAMEBUF_TPiS3_jcPv */
/* Demangled: MtkOmxVdec::OMXGetOutputBufferFd(__VDEC_DRV_FRAMEBUF_T**, int*, int*, unsigned int, char, void*) */
int _ZN10MtkOmxVdec20OMXGetOutputBufferFdEPP21__VDEC_DRV_FRAMEBUF_TPiS3_jcPv(void);

/* Symbol: _ZN10MtkOmxVdec21getIonFdByHeaderIndexEiPiiS0_ */
/* Demangled: MtkOmxVdec::getIonFdByHeaderIndex(int, int*, int, int*) */
int _ZN10MtkOmxVdec21getIonFdByHeaderIndexEiPiiS0_(void);

/* Symbol: _ZN10MtkOmxVdec9UseBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_jPh */
/* Demangled: MtkOmxVdec::UseBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
int _ZN10MtkOmxVdec9UseBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_jPh(void);

/* Symbol: _ZN10MtkOmxVdec23SetupBufferInfoForMJPEGEv */
/* Demangled: MtkOmxVdec::SetupBufferInfoForMJPEG() */
int _ZN10MtkOmxVdec23SetupBufferInfoForMJPEGEv(void);

/* Symbol: _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_ */
/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&) */
int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_(void);

/* Symbol: _ZN13OmxMVAManager15getOmxMVAFromVAEPvPj */
/* Demangled: OmxMVAManager::getOmxMVAFromVA(void*, unsigned int*) */
int _ZN13OmxMVAManager15getOmxMVAFromVAEPvPj(void);

/* Symbol: _ZN10MtkOmxVdec19GetComponentVersionEPvPcP15OMX_VERSIONTYPES3_PA128_h */
/* Demangled: MtkOmxVdec::GetComponentVersion(void*, char*, OMX_VERSIONTYPE*, OMX_VERSIONTYPE*, unsigned char (*) [128]) */
int _ZN10MtkOmxVdec19GetComponentVersionEPvPcP15OMX_VERSIONTYPES3_PA128_h(void);

/* Symbol: _ZN10MtkOmxVdec31HandleFillBufferDone_FlushCacheEP20OMX_BUFFERHEADERTYPE8OMX_BOOL */
/* Demangled: MtkOmxVdec::HandleFillBufferDone_FlushCache(OMX_BUFFERHEADERTYPE*, OMX_BOOL) */
int _ZN10MtkOmxVdec31HandleFillBufferDone_FlushCacheEP20OMX_BUFFERHEADERTYPE8OMX_BOOL(void);

/* Symbol: _ZN13MtkV4L2Device14getAspectRatioEPtS0_ */
/* Demangled: MtkV4L2Device::getAspectRatio(unsigned short*, unsigned short*) */
int _ZN13MtkV4L2Device14getAspectRatioEPtS0_(void);

/* Symbol: _Z22MtkOmxVdecDecodeThreadPv */
/* Demangled: MtkOmxVdecDecodeThread(void*) */
int _Z22MtkOmxVdecDecodeThreadPv(void);

/* Symbol: _ZN10MtkOmxVdec17GetBufferCheckSumEPcj */
/* Demangled: MtkOmxVdec::GetBufferCheckSum(char*, unsigned int) */
int _ZN10MtkOmxVdec17GetBufferCheckSumEPcj(void);

/* Symbol: _ZN10MtkOmxVdec23DeQueueMDPBufferRecoderEv */
/* Demangled: MtkOmxVdec::DeQueueMDPBufferRecoder() */
int _ZN10MtkOmxVdec23DeQueueMDPBufferRecoderEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<_MTK_OMX_CMD_QUEUE_ITEM**, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM**> >::push_back(_MTK_OMX_CMD_QUEUE_ITEM**&&) */
int _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZN10MtkOmxVdec25pixcelFormatToColorFormatE24_VDEC_DRV_PIXEL_FORMAT_Tc */
/* Demangled: MtkOmxVdec::pixcelFormatToColorFormat(_VDEC_DRV_PIXEL_FORMAT_T, char) */
int _ZN10MtkOmxVdec25pixcelFormatToColorFormatE24_VDEC_DRV_PIXEL_FORMAT_Tc(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: _ZN10MtkOmxVdec14FillThisBufferEPvP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::FillThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec14FillThisBufferEPvP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN12OmxIonMVAMap8getIonFdEv */
/* Demangled: OmxIonMVAMap::getIonFd() */
int _ZN12OmxIonMVAMap8getIonFdEv(void);

/* Symbol: _ZN13MtkV4L2Device10initializeE14V4L2DeviceTypePv */
/* Demangled: MtkV4L2Device::initialize(V4L2DeviceType, void*) */
int _ZN13MtkV4L2Device10initializeE14V4L2DeviceTypePv(void);

/* Symbol: _ZNK7android6VectorIiE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIxE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<long long>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIxE16do_move_backwardEPvPKvj(void);

/* Symbol: _Z17writeBufferToFilePKcPvj */
/* Demangled: writeBufferToFile(char const*, void*, unsigned int) */
int _Z17writeBufferToFilePKcPvj(void);

/* Symbol: _ZN10MtkOmxVdec34DeQueueOutputColorConvertSrcBufferEv */
/* Demangled: MtkOmxVdec::DeQueueOutputColorConvertSrcBuffer() */
int _ZN10MtkOmxVdec34DeQueueOutputColorConvertSrcBufferEv(void);

/* Symbol: format_fourcc */
/* Demangled: format_fourcc */
extern void* format_fourcc;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE12do_constructEPvj(void);

/* Symbol: _Z13get_sem_valueP5sem_t */
/* Demangled: get_sem_value(sem_t*) */
int _Z13get_sem_valueP5sem_t(void);

/* Symbol: _ZN10MtkOmxVdec11SendCommandEPv15OMX_COMMANDTYPEjS0_ */
/* Demangled: MtkOmxVdec::SendCommand(void*, OMX_COMMANDTYPE, unsigned int, void*) */
int _ZN10MtkOmxVdec11SendCommandEPv15OMX_COMMANDTYPEjS0_(void);

/* Symbol: _ZN10MtkOmxVdec16DumpInputEnabledEv */
/* Demangled: MtkOmxVdec::DumpInputEnabled() */
int _ZN10MtkOmxVdec16DumpInputEnabledEv(void);

/* Symbol: _ZNK7android6VectorIxE12do_constructEPvj */
/* Demangled: android::Vector<long long>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIxE12do_constructEPvj(void);

/* Symbol: _ZTVN7android6VectorI18_FenceAndBufIdxMapEE */
/* Demangled: vtable for android::Vector<_FenceAndBufIdxMap> */
extern void* _ZTVN7android6VectorI18_FenceAndBufIdxMapEE;

/* Symbol: _ZN13OmxMVAManager16getOmxInfoFromVAEPvP9_VBufInfo */
/* Demangled: OmxMVAManager::getOmxInfoFromVA(void*, _VBufInfo*) */
int _ZN13OmxMVAManager16getOmxInfoFromVAEPvP9_VBufInfo(void);

/* Symbol: _ZN13OmxMVAManagerD2Ev */
/* Demangled: OmxMVAManager::~OmxMVAManager() */
int _ZN13OmxMVAManagerD2Ev(void);

/* Symbol: _ZNK7android6VectorIP11OmxMVAEntryE7do_copyEPvPKvj */
/* Demangled: android::Vector<OmxMVAEntry*>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIP11OmxMVAEntryE7do_copyEPvPKvj(void);

/* Symbol: MtkOmxSetCoreGlobal */
/* Demangled: MtkOmxSetCoreGlobal */
int MtkOmxSetCoreGlobal(void);

/* Symbol: _ZN10MtkOmxVdec11FdDebugDumpEv */
/* Demangled: MtkOmxVdec::FdDebugDump() */
int _ZN10MtkOmxVdec11FdDebugDumpEv(void);

/* Symbol: _ZN10MtkOmxVdec16HandlePortEnableEj */
/* Demangled: MtkOmxVdec::HandlePortEnable(unsigned int) */
int _ZN10MtkOmxVdec16HandlePortEnableEj(void);

/* Symbol: _ZN10MtkOmxVdec26GetMetaHandleFromBufferPtrEPhPj */
/* Demangled: MtkOmxVdec::GetMetaHandleFromBufferPtr(unsigned char*, unsigned int*) */
int _ZN10MtkOmxVdec26GetMetaHandleFromBufferPtrEPhPj(void);

/* Symbol: _ZN10MtkOmxVdec28HandleGetDescribeColorFormatEPv */
/* Demangled: MtkOmxVdec::HandleGetDescribeColorFormat(void*) */
int _ZN10MtkOmxVdec28HandleGetDescribeColorFormatEPv(void);

/* Symbol: _ZN13MtkV4L2Device15flushBitstreamQEv */
/* Demangled: MtkV4L2Device::flushBitstreamQ() */
int _ZN13MtkV4L2Device15flushBitstreamQEv(void);

/* Symbol: _ZNSt3__15dequeIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<_MTK_OMX_CMD_QUEUE_ITEM*, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM*> >::__add_back_capacity() */
int _ZNSt3__15dequeIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN13OmxMVAManager13freeOmxMVAAllEv */
/* Demangled: OmxMVAManager::freeOmxMVAAll() */
int _ZN13OmxMVAManager13freeOmxMVAAllEv(void);

/* Symbol: _ZNK7android6VectorIxE7do_copyEPvPKvj */
/* Demangled: android::Vector<long long>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIxE7do_copyEPvPKvj(void);

/* Symbol: _ZN13MtkV4L2Device16FindVideoOpenDevEv */
/* Demangled: MtkV4L2Device::FindVideoOpenDev() */
int _ZN13MtkV4L2Device16FindVideoOpenDevEv(void);

/* Symbol: _ZN17V4L2QueueRecorderD1Ev */
/* Demangled: V4L2QueueRecorder::~V4L2QueueRecorder() */
int _ZN17V4L2QueueRecorderD1Ev(void);

/* Symbol: _ZNSt3__110shared_ptrI5MMLibED2Ev */
/* Demangled: std::__1::shared_ptr<MMLib>::~shared_ptr() */
int _ZNSt3__110shared_ptrI5MMLibED2Ev(void);

/* Symbol: _ZN10MtkOmxVdec32SetupMetaSecureHandleAndGetFrameEP21__VDEC_DRV_FRAMEBUF_TPh */
/* Demangled: MtkOmxVdec::SetupMetaSecureHandleAndGetFrame(__VDEC_DRV_FRAMEBUF_T*, unsigned char*) */
int _ZN10MtkOmxVdec32SetupMetaSecureHandleAndGetFrameEP21__VDEC_DRV_FRAMEBUF_TPh(void);

/* Symbol: _ZN10MtkOmxVdec21SetupBufferInfoForVP9Ev */
/* Demangled: MtkOmxVdec::SetupBufferInfoForVP9() */
int _ZN10MtkOmxVdec21SetupBufferInfoForVP9Ev(void);

/* Symbol: _ZN10MtkOmxVdec40UseAndroidNativeBuffer_CheckNormalBufferEPvS0_ */
/* Demangled: MtkOmxVdec::UseAndroidNativeBuffer_CheckNormalBuffer(void*, void*) */
int _ZN10MtkOmxVdec40UseAndroidNativeBuffer_CheckNormalBufferEPvS0_(void);

/* Symbol: _ZN10MtkOmxVdec38SetColorFormat_MTKYUV_UFO_10BIT_H_JUMPEP28OMX_PARAM_PORTDEFINITIONTYPE */
/* Demangled: MtkOmxVdec::SetColorFormat_MTKYUV_UFO_10BIT_H_JUMP(OMX_PARAM_PORTDEFINITIONTYPE*) */
int _ZN10MtkOmxVdec38SetColorFormat_MTKYUV_UFO_10BIT_H_JUMPEP28OMX_PARAM_PORTDEFINITIONTYPE(void);

/* Symbol: _ZN10MtkOmxVdec13InitVc1ParamsEv */
/* Demangled: MtkOmxVdec::InitVc1Params() */
int _ZN10MtkOmxVdec13InitVc1ParamsEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE8do_splatEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIiE12do_constructEPvj */
/* Demangled: android::Vector<int>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIiE12do_constructEPvj(void);

/* Symbol: _ZN17V4L2QueueRecorder7getSizeEv */
/* Demangled: V4L2QueueRecorder::getSize() */
int _ZN17V4L2QueueRecorder7getSizeEv(void);

/* Symbol: _Z11show_uptimev */
/* Demangled: show_uptime() */
int _Z11show_uptimev(void);

/* Symbol: _Z22MtkVdec_FillThisBufferPvP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkVdec_FillThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
int _Z22MtkVdec_FillThisBufferPvP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVdec18handlePendingEventEv */
/* Demangled: MtkOmxVdec::handlePendingEvent() */
int _ZN10MtkOmxVdec18handlePendingEventEv(void);

/* Symbol: _ZN13MtkV4L2Device12getColorDescEP22__VDEC_DRV_COLORDESC_T */
/* Demangled: MtkV4L2Device::getColorDesc(__VDEC_DRV_COLORDESC_T*) */
int _ZN13MtkV4L2Device12getColorDescEP22__VDEC_DRV_COLORDESC_T(void);

/* Symbol: _ZN13MtkV4L2Device16setNALSizeLengthEj */
/* Demangled: MtkV4L2Device::setNALSizeLength(unsigned int) */
int _ZN13MtkV4L2Device16setNALSizeLengthEj(void);

/* Symbol: _ZNSt3__18functionIFvPvmEEC2INS_6__bindIRPFvS1_yjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSC_ILi2EEERN6MMDump4sizeERNSJ_5widthERNSJ_6heightERNSJ_11color_spaceERNSJ_12color_formatERNSJ_6strideERNSJ_11sliceheightERS7_EEEvEET_ */
/* Demangled: std::__1::function<void (void*, unsigned long)>::function<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, void>(std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>) */
int _ZNSt3__18functionIFvPvmEEC2INS_6__bindIRPFvS1_yjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSC_ILi2EEERN6MMDump4sizeERNSJ_5widthERNSJ_6heightERNSJ_11color_spaceERNSJ_12color_formatERNSJ_6strideERNSJ_11sliceheightERS7_EEEvEET_(void);

/* Symbol: OmxVdecPerfLogValue */
/* Demangled: OmxVdecPerfLogValue */
extern void* OmxVdecPerfLogValue;

/* Symbol: _ZN10MtkOmxVdec15InitMpeg4ParamsEv */
/* Demangled: MtkOmxVdec::InitMpeg4Params() */
int _ZN10MtkOmxVdec15InitMpeg4ParamsEv(void);

/* Symbol: _ZN10MtkOmxVdec27DescribeFlexibleColorFormatEPN7android25DescribeColorFormatParamsE */
/* Demangled: MtkOmxVdec::DescribeFlexibleColorFormat(android::DescribeColorFormatParams*) */
int _ZN10MtkOmxVdec27DescribeFlexibleColorFormatEPN7android25DescribeColorFormatParamsE(void);

/* Symbol: _ZN10MtkOmxVdec9WaitFenceEP20OMX_BUFFERHEADERTYPE8OMX_BOOL */
/* Demangled: MtkOmxVdec::WaitFence(OMX_BUFFERHEADERTYPE*, OMX_BOOL) */
int _ZN10MtkOmxVdec9WaitFenceEP20OMX_BUFFERHEADERTYPE8OMX_BOOL(void);

/* Symbol: _ZNK7android6VectorI18_FenceAndBufIdxMapE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<_FenceAndBufIdxMap>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorI18_FenceAndBufIdxMapE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN12OmxIonMVAMap14newEntryWithVaEPviS0_ */
/* Demangled: OmxIonMVAMap::newEntryWithVa(void*, int, void*) */
int _ZN12OmxIonMVAMap14newEntryWithVaEPviS0_(void);

/* Symbol: _ZN12OmxIonMVAMapD2Ev */
/* Demangled: OmxIonMVAMap::~OmxIonMVAMap() */
int _ZN12OmxIonMVAMapD2Ev(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZNK7android6VectorIxE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<long long>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIxE15do_move_forwardEPvPKvj(void);

/* Symbol: H263ProfileMapTable */
/* Demangled: H263ProfileMapTable */
extern void* H263ProfileMapTable;

/* Symbol: _ZN13MtkV4L2DeviceD2Ev */
/* Demangled: MtkV4L2Device::~MtkV4L2Device() */
int _ZN13MtkV4L2DeviceD2Ev(void);

/* Symbol: _ZN10MtkOmxVdec25ReturnPendingInputBuffersEv */
/* Demangled: MtkOmxVdec::ReturnPendingInputBuffers() */
int _ZN10MtkOmxVdec25ReturnPendingInputBuffersEv(void);

/* Symbol: _ZN13MtkV4L2Device17StreamOnBitstreamEv */
/* Demangled: MtkV4L2Device::StreamOnBitstream() */
int _ZN13MtkV4L2Device17StreamOnBitstreamEv(void);

/* Symbol: _ZNSt3__15dequeIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE9pop_frontEv */
/* Demangled: std::__1::deque<_MTK_OMX_CMD_QUEUE_ITEM*, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM*> >::pop_front() */
int _ZNSt3__15dequeIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE9pop_frontEv(void);

/* Symbol: _ZN10MtkOmxVdec22initCodec_PortReconfigEP20OMX_BUFFERHEADERTYPEiittP8OMX_BOOL */
/* Demangled: MtkOmxVdec::initCodec_PortReconfig(OMX_BUFFERHEADERTYPE*, int, int, unsigned short, unsigned short, OMX_BOOL*) */
int _ZN10MtkOmxVdec22initCodec_PortReconfigEP20OMX_BUFFERHEADERTYPEiittP8OMX_BOOL(void);

/* Symbol: _ZN13MtkV4L2Device15SetupBufferFlagEi */
/* Demangled: MtkV4L2Device::SetupBufferFlag(int) */
int _ZN13MtkV4L2Device15SetupBufferFlagEi(void);

/* Symbol: _ZN13MtkV4L2Device15updateDebugInfoEv */
/* Demangled: MtkV4L2Device::updateDebugInfo() */
int _ZN13MtkV4L2Device15updateDebugInfoEv(void);

/* Symbol: _Z16MTK_OMX_MEMALIGNjj */
/* Demangled: MTK_OMX_MEMALIGN(unsigned int, unsigned int) */
int _Z16MTK_OMX_MEMALIGNjj(void);

/* Symbol: _ZN14MtkOmxCmdQueueC2Ev */
/* Demangled: MtkOmxCmdQueue::MtkOmxCmdQueue() */
int _ZN14MtkOmxCmdQueueC2Ev(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: _ZN13MtkV4L2Device13dumpDebugInfoEv */
/* Demangled: MtkV4L2Device::dumpDebugInfo() */
int _ZN13MtkV4L2Device13dumpDebugInfoEv(void);

/* Symbol: _ZN13MtkV4L2Device13setDecodeModeEP28__VDEC_DRV_SET_DECODE_MODE_T */
/* Demangled: MtkV4L2Device::setDecodeMode(__VDEC_DRV_SET_DECODE_MODE_T*) */
int _ZN13MtkV4L2Device13setDecodeModeEP28__VDEC_DRV_SET_DECODE_MODE_T(void);

/* Symbol: _ZN12OmxIonMVAMap20deleteKeyAfterSearchEPvi */
/* Demangled: OmxIonMVAMap::deleteKeyAfterSearch(void*, int) */
int _ZN12OmxIonMVAMap20deleteKeyAfterSearchEPvi(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZN13MtkV4L2Device25checkSupportGeneralBufferEv */
/* Demangled: MtkV4L2Device::checkSupportGeneralBuffer() */
int _ZN13MtkV4L2Device25checkSupportGeneralBufferEv(void);

/* Symbol: _ZN10MtkOmxVdec40UseAndroidNativeBuffer_CheckSecureBufferEPvS0_ */
/* Demangled: MtkOmxVdec::UseAndroidNativeBuffer_CheckSecureBuffer(void*, void*) */
int _ZN10MtkOmxVdec40UseAndroidNativeBuffer_CheckSecureBufferEPvS0_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIP5MMLibNS_14default_deleteIS1_EENS_9allocatorIS1_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<MMLib*, std::__1::default_delete<MMLib>, std::__1::allocator<MMLib> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIP5MMLibNS_14default_deleteIS1_EENS_9allocatorIS1_EEEE;

/* Symbol: _ZN13OmxMVAManager24getOmxMVAFromVAToVencFrmEPvP26__VENC_DRV_PARAM_FRM_BUF_T */
/* Demangled: OmxMVAManager::getOmxMVAFromVAToVencFrm(void*, __VENC_DRV_PARAM_FRM_BUF_T*) */
int _ZN13OmxMVAManager24getOmxMVAFromVAToVencFrmEPvP26__VENC_DRV_PARAM_FRM_BUF_T(void);

/* Symbol: _ZN13OmxMVAManagerC1Ev */
/* Demangled: OmxMVAManager::OmxMVAManager() */
int _ZN13OmxMVAManagerC1Ev(void);

/* Symbol: _ZN10MtkOmxVdec15EmptyThisBufferEPvP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::EmptyThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec15EmptyThisBufferEPvP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVdec17QueryDriverFormatEP31__VDEC_DRV_QUERY_VIDEO_FORMAT_T */
/* Demangled: MtkOmxVdec::QueryDriverFormat(__VDEC_DRV_QUERY_VIDEO_FORMAT_T*) */
int _ZN10MtkOmxVdec17QueryDriverFormatEP31__VDEC_DRV_QUERY_VIDEO_FORMAT_T(void);

/* Symbol: _ZN10MtkOmxVdec7BufQWDTE15WDT_BUFFER_TYPExj */
/* Demangled: MtkOmxVdec::BufQWDT(WDT_BUFFER_TYPE, long long, unsigned int) */
int _ZN10MtkOmxVdec7BufQWDTE15WDT_BUFFER_TYPExj(void);

/* Symbol: _ZN13MtkV4L2Device15setWaitKeyFrameEj */
/* Demangled: MtkV4L2Device::setWaitKeyFrame(unsigned int) */
int _ZN13MtkV4L2Device15setWaitKeyFrameEj(void);

/* Symbol: VP8ProfileMapTable */
/* Demangled: VP8ProfileMapTable */
extern void* VP8ProfileMapTable;

/* Symbol: _ZN13MtkV4L2Device10CheckStateE19MtkV4L2Device_State */
/* Demangled: MtkV4L2Device::CheckState(MtkV4L2Device_State) */
int _ZN13MtkV4L2Device10CheckStateE19MtkV4L2Device_State(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPvPFiS1_ENS_9allocatorIvEEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<void*, int (*)(void*), std::__1::allocator<void> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPvPFiS1_ENS_9allocatorIvEEE16__on_zero_sharedEv(void);

/* Symbol: _ZN14OmxIonMVAEntry10hasThisKeyEi */
/* Demangled: OmxIonMVAEntry::hasThisKey(int) */
int _ZN14OmxIonMVAEntry10hasThisKeyEi(void);

/* Symbol: _Z14MTK_OMX_MEMSETPvij */
/* Demangled: MTK_OMX_MEMSET(void*, int, unsigned int) */
int _Z14MTK_OMX_MEMSETPvij(void);

/* Symbol: _Z22MtkVdec_AllocateBufferPvPP20OMX_BUFFERHEADERTYPEjS_j */
/* Demangled: MtkVdec_AllocateBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
int _Z22MtkVdec_AllocateBufferPvPP20OMX_BUFFERHEADERTYPEjS_j(void);

/* Symbol: _ZN13MtkV4L2Device18dequeueFrameBufferEPiP29MtkV4L2Device_FRAME_BUF_PARAM */
/* Demangled: MtkV4L2Device::dequeueFrameBuffer(int*, MtkV4L2Device_FRAME_BUF_PARAM*) */
int _ZN13MtkV4L2Device18dequeueFrameBufferEPiP29MtkV4L2Device_FRAME_BUF_PARAM(void);

/* Symbol: _ZNKSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE7__cloneEv */
/* Demangled: std::__1::__function::__func<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, std::__1::allocator<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&> >, void (void*, unsigned long)>::__clone() const */
int _ZNKSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE7__cloneEv(void);

/* Symbol: _ZN12OmxIonMVAMap16findKeyForSearchEPv */
/* Demangled: OmxIonMVAMap::findKeyForSearch(void*) */
int _ZN12OmxIonMVAMap16findKeyForSearchEPv(void);

/* Symbol: _ZN10MtkOmxVdec17AllocateIonBufferEijP15_VdecIonBufInfo */
/* Demangled: MtkOmxVdec::AllocateIonBuffer(int, unsigned int, _VdecIonBufInfo*) */
int _ZN10MtkOmxVdec17AllocateIonBufferEijP15_VdecIonBufInfo(void);

/* Symbol: _ZN10MtkOmxVdec17GetInputPortStrutEv */
/* Demangled: MtkOmxVdec::GetInputPortStrut() */
int _ZN10MtkOmxVdec17GetInputPortStrutEv(void);

/* Symbol: _ZN10MtkOmxVdec18dequeueFrameBufferEv */
/* Demangled: MtkOmxVdec::dequeueFrameBuffer() */
int _ZN10MtkOmxVdec18dequeueFrameBufferEv(void);

/* Symbol: _ZN13MtkV4L2Device17flushFrameBufferQEv */
/* Demangled: MtkV4L2Device::flushFrameBufferQ() */
int _ZN13MtkV4L2Device17flushFrameBufferQEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE10do_destroyEPvj(void);

/* Symbol: _ZN10MtkOmxVdec13getV4L2FormatE17MTK_VDEC_CODEC_ID */
/* Demangled: MtkOmxVdec::getV4L2Format(MTK_VDEC_CODEC_ID) */
int _ZN10MtkOmxVdec13getV4L2FormatE17MTK_VDEC_CODEC_ID(void);

/* Symbol: _ZN10MtkOmxVdec21SetupBufferInfoForVC1Ev */
/* Demangled: MtkOmxVdec::SetupBufferInfoForVC1() */
int _ZN10MtkOmxVdec21SetupBufferInfoForVC1Ev(void);

/* Symbol: MPEG2LevelMapTable */
/* Demangled: MPEG2LevelMapTable */
extern void* MPEG2LevelMapTable;

/* Symbol: _ZNK7android6VectorIP11v4l2_bufferE7do_copyEPvPKvj */
/* Demangled: android::Vector<v4l2_buffer*>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIP11v4l2_bufferE7do_copyEPvPKvj(void);

/* Symbol: HDRTransferMap */
/* Demangled: HDRTransferMap */
extern void* HDRTransferMap;

/* Symbol: _ZN10MtkOmxVdec16InitVp9SecParamsEv */
/* Demangled: MtkOmxVdec::InitVp9SecParams() */
int _ZN10MtkOmxVdec16InitVp9SecParamsEv(void);

/* Symbol: _ZN10MtkOmxVdec32QueueOutputColorConvertDstBufferEi */
/* Demangled: MtkOmxVdec::QueueOutputColorConvertDstBuffer(int) */
int _ZN10MtkOmxVdec32QueueOutputColorConvertDstBufferEi(void);

/* Symbol: _ZNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE7destroyEv */
/* Demangled: std::__1::__function::__func<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, std::__1::allocator<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&> >, void (void*, unsigned long)>::destroy() */
int _ZNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE7destroyEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIP5MMLibNS_14default_deleteIS1_EENS_9allocatorIS1_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<MMLib*, std::__1::default_delete<MMLib>, std::__1::allocator<MMLib> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIP5MMLibNS_14default_deleteIS1_EENS_9allocatorIS1_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN10MtkOmxVdec29checkIfHDRNeedInternalConvertEv */
/* Demangled: MtkOmxVdec::checkIfHDRNeedInternalConvert() */
int _ZN10MtkOmxVdec29checkIfHDRNeedInternalConvertEv(void);

/* Symbol: _ZN13MtkV4L2Device7getCropEP9v4l2_crop */
/* Demangled: MtkV4L2Device::getCrop(v4l2_crop*) */
int _ZN13MtkV4L2Device7getCropEP9v4l2_crop(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN13OmxMVAManager17newOmxMVAwithHndlEPvS0_ */
/* Demangled: OmxMVAManager::newOmxMVAwithHndl(void*, void*) */
int _ZN13OmxMVAManager17newOmxMVAwithHndlEPvS0_(void);

/* Symbol: _ZN10MtkOmxVdec13ComponentInitEPvPc */
/* Demangled: MtkOmxVdec::ComponentInit(void*, char*) */
int _ZN10MtkOmxVdec13ComponentInitEPvPc(void);

/* Symbol: _ZN10MtkOmxVdec21findBufferHeaderIndexEjP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::findBufferHeaderIndex(unsigned int, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec21findBufferHeaderIndexEjP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE10do_compareEPKvS6_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE10do_compareEPKvS6_(void);

/* Symbol: _ZN17V4L2QueueRecorder10getElementEi */
/* Demangled: V4L2QueueRecorder::getElement(int) */
int _ZN17V4L2QueueRecorder10getElementEi(void);

/* Symbol: _Z20MtkVdec_SetCallbacksPvP16OMX_CALLBACKTYPES_ */
/* Demangled: MtkVdec_SetCallbacks(void*, OMX_CALLBACKTYPE*, void*) */
int _Z20MtkVdec_SetCallbacksPvP16OMX_CALLBACKTYPES_(void);

/* Symbol: _ZN10MtkOmxVdec26GetMetaHandleFromOmxHeaderEP20OMX_BUFFERHEADERTYPEPj */
/* Demangled: MtkOmxVdec::GetMetaHandleFromOmxHeader(OMX_BUFFERHEADERTYPE*, unsigned int*) */
int _ZN10MtkOmxVdec26GetMetaHandleFromOmxHeaderEP20OMX_BUFFERHEADERTYPEPj(void);

/* Symbol: _ZN10MtkOmxVdecD1Ev */
/* Demangled: MtkOmxVdec::~MtkOmxVdec() */
int _ZN10MtkOmxVdecD1Ev(void);

/* Symbol: _ZN13MtkV4L2DeviceC1Ev */
/* Demangled: MtkV4L2Device::MtkV4L2Device() */
int _ZN13MtkV4L2DeviceC1Ev(void);

/* Symbol: _ZNK7android6VectorIiE8do_splatEPvPKvj */
/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE8do_splatEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIxE10do_destroyEPvj */
/* Demangled: android::Vector<long long>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIxE10do_destroyEPvj(void);

/* Symbol: _ZN10MtkOmxVdec15InitMpeg2ParamsEv */
/* Demangled: MtkOmxVdec::InitMpeg2Params() */
int _ZN10MtkOmxVdec15InitMpeg2ParamsEv(void);

/* Symbol: _ZTV10MtkOmxVdec */
/* Demangled: vtable for MtkOmxVdec */
extern void* _ZTV10MtkOmxVdec;

/* Symbol: HevcLevelMapTable */
/* Demangled: HevcLevelMapTable */
extern void* HevcLevelMapTable;

/* Symbol: _ZN10MtkOmxVdec21SetColorFormat_MTKYUVEP28OMX_PARAM_PORTDEFINITIONTYPE */
/* Demangled: MtkOmxVdec::SetColorFormat_MTKYUV(OMX_PARAM_PORTDEFINITIONTYPE*) */
int _ZN10MtkOmxVdec21SetColorFormat_MTKYUVEP28OMX_PARAM_PORTDEFINITIONTYPE(void);

/* Symbol: _Z23MtkVdec_EmptyThisBufferPvP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkVdec_EmptyThisBuffer(void*, OMX_BUFFERHEADERTYPE*) */
int _Z23MtkVdec_EmptyThisBufferPvP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN14MtkOmxCmdQueue10GetCmdSizeEi */
/* Demangled: MtkOmxCmdQueue::GetCmdSize(int) */
int _ZN14MtkOmxCmdQueue10GetCmdSizeEi(void);

/* Symbol: _ZN10MtkOmxVdec23GetOutputPortDefinitionEPv */
/* Demangled: MtkOmxVdec::GetOutputPortDefinition(void*) */
int _ZN10MtkOmxVdec23GetOutputPortDefinitionEPv(void);

/* Symbol: _ZN13OmxMVAManager14freeOmxMVAByVaEPv */
/* Demangled: OmxMVAManager::freeOmxMVAByVa(void*) */
int _ZN13OmxMVAManager14freeOmxMVAByVaEPv(void);

/* Symbol: _ZNSt3__127__insertion_sort_incompleteIRPFbxxEPxEEbT0_S5_T_ */
/* Demangled: bool std::__1::__insertion_sort_incomplete<bool (*&)(long long, long long), long long*>(long long*, long long*, bool (*&)(long long, long long)) */
int _ZNSt3__127__insertion_sort_incompleteIRPFbxxEPxEEbT0_S5_T_(void);

/* Symbol: _ZN13MtkV4L2Device12FourccStringEi */
/* Demangled: MtkV4L2Device::FourccString(int) */
int _ZN13MtkV4L2Device12FourccStringEi(void);

/* Symbol: _ZN17V4L2QueueRecorder10putElementEP11v4l2_buffer */
/* Demangled: V4L2QueueRecorder::putElement(v4l2_buffer*) */
int _ZN17V4L2QueueRecorder10putElementEP11v4l2_buffer(void);

/* Symbol: _ZN13OmxMVAManager23getOmxMVAFromVAToVencBSEPvP25__VENC_DRV_PARAM_BS_BUF_T */
/* Demangled: OmxMVAManager::getOmxMVAFromVAToVencBS(void*, __VENC_DRV_PARAM_BS_BUF_T*) */
int _ZN13OmxMVAManager23getOmxMVAFromVAToVencBSEPvP25__VENC_DRV_PARAM_BS_BUF_T(void);

/* Symbol: _ZN23CmdThreadRequestHandler12clearRequestEj */
/* Demangled: CmdThreadRequestHandler::clearRequest(unsigned int) */
int _ZN23CmdThreadRequestHandler12clearRequestEj(void);

/* Symbol: _ZN10MtkOmxVdec20HandleFillThisBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::HandleFillThisBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec20HandleFillThisBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZTVN7android6VectorIiEE */
/* Demangled: vtable for android::Vector<int> */
extern void* _ZTVN7android6VectorIiEE;

/* Symbol: _ZN13MtkV4L2Device17setMPEG4FrameSizeEii */
/* Demangled: MtkV4L2Device::setMPEG4FrameSize(int, int) */
int _ZN13MtkV4L2Device17setMPEG4FrameSizeEii(void);

/* Symbol: _ZTVNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEEE */
/* Demangled: vtable for std::__1::__function::__func<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, std::__1::allocator<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&> >, void (void*, unsigned long)> */
extern void* _ZTVNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEEE;

/* Symbol: _Z13StateToStringj */
/* Demangled: StateToString(unsigned int) */
int _Z13StateToStringj(void);

/* Symbol: _ZN10MtkOmxVdec18QueueBackupCSDDataEv */
/* Demangled: MtkOmxVdec::QueueBackupCSDData() */
int _ZN10MtkOmxVdec18QueueBackupCSDDataEv(void);

/* Symbol: _ZN10MtkOmxVdec20PortBuffersPopulatedEv */
/* Demangled: MtkOmxVdec::PortBuffersPopulated() */
int _ZN10MtkOmxVdec20PortBuffersPopulatedEv(void);

/* Symbol: _ZN10MtkOmxVdec22handleResolutionChangeEv */
/* Demangled: MtkOmxVdec::handleResolutionChange() */
int _ZN10MtkOmxVdec22handleResolutionChangeEv(void);

/* Symbol: _ZN10MtkOmxVdec15ComponentDeInitEPv */
/* Demangled: MtkOmxVdec::ComponentDeInit(void*) */
int _ZN10MtkOmxVdec15ComponentDeInitEPv(void);

/* Symbol: _ZN13MtkV4L2Device16dequeueBitstreamEPiS0_Pj */
/* Demangled: MtkV4L2Device::dequeueBitstream(int*, int*, unsigned int*) */
int _ZN13MtkV4L2Device16dequeueBitstreamEPiS0_Pj(void);

/* Symbol: _ZN13MtkV4L2Device23setFixedMaxOutputBufferEii */
/* Demangled: MtkV4L2Device::setFixedMaxOutputBuffer(int, int) */
int _ZN13MtkV4L2Device23setFixedMaxOutputBufferEii(void);

/* Symbol: _ZN13OmxMVAManager18syncBufferCacheFrmEPvj */
/* Demangled: OmxMVAManager::syncBufferCacheFrm(void*, unsigned int) */
int _ZN13OmxMVAManager18syncBufferCacheFrmEPvj(void);

/* Symbol: _Z17FakeVdecDrvDecodeP10MtkOmxVdecP20OMX_BUFFERHEADERTYPES2_ */
/* Demangled: FakeVdecDrvDecode(MtkOmxVdec*, OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*) */
int _Z17FakeVdecDrvDecodeP10MtkOmxVdecP20OMX_BUFFERHEADERTYPES2_(void);

/* Symbol: _ZN10MtkOmxVdec18HandleUseIonBufferEPvP18UseIonBufferParams */
/* Demangled: MtkOmxVdec::HandleUseIonBuffer(void*, UseIonBufferParams*) */
int _ZN10MtkOmxVdec18HandleUseIonBufferEPvP18UseIonBufferParams(void);

/* Symbol: _ZN10MtkOmxVdec18SetupMetaIonHandleEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::SetupMetaIonHandle(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec18SetupMetaIonHandleEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVdec31needColorConvertWithoutMetaModeEv */
/* Demangled: MtkOmxVdec::needColorConvertWithoutMetaMode() */
int _ZN10MtkOmxVdec31needColorConvertWithoutMetaModeEv(void);

/* Symbol: _ZN10MtkOmxVdec19RemoveForInputAtPTSEx */
/* Demangled: MtkOmxVdec::RemoveForInputAtPTS(long long) */
int _ZN10MtkOmxVdec19RemoveForInputAtPTSEx(void);

/* Symbol: _ZN10MtkOmxVdec12IsFreeBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::IsFreeBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec12IsFreeBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN12OmxIonMVAMap16newEntryWithHndlEPvS0_ */
/* Demangled: OmxIonMVAMap::newEntryWithHndl(void*, void*) */
int _ZN12OmxIonMVAMap16newEntryWithHndlEPvS0_(void);

/* Symbol: _Z25MtkOmxVdecConvertP2ThreadPv */
/* Demangled: MtkOmxVdecConvertP2Thread(void*) */
int _Z25MtkOmxVdecConvertP2ThreadPv(void);

/* Symbol: _ZN10MtkOmxVdec22dequeueBitstreamBufferEv */
/* Demangled: MtkOmxVdec::dequeueBitstreamBuffer() */
int _ZN10MtkOmxVdec22dequeueBitstreamBufferEv(void);

/* Symbol: _ZN13MtkV4L2Device16setOperatingRateEj */
/* Demangled: MtkV4L2Device::setOperatingRate(unsigned int) */
int _ZN13MtkV4L2Device16setOperatingRateEj(void);

/* Symbol: _ZN10MtkOmxVdec23SetOutputPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE */
/* Demangled: MtkOmxVdec::SetOutputPortDefinition(OMX_PARAM_PORTDEFINITIONTYPE*) */
int _ZN10MtkOmxVdec23SetOutputPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE(void);

/* Symbol: _ZN10MtkOmxVdec25SetColorFormat_MTKYUV_FCMEP28OMX_PARAM_PORTDEFINITIONTYPE */
/* Demangled: MtkOmxVdec::SetColorFormat_MTKYUV_FCM(OMX_PARAM_PORTDEFINITIONTYPE*) */
int _ZN10MtkOmxVdec25SetColorFormat_MTKYUV_FCMEP28OMX_PARAM_PORTDEFINITIONTYPE(void);

/* Symbol: _Z25MtkVdec_GetExtensionIndexPvPcP13OMX_INDEXTYPE */
/* Demangled: MtkVdec_GetExtensionIndex(void*, char*, OMX_INDEXTYPE*) */
int _Z25MtkVdec_GetExtensionIndexPvPcP13OMX_INDEXTYPE(void);

/* Symbol: _ZN10MtkOmxVdec13InitVp9ParamsEv */
/* Demangled: MtkOmxVdec::InitVp9Params() */
int _ZN10MtkOmxVdec13InitVp9ParamsEv(void);

/* Symbol: _ZN10MtkOmxVdec17FillHDR10PlusInfoEP30__VDEC_DRV_H265_GENERAL_DATA_T */
/* Demangled: MtkOmxVdec::FillHDR10PlusInfo(__VDEC_DRV_H265_GENERAL_DATA_T*) */
int _ZN10MtkOmxVdec17FillHDR10PlusInfoEP30__VDEC_DRV_H265_GENERAL_DATA_T(void);

/* Symbol: _ZN10MtkOmxVdec40HandleGetVideoProfileLevelQuerySupportedEPv */
/* Demangled: MtkOmxVdec::HandleGetVideoProfileLevelQuerySupported(void*) */
int _ZN10MtkOmxVdec40HandleGetVideoProfileLevelQuerySupportedEPv(void);

/* Symbol: _ZTVN7android6VectorIP11v4l2_bufferEE */
/* Demangled: vtable for android::Vector<v4l2_buffer*> */
extern void* _ZTVN7android6VectorIP11v4l2_bufferEE;

/* Symbol: _Z20MtkVdec_GetParameterPv13OMX_INDEXTYPES_ */
/* Demangled: MtkVdec_GetParameter(void*, OMX_INDEXTYPE, void*) */
int _Z20MtkVdec_GetParameterPv13OMX_INDEXTYPES_(void);

/* Symbol: _ZN10MtkOmxVdec16DequeueCCDBufferEv */
/* Demangled: MtkOmxVdec::DequeueCCDBuffer() */
int _ZN10MtkOmxVdec16DequeueCCDBufferEv(void);

/* Symbol: MPEG4ProfileMapTable */
/* Demangled: MPEG4ProfileMapTable */
extern void* MPEG4ProfileMapTable;

/* Symbol: _ZNK7android6VectorIP11v4l2_bufferE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<v4l2_buffer*>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIP11v4l2_bufferE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVdec13IsAVPFEnabledEv */
/* Demangled: MtkOmxVdec::IsAVPFEnabled() */
int _ZN10MtkOmxVdec13IsAVPFEnabledEv(void);

/* Symbol: _ZN10MtkOmxVdec14InitHEIFParamsEv */
/* Demangled: MtkOmxVdec::InitHEIFParams() */
int _ZN10MtkOmxVdec14InitHEIFParamsEv(void);

/* Symbol: _ZN10MtkOmxVdec16checkIfNeed2PollEb */
/* Demangled: MtkOmxVdec::checkIfNeed2Poll(bool) */
int _ZN10MtkOmxVdec16checkIfNeed2PollEb(void);

/* Symbol: _ZN23CmdThreadRequestHandlerD2Ev */
/* Demangled: CmdThreadRequestHandler::~CmdThreadRequestHandler() */
int _ZN23CmdThreadRequestHandlerD2Ev(void);

/* Symbol: _ZN10MtkOmxVdec20HandleViLTEInitHWErrEv */
/* Demangled: MtkOmxVdec::HandleViLTEInitHWErr() */
int _ZN10MtkOmxVdec20HandleViLTEInitHWErrEv(void);

/* Symbol: _ZN13OmxMVAManager26getOmxMVAFromHndlToVencFrmEPvP26__VENC_DRV_PARAM_FRM_BUF_T */
/* Demangled: OmxMVAManager::getOmxMVAFromHndlToVencFrm(void*, __VENC_DRV_PARAM_FRM_BUF_T*) */
int _ZN13OmxMVAManager26getOmxMVAFromHndlToVencFrmEPvP26__VENC_DRV_PARAM_FRM_BUF_T(void);

/* Symbol: _ZN10MtkOmxVdec17ComponentRoleEnumEPvPhj */
/* Demangled: MtkOmxVdec::ComponentRoleEnum(void*, unsigned char*, unsigned int) */
int _ZN10MtkOmxVdec17ComponentRoleEnumEPvPhj(void);

/* Symbol: _ZN10MtkOmxVdec23HandleMinUndequeuedBufsEPj */
/* Demangled: MtkOmxVdec::HandleMinUndequeuedBufs(unsigned int*) */
int _ZN10MtkOmxVdec23HandleMinUndequeuedBufsEPj(void);

/* Symbol: _ZN10MtkOmxVdec37HandleColorConvertForFillBufferDone_2Ejj */
/* Demangled: MtkOmxVdec::HandleColorConvertForFillBufferDone_2(unsigned int, unsigned int) */
int _ZN10MtkOmxVdec37HandleColorConvertForFillBufferDone_2Ejj(void);

/* Symbol: _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS3_EEE10push_frontEOS3_ */
/* Demangled: std::__1::__split_buffer<_MTK_OMX_CMD_QUEUE_ITEM**, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM**> >::push_front(_MTK_OMX_CMD_QUEUE_ITEM**&&) */
int _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS3_EEE10push_frontEOS3_(void);

/* Symbol: _ZN10MtkOmxVdec18CloseInputDumpFileEv */
/* Demangled: MtkOmxVdec::CloseInputDumpFile() */
int _ZN10MtkOmxVdec18CloseInputDumpFileEv(void);

/* Symbol: _ZN10MtkOmxVdec21QueueMDPBufferRecoderEiii */
/* Demangled: MtkOmxVdec::QueueMDPBufferRecoder(int, int, int) */
int _ZN10MtkOmxVdec21QueueMDPBufferRecoderEiii(void);

/* Symbol: _ZN10MtkOmxVdec25CheckICSLaterGetParameterE13OMX_INDEXTYPEPv */
/* Demangled: MtkOmxVdec::CheckICSLaterGetParameter(OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVdec25CheckICSLaterGetParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZNK7android6VectorIP11OmxMVAEntryE8do_splatEPvPKvj */
/* Demangled: android::Vector<OmxMVAEntry*>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIP11OmxMVAEntryE8do_splatEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVdec14initCodecParamEPc */
/* Demangled: MtkOmxVdec::initCodecParam(char*) */
int _ZN10MtkOmxVdec14initCodecParamEPc(void);

/* Symbol: _ZN10MtkOmxVdec18ColorAspectsDifferEN7android12ColorAspectsES1_ */
/* Demangled: MtkOmxVdec::ColorAspectsDiffer(android::ColorAspects, android::ColorAspects) */
int _ZN10MtkOmxVdec18ColorAspectsDifferEN7android12ColorAspectsES1_(void);

/* Symbol: _ZN10MtkOmxVdec32QueueOutputColorConvertSrcBufferEi */
/* Demangled: MtkOmxVdec::QueueOutputColorConvertSrcBuffer(int) */
int _ZN10MtkOmxVdec32QueueOutputColorConvertSrcBufferEi(void);

/* Symbol: _ZNSt3__112__deque_baseIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE5clearEv */
/* Demangled: std::__1::__deque_base<_MTK_OMX_CMD_QUEUE_ITEM*, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM*> >::clear() */
int _ZNSt3__112__deque_baseIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE5clearEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMRNS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<_MTK_OMX_CMD_QUEUE_ITEM**, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM**>&>::push_back(_MTK_OMX_CMD_QUEUE_ITEM**&&) */
int _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMRNS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZN10MtkOmxVdec17RemoveForInputPTSEv */
/* Demangled: MtkOmxVdec::RemoveForInputPTS() */
int _ZN10MtkOmxVdec17RemoveForInputPTSEv(void);

/* Symbol: _ZN10MtkOmxVdec19SetColorFormat_NV12EP28OMX_PARAM_PORTDEFINITIONTYPE */
/* Demangled: MtkOmxVdec::SetColorFormat_NV12(OMX_PARAM_PORTDEFINITIONTYPE*) */
int _ZN10MtkOmxVdec19SetColorFormat_NV12EP28OMX_PARAM_PORTDEFINITIONTYPE(void);

/* Symbol: _ZN13MtkV4L2Device9getCapFmtEv */
/* Demangled: MtkV4L2Device::getCapFmt() */
int _ZN13MtkV4L2Device9getCapFmtEv(void);

/* Symbol: _ZN10MtkOmxVdec38SetColorFormat_MTKYUV_UFO_10BIT_V_JUMPEP28OMX_PARAM_PORTDEFINITIONTYPE */
/* Demangled: MtkOmxVdec::SetColorFormat_MTKYUV_UFO_10BIT_V_JUMP(OMX_PARAM_PORTDEFINITIONTYPE*) */
int _ZN10MtkOmxVdec38SetColorFormat_MTKYUV_UFO_10BIT_V_JUMPEP28OMX_PARAM_PORTDEFINITIONTYPE(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: _ZN12OmxIonMVAMap15setBoolPropertyEPKc8OMX_BOOL */
/* Demangled: OmxIonMVAMap::setBoolProperty(char const*, OMX_BOOL) */
int _ZN12OmxIonMVAMap15setBoolPropertyEPKc8OMX_BOOL(void);

/* Symbol: _ZN13OmxMVAManagerC1EPKcS1_ */
/* Demangled: OmxMVAManager::OmxMVAManager(char const*, char const*) */
int _ZN13OmxMVAManagerC1EPKcS1_(void);

/* Symbol: HDRColorPrimariesMap */
/* Demangled: HDRColorPrimariesMap */
extern void* HDRColorPrimariesMap;

/* Symbol: _ZN10MtkOmxVdec8DumpETBQEv */
/* Demangled: MtkOmxVdec::DumpETBQ() */
int _ZN10MtkOmxVdec8DumpETBQEv(void);

/* Symbol: _ZN13MtkV4L2Device14subscribeEventEv */
/* Demangled: MtkV4L2Device::subscribeEvent() */
int _ZN13MtkV4L2Device14subscribeEventEv(void);

/* Symbol: _ZN10MtkOmxVdec28SetupBufferInfoForCrossMountEv */
/* Demangled: MtkOmxVdec::SetupBufferInfoForCrossMount() */
int _ZN10MtkOmxVdec28SetupBufferInfoForCrossMountEv(void);

/* Symbol: _Z20MtkVdec_SetParameterPv13OMX_INDEXTYPES_ */
/* Demangled: MtkVdec_SetParameter(void*, OMX_INDEXTYPE, void*) */
int _Z20MtkVdec_SetParameterPv13OMX_INDEXTYPES_(void);

/* Symbol: _ZN10MtkOmxVdec11getChipNameEv */
/* Demangled: MtkOmxVdec::getChipName() */
int _ZN10MtkOmxVdec11getChipNameEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE10do_destroyEPvj(void);

/* Symbol: _ZN10MtkOmxVdec14SetColorFormatEP28OMX_PARAM_PORTDEFINITIONTYPE */
/* Demangled: MtkOmxVdec::SetColorFormat(OMX_PARAM_PORTDEFINITIONTYPE*) */
int _ZN10MtkOmxVdec14SetColorFormatEP28OMX_PARAM_PORTDEFINITIONTYPE(void);

/* Symbol: _ZN10MtkOmxVdec12ColorSpcToMME27_VDEC_DRV_COLOR_PRIMARIES_E */
/* Demangled: MtkOmxVdec::ColorSpcToMM(_VDEC_DRV_COLOR_PRIMARIES_E) */
int _ZN10MtkOmxVdec12ColorSpcToMME27_VDEC_DRV_COLOR_PRIMARIES_E(void);

/* Symbol: _ZN13MtkV4L2Device11deviceIoctlEiPv */
/* Demangled: MtkV4L2Device::deviceIoctl(int, void*) */
int _ZN13MtkV4L2Device11deviceIoctlEiPv(void);

/* Symbol: _ZN10MtkOmxVdec19DeInitVideoDecodeHWEv */
/* Demangled: MtkOmxVdec::DeInitVideoDecodeHW() */
int _ZN10MtkOmxVdec19DeInitVideoDecodeHWEv(void);

/* Symbol: _ZN23CmdThreadRequestHandlerC1Ev */
/* Demangled: CmdThreadRequestHandler::CmdThreadRequestHandler() */
int _ZN23CmdThreadRequestHandlerC1Ev(void);

/* Symbol: MtkOmxComponentCreate */
/* Demangled: MtkOmxComponentCreate */
int MtkOmxComponentCreate(void);

/* Symbol: _ZN10MtkOmxVdec15InitMJpegParamsEv */
/* Demangled: MtkOmxVdec::InitMJpegParams() */
int _ZN10MtkOmxVdec15InitMJpegParamsEv(void);

/* Symbol: _ZN10MtkOmxVdec16GetDisplayBufferE8OMX_BOOLPP21__VDEC_DRV_FRAMEBUF_TP29MtkV4L2Device_FRAME_BUF_PARAM */
/* Demangled: MtkOmxVdec::GetDisplayBuffer(OMX_BOOL, __VDEC_DRV_FRAMEBUF_T**, MtkV4L2Device_FRAME_BUF_PARAM*) */
int _ZN10MtkOmxVdec16GetDisplayBufferE8OMX_BOOLPP21__VDEC_DRV_FRAMEBUF_TP29MtkV4L2Device_FRAME_BUF_PARAM(void);

/* Symbol: _ZN10MtkOmxVdec28HandleFillBufferDone_TSCheckEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::HandleFillBufferDone_TSCheck(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec28HandleFillBufferDone_TSCheckEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: MPEG4LevelMapTable */
/* Demangled: MPEG4LevelMapTable */
extern void* MPEG4LevelMapTable;

/* Symbol: _ZN10MtkOmxVdec26HandleLegacyModeCropChangeEv */
/* Demangled: MtkOmxVdec::HandleLegacyModeCropChange() */
int _ZN10MtkOmxVdec26HandleLegacyModeCropChangeEv(void);

/* Symbol: _ZN10MtkOmxVdec8GetStateEPvP13OMX_STATETYPE */
/* Demangled: MtkOmxVdec::GetState(void*, OMX_STATETYPE*) */
int _ZN10MtkOmxVdec8GetStateEPvP13OMX_STATETYPE(void);

/* Symbol: _ZN10MtkOmxVdec11GetM4UFrameEP21__VDEC_DRV_FRAMEBUF_TPh */
/* Demangled: MtkOmxVdec::GetM4UFrame(__VDEC_DRV_FRAMEBUF_T*, unsigned char*) */
int _ZN10MtkOmxVdec11GetM4UFrameEP21__VDEC_DRV_FRAMEBUF_TPh(void);

/* Symbol: _ZN13MtkV4L2Device22getSupportedFixBuffersEPcb */
/* Demangled: MtkV4L2Device::getSupportedFixBuffers(char*, bool) */
int _ZN13MtkV4L2Device22getSupportedFixBuffersEPcb(void);

/* Symbol: _ZN13MtkV4L2Device22queuedFrameBufferCountEv */
/* Demangled: MtkV4L2Device::queuedFrameBufferCount() */
int _ZN13MtkV4L2Device22queuedFrameBufferCountEv(void);

/* Symbol: _ZNK7android6VectorIiE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<int>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE16do_move_backwardEPvPKvj(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN17V4L2QueueRecorderC2Ev */
/* Demangled: V4L2QueueRecorder::V4L2QueueRecorder() */
int _ZN17V4L2QueueRecorderC2Ev(void);

/* Symbol: _ZN11OmxMVAEntry11setToVencBSEP25__VENC_DRV_PARAM_BS_BUF_T */
/* Demangled: OmxMVAEntry::setToVencBS(__VENC_DRV_PARAM_BS_BUF_T*) */
int _ZN11OmxMVAEntry11setToVencBSEP25__VENC_DRV_PARAM_BS_BUF_T(void);

/* Symbol: _ZN13OmxMVAManager14newOmxMVAandVAEiiPvPS0_ */
/* Demangled: OmxMVAManager::newOmxMVAandVA(int, int, void*, void**) */
int _ZN13OmxMVAManager14newOmxMVAandVAEiiPvPS0_(void);

/* Symbol: _ZN13MtkV4L2Device10getDPBSizeEPjj */
/* Demangled: MtkV4L2Device::getDPBSize(unsigned int*, unsigned int) */
int _ZN13MtkV4L2Device10getDPBSizeEPjj(void);

/* Symbol: _ZN12OmxIonMVAMap9dumpEntryEPv */
/* Demangled: OmxIonMVAMap::dumpEntry(void*) */
int _ZN12OmxIonMVAMap9dumpEntryEPv(void);

/* Symbol: _ZN10MtkOmxVdec23HandleGetPortDefinitionEPv */
/* Demangled: MtkOmxVdec::HandleGetPortDefinition(void*) */
int _ZN10MtkOmxVdec23HandleGetPortDefinitionEPv(void);

/* Symbol: _ZN10MtkOmxVdec28needColorConvertWithMetaModeEv */
/* Demangled: MtkOmxVdec::needColorConvertWithMetaMode() */
int _ZN10MtkOmxVdec28needColorConvertWithMetaModeEv(void);

/* Symbol: _ZN13MtkV4L2Device10devicePollEPii */
/* Demangled: MtkV4L2Device::devicePoll(int*, int) */
int _ZN13MtkV4L2Device10devicePollEPii(void);

/* Symbol: _ZN13MtkV4L2Device20queuedBitstreamCountEv */
/* Demangled: MtkV4L2Device::queuedBitstreamCount() */
int _ZN13MtkV4L2Device20queuedBitstreamCountEv(void);

/* Symbol: HevcProfileMapTable */
/* Demangled: HevcProfileMapTable */
extern void* HevcProfileMapTable;

/* Symbol: _ZN10MtkOmxVdec33SetColorFormat_MTKYUV_UFO_10BIT_HEP28OMX_PARAM_PORTDEFINITIONTYPE */
/* Demangled: MtkOmxVdec::SetColorFormat_MTKYUV_UFO_10BIT_H(OMX_PARAM_PORTDEFINITIONTYPE*) */
int _ZN10MtkOmxVdec33SetColorFormat_MTKYUV_UFO_10BIT_HEP28OMX_PARAM_PORTDEFINITIONTYPE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPhEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, unsigned char*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPhEEEE;

/* Symbol: _ZN10MtkOmxVdec10dumpBufferEPcPhi */
/* Demangled: MtkOmxVdec::dumpBuffer(char*, unsigned char*, int) */
int _ZN10MtkOmxVdec10dumpBufferEPcPhi(void);

/* Symbol: _ZN10MtkOmxVdec22SetInputPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE */
/* Demangled: MtkOmxVdec::SetInputPortDefinition(OMX_PARAM_PORTDEFINITIONTYPE*) */
int _ZN10MtkOmxVdec22SetInputPortDefinitionEP28OMX_PARAM_PORTDEFINITIONTYPE(void);

/* Symbol: _ZNKSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE7__cloneEPNS0_6__baseIS10_EE */
/* Demangled: std::__1::__function::__func<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, std::__1::allocator<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&> >, void (void*, unsigned long)>::__clone(std::__1::__function::__base<void (void*, unsigned long)>*) const */
int _ZNKSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE7__cloneEPNS0_6__baseIS10_EE(void);

/* Symbol: _ZNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEEclEOS3_Om */
/* Demangled: std::__1::__function::__func<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, std::__1::allocator<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&> >, void (void*, unsigned long)>::operator()(void*&&, unsigned long&&) */
int _ZNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEEclEOS3_Om(void);

/* Symbol: _ZN10MtkOmxVdec38HandleFillBufferDone_DI_SetColorFormatEP20OMX_BUFFERHEADERTYPE8OMX_BOOL */
/* Demangled: MtkOmxVdec::HandleFillBufferDone_DI_SetColorFormat(OMX_BUFFERHEADERTYPE*, OMX_BOOL) */
int _ZN10MtkOmxVdec38HandleFillBufferDone_DI_SetColorFormatEP20OMX_BUFFERHEADERTYPE8OMX_BOOL(void);

/* Symbol: _ZN10MtkOmxVdec8DumpFTBQEv */
/* Demangled: MtkOmxVdec::DumpFTBQ() */
int _ZN10MtkOmxVdec8DumpFTBQEv(void);

/* Symbol: _ZN12OmxIonMVAMap15mIonHandleCountE */
/* Demangled: OmxIonMVAMap::mIonHandleCount */
extern void* _ZN12OmxIonMVAMap15mIonHandleCountE;

/* Symbol: _ZN10MtkOmxVdec17CheckOutputBufferEv */
/* Demangled: MtkOmxVdec::CheckOutputBuffer() */
int _ZN10MtkOmxVdec17CheckOutputBufferEv(void);

/* Symbol: _ZN10MtkOmxVdec18GetOutputPortStrutEv */
/* Demangled: MtkOmxVdec::GetOutputPortStrut() */
int _ZN10MtkOmxVdec18GetOutputPortStrutEv(void);

/* Symbol: _ZN10MtkOmxVdec21AllocateGeneralBufferEjPi */
/* Demangled: MtkOmxVdec::AllocateGeneralBuffer(unsigned int, int*) */
int _ZN10MtkOmxVdec21AllocateGeneralBufferEjPi(void);

/* Symbol: _ZN10MtkOmxVdec21HandleEmptyBufferDoneEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::HandleEmptyBufferDone(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec21HandleEmptyBufferDoneEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPvPFiS1_ENS_9allocatorIvEEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<void*, int (*)(void*), std::__1::allocator<void> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPvPFiS1_ENS_9allocatorIvEEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN10MtkOmxVdec12InitRvParamsEv */
/* Demangled: MtkOmxVdec::InitRvParams() */
int _ZN10MtkOmxVdec12InitRvParamsEv(void);

/* Symbol: _ZN10MtkOmxVdec12SetParameterEPv13OMX_INDEXTYPES0_ */
/* Demangled: MtkOmxVdec::SetParameter(void*, OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVdec12SetParameterEPv13OMX_INDEXTYPES0_(void);

/* Symbol: _ZN10MtkOmxVdec13InitAv1ParamsEv */
/* Demangled: MtkOmxVdec::InitAv1Params() */
int _ZN10MtkOmxVdec13InitAv1ParamsEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVdec13decodeRoutineEP20OMX_BUFFERHEADERTYPEP8OMX_BOOL */
/* Demangled: MtkOmxVdec::decodeRoutine(OMX_BUFFERHEADERTYPE*, OMX_BOOL*) */
int _ZN10MtkOmxVdec13decodeRoutineEP20OMX_BUFFERHEADERTYPEP8OMX_BOOL(void);

/* Symbol: _ZN13MtkV4L2Device18StreamOffBitstreamEv */
/* Demangled: MtkV4L2Device::StreamOffBitstream() */
int _ZN13MtkV4L2Device18StreamOffBitstreamEv(void);

/* Symbol: _ZN12OmxIonMVAMap6mapIonEP14OmxIonMVAEntryi */
/* Demangled: OmxIonMVAMap::mapIon(OmxIonMVAEntry*, int) */
int _ZN12OmxIonMVAMap6mapIonEP14OmxIonMVAEntryi(void);

/* Symbol: _ZN14MtkOmxCmdQueueD2Ev */
/* Demangled: MtkOmxCmdQueue::~MtkOmxCmdQueue() */
int _ZN14MtkOmxCmdQueueD2Ev(void);

/* Symbol: _ZN10MtkOmxVdec13GetVDECSrtingE17MTK_VDEC_CODEC_IDPv */
/* Demangled: MtkOmxVdec::GetVDECSrting(MTK_VDEC_CODEC_ID, void*) */
int _ZN10MtkOmxVdec13GetVDECSrtingE17MTK_VDEC_CODEC_IDPv(void);

/* Symbol: _ZNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&>, std::__1::allocator<std::__1::__bind<void (*&)(void*, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*), std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&, MMDump::size&, MMDump::width&, MMDump::height&, MMDump::color_space&, MMDump::color_format&, MMDump::stride&, MMDump::sliceheight&, char const*&> >, void (void*, unsigned long)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcINS_6__bindIRPFvPvyjjjjjjjPKcEJRKNS_12placeholders4__phILi1EEERKNSA_ILi2EEERN6MMDump4sizeERNSH_5widthERNSH_6heightERNSH_11color_spaceERNSH_12color_formatERNSH_6strideERNSH_11sliceheightERS5_EEENS_9allocatorISX_EEFvS3_mEE18destroy_deallocateEv(void);

/* Symbol: _ZN10MtkOmxVdec29GetM4UFrameandBitstreamBufferEP21__VDEC_DRV_FRAMEBUF_TPhjS2_ */
/* Demangled: MtkOmxVdec::GetM4UFrameandBitstreamBuffer(__VDEC_DRV_FRAMEBUF_T*, unsigned char*, unsigned int, unsigned char*) */
int _ZN10MtkOmxVdec29GetM4UFrameandBitstreamBufferEP21__VDEC_DRV_FRAMEBUF_TPhjS2_(void);

/* Symbol: _ZNK7android6VectorIiE10do_destroyEPvj */
/* Demangled: android::Vector<int>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIiE10do_destroyEPvj(void);

/* Symbol: _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIP5MMLibNS_14default_deleteIS1_EENS_9allocatorIS1_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<MMLib*, std::__1::default_delete<MMLib>, std::__1::allocator<MMLib> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIP5MMLibNS_14default_deleteIS1_EENS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN13OmxMVAManager18getOmxInfoFromHndlEPvP9_VBufInfo */
/* Demangled: OmxMVAManager::getOmxInfoFromHndl(void*, _VBufInfo*) */
int _ZN13OmxMVAManager18getOmxInfoFromHndlEPvP9_VBufInfo(void);

/* Symbol: _ZTVN7android6VectorIP11OmxMVAEntryEE */
/* Demangled: vtable for android::Vector<OmxMVAEntry*> */
extern void* _ZTVN7android6VectorIP11OmxMVAEntryEE;

/* Symbol: _Z17__setBufParameterPK13native_handleii */
/* Demangled: __setBufParameter(native_handle const*, int, int) */
int _Z17__setBufParameterPK13native_handleii(void);

/* Symbol: _ZN10MtkOmxVdec17GetExtensionIndexEPvPcP13OMX_INDEXTYPE */
/* Demangled: MtkOmxVdec::GetExtensionIndex(void*, char*, OMX_INDEXTYPE*) */
int _ZN10MtkOmxVdec17GetExtensionIndexEPvPcP13OMX_INDEXTYPE(void);

/* Symbol: _ZN13MtkV4L2Device14checkFlushDoneEv */
/* Demangled: MtkV4L2Device::checkFlushDone() */
int _ZN13MtkV4L2Device14checkFlushDoneEv(void);

/* Symbol: _Z31absolute_timespec_from_timespecR8timespecRKS_i */
/* Demangled: absolute_timespec_from_timespec(timespec&, timespec const&, int) */
int _Z31absolute_timespec_from_timespecR8timespecRKS_i(void);

/* Symbol: _ZN13OmxMVAManagerD1Ev */
/* Demangled: OmxMVAManager::~OmxMVAManager() */
int _ZN13OmxMVAManagerD1Ev(void);

/* Symbol: _ZN10MtkOmxVdec23checkIfNeedPortReconfigEv */
/* Demangled: MtkOmxVdec::checkIfNeedPortReconfig() */
int _ZN10MtkOmxVdec23checkIfNeedPortReconfigEv(void);

/* Symbol: _ZN10MtkOmxVdec33HandleSetMtkOmxVdecUseClearMotionEv */
/* Demangled: MtkOmxVdec::HandleSetMtkOmxVdecUseClearMotion() */
int _ZN10MtkOmxVdec33HandleSetMtkOmxVdecUseClearMotionEv(void);

/* Symbol: _ZTVN7android6VectorIxEE */
/* Demangled: vtable for android::Vector<long long> */
extern void* _ZTVN7android6VectorIxEE;

/* Symbol: _ZN10MtkOmxVdec11DecodeVideoEP20OMX_BUFFERHEADERTYPES1_ */
/* Demangled: MtkOmxVdec::DecodeVideo(OMX_BUFFERHEADERTYPE*, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec11DecodeVideoEP20OMX_BUFFERHEADERTYPES1_(void);

/* Symbol: _ZN13OmxMVAManager15newOmxMVAwithVAEPviS0_ */
/* Demangled: OmxMVAManager::newOmxMVAwithVA(void*, int, void*) */
int _ZN13OmxMVAManager15newOmxMVAwithVAEPviS0_(void);

/* Symbol: _ZN13OmxMVAManager8dumpListEv */
/* Demangled: OmxMVAManager::dumpList() */
int _ZN13OmxMVAManager8dumpListEv(void);

/* Symbol: _ZNK7android6VectorIP11OmxMVAEntryE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<OmxMVAEntry*>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIP11OmxMVAEntryE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVdec20SetGrallocExtraQPSumEPK13native_handlei */
/* Demangled: MtkOmxVdec::SetGrallocExtraQPSum(native_handle const*, int) */
int _ZN10MtkOmxVdec20SetGrallocExtraQPSumEPK13native_handlei(void);

/* Symbol: _ZNK7android6VectorI18_FenceAndBufIdxMapE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<_FenceAndBufIdxMap>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorI18_FenceAndBufIdxMapE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorI18_FenceAndBufIdxMapE8do_splatEPvPKvj */
/* Demangled: android::Vector<_FenceAndBufIdxMap>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorI18_FenceAndBufIdxMapE8do_splatEPvPKvj(void);

/* Symbol: _ZNSt3__112__deque_baseIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEED2Ev */
/* Demangled: std::__1::__deque_base<_MTK_OMX_CMD_QUEUE_ITEM*, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM*> >::~__deque_base() */
int _ZNSt3__112__deque_baseIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEED2Ev(void);

/* Symbol: _ZN10MtkOmxVdec20GetPixelFormatStringE24_VDEC_DRV_PIXEL_FORMAT_T */
/* Demangled: MtkOmxVdec::GetPixelFormatString(_VDEC_DRV_PIXEL_FORMAT_T) */
int _ZN10MtkOmxVdec20GetPixelFormatStringE24_VDEC_DRV_PIXEL_FORMAT_T(void);

/* Symbol: _ZN10MtkOmxVdec23SetupBufferInfoForMPEG2Ev */
/* Demangled: MtkOmxVdec::SetupBufferInfoForMPEG2() */
int _ZN10MtkOmxVdec23SetupBufferInfoForMPEG2Ev(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPvPFiS1_ENS_9allocatorIvEEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<void*, int (*)(void*), std::__1::allocator<void> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPvPFiS1_ENS_9allocatorIvEEEE;

/* Symbol: _ZN10MtkOmxVdec11GetInputBufEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::GetInputBuf(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec11GetInputBufEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVdec21SetupBufferInfoForVP8Ev */
/* Demangled: MtkOmxVdec::SetupBufferInfoForVP8() */
int _ZN10MtkOmxVdec21SetupBufferInfoForVP8Ev(void);

/* Symbol: _ZN13MtkV4L2Device19needToDumpDebugInfoEv */
/* Demangled: MtkV4L2Device::needToDumpDebugInfo() */
int _ZN13MtkV4L2Device19needToDumpDebugInfoEv(void);

/* Symbol: _Z20MtkOmxVdecPollThreadPv */
/* Demangled: MtkOmxVdecPollThread(void*) */
int _Z20MtkOmxVdecPollThreadPv(void);

/* Symbol: _ZN10MtkOmxVdec15FlushOutputPortEv */
/* Demangled: MtkOmxVdec::FlushOutputPort() */
int _ZN10MtkOmxVdec15FlushOutputPortEv(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: _ZN10MtkOmxVdec14HandleStateSetEj */
/* Demangled: MtkOmxVdec::HandleStateSet(unsigned int) */
int _ZN10MtkOmxVdec14HandleStateSetEj(void);

/* Symbol: _ZN10MtkOmxVdec18CheckSetParamStateEv */
/* Demangled: MtkOmxVdec::CheckSetParamState() */
int _ZN10MtkOmxVdec18CheckSetParamStateEv(void);

/* Symbol: _ZN10MtkOmxVdec23SetColorFormatbyDrvTypeEi */
/* Demangled: MtkOmxVdec::SetColorFormatbyDrvType(int) */
int _ZN10MtkOmxVdec23SetColorFormatbyDrvTypeEi(void);

/* Symbol: _ZN13OmxMVAManager14mEnableMoreLogE */
/* Demangled: OmxMVAManager::mEnableMoreLog */
extern void* _ZN13OmxMVAManager14mEnableMoreLogE;

/* Symbol: _ZN13OmxMVAManagerC1EPKc */
/* Demangled: OmxMVAManager::OmxMVAManager(char const*) */
int _ZN13OmxMVAManagerC1EPKc(void);

/* Symbol: _ZN10MtkOmxVdec17decodeRoutine_EOSEP20OMX_BUFFERHEADERTYPEP8OMX_BOOL */
/* Demangled: MtkOmxVdec::decodeRoutine_EOS(OMX_BUFFERHEADERTYPE*, OMX_BOOL*) */
int _ZN10MtkOmxVdec17decodeRoutine_EOSEP20OMX_BUFFERHEADERTYPEP8OMX_BOOL(void);

/* Symbol: _ZN12OmxIonMVAMapD1Ev */
/* Demangled: OmxIonMVAMap::~OmxIonMVAMap() */
int _ZN12OmxIonMVAMapD1Ev(void);

/* Symbol: _ZTV11OmxMVAEntry */
/* Demangled: vtable for OmxMVAEntry */
extern void* _ZTV11OmxMVAEntry;

/* Symbol: _ZN10MtkOmxVdec15HandlePortFlushEj */
/* Demangled: MtkOmxVdec::HandlePortFlush(unsigned int) */
int _ZN10MtkOmxVdec15HandlePortFlushEj(void);

/* Symbol: _ZN10MtkOmxVdec18HandleGrallocExtraEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::HandleGrallocExtra(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec18HandleGrallocExtraEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVdec19canQueueFrameBufferEv */
/* Demangled: MtkOmxVdec::canQueueFrameBuffer() */
int _ZN10MtkOmxVdec19canQueueFrameBufferEv(void);

/* Symbol: _ZN10MtkOmxVdec24UpdateColorAspectsParamsEv */
/* Demangled: MtkOmxVdec::UpdateColorAspectsParams() */
int _ZN10MtkOmxVdec24UpdateColorAspectsParamsEv(void);

/* Symbol: _ZN10MtkOmxVdecC2Ev */
/* Demangled: MtkOmxVdec::MtkOmxVdec() */
int _ZN10MtkOmxVdecC2Ev(void);

/* Symbol: _ZN13MtkV4L2DeviceD1Ev */
/* Demangled: MtkV4L2Device::~MtkV4L2Device() */
int _ZN13MtkV4L2DeviceD1Ev(void);

/* Symbol: _ZN10MtkOmxVdec20BackupPendingCSDDataEi */
/* Demangled: MtkOmxVdec::BackupPendingCSDData(int) */
int _ZN10MtkOmxVdec20BackupPendingCSDDataEi(void);

/* Symbol: _ZN10MtkOmxVdec21GetIonPhysicalAddressEii */
/* Demangled: MtkOmxVdec::GetIonPhysicalAddress(int, int) */
int _ZN10MtkOmxVdec21GetIonPhysicalAddressEii(void);

/* Symbol: _ZN10MtkOmxVdec15AlignBufferSizeEPv */
/* Demangled: MtkOmxVdec::AlignBufferSize(void*) */
int _ZN10MtkOmxVdec15AlignBufferSizeEPv(void);

/* Symbol: _ZNSt3__110shared_ptrIvED2Ev */
/* Demangled: std::__1::shared_ptr<void>::~shared_ptr() */
int _ZNSt3__110shared_ptrIvED2Ev(void);

/* Symbol: _ZN10MtkOmxVdec17HandlePortDisableEj */
/* Demangled: MtkOmxVdec::HandlePortDisable(unsigned int) */
int _ZN10MtkOmxVdec17HandlePortDisableEj(void);

/* Symbol: _ZN14MtkOmxCmdQueue11FreeCmdItemEP23_MTK_OMX_CMD_QUEUE_ITEM */
/* Demangled: MtkOmxCmdQueue::FreeCmdItem(_MTK_OMX_CMD_QUEUE_ITEM*) */
int _ZN14MtkOmxCmdQueue11FreeCmdItemEP23_MTK_OMX_CMD_QUEUE_ITEM(void);

/* Symbol: _ZN14MtkOmxCmdQueueC1Ev */
/* Demangled: MtkOmxCmdQueue::MtkOmxCmdQueue() */
int _ZN14MtkOmxCmdQueueC1Ev(void);

/* Symbol: _ZN11OmxMVAEntry12setToVencFrmEP26__VENC_DRV_PARAM_FRM_BUF_T */
/* Demangled: OmxMVAEntry::setToVencFrm(__VENC_DRV_PARAM_FRM_BUF_T*) */
int _ZN11OmxMVAEntry12setToVencFrmEP26__VENC_DRV_PARAM_FRM_BUF_T(void);

/* Symbol: _Z21MtkVdec_ComponentInitPvPc */
/* Demangled: MtkVdec_ComponentInit(void*, char*) */
int _Z21MtkVdec_ComponentInitPvPc(void);

/* Symbol: _ZNK7android6VectorI18_FenceAndBufIdxMapE7do_copyEPvPKvj */
/* Demangled: android::Vector<_FenceAndBufIdxMap>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorI18_FenceAndBufIdxMapE7do_copyEPvPKvj(void);

/* Symbol: bOmxVdecPerfLogEnable */
/* Demangled: bOmxVdecPerfLogEnable */
extern void* bOmxVdecPerfLogEnable;

/* Symbol: _ZN10MtkOmxVdec17InitVideoDecodeHWEPiS0_PtS1_PhPjP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::InitVideoDecodeHW(int*, int*, unsigned short*, unsigned short*, unsigned char*, unsigned int*, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec17InitVideoDecodeHWEPiS0_PtS1_PhPjP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVdec14InitS263ParamsEv */
/* Demangled: MtkOmxVdec::InitS263Params() */
int _ZN10MtkOmxVdec14InitS263ParamsEv(void);

/* Symbol: _ZN13MtkV4L2Device16setFixBufferModeEP36_VDEC_DRV_FIXED_MAX_OUTPUT_BUFFER_T_ */
/* Demangled: MtkV4L2Device::setFixBufferMode(_VDEC_DRV_FIXED_MAX_OUTPUT_BUFFER_T_*) */
int _ZN13MtkV4L2Device16setFixBufferModeEP36_VDEC_DRV_FIXED_MAX_OUTPUT_BUFFER_T_(void);

/* Symbol: _ZNK7android6VectorI18_FenceAndBufIdxMapE12do_constructEPvj */
/* Demangled: android::Vector<_FenceAndBufIdxMap>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorI18_FenceAndBufIdxMapE12do_constructEPvj(void);

/* Symbol: _ZNSt3__17__sort4IRPFbxxEPxEEjT0_S5_S5_S5_T_ */
/* Demangled: unsigned int std::__1::__sort4<bool (*&)(long long, long long), long long*>(long long*, long long*, long long*, long long*, bool (*&)(long long, long long)) */
int _ZNSt3__17__sort4IRPFbxxEPxEEjT0_S5_S5_S5_T_(void);

/* Symbol: VP8LevelMapTable */
/* Demangled: VP8LevelMapTable */
extern void* VP8LevelMapTable;

/* Symbol: _ZN13MtkV4L2Device13setSecureModeEi */
/* Demangled: MtkV4L2Device::setSecureMode(int) */
int _ZN13MtkV4L2Device13setSecureModeEi(void);

/* Symbol: _ZN13MtkV4L2Device11ChangeStateE19MtkV4L2Device_State */
/* Demangled: MtkV4L2Device::ChangeState(MtkV4L2Device_State) */
int _ZN13MtkV4L2Device11ChangeStateE19MtkV4L2Device_State(void);

/* Symbol: _ZN10MtkOmxVdec16InitAvcSecParamsEv */
/* Demangled: MtkOmxVdec::InitAvcSecParams() */
int _ZN10MtkOmxVdec16InitAvcSecParamsEv(void);

/* Symbol: _ZN10MtkOmxVdec18DequeueInputBufferEv */
/* Demangled: MtkOmxVdec::DequeueInputBuffer() */
int _ZN10MtkOmxVdec18DequeueInputBufferEv(void);

/* Symbol: _ZN10MtkOmxVdec18GetBitstreamBufferEPhj */
/* Demangled: MtkOmxVdec::GetBitstreamBuffer(unsigned char*, unsigned int) */
int _ZN10MtkOmxVdec18GetBitstreamBufferEPhj(void);

/* Symbol: _ZN10MtkOmxVdec21FindQueueOutputBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::FindQueueOutputBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec21FindQueueOutputBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVdec27CheckColorConvertBufferSizeEv */
/* Demangled: MtkOmxVdec::CheckColorConvertBufferSize() */
int _ZN10MtkOmxVdec27CheckColorConvertBufferSizeEv(void);

/* Symbol: _Z16MtkVdec_GetStatePvP13OMX_STATETYPE */
/* Demangled: MtkVdec_GetState(void*, OMX_STATETYPE*) */
int _Z16MtkVdec_GetStatePvP13OMX_STATETYPE(void);

/* Symbol: _ZN13MtkV4L2Device24requestBufferFrameBufferEj */
/* Demangled: MtkV4L2Device::requestBufferFrameBuffer(unsigned int) */
int _ZN13MtkV4L2Device24requestBufferFrameBufferEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE12do_constructEPvj(void);

/* Symbol: _ZTV14OmxIonMVAEntry */
/* Demangled: vtable for OmxIonMVAEntry */
extern void* _ZTV14OmxIonMVAEntry;

/* Symbol: _ZN10MtkOmxVdec26CheckICSLaterSetParametersEPv13OMX_INDEXTYPES0_ */
/* Demangled: MtkOmxVdec::CheckICSLaterSetParameters(void*, OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVdec26CheckICSLaterSetParametersEPv13OMX_INDEXTYPES0_(void);

/* Symbol: _Z23MtkVdec_ComponentDeInitPv */
/* Demangled: MtkVdec_ComponentDeInit(void*) */
int _Z23MtkVdec_ComponentDeInitPv(void);

/* Symbol: _ZN10MtkOmxVdecD0Ev */
/* Demangled: MtkOmxVdec::~MtkOmxVdec() */
int _ZN10MtkOmxVdecD0Ev(void);

/* Symbol: _ZN10MtkOmxVdec14InitH263ParamsEv */
/* Demangled: MtkOmxVdec::InitH263Params() */
int _ZN10MtkOmxVdec14InitH263ParamsEv(void);

/* Symbol: _Z16myDescendingSortxx */
/* Demangled: myDescendingSort(long long, long long) */
int _Z16myDescendingSortxx(void);

/* Symbol: _ZN13MtkV4L2Device20getVideoProfileLevelEjP31__VDEC_DRV_QUERY_VIDEO_FORMAT_T */
/* Demangled: MtkV4L2Device::getVideoProfileLevel(unsigned int, __VDEC_DRV_QUERY_VIDEO_FORMAT_T*) */
int _ZN13MtkV4L2Device20getVideoProfileLevelEjP31__VDEC_DRV_QUERY_VIDEO_FORMAT_T(void);

/* Symbol: _Z15CommandToStringj */
/* Demangled: CommandToString(unsigned int) */
int _Z15CommandToStringj(void);

/* Symbol: _ZN10MtkOmxVdec9SetConfigEPv13OMX_INDEXTYPES0_ */
/* Demangled: MtkOmxVdec::SetConfig(void*, OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVdec9SetConfigEPv13OMX_INDEXTYPES0_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVdec33SetColorFormat_MTKYUV_UFO_10BIT_VEP28OMX_PARAM_PORTDEFINITIONTYPE */
/* Demangled: MtkOmxVdec::SetColorFormat_MTKYUV_UFO_10BIT_V(OMX_PARAM_PORTDEFINITIONTYPE*) */
int _ZN10MtkOmxVdec33SetColorFormat_MTKYUV_UFO_10BIT_VEP28OMX_PARAM_PORTDEFINITIONTYPE(void);

/* Symbol: _ZN13MtkV4L2Device12dequeueEventEv */
/* Demangled: MtkV4L2Device::dequeueEvent() */
int _ZN13MtkV4L2Device12dequeueEventEv(void);

/* Symbol: _ZN10MtkOmxVdec25checkIfNeed2WakeupDecoderEv */
/* Demangled: MtkOmxVdec::checkIfNeed2WakeupDecoder() */
int _ZN10MtkOmxVdec25checkIfNeed2WakeupDecoderEv(void);

/* Symbol: _ZN10MtkOmxVdec34PrepareAvaliableColorConvertBufferEi8OMX_BOOL */
/* Demangled: MtkOmxVdec::PrepareAvaliableColorConvertBuffer(int, OMX_BOOL) */
int _ZN10MtkOmxVdec34PrepareAvaliableColorConvertBufferEi8OMX_BOOL(void);

/* Symbol: _ZN10MtkOmxVdec37HandleColorConvertForFillBufferDone_1Ej8OMX_BOOL */
/* Demangled: MtkOmxVdec::HandleColorConvertForFillBufferDone_1(unsigned int, OMX_BOOL) */
int _ZN10MtkOmxVdec37HandleColorConvertForFillBufferDone_1Ej8OMX_BOOL(void);

/* Symbol: _ZN10MtkOmxVdec13HandleAllInitE13OMX_INDEXTYPEPv */
/* Demangled: MtkOmxVdec::HandleAllInit(OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVdec13HandleAllInitE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN10MtkOmxVdec12CheckTeeTypeEv */
/* Demangled: MtkOmxVdec::CheckTeeType() */
int _ZN10MtkOmxVdec12CheckTeeTypeEv(void);

/* Symbol: _ZN13MtkV4L2Device8QueryCapEP15v4l2_capability */
/* Demangled: MtkV4L2Device::QueryCap(v4l2_capability*) */
int _ZN13MtkV4L2Device8QueryCapEP15v4l2_capability(void);

/* Symbol: _ZN10MtkOmxVdec20queueBitstreamBufferEPiP8OMX_BOOL */
/* Demangled: MtkOmxVdec::queueBitstreamBuffer(int*, OMX_BOOL*) */
int _ZN10MtkOmxVdec20queueBitstreamBufferEPiP8OMX_BOOL(void);

/* Symbol: _ZN10MtkOmxVdec9GetConfigEPv13OMX_INDEXTYPES0_ */
/* Demangled: MtkOmxVdec::GetConfig(void*, OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVdec9GetConfigEPv13OMX_INDEXTYPES0_(void);

/* Symbol: AV1LevelMapTable */
/* Demangled: AV1LevelMapTable */
extern void* AV1LevelMapTable;

/* Symbol: _ZNK7android6VectorIP11OmxMVAEntryE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<OmxMVAEntry*>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIP11OmxMVAEntryE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVdec16FillHDRColorDescEP22__VDEC_DRV_COLORDESC_T */
/* Demangled: MtkOmxVdec::FillHDRColorDesc(__VDEC_DRV_COLORDESC_T*) */
int _ZN10MtkOmxVdec16FillHDRColorDescEP22__VDEC_DRV_COLORDESC_T(void);

/* Symbol: _ZN10MtkOmxVdec21HandleViLTEBufferDoneEP20OMX_BUFFERHEADERTYPEj */
/* Demangled: MtkOmxVdec::HandleViLTEBufferDone(OMX_BUFFERHEADERTYPE*, unsigned int) */
int _ZN10MtkOmxVdec21HandleViLTEBufferDoneEP20OMX_BUFFERHEADERTYPEj(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: _ZN10MtkOmxVdec9GetFrmBufExP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::GetFrmBuf(long long, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec9GetFrmBufExP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: VP9LevelMapTable */
/* Demangled: VP9LevelMapTable */
extern void* VP9LevelMapTable;

/* Symbol: _ZN10MtkOmxVdec14InitHEVCParamsEv */
/* Demangled: MtkOmxVdec::InitHEVCParams() */
int _ZN10MtkOmxVdec14InitHEVCParamsEv(void);

/* Symbol: _ZN10MtkOmxVdec22GetInputBufferFromETBQEv */
/* Demangled: MtkOmxVdec::GetInputBufferFromETBQ() */
int _ZN10MtkOmxVdec22GetInputBufferFromETBQEv(void);

/* Symbol: _ZN10MtkOmxVdec27SetColorFormat_YUV420PlanarEP28OMX_PARAM_PORTDEFINITIONTYPE */
/* Demangled: MtkOmxVdec::SetColorFormat_YUV420Planar(OMX_PARAM_PORTDEFINITIONTYPE*) */
int _ZN10MtkOmxVdec27SetColorFormat_YUV420PlanarEP28OMX_PARAM_PORTDEFINITIONTYPE(void);

/* Symbol: _ZN13OmxMVAManagerC2EPKc */
/* Demangled: OmxMVAManager::OmxMVAManager(char const*) */
int _ZN13OmxMVAManagerC2EPKc(void);

/* Symbol: _ZN10MtkOmxVdec18FlushGeneralBufferEv */
/* Demangled: MtkOmxVdec::FlushGeneralBuffer() */
int _ZN10MtkOmxVdec18FlushGeneralBufferEv(void);

/* Symbol: _ZN10MtkOmxVdec25RemoveInputBufferFromETBQEv */
/* Demangled: MtkOmxVdec::RemoveInputBufferFromETBQ() */
int _ZN10MtkOmxVdec25RemoveInputBufferFromETBQEv(void);

/* Symbol: _ZN10MtkOmxVdec14needLegacyModeEv */
/* Demangled: MtkOmxVdec::needLegacyMode() */
int _ZN10MtkOmxVdec14needLegacyModeEv(void);

/* Symbol: _ZN10MtkOmxVdec32needColorConvertWithNativeWindowEv */
/* Demangled: MtkOmxVdec::needColorConvertWithNativeWindow() */
int _ZN10MtkOmxVdec32needColorConvertWithNativeWindowEv(void);

/* Symbol: _ZN13MtkV4L2Device10getPicInfoEP20__VDEC_DRV_PICINFO_T */
/* Demangled: MtkV4L2Device::getPicInfo(__VDEC_DRV_PICINFO_T*) */
int _ZN13MtkV4L2Device10getPicInfoEP20__VDEC_DRV_PICINFO_T(void);

/* Symbol: H263LevelMapTable */
/* Demangled: H263LevelMapTable */
extern void* H263LevelMapTable;

/* Symbol: _ZTV13OmxMVAManager */
/* Demangled: vtable for OmxMVAManager */
extern void* _ZTV13OmxMVAManager;

/* Symbol: _ZN10MtkOmxVdec16QueueInputBufferEi */
/* Demangled: MtkOmxVdec::QueueInputBuffer(int) */
int _ZN10MtkOmxVdec16QueueInputBufferEi(void);

/* Symbol: _ZN10MtkOmxVdec21HandleEmptyThisBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::HandleEmptyThisBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec21HandleEmptyThisBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN14MtkOmxCmdQueue6GetCmdEPP23_MTK_OMX_CMD_QUEUE_ITEM8OMX_BOOL */
/* Demangled: MtkOmxCmdQueue::GetCmd(_MTK_OMX_CMD_QUEUE_ITEM**, OMX_BOOL) */
int _ZN14MtkOmxCmdQueue6GetCmdEPP23_MTK_OMX_CMD_QUEUE_ITEM8OMX_BOOL(void);

/* Symbol: HDRMatrixCoeffMap */
/* Demangled: HDRMatrixCoeffMap */
extern void* HDRMatrixCoeffMap;

/* Symbol: _ZN13MtkV4L2Device20setFormatFrameBufferEj */
/* Demangled: MtkV4L2Device::setFormatFrameBuffer(unsigned int) */
int _ZN13MtkV4L2Device20setFormatFrameBufferEj(void);

/* Symbol: _ZNSt3__15dequeIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE9push_backERKS2_ */
/* Demangled: std::__1::deque<_MTK_OMX_CMD_QUEUE_ITEM*, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM*> >::push_back(_MTK_OMX_CMD_QUEUE_ITEM* const&) */
int _ZNSt3__15dequeIP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS2_EEE9push_backERKS2_(void);

/* Symbol: _ZN23CmdThreadRequestHandlerD1Ev */
/* Demangled: CmdThreadRequestHandler::~CmdThreadRequestHandler() */
int _ZN23CmdThreadRequestHandlerD1Ev(void);

/* Symbol: _ZNK7android6VectorIiE7do_copyEPvPKvj */
/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE7do_copyEPvPKvj(void);

/* Symbol: _Z13MTK_OMX_ALLOCj */
/* Demangled: MTK_OMX_ALLOC(unsigned int) */
int _Z13MTK_OMX_ALLOCj(void);

/* Symbol: _ZN10MtkOmxVdec13DecodeVideoExEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::DecodeVideoEx(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec13DecodeVideoExEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVdec17DISetGrallocExtraEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::DISetGrallocExtra(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec17DISetGrallocExtraEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVdec19HandleGetPortFormatEPv */
/* Demangled: MtkOmxVdec::HandleGetPortFormat(void*) */
int _ZN10MtkOmxVdec19HandleGetPortFormatEPv(void);

/* Symbol: _ZN10MtkOmxVdec20ComponentDeInitDebugEv */
/* Demangled: MtkOmxVdec::ComponentDeInitDebug() */
int _ZN10MtkOmxVdec20ComponentDeInitDebugEv(void);

/* Symbol: _ZN14MtkOmxCmdQueue10NewCmdItemEPP23_MTK_OMX_CMD_QUEUE_ITEM */
/* Demangled: MtkOmxCmdQueue::NewCmdItem(_MTK_OMX_CMD_QUEUE_ITEM**) */
int _ZN14MtkOmxCmdQueue10NewCmdItemEPP23_MTK_OMX_CMD_QUEUE_ITEM(void);

/* Symbol: _ZN10MtkOmxVdec28HandleUseAndroidNativeBufferEPvS0_ */
/* Demangled: MtkOmxVdec::HandleUseAndroidNativeBuffer(void*, void*) */
int _ZN10MtkOmxVdec28HandleUseAndroidNativeBufferEPvS0_(void);

/* Symbol: _ZN10MtkOmxVdec18supportAutoEnlargeEv */
/* Demangled: MtkOmxVdec::supportAutoEnlarge() */
int _ZN10MtkOmxVdec18supportAutoEnlargeEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE10do_compareEPKvS5_(void);

/* Symbol: _ZNK7android6VectorIP11v4l2_bufferE8do_splatEPvPKvj */
/* Demangled: android::Vector<v4l2_buffer*>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIP11v4l2_bufferE8do_splatEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVdec10FreeBufferEPvjP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::FreeBuffer(void*, unsigned int, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec10FreeBufferEPvjP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVdec18ComponentInitDebugEv */
/* Demangled: MtkOmxVdec::ComponentInitDebug() */
int _ZN10MtkOmxVdec18ComponentInitDebugEv(void);

/* Symbol: _ZN10MtkOmxVdec24HandleSetVideoPortFormatEP28OMX_PARAM_PORTDEFINITIONTYPE */
/* Demangled: MtkOmxVdec::HandleSetVideoPortFormat(OMX_PARAM_PORTDEFINITIONTYPE*) */
int _ZN10MtkOmxVdec24HandleSetVideoPortFormatEP28OMX_PARAM_PORTDEFINITIONTYPE(void);

/* Symbol: _ZN10MtkOmxVdec23SetupBufferInfoForMPEG4Ev */
/* Demangled: MtkOmxVdec::SetupBufferInfoForMPEG4() */
int _ZN10MtkOmxVdec23SetupBufferInfoForMPEG4Ev(void);

/* Symbol: _ZN17V4L2QueueRecorderD2Ev */
/* Demangled: V4L2QueueRecorder::~V4L2QueueRecorder() */
int _ZN17V4L2QueueRecorderD2Ev(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: _ZN11OmxMVAEntry13setToVBufInfoEP9_VBufInfo */
/* Demangled: OmxMVAEntry::setToVBufInfo(_VBufInfo*) */
int _ZN11OmxMVAEntry13setToVBufInfoEP9_VBufInfo(void);

/* Symbol: _ZN10MtkOmxVdec12InsertFrmBufEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::InsertFrmBuf(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec12InsertFrmBufEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVdec18GetFreeInputBufferE8OMX_BOOLP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::GetFreeInputBuffer(OMX_BOOL, OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec18GetFreeInputBufferE8OMX_BOOLP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: AvcLevelMapTable */
/* Demangled: AvcLevelMapTable */
extern void* AvcLevelMapTable;

/* Symbol: _ZN10MtkOmxVdec14RemoveInputBufEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::RemoveInputBuf(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec14RemoveInputBufEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVdec14dequeueBuffersEv */
/* Demangled: MtkOmxVdec::dequeueBuffers() */
int _ZN10MtkOmxVdec14dequeueBuffersEv(void);

/* Symbol: _ZN10MtkOmxVdec27GrallocExtraSetBufParameterEPK13native_handlejjxcc */
/* Demangled: MtkOmxVdec::GrallocExtraSetBufParameter(native_handle const*, unsigned int, unsigned int, long long, char, char) */
int _ZN10MtkOmxVdec27GrallocExtraSetBufParameterEPK13native_handlejjxcc(void);

/* Symbol: _ZNSt3__118__insertion_sort_3IRPFbxxEPxEEvT0_S5_T_ */
/* Demangled: void std::__1::__insertion_sort_3<bool (*&)(long long, long long), long long*>(long long*, long long*, bool (*&)(long long, long long)) */
int _ZNSt3__118__insertion_sort_3IRPFbxxEPxEEvT0_S5_T_(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: _ZN10MtkOmxVdec23isThereCmdThreadRequestEv */
/* Demangled: MtkOmxVdec::isThereCmdThreadRequest() */
int _ZN10MtkOmxVdec23isThereCmdThreadRequestEv(void);

/* Symbol: _ZN10MtkOmxVdec24InsertionSortForInputPTSEx */
/* Demangled: MtkOmxVdec::InsertionSortForInputPTS(long long) */
int _ZN10MtkOmxVdec24InsertionSortForInputPTSEx(void);

/* Symbol: _ZN13MtkV4L2Device14queueBitstreamEiiiixi */
/* Demangled: MtkV4L2Device::queueBitstream(int, int, int, int, long long, int) */
int _ZN13MtkV4L2Device14queueBitstreamEiiiixi(void);

/* Symbol: _ZNK7android6VectorI18_FenceAndBufIdxMapE10do_destroyEPvj */
/* Demangled: android::Vector<_FenceAndBufIdxMap>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorI18_FenceAndBufIdxMapE10do_destroyEPvj(void);

/* Symbol: _ZN10MtkOmxVdec14AllocateBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_j */
/* Demangled: MtkOmxVdec::AllocateBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
int _ZN10MtkOmxVdec14AllocateBufferEPvPP20OMX_BUFFERHEADERTYPEjS0_j(void);

/* Symbol: _ZN10MtkOmxVdec15CheckFreeBufferE8OMX_BOOL */
/* Demangled: MtkOmxVdec::CheckFreeBuffer(OMX_BOOL) */
int _ZN10MtkOmxVdec15CheckFreeBufferE8OMX_BOOL(void);

/* Symbol: _ZN10MtkOmxVdec17QueueOutputBufferEi */
/* Demangled: MtkOmxVdec::QueueOutputBuffer(int) */
int _ZN10MtkOmxVdec17QueueOutputBufferEi(void);

/* Symbol: _ZN10MtkOmxVdec25CheckKKLaterSetParametersE13OMX_INDEXTYPEPv */
/* Demangled: MtkOmxVdec::CheckKKLaterSetParameters(OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVdec25CheckKKLaterSetParametersE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN13MtkV4L2Device22setQueuedFrameBufCountEj */
/* Demangled: MtkV4L2Device::setQueuedFrameBufCount(unsigned int) */
int _ZN13MtkV4L2Device22setQueuedFrameBufCountEj(void);

/* Symbol: AvcProfileMapTable */
/* Demangled: AvcProfileMapTable */
extern void* AvcProfileMapTable;

/* Symbol: _ZN13MtkV4L2Device20StreamOffFrameBufferEv */
/* Demangled: MtkV4L2Device::StreamOffFrameBuffer() */
int _ZN13MtkV4L2Device20StreamOffFrameBufferEv(void);

/* Symbol: _ZN10MtkOmxVdec13Debug_EnabledEv */
/* Demangled: MtkOmxVdec::Debug_Enabled() */
int _ZN10MtkOmxVdec13Debug_EnabledEv(void);

/* Symbol: _ZTV12OmxIonMVAMap */
/* Demangled: vtable for OmxIonMVAMap */
extern void* _ZTV12OmxIonMVAMap;

/* Symbol: _Z16sem_wait_timeoutP5sem_ti */
/* Demangled: sem_wait_timeout(sem_t*, int) */
int _Z16sem_wait_timeoutP5sem_ti(void);

/* Symbol: _ZN13OmxMVAManager25getOmxMVAFromHndlToVencBSEPvP25__VENC_DRV_PARAM_BS_BUF_T */
/* Demangled: OmxMVAManager::getOmxMVAFromHndlToVencBS(void*, __VENC_DRV_PARAM_BS_BUF_T*) */
int _ZN13OmxMVAManager25getOmxMVAFromHndlToVencBSEPvP25__VENC_DRV_PARAM_BS_BUF_T(void);

/* Symbol: _Z16MtkOmxVdecThreadPv */
/* Demangled: MtkOmxVdecThread(void*) */
int _Z16MtkOmxVdecThreadPv(void);

/* Symbol: _ZN10MtkOmxVdec36HandleGetVdecVideoSpecQuerySupportedEPv */
/* Demangled: MtkOmxVdec::HandleGetVdecVideoSpecQuerySupported(void*) */
int _ZN10MtkOmxVdec36HandleGetVdecVideoSpecQuerySupportedEPv(void);

/* Symbol: _ZN13MtkV4L2Device16queueFrameBufferEiiiib */
/* Demangled: MtkV4L2Device::queueFrameBuffer(int, int, int, int, bool) */
int _ZN13MtkV4L2Device16queueFrameBufferEiiiib(void);

/* Symbol: _ZN10MtkOmxVdec12GetParameterEPv13OMX_INDEXTYPES0_ */
/* Demangled: MtkOmxVdec::GetParameter(void*, OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVdec12GetParameterEPv13OMX_INDEXTYPES0_(void);

/* Symbol: _ZN13MtkV4L2Device16checkVideoFormatEP31__VDEC_DRV_QUERY_VIDEO_FORMAT_TS1_ */
/* Demangled: MtkV4L2Device::checkVideoFormat(__VDEC_DRV_QUERY_VIDEO_FORMAT_T*, __VDEC_DRV_QUERY_VIDEO_FORMAT_T*) */
int _ZN13MtkV4L2Device16checkVideoFormatEP31__VDEC_DRV_QUERY_VIDEO_FORMAT_TS1_(void);

/* Symbol: _ZN12OmxIonMVAMapC1EPKc */
/* Demangled: OmxIonMVAMap::OmxIonMVAMap(char const*) */
int _ZN12OmxIonMVAMapC1EPKc(void);

/* Symbol: _ZN13OmxMVAManagerC2EPKcS1_ */
/* Demangled: OmxMVAManager::OmxMVAManager(char const*, char const*) */
int _ZN13OmxMVAManagerC2EPKcS1_(void);

/* Symbol: _ZN10MtkOmxVdec13InitVpxParamsEv */
/* Demangled: MtkOmxVdec::InitVpxParams() */
int _ZN10MtkOmxVdec13InitVpxParamsEv(void);

/* Symbol: _ZN10MtkOmxVdec14InitXvidParamsEv */
/* Demangled: MtkOmxVdec::InitXvidParams() */
int _ZN10MtkOmxVdec14InitXvidParamsEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__1::__split_buffer<_MTK_OMX_CMD_QUEUE_ITEM**, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM**> >::~__split_buffer() */
int _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMNS_9allocatorIS3_EEED2Ev(void);

/* Symbol: _ZN10MtkOmxVdec15InitCommonParamEPc20OMX_VIDEO_CODINGTYPES0_S1_iiii */
/* Demangled: MtkOmxVdec::InitCommonParam(char*, OMX_VIDEO_CODINGTYPE, char*, OMX_VIDEO_CODINGTYPE, int, int, int, int) */
int _ZN10MtkOmxVdec15InitCommonParamEPc20OMX_VIDEO_CODINGTYPES0_S1_iiii(void);

/* Symbol: _Z14getTickCountMsv */
/* Demangled: getTickCountMs() */
int _Z14getTickCountMsv(void);

/* Symbol: _ZN10MtkOmxVdec17OpenInputDumpFileEv */
/* Demangled: MtkOmxVdec::OpenInputDumpFile() */
int _ZN10MtkOmxVdec17OpenInputDumpFileEv(void);

/* Symbol: _ZN10MtkOmxVdec18GetParameterSrtingE13OMX_INDEXTYPE */
/* Demangled: MtkOmxVdec::GetParameterSrting(OMX_INDEXTYPE) */
int _ZN10MtkOmxVdec18GetParameterSrtingE13OMX_INDEXTYPE(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN10MtkOmxVdec25SetColorFormat_MTKYUV_UFOEP28OMX_PARAM_PORTDEFINITIONTYPE */
/* Demangled: MtkOmxVdec::SetColorFormat_MTKYUV_UFO(OMX_PARAM_PORTDEFINITIONTYPE*) */
int _ZN10MtkOmxVdec25SetColorFormat_MTKYUV_UFOEP28OMX_PARAM_PORTDEFINITIONTYPE(void);

/* Symbol: _ZN13OmxMVAManagerC2Ev */
/* Demangled: OmxMVAManager::OmxMVAManager() */
int _ZN13OmxMVAManagerC2Ev(void);

/* Symbol: _ZN10MtkOmxVdec15dumpInputBufferEP20OMX_BUFFERHEADERTYPEPhj */
/* Demangled: MtkOmxVdec::dumpInputBuffer(OMX_BUFFERHEADERTYPE*, unsigned char*, unsigned int) */
int _ZN10MtkOmxVdec15dumpInputBufferEP20OMX_BUFFERHEADERTYPEPhj(void);

/* Symbol: _ZN10MtkOmxVdec17SetInputPortViLTEEv */
/* Demangled: MtkOmxVdec::SetInputPortViLTE() */
int _ZN10MtkOmxVdec17SetInputPortViLTEEv(void);

/* Symbol: _ZN10MtkOmxVdec20GetGeneralBufferSizeEv */
/* Demangled: MtkOmxVdec::GetGeneralBufferSize() */
int _ZN10MtkOmxVdec20GetGeneralBufferSizeEv(void);

/* Symbol: _ZN10MtkOmxVdec8IsInETBQEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::IsInETBQ(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec8IsInETBQEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN17V4L2QueueRecorderC1Ev */
/* Demangled: V4L2QueueRecorder::V4L2QueueRecorder() */
int _ZN17V4L2QueueRecorderC1Ev(void);

/* Symbol: _Z27MtkVdec_GetComponentVersionPvPcP15OMX_VERSIONTYPES2_PA128_h */
/* Demangled: MtkVdec_GetComponentVersion(void*, char*, OMX_VERSIONTYPE*, OMX_VERSIONTYPE*, unsigned char (*) [128]) */
int _Z27MtkVdec_GetComponentVersionPvPcP15OMX_VERSIONTYPES2_PA128_h(void);

/* Symbol: _ZN10MtkOmxVdec12SetCallbacksEPvP16OMX_CALLBACKTYPES0_ */
/* Demangled: MtkOmxVdec::SetCallbacks(void*, OMX_CALLBACKTYPE*, void*) */
int _ZN10MtkOmxVdec12SetCallbacksEPvP16OMX_CALLBACKTYPES0_(void);

/* Symbol: _ZN10MtkOmxVdec24CheckMLaterSetParametersE13OMX_INDEXTYPEPv */
/* Demangled: MtkOmxVdec::CheckMLaterSetParameters(OMX_INDEXTYPE, void*) */
int _ZN10MtkOmxVdec24CheckMLaterSetParametersE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN10MtkOmxVdec29GetIonHandleFromGraphicHandleEPjPi */
/* Demangled: MtkOmxVdec::GetIonHandleFromGraphicHandle(unsigned int*, int*) */
int _ZN10MtkOmxVdec29GetIonHandleFromGraphicHandleEPjPi(void);

/* Symbol: _ZN10MtkOmxVdec21SetupBufferInfoForAV1Ev */
/* Demangled: MtkOmxVdec::SetupBufferInfoForAV1() */
int _ZN10MtkOmxVdec21SetupBufferInfoForAV1Ev(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: OmxVdecLogValue */
/* Demangled: OmxVdecLogValue */
extern void* OmxVdecLogValue;

/* Symbol: _ZN10MtkOmxVdec22SetupBufferInfoForH264Ev */
/* Demangled: MtkOmxVdec::SetupBufferInfoForH264() */
int _ZN10MtkOmxVdec22SetupBufferInfoForH264Ev(void);

/* Symbol: _ZN10MtkOmxVdec22SetupBufferInfoForHEVCEv */
/* Demangled: MtkOmxVdec::SetupBufferInfoForHEVC() */
int _ZN10MtkOmxVdec22SetupBufferInfoForHEVCEv(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: _ZN23CmdThreadRequestHandler10getRequestEv */
/* Demangled: CmdThreadRequestHandler::getRequest() */
int _ZN23CmdThreadRequestHandler10getRequestEv(void);

/* Symbol: VP9ProfileMapTable */
/* Demangled: VP9ProfileMapTable */
extern void* VP9ProfileMapTable;

/* Symbol: _ZN10MtkOmxVdec20HandleFillBufferDoneEP20OMX_BUFFERHEADERTYPE8OMX_BOOLi */
/* Demangled: MtkOmxVdec::HandleFillBufferDone(OMX_BUFFERHEADERTYPE*, OMX_BOOL, int) */
int _ZN10MtkOmxVdec20HandleFillBufferDoneEP20OMX_BUFFERHEADERTYPE8OMX_BOOLi(void);

/* Symbol: _ZN10MtkOmxVdec22GetInputBufferCheckSumEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::GetInputBufferCheckSum(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec22GetInputBufferCheckSumEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVdec9initCodecEP20OMX_BUFFERHEADERTYPEP8OMX_BOOL */
/* Demangled: MtkOmxVdec::initCodec(OMX_BUFFERHEADERTYPE*, OMX_BOOL*) */
int _ZN10MtkOmxVdec9initCodecEP20OMX_BUFFERHEADERTYPEP8OMX_BOOL(void);

/* Symbol: _ZN13MtkV4L2Device14GetStateStringE19MtkV4L2Device_StatePc */
/* Demangled: MtkV4L2Device::GetStateString(MtkV4L2Device_State, char*) */
int _ZN13MtkV4L2Device14GetStateStringE19MtkV4L2Device_StatePc(void);

/* Symbol: _ZN13OmxMVAManager15setBoolPropertyEPKc8OMX_BOOL */
/* Demangled: OmxMVAManager::setBoolProperty(char const*, OMX_BOOL) */
int _ZN13OmxMVAManager15setBoolPropertyEPKc8OMX_BOOL(void);

/* Symbol: _Z18MtkVdec_FreeBufferPvjP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkVdec_FreeBuffer(void*, unsigned int, OMX_BUFFERHEADERTYPE*) */
int _Z18MtkVdec_FreeBufferPvjP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVdec12RemoveFrmBufEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::RemoveFrmBuf(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec12RemoveFrmBufEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN10MtkOmxVdec17InitHEVCSecParamsEv */
/* Demangled: MtkOmxVdec::InitHEVCSecParams() */
int _ZN10MtkOmxVdec17InitHEVCSecParamsEv(void);

/* Symbol: _ZN10MtkOmxVdecD2Ev */
/* Demangled: MtkOmxVdec::~MtkOmxVdec() */
int _ZN10MtkOmxVdecD2Ev(void);

/* Symbol: _ZN13MtkV4L2DeviceC2Ev */
/* Demangled: MtkV4L2Device::MtkV4L2Device() */
int _ZN13MtkV4L2DeviceC2Ev(void);

/* Symbol: _ZN10MtkOmxVdec12queueBuffersEPiP8OMX_BOOL */
/* Demangled: MtkOmxVdec::queueBuffers(int*, OMX_BOOL*) */
int _ZN10MtkOmxVdec12queueBuffersEPiP8OMX_BOOL(void);

/* Symbol: _ZN14MtkOmxCmdQueue6PutCmdEP23_MTK_OMX_CMD_QUEUE_ITEM */
/* Demangled: MtkOmxCmdQueue::PutCmd(_MTK_OMX_CMD_QUEUE_ITEM*) */
int _ZN14MtkOmxCmdQueue6PutCmdEP23_MTK_OMX_CMD_QUEUE_ITEM(void);

/* Symbol: _ZN10MtkOmxVdec14FlushInputPortEv */
/* Demangled: MtkOmxVdec::FlushInputPort() */
int _ZN10MtkOmxVdec14FlushInputPortEv(void);

/* Symbol: _ZN10MtkOmxVdec42HandleFillBufferDone_FillBufferToFrameworkEP20OMX_BUFFERHEADERTYPE8OMX_BOOLi */
/* Demangled: MtkOmxVdec::HandleFillBufferDone_FillBufferToFramework(OMX_BUFFERHEADERTYPE*, OMX_BOOL, int) */
int _ZN10MtkOmxVdec42HandleFillBufferDone_FillBufferToFrameworkEP20OMX_BUFFERHEADERTYPE8OMX_BOOLi(void);

/* Symbol: _ZN14MtkOmxCmdQueueD1Ev */
/* Demangled: MtkOmxCmdQueue::~MtkOmxCmdQueue() */
int _ZN14MtkOmxCmdQueueD1Ev(void);

/* Symbol: bOmxVdecLogEnable */
/* Demangled: bOmxVdecLogEnable */
extern void* bOmxVdecLogEnable;

/* Symbol: _ZN10MtkOmxVdec13InitAvcParamsEv */
/* Demangled: MtkOmxVdec::InitAvcParams() */
int _ZN10MtkOmxVdec13InitAvcParamsEv(void);

/* Symbol: _ZN10MtkOmxVdec16InitAv1SecParamsEv */
/* Demangled: MtkOmxVdec::InitAv1SecParams() */
int _ZN10MtkOmxVdec16InitAv1SecParamsEv(void);

/* Symbol: _ZN10MtkOmxVdec18CheckGetParamStateEv */
/* Demangled: MtkOmxVdec::CheckGetParamState() */
int _ZN10MtkOmxVdec18CheckGetParamStateEv(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZNKSt3__18functionIFvPvmEEclES1_m */
/* Demangled: std::__1::function<void (void*, unsigned long)>::operator()(void*, unsigned long) const */
int _ZNKSt3__18functionIFvPvmEEclES1_m(void);

/* Symbol: _ZN13OmxMVAManagerD0Ev */
/* Demangled: OmxMVAManager::~OmxMVAManager() */
int _ZN13OmxMVAManagerD0Ev(void);

/* Symbol: _ZN10MtkOmxVdec21SetupMetaSecureHandleEP20OMX_BUFFERHEADERTYPE */
/* Demangled: MtkOmxVdec::SetupMetaSecureHandle(OMX_BUFFERHEADERTYPE*) */
int _ZN10MtkOmxVdec21SetupMetaSecureHandleEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN13MtkV4L2Device5resetEv */
/* Demangled: MtkV4L2Device::reset() */
int _ZN13MtkV4L2Device5resetEv(void);

/* Symbol: _ZNK7android6VectorIP11OmxMVAEntryE12do_constructEPvj */
/* Demangled: android::Vector<OmxMVAEntry*>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIP11OmxMVAEntryE12do_constructEPvj(void);

/* Symbol: _ZN10MtkOmxVdec15MtkOmxVdecDebugEv */
/* Demangled: MtkOmxVdec::MtkOmxVdecDebug() */
int _ZN10MtkOmxVdec15MtkOmxVdecDebugEv(void);

/* Symbol: _ZN13MtkV4L2Device12updateCapFmtEv */
/* Demangled: MtkV4L2Device::updateCapFmt() */
int _ZN13MtkV4L2Device12updateCapFmtEv(void);

/* Symbol: _Z17MtkVdec_UseBufferPvPP20OMX_BUFFERHEADERTYPEjS_jPh */
/* Demangled: MtkVdec_UseBuffer(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
int _Z17MtkVdec_UseBufferPvPP20OMX_BUFFERHEADERTYPEjS_jPh(void);

/* Symbol: _ZN10MtkOmxVdec16HandleMarkBufferEjPv */
/* Demangled: MtkOmxVdec::HandleMarkBuffer(unsigned int, void*) */
int _ZN10MtkOmxVdec16HandleMarkBufferEjPv(void);

/* Symbol: _ZN10MtkOmxVdec44HandleFillBufferDone_FillBufferToPostProcessEP20OMX_BUFFERHEADERTYPE8OMX_BOOL */
/* Demangled: MtkOmxVdec::HandleFillBufferDone_FillBufferToPostProcess(OMX_BUFFERHEADERTYPE*, OMX_BOOL) */
int _ZN10MtkOmxVdec44HandleFillBufferDone_FillBufferToPostProcessEP20OMX_BUFFERHEADERTYPE8OMX_BOOL(void);

/* Symbol: _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMRNS_9allocatorIS3_EEE10push_frontERKS3_ */
/* Demangled: std::__1::__split_buffer<_MTK_OMX_CMD_QUEUE_ITEM**, std::__1::allocator<_MTK_OMX_CMD_QUEUE_ITEM**>&>::push_front(_MTK_OMX_CMD_QUEUE_ITEM** const&) */
int _ZNSt3__114__split_bufferIPP23_MTK_OMX_CMD_QUEUE_ITEMRNS_9allocatorIS3_EEE10push_frontERKS3_(void);

/* Symbol: _ZNSt3__17__sort3IRPFbxxEPxEEjT0_S5_S5_T_ */
/* Demangled: unsigned int std::__1::__sort3<bool (*&)(long long, long long), long long*>(long long*, long long*, long long*, bool (*&)(long long, long long)) */
int _ZNSt3__17__sort3IRPFbxxEPxEEjT0_S5_S5_T_(void);

/* Symbol: _ZN10MtkOmxVdec19SetColorFormat_YV12EP28OMX_PARAM_PORTDEFINITIONTYPE */
/* Demangled: MtkOmxVdec::SetColorFormat_YV12(OMX_PARAM_PORTDEFINITIONTYPE*) */
int _ZN10MtkOmxVdec19SetColorFormat_YV12EP28OMX_PARAM_PORTDEFINITIONTYPE(void);

/* Symbol: _ZN10MtkOmxVdec17Debug_MMDump_InitE17MTK_VDEC_CODEC_ID15v4l2_formatdesc27_VDEC_DRV_COLOR_PRIMARIES_EPNS_13_FrmBufStructE */
/* Demangled: MtkOmxVdec::Debug_MMDump_Init(MTK_VDEC_CODEC_ID, v4l2_formatdesc, _VDEC_DRV_COLOR_PRIMARIES_E, MtkOmxVdec::_FrmBufStruct*) */
int _ZN10MtkOmxVdec17Debug_MMDump_InitE17MTK_VDEC_CODEC_ID15v4l2_formatdesc27_VDEC_DRV_COLOR_PRIMARIES_EPNS_13_FrmBufStructE(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN10MtkOmxVdec19IsHDRSetByFrameworkEv */
/* Demangled: MtkOmxVdec::IsHDRSetByFramework() */
int _ZN10MtkOmxVdec19IsHDRSetByFrameworkEv(void);

/* Symbol: _Z16_calculate_crc32Phj */
/* Demangled: _calculate_crc32(unsigned char*, unsigned int) */
int _Z16_calculate_crc32Phj(void);

/* Symbol: _ZN10MtkOmxVdec19GetOutputPortFormatEPv */
/* Demangled: MtkOmxVdec::GetOutputPortFormat(void*) */
int _ZN10MtkOmxVdec19GetOutputPortFormatEPv(void);

/* Symbol: _ZN13OmxMVAManager16freeOmxMVAByHndlEPv */
/* Demangled: OmxMVAManager::freeOmxMVAByHndl(void*) */
int _ZN13OmxMVAManager16freeOmxMVAByHndlEPv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, long long> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIixEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIixEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, long long> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIixEEEE;

/* Symbol: _ZN12OmxIonMVAMapD0Ev */
/* Demangled: OmxIonMVAMap::~OmxIonMVAMap() */
int _ZN12OmxIonMVAMapD0Ev(void);

/* Symbol: _ZN10MtkOmxVdec26ReturnPendingOutputBuffersEv */
/* Demangled: MtkOmxVdec::ReturnPendingOutputBuffers() */
int _ZN10MtkOmxVdec26ReturnPendingOutputBuffersEv(void);

/* Symbol: _ZN10MtkOmxVdecC1Ev */
/* Demangled: MtkOmxVdec::MtkOmxVdec() */
int _ZN10MtkOmxVdecC1Ev(void);

/* Symbol: _Z26pthread_mutex_lock_timeoutP15pthread_mutex_ti */
/* Demangled: pthread_mutex_lock_timeout(pthread_mutex_t*, int) */
int _Z26pthread_mutex_lock_timeoutP15pthread_mutex_ti(void);

/* Symbol: _ZN14OmxIonMVAEntry13setToVBufInfoEP9_VBufInfo */
/* Demangled: OmxIonMVAEntry::setToVBufInfo(_VBufInfo*) */
int _ZN14OmxIonMVAEntry13setToVBufInfoEP9_VBufInfo(void);

/* Symbol: _ZN10MtkOmxVdec14CheckLogEnableEv */
/* Demangled: MtkOmxVdec::CheckLogEnable() */
int _ZN10MtkOmxVdec14CheckLogEnableEv(void);

/* Symbol: _ZN10MtkOmxVdec20SetFreeGeneralBufferEi */
/* Demangled: MtkOmxVdec::SetFreeGeneralBuffer(int) */
int _ZN10MtkOmxVdec20SetFreeGeneralBufferEi(void);

/* Symbol: _ZN10MtkOmxVdec12Debug_MMPathEv */
/* Demangled: MtkOmxVdec::Debug_MMPath() */
int _ZN10MtkOmxVdec12Debug_MMPathEv(void);

/* Symbol: _ZN10MtkOmxVdec32HandleEnableAndroidNativeBuffersEPv */
/* Demangled: MtkOmxVdec::HandleEnableAndroidNativeBuffers(void*) */
int _ZN10MtkOmxVdec32HandleEnableAndroidNativeBuffersEPv(void);

/* Symbol: _ZN10MtkOmxVdec29SetColorFormat_MTKYUV_UFO_AUOEP28OMX_PARAM_PORTDEFINITIONTYPE */
/* Demangled: MtkOmxVdec::SetColorFormat_MTKYUV_UFO_AUO(OMX_PARAM_PORTDEFINITIONTYPE*) */
int _ZN10MtkOmxVdec29SetColorFormat_MTKYUV_UFO_AUOEP28OMX_PARAM_PORTDEFINITIONTYPE(void);

/* Symbol: _ZN12OmxIonMVAMap8newEntryEiiPv */
/* Demangled: OmxIonMVAMap::newEntry(int, int, void*) */
int _ZN12OmxIonMVAMap8newEntryEiiPv(void);

/* Symbol: _ZN12OmxIonMVAMap9freeEntryEPv */
/* Demangled: OmxIonMVAMap::freeEntry(void*) */
int _ZN12OmxIonMVAMap9freeEntryEPv(void);

/* Symbol: _ZNK7android6VectorIP11OmxMVAEntryE10do_destroyEPvj */
/* Demangled: android::Vector<OmxMVAEntry*>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIP11OmxMVAEntryE10do_destroyEPvj(void);

/* Symbol: _ZN10MtkOmxVdec15ConfigIonBufferEii */
/* Demangled: MtkOmxVdec::ConfigIonBuffer(int, int) */
int _ZN10MtkOmxVdec15ConfigIonBufferEii(void);

/* Symbol: _ZN10MtkOmxVdec19DequeueOutputBufferEv */
/* Demangled: MtkOmxVdec::DequeueOutputBuffer() */
int _ZN10MtkOmxVdec19DequeueOutputBufferEv(void);

/* Symbol: _ZN13MtkV4L2Device12deinitializeEv */
/* Demangled: MtkV4L2Device::deinitialize() */
int _ZN13MtkV4L2Device12deinitializeEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN10MtkOmxVdec34SetColorFormat_MTKYUV_10BIT_V_JUMPEP28OMX_PARAM_PORTDEFINITIONTYPE */
/* Demangled: MtkOmxVdec::SetColorFormat_MTKYUV_10BIT_V_JUMP(OMX_PARAM_PORTDEFINITIONTYPE*) */
int _ZN10MtkOmxVdec34SetColorFormat_MTKYUV_10BIT_V_JUMPEP28OMX_PARAM_PORTDEFINITIONTYPE(void);

/* Symbol: _ZNK7android6VectorIP11v4l2_bufferE12do_constructEPvj */
/* Demangled: android::Vector<v4l2_buffer*>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIP11v4l2_bufferE12do_constructEPvj(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: _ZN12OmxIonMVAMapC2EPKc */
/* Demangled: OmxIonMVAMap::OmxIonMVAMap(char const*) */
int _ZN12OmxIonMVAMapC2EPKc(void);

/* Symbol: _Z25MtkVdec_ComponentRoleEnumPvPhj */
/* Demangled: MtkVdec_ComponentRoleEnum(void*, unsigned char*, unsigned int) */
int _Z25MtkVdec_ComponentRoleEnumPvPhj(void);

/* Symbol: _ZN10MtkOmxVdec20ValidateAndRemovePTSEx */
/* Demangled: MtkOmxVdec::ValidateAndRemovePTS(long long) */
int _ZN10MtkOmxVdec20ValidateAndRemovePTSEx(void);

/* Symbol: _ZN10MtkOmxVdec34DeQueueOutputColorConvertDstBufferEv */
/* Demangled: MtkOmxVdec::DeQueueOutputColorConvertDstBuffer() */
int _ZN10MtkOmxVdec34DeQueueOutputColorConvertDstBufferEv(void);

/* Symbol: _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, unsigned char*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPhEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN17V4L2QueueRecorder12eraseElementEi */
/* Demangled: V4L2QueueRecorder::eraseElement(int) */
int _ZN17V4L2QueueRecorder12eraseElementEi(void);

/* Symbol: _ZN10MtkOmxVdec16queueFrameBufferEv */
/* Demangled: MtkOmxVdec::queueFrameBuffer() */
int _ZN10MtkOmxVdec16queueFrameBufferEv(void);

/* Symbol: _ZN23CmdThreadRequestHandler10setRequestEj */
/* Demangled: CmdThreadRequestHandler::setRequest(unsigned int) */
int _ZN23CmdThreadRequestHandler10setRequestEj(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKOMXVDECEX_H */
