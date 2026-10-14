/*
 * Reverse-Engineered ABI Specification for: libstagefright_softomx.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libstagefright_softomx.so
 */

#ifndef BEGONIA_RE_LIBSTAGEFRIGHT_SOFTOMX_H
#define BEGONIA_RE_LIBSTAGEFRIGHT_SOFTOMX_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android22SimpleSoftOMXComponent20onPortFlushCompletedEj */
/* Demangled: android::SimpleSoftOMXComponent::onPortFlushCompleted(unsigned int) */
int _ZN7android22SimpleSoftOMXComponent20onPortFlushCompletedEj(void);

/* Symbol: _ZNK7android22SimpleSoftOMXComponent21isSetParameterAllowedE13OMX_INDEXTYPEPv */
/* Demangled: android::SimpleSoftOMXComponent::isSetParameterAllowed(OMX_INDEXTYPE, void*) const */
int _ZNK7android22SimpleSoftOMXComponent21isSetParameterAllowedE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE12do_constructEPvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE12do_constructEPvj(void);

/* Symbol: _ZTVN7android4ListIPNS_22SimpleSoftOMXComponent10BufferInfoEEE */
/* Demangled: vtable for android::List<android::SimpleSoftOMXComponent::BufferInfo*> */
extern void* _ZTVN7android4ListIPNS_22SimpleSoftOMXComponent10BufferInfoEEE;

