/*
 * Reverse-Engineered Source for: libstagefright_softomx.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libstagefright_softomx"

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
#include "libstagefright_softomx.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::SimpleSoftOMXComponent::onPortFlushCompleted(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent20onPortFlushCompletedEj(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent20onPortFlushCompletedEj() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::isSetParameterAllowed(OMX_INDEXTYPE, void*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android22SimpleSoftOMXComponent21isSetParameterAllowedE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZNK7android22SimpleSoftOMXComponent21isSetParameterAllowedE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: vtable for android::List<android::SimpleSoftOMXComponent::BufferInfo*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListIPNS_22SimpleSoftOMXComponent10BufferInfoEEE = NULL;

/* Demangled: android::SoftOMXComponent::setParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent12setParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN7android16SoftOMXComponent12setParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: android::SoftVideoDecoderOMXComponent::SoftVideoDecoderOMXComponent(char const*, char const*, OMX_VIDEO_CODINGTYPE, android::CodecProfileLevel const*, unsigned int, int, int, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponentC2EPKcS2_20OMX_VIDEO_CODINGTYPEPKNS_17CodecProfileLevelEjiiPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponentC2EPKcS2_20OMX_VIDEO_CODINGTYPEPKNS_17CodecProfileLevelEjiiPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::getPortQueue(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent12getPortQueueEj(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent12getPortQueueEj() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::onPortEnable(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent12onPortEnableEjb(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent12onPortEnableEjb() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::internalGetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent20internalGetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent20internalGetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::FillThisBufferWrapper(void*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent21FillThisBufferWrapperEPvP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN7android16SoftOMXComponent21FillThisBufferWrapperEPvP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::GetExtensionIndexWrapper(void*, char*, OMX_INDEXTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent24GetExtensionIndexWrapperEPvPcP13OMX_INDEXTYPE(void) {
    ALOGD("_ZN7android16SoftOMXComponent24GetExtensionIndexWrapperEPvPcP13OMX_INDEXTYPE() called");
    return 0;
}

/* Exported Object: vtable for android::SoftOMXComponent */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android16SoftOMXComponentE = NULL;

/* Demangled: android::SoftVideoDecoderOMXComponent::internalGetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponent20internalGetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponent20internalGetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: android::SoftVideoDecoderOMXComponent::initPorts(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponent9initPortsEjjjjjPKcj(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponent9initPortsEjjjjjPKcj() called");
    return 0;
}

/* Exported Object: vtable for android::SimpleSoftOMXComponent */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android22SimpleSoftOMXComponentE = NULL;

/* Demangled: android::SoftVideoDecoderOMXComponent::supportsDescribeColorAspects() */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponent28supportsDescribeColorAspectsEv(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponent28supportsDescribeColorAspectsEv() called");
    return 0;
}