/* Symbol: _ZN7android16SoftOMXComponent12setParameterE13OMX_INDEXTYPEPv */
/* Demangled: android::SoftOMXComponent::setParameter(OMX_INDEXTYPE, void*) */
int _ZN7android16SoftOMXComponent12setParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponentC2EPKcS2_20OMX_VIDEO_CODINGTYPEPKNS_17CodecProfileLevelEjiiPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE */
/* Demangled: android::SoftVideoDecoderOMXComponent::SoftVideoDecoderOMXComponent(char const*, char const*, OMX_VIDEO_CODINGTYPE, android::CodecProfileLevel const*, unsigned int, int, int, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
int _ZN7android28SoftVideoDecoderOMXComponentC2EPKcS2_20OMX_VIDEO_CODINGTYPEPKNS_17CodecProfileLevelEjiiPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponent12getPortQueueEj */
/* Demangled: android::SimpleSoftOMXComponent::getPortQueue(unsigned int) */
int _ZN7android22SimpleSoftOMXComponent12getPortQueueEj(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponent12onPortEnableEjb */
/* Demangled: android::SimpleSoftOMXComponent::onPortEnable(unsigned int, bool) */
int _ZN7android22SimpleSoftOMXComponent12onPortEnableEjb(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponent20internalGetParameterE13OMX_INDEXTYPEPv */
/* Demangled: android::SimpleSoftOMXComponent::internalGetParameter(OMX_INDEXTYPE, void*) */
int _ZN7android22SimpleSoftOMXComponent20internalGetParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN7android16SoftOMXComponent21FillThisBufferWrapperEPvP20OMX_BUFFERHEADERTYPE */
/* Demangled: android::SoftOMXComponent::FillThisBufferWrapper(void*, OMX_BUFFERHEADERTYPE*) */
int _ZN7android16SoftOMXComponent21FillThisBufferWrapperEPvP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN7android16SoftOMXComponent24GetExtensionIndexWrapperEPvPcP13OMX_INDEXTYPE */
/* Demangled: android::SoftOMXComponent::GetExtensionIndexWrapper(void*, char*, OMX_INDEXTYPE*) */
int _ZN7android16SoftOMXComponent24GetExtensionIndexWrapperEPvPcP13OMX_INDEXTYPE(void);

/* Symbol: _ZTVN7android16SoftOMXComponentE */
/* Demangled: vtable for android::SoftOMXComponent */
extern void* _ZTVN7android16SoftOMXComponentE;

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponent20internalGetParameterE13OMX_INDEXTYPEPv */
/* Demangled: android::SoftVideoDecoderOMXComponent::internalGetParameter(OMX_INDEXTYPE, void*) */
int _ZN7android28SoftVideoDecoderOMXComponent20internalGetParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponent9initPortsEjjjjjPKcj */
/* Demangled: android::SoftVideoDecoderOMXComponent::initPorts(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*, unsigned int) */
int _ZN7android28SoftVideoDecoderOMXComponent9initPortsEjjjjjPKcj(void);

/* Symbol: _ZTVN7android22SimpleSoftOMXComponentE */
/* Demangled: vtable for android::SimpleSoftOMXComponent */
extern void* _ZTVN7android22SimpleSoftOMXComponentE;

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponent28supportsDescribeColorAspectsEv */
/* Demangled: android::SoftVideoDecoderOMXComponent::supportsDescribeColorAspects() */
int _ZN7android28SoftVideoDecoderOMXComponent28supportsDescribeColorAspectsEv(void);

/* Symbol: _ZN7android28SoftVideoEncoderOMXComponent37ConvertYUV420SemiPlanarToYUV420PlanarEPKhPhii */
/* Demangled: android::SoftVideoEncoderOMXComponent::ConvertYUV420SemiPlanarToYUV420Planar(unsigned char const*, unsigned char*, int, int) */
int _ZN7android28SoftVideoEncoderOMXComponent37ConvertYUV420SemiPlanarToYUV420PlanarEPKhPhii(void);

/* Symbol: _ZN7android16SoftOMXComponent16UseBufferWrapperEPvPP20OMX_BUFFERHEADERTYPEjS1_jPh */
/* Demangled: android::SoftOMXComponent::UseBufferWrapper(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
int _ZN7android16SoftOMXComponent16UseBufferWrapperEPvPP20OMX_BUFFERHEADERTYPEjS1_jPh(void);

/* Symbol: _ZN7android16SoftOMXComponent19SetParameterWrapperEPv13OMX_INDEXTYPES1_ */
/* Demangled: android::SoftOMXComponent::SetParameterWrapper(void*, OMX_INDEXTYPE, void*) */
int _ZN7android16SoftOMXComponent19SetParameterWrapperEPv13OMX_INDEXTYPES1_(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponent13onQueueFilledEj */
/* Demangled: android::SimpleSoftOMXComponent::onQueueFilled(unsigned int) */
int _ZN7android22SimpleSoftOMXComponent13onQueueFilledEj(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponent9useBufferEPP20OMX_BUFFERHEADERTYPEjPvjPh */
/* Demangled: android::SimpleSoftOMXComponent::useBuffer(OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
int _ZN7android22SimpleSoftOMXComponent9useBufferEPP20OMX_BUFFERHEADERTYPEjPvjPh(void);

/* Symbol: _ZN7android16SoftOMXComponent10freeBufferEjP20OMX_BUFFERHEADERTYPE */
/* Demangled: android::SoftOMXComponent::freeBuffer(unsigned int, OMX_BUFFERHEADERTYPE*) */
int _ZN7android16SoftOMXComponent10freeBufferEjP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponent17internalSetConfigE13OMX_INDEXTYPEPvPb */
/* Demangled: android::SoftVideoDecoderOMXComponent::internalSetConfig(OMX_INDEXTYPE, void*, bool*) */
int _ZN7android28SoftVideoDecoderOMXComponent17internalSetConfigE13OMX_INDEXTYPEPvPb(void);

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponent7onResetEv */
/* Demangled: android::SoftVideoDecoderOMXComponent::onReset() */
int _ZN7android28SoftVideoDecoderOMXComponent7onResetEv(void);

/* Symbol: _ZN7android28SoftVideoEncoderOMXComponentC2EPKcS2_20OMX_VIDEO_CODINGTYPEPKNS_17CodecProfileLevelEjiiPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE */
/* Demangled: android::SoftVideoEncoderOMXComponent::SoftVideoEncoderOMXComponent(char const*, char const*, OMX_VIDEO_CODINGTYPE, android::CodecProfileLevel const*, unsigned int, int, int, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
int _ZN7android28SoftVideoEncoderOMXComponentC2EPKcS2_20OMX_VIDEO_CODINGTYPEPKNS_17CodecProfileLevelEjiiPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void);

/* Symbol: _ZNK7android16SoftOMXComponent4nameEv */
/* Demangled: android::SoftOMXComponent::name() const */
int _ZNK7android16SoftOMXComponent4nameEv(void);

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponentC1EPKcS2_20OMX_VIDEO_CODINGTYPEPKNS_17CodecProfileLevelEjiiPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE */
/* Demangled: android::SoftVideoDecoderOMXComponent::SoftVideoDecoderOMXComponent(char const*, char const*, OMX_VIDEO_CODINGTYPE, android::CodecProfileLevel const*, unsigned int, int, int, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
int _ZN7android28SoftVideoDecoderOMXComponentC1EPKcS2_20OMX_VIDEO_CODINGTYPEPKNS_17CodecProfileLevelEjiiPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void);

/* Symbol: _ZN7android28SoftVideoEncoderOMXComponent20ConvertRGB32ToPlanarEPhjjPKhjjjb */
/* Demangled: android::SoftVideoEncoderOMXComponent::ConvertRGB32ToPlanar(unsigned char*, unsigned int, unsigned int, unsigned char const*, unsigned int, unsigned int, unsigned int, bool) */
int _ZN7android28SoftVideoEncoderOMXComponent20ConvertRGB32ToPlanarEPhjjPKhjjjb(void);

/* Symbol: _ZN7android16SoftOMXComponent14allocateBufferEPP20OMX_BUFFERHEADERTYPEjPvj */
/* Demangled: android::SoftOMXComponent::allocateBuffer(OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
int _ZN7android16SoftOMXComponent14allocateBufferEPP20OMX_BUFFERHEADERTYPEjPvj(void);

/* Symbol: _ZN7android28SoftVideoEncoderOMXComponent20internalSetParameterE13OMX_INDEXTYPEPv */
/* Demangled: android::SoftVideoEncoderOMXComponent::internalSetParameter(OMX_INDEXTYPE, void*) */
int _ZN7android28SoftVideoEncoderOMXComponent20internalSetParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE12do_constructEPvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE12do_constructEPvj(void);

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponent24handlePortSettingsChangeEPbjj20OMX_COLOR_FORMATTYPENS0_16CropSettingsModeEb */
/* Demangled: android::SoftVideoDecoderOMXComponent::handlePortSettingsChange(bool*, unsigned int, unsigned int, OMX_COLOR_FORMATTYPE, android::SoftVideoDecoderOMXComponent::CropSettingsMode, bool) */
int _ZN7android28SoftVideoDecoderOMXComponent24handlePortSettingsChangeEPbjj20OMX_COLOR_FORMATTYPENS0_16CropSettingsModeEb(void);

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponent28supportDescribeHdrStaticInfoEv */
/* Demangled: android::SoftVideoDecoderOMXComponent::supportDescribeHdrStaticInfo() */
int _ZN7android28SoftVideoDecoderOMXComponent28supportDescribeHdrStaticInfoEv(void);

/* Symbol: _ZNK7android28SoftVideoEncoderOMXComponent20extractGraphicBufferEPhjPKhjjj */
/* Demangled: android::SoftVideoEncoderOMXComponent::extractGraphicBuffer(unsigned char*, unsigned int, unsigned char const*, unsigned int, unsigned int, unsigned int) const */
int _ZNK7android28SoftVideoEncoderOMXComponent20extractGraphicBufferEPhjPKhjjj(void);

/* Symbol: _ZN7android16SoftOMXComponent12getParameterE13OMX_INDEXTYPEPv */
/* Demangled: android::SoftOMXComponent::getParameter(OMX_INDEXTYPE, void*) */
int _ZN7android16SoftOMXComponent12getParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponent23updateFinalColorAspectsERKNS_12ColorAspectsES3_ */
/* Demangled: android::SoftVideoDecoderOMXComponent::updateFinalColorAspects(android::ColorAspects const&, android::ColorAspects const&) */
int _ZN7android28SoftVideoDecoderOMXComponent23updateFinalColorAspectsERKNS_12ColorAspectsES3_(void);

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponent9getConfigE13OMX_INDEXTYPEPv */
/* Demangled: android::SoftVideoDecoderOMXComponent::getConfig(OMX_INDEXTYPE, void*) */
int _ZN7android28SoftVideoDecoderOMXComponent9getConfigE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponent10freeBufferEjP20OMX_BUFFERHEADERTYPE */
/* Demangled: android::SimpleSoftOMXComponent::freeBuffer(unsigned int, OMX_BUFFERHEADERTYPE*) */
int _ZN7android22SimpleSoftOMXComponent10freeBufferEjP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZNK7android16SoftOMXComponent9initCheckEv */
/* Demangled: android::SoftOMXComponent::initCheck() const */
int _ZNK7android16SoftOMXComponent9initCheckEv(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE10do_destroyEPvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE10do_destroyEPvj(void);

/* Symbol: _ZN7android28SoftVideoEncoderOMXComponent19validateInputBufferEPK20OMX_BUFFERHEADERTYPE */
/* Demangled: android::SoftVideoEncoderOMXComponent::validateInputBuffer(OMX_BUFFERHEADERTYPE const*) */
int _ZN7android28SoftVideoEncoderOMXComponent19validateInputBufferEPK20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN7android28SoftVideoEncoderOMXComponentC1EPKcS2_20OMX_VIDEO_CODINGTYPEPKNS_17CodecProfileLevelEjiiPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE */
/* Demangled: android::SoftVideoEncoderOMXComponent::SoftVideoEncoderOMXComponent(char const*, char const*, OMX_VIDEO_CODINGTYPE, android::CodecProfileLevel const*, unsigned int, int, int, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
int _ZN7android28SoftVideoEncoderOMXComponentC1EPKcS2_20OMX_VIDEO_CODINGTYPEPKNS_17CodecProfileLevelEjiiPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZTVN7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEEE */
/* Demangled: vtable for android::Vector<android::SimpleSoftOMXComponent::PortInfo> */
extern void* _ZTVN7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEEE;

/* Symbol: _ZN7android16SoftOMXComponent15GetStateWrapperEPvP13OMX_STATETYPE */
/* Demangled: android::SoftOMXComponent::GetStateWrapper(void*, OMX_STATETYPE*) */
int _ZN7android16SoftOMXComponent15GetStateWrapperEPvP13OMX_STATETYPE(void);

/* Symbol: _ZN7android28SoftVideoEncoderOMXComponent20internalGetParameterE13OMX_INDEXTYPEPv */
/* Demangled: android::SoftVideoEncoderOMXComponent::internalGetParameter(OMX_INDEXTYPE, void*) */
int _ZN7android28SoftVideoEncoderOMXComponent20internalGetParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvj(void);

/* Symbol: _ZN7android16SoftOMXComponentD2Ev */
/* Demangled: android::SoftOMXComponent::~SoftOMXComponent() */
int _ZN7android16SoftOMXComponentD2Ev(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponent11sendCommandE15OMX_COMMANDTYPEjPv */
/* Demangled: android::SimpleSoftOMXComponent::sendCommand(OMX_COMMANDTYPE, unsigned int, void*) */
int _ZN7android22SimpleSoftOMXComponent11sendCommandE15OMX_COMMANDTYPEjPv(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponent7onResetEv */
/* Demangled: android::SimpleSoftOMXComponent::onReset() */
int _ZN7android22SimpleSoftOMXComponent7onResetEv(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponent9setConfigE13OMX_INDEXTYPEPv */
/* Demangled: android::SimpleSoftOMXComponent::setConfig(OMX_INDEXTYPE, void*) */
int _ZN7android22SimpleSoftOMXComponent9setConfigE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN7android16SoftOMXComponentD0Ev */
/* Demangled: android::SoftOMXComponent::~SoftOMXComponent() */
int _ZN7android16SoftOMXComponentD0Ev(void);

/* Symbol: _ZN7android16SoftOMXComponentD1Ev */
/* Demangled: android::SoftOMXComponent::~SoftOMXComponent() */
int _ZN7android16SoftOMXComponentD1Ev(void);

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponent23dequeueInputFrameConfigEv */
/* Demangled: android::SoftVideoDecoderOMXComponent::dequeueInputFrameConfig() */
int _ZN7android28SoftVideoDecoderOMXComponent23dequeueInputFrameConfigEv(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponent15emptyThisBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: android::SimpleSoftOMXComponent::emptyThisBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN7android22SimpleSoftOMXComponent15emptyThisBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android16SoftOMXComponent8getStateEP13OMX_STATETYPE */
/* Demangled: android::SoftOMXComponent::getState(OMX_STATETYPE*) */
int _ZN7android16SoftOMXComponent8getStateEP13OMX_STATETYPE(void);

/* Symbol: _ZN7android16SoftOMXComponent17getExtensionIndexEPKcP13OMX_INDEXTYPE */
/* Demangled: android::SoftOMXComponent::getExtensionIndex(char const*, OMX_INDEXTYPE*) */
int _ZN7android16SoftOMXComponent17getExtensionIndexEPKcP13OMX_INDEXTYPE(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponent16checkTransitionsEv */
/* Demangled: android::SimpleSoftOMXComponent::checkTransitions() */
int _ZN7android22SimpleSoftOMXComponent16checkTransitionsEv(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponent21onPortEnableCompletedEjb */
/* Demangled: android::SimpleSoftOMXComponent::onPortEnableCompleted(unsigned int, bool) */
int _ZN7android22SimpleSoftOMXComponent21onPortEnableCompletedEjb(void);

/* Symbol: _ZTVN7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEEE */
/* Demangled: vtable for android::Vector<android::SimpleSoftOMXComponent::BufferInfo> */
extern void* _ZTVN7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEEE;

/* Symbol: _ZN7android16SoftOMXComponent9useBufferEPP20OMX_BUFFERHEADERTYPEjPvjPh */
/* Demangled: android::SoftOMXComponent::useBuffer(OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
int _ZN7android16SoftOMXComponent9useBufferEPP20OMX_BUFFERHEADERTYPEjPvjPh(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponent11onPortFlushEjb */
/* Demangled: android::SimpleSoftOMXComponent::onPortFlush(unsigned int, bool) */
int _ZN7android22SimpleSoftOMXComponent11onPortFlushEjb(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponent17internalSetConfigE13OMX_INDEXTYPEPvPb */
/* Demangled: android::SimpleSoftOMXComponent::internalSetConfig(OMX_INDEXTYPE, void*, bool*) */
int _ZN7android22SimpleSoftOMXComponent17internalSetConfigE13OMX_INDEXTYPEPvPb(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvj(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE8do_splatEPvPKvj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE;

/* Symbol: _ZTVN7android17AHandlerReflectorINS_22SimpleSoftOMXComponentEEE */
/* Demangled: vtable for android::AHandlerReflector<android::SimpleSoftOMXComponent> */
extern void* _ZTVN7android17AHandlerReflectorINS_22SimpleSoftOMXComponentEEE;

/* Symbol: _ZN7android16SoftOMXComponent19GetParameterWrapperEPv13OMX_INDEXTYPES1_ */
/* Demangled: android::SoftOMXComponent::GetParameterWrapper(void*, OMX_INDEXTYPE, void*) */
int _ZN7android16SoftOMXComponent19GetParameterWrapperEPv13OMX_INDEXTYPES1_(void);

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponent21onPortEnableCompletedEjb */
/* Demangled: android::SoftVideoDecoderOMXComponent::onPortEnableCompleted(unsigned int, bool) */
int _ZN7android28SoftVideoDecoderOMXComponent21onPortEnableCompletedEjb(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponent13onChangeStateE13OMX_STATETYPE */
/* Demangled: android::SimpleSoftOMXComponent::onChangeState(OMX_STATETYPE) */
int _ZN7android22SimpleSoftOMXComponent13onChangeStateE13OMX_STATETYPE(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android16SoftOMXComponent12setLibHandleEPv */
/* Demangled: android::SoftOMXComponent::setLibHandle(void*) */
int _ZN7android16SoftOMXComponent12setLibHandleEPv(void);

/* Symbol: _ZN7android16SoftOMXComponent16SetConfigWrapperEPv13OMX_INDEXTYPES1_ */
/* Demangled: android::SoftOMXComponent::SetConfigWrapper(void*, OMX_INDEXTYPE, void*) */
int _ZN7android16SoftOMXComponent16SetConfigWrapperEPv13OMX_INDEXTYPES1_(void);

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponent24getColorAspectPreferenceEv */
/* Demangled: android::SoftVideoDecoderOMXComponent::getColorAspectPreference() */
int _ZN7android28SoftVideoDecoderOMXComponent24getColorAspectPreferenceEv(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android28SoftVideoEncoderOMXComponent16updatePortParamsEv */
/* Demangled: android::SoftVideoEncoderOMXComponent::updatePortParams() */
int _ZN7android28SoftVideoEncoderOMXComponent16updatePortParamsEv(void);

/* Symbol: _ZN7android16SoftOMXComponent20notifyFillBufferDoneEP20OMX_BUFFERHEADERTYPE */
/* Demangled: android::SoftOMXComponent::notifyFillBufferDone(OMX_BUFFERHEADERTYPE*) */
int _ZN7android16SoftOMXComponent20notifyFillBufferDoneEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponent12setParameterE13OMX_INDEXTYPEPv */
/* Demangled: android::SimpleSoftOMXComponent::setParameter(OMX_INDEXTYPE, void*) */
int _ZN7android22SimpleSoftOMXComponent12setParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponent14fillThisBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: android::SimpleSoftOMXComponent::fillThisBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN7android22SimpleSoftOMXComponent14fillThisBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZTVN7android8AHandlerE */
/* Demangled: vtable for android::AHandler */
extern void* _ZTVN7android8AHandlerE;

/* Symbol: _ZN7android16SoftOMXComponent14fillThisBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: android::SoftOMXComponent::fillThisBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN7android16SoftOMXComponent14fillThisBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponent21updatePortDefinitionsEbb */
/* Demangled: android::SoftVideoDecoderOMXComponent::updatePortDefinitions(bool, bool) */
int _ZN7android28SoftVideoDecoderOMXComponent21updatePortDefinitionsEbb(void);

/* Symbol: _ZTVN7android28SoftVideoEncoderOMXComponentE */
/* Demangled: vtable for android::SoftVideoEncoderOMXComponent */
extern void* _ZTVN7android28SoftVideoEncoderOMXComponentE;

/* Symbol: _ZN7android22SimpleSoftOMXComponent8getStateEP13OMX_STATETYPE */
/* Demangled: android::SimpleSoftOMXComponent::getState(OMX_STATETYPE*) */
int _ZN7android22SimpleSoftOMXComponent8getStateEP13OMX_STATETYPE(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android16SoftOMXComponent16GetConfigWrapperEPv13OMX_INDEXTYPES1_ */
/* Demangled: android::SoftOMXComponent::GetConfigWrapper(void*, OMX_INDEXTYPE, void*) */
int _ZN7android16SoftOMXComponent16GetConfigWrapperEPv13OMX_INDEXTYPES1_(void);

/* Symbol: _ZN7android16SoftOMXComponent22EmptyThisBufferWrapperEPvP20OMX_BUFFERHEADERTYPE */
/* Demangled: android::SoftOMXComponent::EmptyThisBufferWrapper(void*, OMX_BUFFERHEADERTYPE*) */
int _ZN7android16SoftOMXComponent22EmptyThisBufferWrapperEPvP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN7android28SoftVideoEncoderOMXComponent21internalSetPortParamsEPK28OMX_PARAM_PORTDEFINITIONTYPE */
/* Demangled: android::SoftVideoEncoderOMXComponent::internalSetPortParams(OMX_PARAM_PORTDEFINITIONTYPE const*) */
int _ZN7android28SoftVideoEncoderOMXComponent21internalSetPortParamsEPK28OMX_PARAM_PORTDEFINITIONTYPE(void);

/* Symbol: _ZN7android16SoftOMXComponent21notifyEmptyBufferDoneEP20OMX_BUFFERHEADERTYPE */
/* Demangled: android::SoftOMXComponent::notifyEmptyBufferDone(OMX_BUFFERHEADERTYPE*) */
int _ZN7android16SoftOMXComponent21notifyEmptyBufferDoneEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponent14allocateBufferEPP20OMX_BUFFERHEADERTYPEjPvj */
/* Demangled: android::SimpleSoftOMXComponent::allocateBuffer(OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
int _ZN7android22SimpleSoftOMXComponent14allocateBufferEPP20OMX_BUFFERHEADERTYPEjPvj(void);

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponent27copyYV12FrameToOutputBufferEPhPKhS3_S3_jjj */
/* Demangled: android::SoftVideoDecoderOMXComponent::copyYV12FrameToOutputBuffer(unsigned char*, unsigned char const*, unsigned char const*, unsigned char const*, unsigned int, unsigned int, unsigned int) */
int _ZN7android28SoftVideoDecoderOMXComponent27copyYV12FrameToOutputBufferEPhPKhS3_S3_jjj(void);

/* Symbol: _ZN7android28SoftVideoEncoderOMXComponent22ConvertFlexYUVToPlanarEPhjjP13android_ycbcrii */
/* Demangled: android::SoftVideoEncoderOMXComponent::ConvertFlexYUVToPlanar(unsigned char*, unsigned int, unsigned int, android_ycbcr*, int, int) */
int _ZN7android28SoftVideoEncoderOMXComponent22ConvertFlexYUVToPlanarEPhjjP13android_ycbcrii(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponent12editPortInfoEj */
/* Demangled: android::SimpleSoftOMXComponent::editPortInfo(unsigned int) */
int _ZN7android22SimpleSoftOMXComponent12editPortInfoEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android16SoftOMXComponent11sendCommandE15OMX_COMMANDTYPEjPv */
/* Demangled: android::SoftOMXComponent::sendCommand(OMX_COMMANDTYPE, unsigned int, void*) */
int _ZN7android16SoftOMXComponent11sendCommandE15OMX_COMMANDTYPEjPv(void);

/* Symbol: _ZN7android16SoftOMXComponent21AllocateBufferWrapperEPvPP20OMX_BUFFERHEADERTYPEjS1_j */
/* Demangled: android::SoftOMXComponent::AllocateBufferWrapper(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
int _ZN7android16SoftOMXComponent21AllocateBufferWrapperEPvPP20OMX_BUFFERHEADERTYPEjS1_j(void);

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponent17outputBufferWidthEv */
/* Demangled: android::SoftVideoDecoderOMXComponent::outputBufferWidth() */
int _ZN7android28SoftVideoDecoderOMXComponent17outputBufferWidthEv(void);

/* Symbol: _ZN7android28SoftVideoEncoderOMXComponent17getExtensionIndexEPKcP13OMX_INDEXTYPE */
/* Demangled: android::SoftVideoEncoderOMXComponent::getExtensionIndex(char const*, OMX_INDEXTYPE*) */
int _ZN7android28SoftVideoEncoderOMXComponent17getExtensionIndexEPKcP13OMX_INDEXTYPE(void);

/* Symbol: _ZN7android16SoftOMXComponent17FreeBufferWrapperEPvjP20OMX_BUFFERHEADERTYPE */
/* Demangled: android::SoftOMXComponent::FreeBufferWrapper(void*, unsigned int, OMX_BUFFERHEADERTYPE*) */
int _ZN7android16SoftOMXComponent17FreeBufferWrapperEPvjP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN7android16SoftOMXComponent9getConfigE13OMX_INDEXTYPEPv */
/* Demangled: android::SoftOMXComponent::getConfig(OMX_INDEXTYPE, void*) */
int _ZN7android16SoftOMXComponent9getConfigE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponentC1EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE */
/* Demangled: android::SimpleSoftOMXComponent::SimpleSoftOMXComponent(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
int _ZN7android22SimpleSoftOMXComponentC1EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvj(void);

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponent17getExtensionIndexEPKcP13OMX_INDEXTYPE */
/* Demangled: android::SoftVideoDecoderOMXComponent::getExtensionIndex(char const*, OMX_INDEXTYPE*) */
int _ZN7android28SoftVideoDecoderOMXComponent17getExtensionIndexEPKcP13OMX_INDEXTYPE(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponent13onSendCommandE15OMX_COMMANDTYPEj */
/* Demangled: android::SimpleSoftOMXComponent::onSendCommand(OMX_COMMANDTYPE, unsigned int) */
int _ZN7android22SimpleSoftOMXComponent13onSendCommandE15OMX_COMMANDTYPEj(void);

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponent22queueOutputFrameConfigERKNS_2spINS_7ABufferEEE */
/* Demangled: android::SoftVideoDecoderOMXComponent::queueOutputFrameConfig(android::sp<android::ABuffer> const&) */
int _ZN7android28SoftVideoDecoderOMXComponent22queueOutputFrameConfigERKNS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponent9initPortsEjjjPKcj */
/* Demangled: android::SoftVideoDecoderOMXComponent::initPorts(unsigned int, unsigned int, unsigned int, char const*, unsigned int) */
int _ZN7android28SoftVideoDecoderOMXComponent9initPortsEjjjPKcj(void);

/* Symbol: _ZN7android16SoftOMXComponent6notifyE13OMX_EVENTTYPEjjPv */
/* Demangled: android::SoftOMXComponent::notify(OMX_EVENTTYPE, unsigned int, unsigned int, void*) */
int _ZN7android16SoftOMXComponent6notifyE13OMX_EVENTTYPEjjPv(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponent12getParameterE13OMX_INDEXTYPEPv */
/* Demangled: android::SimpleSoftOMXComponent::getParameter(OMX_INDEXTYPE, void*) */
int _ZN7android22SimpleSoftOMXComponent12getParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponent21prepareForDestructionEv */
/* Demangled: android::SimpleSoftOMXComponent::prepareForDestruction() */
int _ZN7android22SimpleSoftOMXComponent21prepareForDestructionEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvj(void);

/* Symbol: _ZTVN7android28SoftVideoDecoderOMXComponentE */
/* Demangled: vtable for android::SoftVideoDecoderOMXComponent */
extern void* _ZTVN7android28SoftVideoDecoderOMXComponentE;

/* Symbol: _ZN7android22SimpleSoftOMXComponentC2EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE */
/* Demangled: android::SimpleSoftOMXComponent::SimpleSoftOMXComponent(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
int _ZN7android22SimpleSoftOMXComponentC2EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void);

/* Symbol: _ZN7android16SoftOMXComponent15emptyThisBufferEP20OMX_BUFFERHEADERTYPE */
/* Demangled: android::SoftOMXComponent::emptyThisBuffer(OMX_BUFFERHEADERTYPE*) */
int _ZN7android16SoftOMXComponent15emptyThisBufferEP20OMX_BUFFERHEADERTYPE(void);

/* Symbol: _ZN7android16SoftOMXComponentC1EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE */
/* Demangled: android::SoftOMXComponent::SoftOMXComponent(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
int _ZN7android16SoftOMXComponentC1EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void);

/* Symbol: _ZNK7android16SoftOMXComponent9libHandleEv */
/* Demangled: android::SoftOMXComponent::libHandle() const */
int _ZNK7android16SoftOMXComponent9libHandleEv(void);

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponent28supportDescribeHdr10PlusInfoEv */
/* Demangled: android::SoftVideoDecoderOMXComponent::supportDescribeHdr10PlusInfo() */
int _ZN7android28SoftVideoDecoderOMXComponent28supportDescribeHdr10PlusInfoEv(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE7do_copyEPvPKvj(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponent16dumpColorAspectsERKNS_12ColorAspectsE */
/* Demangled: android::SoftVideoDecoderOMXComponent::dumpColorAspects(android::ColorAspects const&) */
int _ZN7android28SoftVideoDecoderOMXComponent16dumpColorAspectsERKNS_12ColorAspectsE(void);

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponent18colorAspectsDifferERKNS_12ColorAspectsES3_ */
/* Demangled: android::SoftVideoDecoderOMXComponent::colorAspectsDiffer(android::ColorAspects const&, android::ColorAspects const&) */
int _ZN7android28SoftVideoDecoderOMXComponent18colorAspectsDifferERKNS_12ColorAspectsES3_(void);

/* Symbol: _ZTVN7android4ListINS_2spINS_7ABufferEEEEE */
/* Demangled: vtable for android::List<android::sp<android::ABuffer> > */
extern void* _ZTVN7android4ListINS_2spINS_7ABufferEEEEE;

/* Symbol: _ZN7android22SimpleSoftOMXComponent17onMessageReceivedERKNS_2spINS_8AMessageEEE */
/* Demangled: android::SimpleSoftOMXComponent::onMessageReceived(android::sp<android::AMessage> const&) */
int _ZN7android22SimpleSoftOMXComponent17onMessageReceivedERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE10do_destroyEPvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE10do_destroyEPvj(void);

/* Symbol: _ZN7android16SoftOMXComponent9setConfigE13OMX_INDEXTYPEPv */
/* Demangled: android::SoftOMXComponent::setConfig(OMX_INDEXTYPE, void*) */
int _ZN7android16SoftOMXComponent9setConfigE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN7android16SoftOMXComponentC2EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE */
/* Demangled: android::SoftOMXComponent::SoftOMXComponent(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
int _ZN7android16SoftOMXComponentC2EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponent20internalSetParameterE13OMX_INDEXTYPEPv */
/* Demangled: android::SimpleSoftOMXComponent::internalSetParameter(OMX_INDEXTYPE, void*) */
int _ZN7android22SimpleSoftOMXComponent20internalSetParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_(void);

/* Symbol: _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponent18outputBufferHeightEv */
/* Demangled: android::SoftVideoDecoderOMXComponent::outputBufferHeight() */
int _ZN7android28SoftVideoDecoderOMXComponent18outputBufferHeightEv(void);

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponent20internalSetParameterE13OMX_INDEXTYPEPv */
/* Demangled: android::SoftVideoDecoderOMXComponent::internalSetParameter(OMX_INDEXTYPE, void*) */
int _ZN7android28SoftVideoDecoderOMXComponent20internalSetParameterE13OMX_INDEXTYPEPv(void);

/* Symbol: _ZN7android28SoftVideoEncoderOMXComponent9initPortsEjjjPKcj */
/* Demangled: android::SoftVideoEncoderOMXComponent::initPorts(unsigned int, unsigned int, unsigned int, char const*, unsigned int) */
int _ZN7android28SoftVideoEncoderOMXComponent9initPortsEjjjPKcj(void);

/* Symbol: _ZN7android22SimpleSoftOMXComponent7addPortERK28OMX_PARAM_PORTDEFINITIONTYPE */
/* Demangled: android::SimpleSoftOMXComponent::addPort(OMX_PARAM_PORTDEFINITIONTYPE const&) */
int _ZN7android22SimpleSoftOMXComponent7addPortERK28OMX_PARAM_PORTDEFINITIONTYPE(void);

/* Symbol: _ZN7android28SoftVideoDecoderOMXComponent24handleColorAspectsChangeEv */
/* Demangled: android::SoftVideoDecoderOMXComponent::handleColorAspectsChange() */
int _ZN7android28SoftVideoDecoderOMXComponent24handleColorAspectsChangeEv(void);

/* Symbol: _ZN7android16SoftOMXComponent18SendCommandWrapperEPv15OMX_COMMANDTYPEjS1_ */
/* Demangled: android::SoftOMXComponent::SendCommandWrapper(void*, OMX_COMMANDTYPE, unsigned int, void*) */
int _ZN7android16SoftOMXComponent18SendCommandWrapperEPv15OMX_COMMANDTYPEjS1_(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBSTAGEFRIGHT_SOFTOMX_H */