/* Demangled: android::SoftVideoEncoderOMXComponent::ConvertYUV420SemiPlanarToYUV420Planar(unsigned char const*, unsigned char*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoEncoderOMXComponent37ConvertYUV420SemiPlanarToYUV420PlanarEPKhPhii(void) {
    ALOGD("_ZN7android28SoftVideoEncoderOMXComponent37ConvertYUV420SemiPlanarToYUV420PlanarEPKhPhii() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::UseBufferWrapper(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent16UseBufferWrapperEPvPP20OMX_BUFFERHEADERTYPEjS1_jPh(void) {
    ALOGD("_ZN7android16SoftOMXComponent16UseBufferWrapperEPvPP20OMX_BUFFERHEADERTYPEjS1_jPh() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::SetParameterWrapper(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent19SetParameterWrapperEPv13OMX_INDEXTYPES1_(void) {
    ALOGD("_ZN7android16SoftOMXComponent19SetParameterWrapperEPv13OMX_INDEXTYPES1_() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::onQueueFilled(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent13onQueueFilledEj(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent13onQueueFilledEj() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::useBuffer(OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent9useBufferEPP20OMX_BUFFERHEADERTYPEjPvjPh(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent9useBufferEPP20OMX_BUFFERHEADERTYPEjPvjPh() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::freeBuffer(unsigned int, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent10freeBufferEjP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN7android16SoftOMXComponent10freeBufferEjP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: android::SoftVideoDecoderOMXComponent::internalSetConfig(OMX_INDEXTYPE, void*, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponent17internalSetConfigE13OMX_INDEXTYPEPvPb(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponent17internalSetConfigE13OMX_INDEXTYPEPvPb() called");
    return 0;
}

/* Demangled: android::SoftVideoDecoderOMXComponent::onReset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponent7onResetEv(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponent7onResetEv() called");
    return 0;
}

/* Demangled: android::SoftVideoEncoderOMXComponent::SoftVideoEncoderOMXComponent(char const*, char const*, OMX_VIDEO_CODINGTYPE, android::CodecProfileLevel const*, unsigned int, int, int, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoEncoderOMXComponentC2EPKcS2_20OMX_VIDEO_CODINGTYPEPKNS_17CodecProfileLevelEjiiPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_ZN7android28SoftVideoEncoderOMXComponentC2EPKcS2_20OMX_VIDEO_CODINGTYPEPKNS_17CodecProfileLevelEjiiPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::name() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16SoftOMXComponent4nameEv(void) {
    ALOGD("_ZNK7android16SoftOMXComponent4nameEv() called");
    return 0;
}

/* Demangled: android::SoftVideoDecoderOMXComponent::SoftVideoDecoderOMXComponent(char const*, char const*, OMX_VIDEO_CODINGTYPE, android::CodecProfileLevel const*, unsigned int, int, int, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponentC1EPKcS2_20OMX_VIDEO_CODINGTYPEPKNS_17CodecProfileLevelEjiiPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponentC1EPKcS2_20OMX_VIDEO_CODINGTYPEPKNS_17CodecProfileLevelEjiiPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: android::SoftVideoEncoderOMXComponent::ConvertRGB32ToPlanar(unsigned char*, unsigned int, unsigned int, unsigned char const*, unsigned int, unsigned int, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoEncoderOMXComponent20ConvertRGB32ToPlanarEPhjjPKhjjjb(void) {
    ALOGD("_ZN7android28SoftVideoEncoderOMXComponent20ConvertRGB32ToPlanarEPhjjPKhjjjb() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::allocateBuffer(OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent14allocateBufferEPP20OMX_BUFFERHEADERTYPEjPvj(void) {
    ALOGD("_ZN7android16SoftOMXComponent14allocateBufferEPP20OMX_BUFFERHEADERTYPEjPvj() called");
    return 0;
}

/* Demangled: android::SoftVideoEncoderOMXComponent::internalSetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoEncoderOMXComponent20internalSetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN7android28SoftVideoEncoderOMXComponent20internalSetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::SoftVideoDecoderOMXComponent::handlePortSettingsChange(bool*, unsigned int, unsigned int, OMX_COLOR_FORMATTYPE, android::SoftVideoDecoderOMXComponent::CropSettingsMode, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponent24handlePortSettingsChangeEPbjj20OMX_COLOR_FORMATTYPENS0_16CropSettingsModeEb(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponent24handlePortSettingsChangeEPbjj20OMX_COLOR_FORMATTYPENS0_16CropSettingsModeEb() called");
    return 0;
}

/* Demangled: android::SoftVideoDecoderOMXComponent::supportDescribeHdrStaticInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponent28supportDescribeHdrStaticInfoEv(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponent28supportDescribeHdrStaticInfoEv() called");
    return 0;
}

/* Demangled: android::SoftVideoEncoderOMXComponent::extractGraphicBuffer(unsigned char*, unsigned int, unsigned char const*, unsigned int, unsigned int, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android28SoftVideoEncoderOMXComponent20extractGraphicBufferEPhjPKhjjj(void) {
    ALOGD("_ZNK7android28SoftVideoEncoderOMXComponent20extractGraphicBufferEPhjPKhjjj() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::getParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent12getParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN7android16SoftOMXComponent12getParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: android::SoftVideoDecoderOMXComponent::updateFinalColorAspects(android::ColorAspects const&, android::ColorAspects const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponent23updateFinalColorAspectsERKNS_12ColorAspectsES3_(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponent23updateFinalColorAspectsERKNS_12ColorAspectsES3_() called");
    return 0;
}

/* Demangled: android::SoftVideoDecoderOMXComponent::getConfig(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponent9getConfigE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponent9getConfigE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::freeBuffer(unsigned int, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent10freeBufferEjP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent10freeBufferEjP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::initCheck() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16SoftOMXComponent9initCheckEv(void) {
    ALOGD("_ZNK7android16SoftOMXComponent9initCheckEv() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::SoftVideoEncoderOMXComponent::validateInputBuffer(OMX_BUFFERHEADERTYPE const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoEncoderOMXComponent19validateInputBufferEPK20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN7android28SoftVideoEncoderOMXComponent19validateInputBufferEPK20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: android::SoftVideoEncoderOMXComponent::SoftVideoEncoderOMXComponent(char const*, char const*, OMX_VIDEO_CODINGTYPE, android::CodecProfileLevel const*, unsigned int, int, int, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoEncoderOMXComponentC1EPKcS2_20OMX_VIDEO_CODINGTYPEPKNS_17CodecProfileLevelEjiiPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_ZN7android28SoftVideoEncoderOMXComponentC1EPKcS2_20OMX_VIDEO_CODINGTYPEPKNS_17CodecProfileLevelEjiiPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::SimpleSoftOMXComponent::PortInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEEE = NULL;

/* Demangled: android::SoftOMXComponent::GetStateWrapper(void*, OMX_STATETYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent15GetStateWrapperEPvP13OMX_STATETYPE(void) {
    ALOGD("_ZN7android16SoftOMXComponent15GetStateWrapperEPvP13OMX_STATETYPE() called");
    return 0;
}

/* Demangled: android::SoftVideoEncoderOMXComponent::internalGetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoEncoderOMXComponent20internalGetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN7android28SoftVideoEncoderOMXComponent20internalGetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::~SoftOMXComponent() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponentD2Ev(void) {
    ALOGD("_ZN7android16SoftOMXComponentD2Ev() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::sendCommand(OMX_COMMANDTYPE, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent11sendCommandE15OMX_COMMANDTYPEjPv(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent11sendCommandE15OMX_COMMANDTYPEjPv() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::onReset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent7onResetEv(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent7onResetEv() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::setConfig(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent9setConfigE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent9setConfigE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::~SoftOMXComponent() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponentD0Ev(void) {
    ALOGD("_ZN7android16SoftOMXComponentD0Ev() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::~SoftOMXComponent() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponentD1Ev(void) {
    ALOGD("_ZN7android16SoftOMXComponentD1Ev() called");
    return 0;
}

/* Demangled: android::SoftVideoDecoderOMXComponent::dequeueInputFrameConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponent23dequeueInputFrameConfigEv(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponent23dequeueInputFrameConfigEv() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::emptyThisBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent15emptyThisBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent15emptyThisBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::getState(OMX_STATETYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent8getStateEP13OMX_STATETYPE(void) {
    ALOGD("_ZN7android16SoftOMXComponent8getStateEP13OMX_STATETYPE() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::getExtensionIndex(char const*, OMX_INDEXTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent17getExtensionIndexEPKcP13OMX_INDEXTYPE(void) {
    ALOGD("_ZN7android16SoftOMXComponent17getExtensionIndexEPKcP13OMX_INDEXTYPE() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::checkTransitions() */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent16checkTransitionsEv(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent16checkTransitionsEv() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::onPortEnableCompleted(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent21onPortEnableCompletedEjb(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent21onPortEnableCompletedEjb() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::SimpleSoftOMXComponent::BufferInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEEE = NULL;

/* Demangled: android::SoftOMXComponent::useBuffer(OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent9useBufferEPP20OMX_BUFFERHEADERTYPEjPvjPh(void) {
    ALOGD("_ZN7android16SoftOMXComponent9useBufferEPP20OMX_BUFFERHEADERTYPEjPvjPh() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::onPortFlush(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent11onPortFlushEjb(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent11onPortFlushEjb() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::internalSetConfig(OMX_INDEXTYPE, void*, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent17internalSetConfigE13OMX_INDEXTYPEPvPb(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent17internalSetConfigE13OMX_INDEXTYPEPvPb() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE = NULL;

/* Exported Object: vtable for android::AHandlerReflector<android::SimpleSoftOMXComponent> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android17AHandlerReflectorINS_22SimpleSoftOMXComponentEEE = NULL;

/* Demangled: android::SoftOMXComponent::GetParameterWrapper(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent19GetParameterWrapperEPv13OMX_INDEXTYPES1_(void) {
    ALOGD("_ZN7android16SoftOMXComponent19GetParameterWrapperEPv13OMX_INDEXTYPES1_() called");
    return 0;
}

/* Demangled: android::SoftVideoDecoderOMXComponent::onPortEnableCompleted(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponent21onPortEnableCompletedEjb(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponent21onPortEnableCompletedEjb() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::onChangeState(OMX_STATETYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent13onChangeStateE13OMX_STATETYPE(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent13onChangeStateE13OMX_STATETYPE() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::setLibHandle(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent12setLibHandleEPv(void) {
    ALOGD("_ZN7android16SoftOMXComponent12setLibHandleEPv() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::SetConfigWrapper(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent16SetConfigWrapperEPv13OMX_INDEXTYPES1_(void) {
    ALOGD("_ZN7android16SoftOMXComponent16SetConfigWrapperEPv13OMX_INDEXTYPES1_() called");
    return 0;
}

/* Demangled: android::SoftVideoDecoderOMXComponent::getColorAspectPreference() */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponent24getColorAspectPreferenceEv(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponent24getColorAspectPreferenceEv() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SoftVideoEncoderOMXComponent::updatePortParams() */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoEncoderOMXComponent16updatePortParamsEv(void) {
    ALOGD("_ZN7android28SoftVideoEncoderOMXComponent16updatePortParamsEv() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::notifyFillBufferDone(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent20notifyFillBufferDoneEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN7android16SoftOMXComponent20notifyFillBufferDoneEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::setParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent12setParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent12setParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::fillThisBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent14fillThisBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent14fillThisBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Exported Object: vtable for android::AHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8AHandlerE = NULL;

/* Demangled: android::SoftOMXComponent::fillThisBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent14fillThisBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN7android16SoftOMXComponent14fillThisBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: android::SoftVideoDecoderOMXComponent::updatePortDefinitions(bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponent21updatePortDefinitionsEbb(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponent21updatePortDefinitionsEbb() called");
    return 0;
}

/* Exported Object: vtable for android::SoftVideoEncoderOMXComponent */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android28SoftVideoEncoderOMXComponentE = NULL;

/* Demangled: android::SimpleSoftOMXComponent::getState(OMX_STATETYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent8getStateEP13OMX_STATETYPE(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent8getStateEP13OMX_STATETYPE() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::GetConfigWrapper(void*, OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent16GetConfigWrapperEPv13OMX_INDEXTYPES1_(void) {
    ALOGD("_ZN7android16SoftOMXComponent16GetConfigWrapperEPv13OMX_INDEXTYPES1_() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::EmptyThisBufferWrapper(void*, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent22EmptyThisBufferWrapperEPvP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN7android16SoftOMXComponent22EmptyThisBufferWrapperEPvP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: android::SoftVideoEncoderOMXComponent::internalSetPortParams(OMX_PARAM_PORTDEFINITIONTYPE const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoEncoderOMXComponent21internalSetPortParamsEPK28OMX_PARAM_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN7android28SoftVideoEncoderOMXComponent21internalSetPortParamsEPK28OMX_PARAM_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::notifyEmptyBufferDone(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent21notifyEmptyBufferDoneEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN7android16SoftOMXComponent21notifyEmptyBufferDoneEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::allocateBuffer(OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent14allocateBufferEPP20OMX_BUFFERHEADERTYPEjPvj(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent14allocateBufferEPP20OMX_BUFFERHEADERTYPEjPvj() called");
    return 0;
}

/* Demangled: android::SoftVideoDecoderOMXComponent::copyYV12FrameToOutputBuffer(unsigned char*, unsigned char const*, unsigned char const*, unsigned char const*, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponent27copyYV12FrameToOutputBufferEPhPKhS3_S3_jjj(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponent27copyYV12FrameToOutputBufferEPhPKhS3_S3_jjj() called");
    return 0;
}

/* Demangled: android::SoftVideoEncoderOMXComponent::ConvertFlexYUVToPlanar(unsigned char*, unsigned int, unsigned int, android_ycbcr*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoEncoderOMXComponent22ConvertFlexYUVToPlanarEPhjjP13android_ycbcrii(void) {
    ALOGD("_ZN7android28SoftVideoEncoderOMXComponent22ConvertFlexYUVToPlanarEPhjjP13android_ycbcrii() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::editPortInfo(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent12editPortInfoEj(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent12editPortInfoEj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::sendCommand(OMX_COMMANDTYPE, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent11sendCommandE15OMX_COMMANDTYPEjPv(void) {
    ALOGD("_ZN7android16SoftOMXComponent11sendCommandE15OMX_COMMANDTYPEjPv() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::AllocateBufferWrapper(void*, OMX_BUFFERHEADERTYPE**, unsigned int, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent21AllocateBufferWrapperEPvPP20OMX_BUFFERHEADERTYPEjS1_j(void) {
    ALOGD("_ZN7android16SoftOMXComponent21AllocateBufferWrapperEPvPP20OMX_BUFFERHEADERTYPEjS1_j() called");
    return 0;
}

/* Demangled: android::SoftVideoDecoderOMXComponent::outputBufferWidth() */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponent17outputBufferWidthEv(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponent17outputBufferWidthEv() called");
    return 0;
}

/* Demangled: android::SoftVideoEncoderOMXComponent::getExtensionIndex(char const*, OMX_INDEXTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoEncoderOMXComponent17getExtensionIndexEPKcP13OMX_INDEXTYPE(void) {
    ALOGD("_ZN7android28SoftVideoEncoderOMXComponent17getExtensionIndexEPKcP13OMX_INDEXTYPE() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::FreeBufferWrapper(void*, unsigned int, OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent17FreeBufferWrapperEPvjP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN7android16SoftOMXComponent17FreeBufferWrapperEPvjP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::getConfig(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent9getConfigE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN7android16SoftOMXComponent9getConfigE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::SimpleSoftOMXComponent(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponentC1EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponentC1EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::SoftVideoDecoderOMXComponent::getExtensionIndex(char const*, OMX_INDEXTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponent17getExtensionIndexEPKcP13OMX_INDEXTYPE(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponent17getExtensionIndexEPKcP13OMX_INDEXTYPE() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::onSendCommand(OMX_COMMANDTYPE, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent13onSendCommandE15OMX_COMMANDTYPEj(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent13onSendCommandE15OMX_COMMANDTYPEj() called");
    return 0;
}

/* Demangled: android::SoftVideoDecoderOMXComponent::queueOutputFrameConfig(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponent22queueOutputFrameConfigERKNS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponent22queueOutputFrameConfigERKNS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::SoftVideoDecoderOMXComponent::initPorts(unsigned int, unsigned int, unsigned int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponent9initPortsEjjjPKcj(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponent9initPortsEjjjPKcj() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::notify(OMX_EVENTTYPE, unsigned int, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent6notifyE13OMX_EVENTTYPEjjPv(void) {
    ALOGD("_ZN7android16SoftOMXComponent6notifyE13OMX_EVENTTYPEjjPv() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::getParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent12getParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent12getParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::prepareForDestruction() */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent21prepareForDestructionEv(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent21prepareForDestructionEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::SoftVideoDecoderOMXComponent */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android28SoftVideoDecoderOMXComponentE = NULL;

/* Demangled: android::SimpleSoftOMXComponent::SimpleSoftOMXComponent(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponentC2EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponentC2EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::emptyThisBuffer(OMX_BUFFERHEADERTYPE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent15emptyThisBufferEP20OMX_BUFFERHEADERTYPE(void) {
    ALOGD("_ZN7android16SoftOMXComponent15emptyThisBufferEP20OMX_BUFFERHEADERTYPE() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::SoftOMXComponent(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponentC1EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_ZN7android16SoftOMXComponentC1EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::libHandle() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16SoftOMXComponent9libHandleEv(void) {
    ALOGD("_ZNK7android16SoftOMXComponent9libHandleEv() called");
    return 0;
}

/* Demangled: android::SoftVideoDecoderOMXComponent::supportDescribeHdr10PlusInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponent28supportDescribeHdr10PlusInfoEv(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponent28supportDescribeHdr10PlusInfoEv() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::SoftVideoDecoderOMXComponent::dumpColorAspects(android::ColorAspects const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponent16dumpColorAspectsERKNS_12ColorAspectsE(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponent16dumpColorAspectsERKNS_12ColorAspectsE() called");
    return 0;
}

/* Demangled: android::SoftVideoDecoderOMXComponent::colorAspectsDiffer(android::ColorAspects const&, android::ColorAspects const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponent18colorAspectsDifferERKNS_12ColorAspectsES3_(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponent18colorAspectsDifferERKNS_12ColorAspectsES3_() called");
    return 0;
}

/* Exported Object: vtable for android::List<android::sp<android::ABuffer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListINS_2spINS_7ABufferEEEEE = NULL;

/* Demangled: android::SimpleSoftOMXComponent::onMessageReceived(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent17onMessageReceivedERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent17onMessageReceivedERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::BufferInfo>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent10BufferInfoEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::setConfig(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent9setConfigE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN7android16SoftOMXComponent9setConfigE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::SoftOMXComponent(char const*, OMX_CALLBACKTYPE const*, void*, OMX_COMPONENTTYPE**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponentC2EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE(void) {
    ALOGD("_ZN7android16SoftOMXComponentC2EPKcPK16OMX_CALLBACKTYPEPvPP17OMX_COMPONENTTYPE() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::internalSetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent20internalSetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent20internalSetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Demangled: android::Vector<android::SimpleSoftOMXComponent::PortInfo>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_22SimpleSoftOMXComponent8PortInfoEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SoftVideoDecoderOMXComponent::outputBufferHeight() */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponent18outputBufferHeightEv(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponent18outputBufferHeightEv() called");
    return 0;
}

/* Demangled: android::SoftVideoDecoderOMXComponent::internalSetParameter(OMX_INDEXTYPE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponent20internalSetParameterE13OMX_INDEXTYPEPv(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponent20internalSetParameterE13OMX_INDEXTYPEPv() called");
    return 0;
}

/* Demangled: android::SoftVideoEncoderOMXComponent::initPorts(unsigned int, unsigned int, unsigned int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoEncoderOMXComponent9initPortsEjjjPKcj(void) {
    ALOGD("_ZN7android28SoftVideoEncoderOMXComponent9initPortsEjjjPKcj() called");
    return 0;
}

/* Demangled: android::SimpleSoftOMXComponent::addPort(OMX_PARAM_PORTDEFINITIONTYPE const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22SimpleSoftOMXComponent7addPortERK28OMX_PARAM_PORTDEFINITIONTYPE(void) {
    ALOGD("_ZN7android22SimpleSoftOMXComponent7addPortERK28OMX_PARAM_PORTDEFINITIONTYPE() called");
    return 0;
}

/* Demangled: android::SoftVideoDecoderOMXComponent::handleColorAspectsChange() */
extern "C" __attribute__((visibility("default"))) int _ZN7android28SoftVideoDecoderOMXComponent24handleColorAspectsChangeEv(void) {
    ALOGD("_ZN7android28SoftVideoDecoderOMXComponent24handleColorAspectsChangeEv() called");
    return 0;
}

/* Demangled: android::SoftOMXComponent::SendCommandWrapper(void*, OMX_COMMANDTYPE, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SoftOMXComponent18SendCommandWrapperEPv15OMX_COMMANDTYPEjS1_(void) {
    ALOGD("_ZN7android16SoftOMXComponent18SendCommandWrapperEPv15OMX_COMMANDTYPEjS1_() called");
    return 0;
}
