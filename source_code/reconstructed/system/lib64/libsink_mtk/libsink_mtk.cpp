/*
 * Reverse-Engineered Source for: libsink-mtk.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libsink_mtk"

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
#include "libsink_mtk.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::Sink::updateTrackInfo(android::Sink::TrackIndex, android::sp<android::ABuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4Sink15updateTrackInfoENS0_10TrackIndexERNS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android4Sink15updateTrackInfoENS0_10TrackIndexERNS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::Recorder::start() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Recorder5startEv(void) {
    ALOGD("_ZN7android8Recorder5startEv() called");
    return 0;
}

/* Demangled: android::Recorder::onMessageReceived(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Recorder17onMessageReceivedERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android8Recorder17onMessageReceivedERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::Renderer::DecoderContext::onDecoderNotify() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer14DecoderContext15onDecoderNotifyEv(void) {
    ALOGD("_ZN7android8Renderer14DecoderContext15onDecoderNotifyEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Demangled: android::EncoderContext::setVideoBitrate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14EncoderContext15setVideoBitrateEi(void) {
    ALOGD("_ZN7android14EncoderContext15setVideoBitrateEi() called");
    return 0;
}

/* Exported Object: vtable for android::Recorder */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8RecorderE = NULL;

/* Demangled: android::Recorder::~Recorder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8RecorderD0Ev(void) {
    ALOGD("_ZN7android8RecorderD0Ev() called");
    return 0;
}

/* Demangled: android::Recorder::HandleEventNotify(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Recorder17HandleEventNotifyEiii(void) {
    ALOGD("_ZN7android8Recorder17HandleEventNotifyEiii() called");
    return 0;
}

/* Demangled: android::Renderer::DecoderContext::scheduleDecoderNotification() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer14DecoderContext27scheduleDecoderNotificationEv(void) {
    ALOGD("_ZN7android8Renderer14DecoderContext27scheduleDecoderNotificationEv() called");
    return 0;
}

/* Demangled: android::Renderer::AudioRenderer::~AudioRenderer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer13AudioRendererD2Ev(void) {
    ALOGD("_ZN7android8Renderer13AudioRendererD2Ev() called");
    return 0;
}

/* Demangled: android::Renderer::onMessageReceived(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer17onMessageReceivedERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android8Renderer17onMessageReceivedERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::EncoderContext::notifyError(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14EncoderContext11notifyErrorEi(void) {
    ALOGD("_ZN7android14EncoderContext11notifyErrorEi() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::Sink::TrackIndex, android::Sink::TrackInfo*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEEE = NULL;

/* Demangled: android::Recorder::notifyError() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Recorder11notifyErrorEv(void) {
    ALOGD("_ZN7android8Recorder11notifyErrorEv() called");
    return 0;
}

/* Exported Object: vtable for android::Renderer::DecoderContext */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8Renderer14DecoderContextE = NULL;

/* Demangled: android::Renderer::DecoderContext::~DecoderContext() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer14DecoderContextD0Ev(void) {
    ALOGD("_ZN7android8Renderer14DecoderContextD0Ev() called");
    return 0;
}

/* Demangled: android::Renderer::DecoderContext::queueOutputBuffer(unsigned long, long, android::sp<android::MediaCodecBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer14DecoderContext17queueOutputBufferEmlRKNS_2spINS_16MediaCodecBufferEEE(void) {
    ALOGD("_ZN7android8Renderer14DecoderContext17queueOutputBufferEmlRKNS_2spINS_16MediaCodecBufferEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::EncoderContext> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: construction vtable for android::BnMediaRecorderClient-in-android::Recorder::MediaRecordListner */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8Recorder18MediaRecordListnerE0_NS_21BnMediaRecorderClientE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Sink::Sink(int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4SinkC2Eijj(void) {
    ALOGD("_ZN7android4SinkC2Eijj() called");
    return 0;
}

/* Demangled: android::Renderer::AudioRenderer::dequeueTrackAccessUnit() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer13AudioRenderer22dequeueTrackAccessUnitEv(void) {
    ALOGD("_ZN7android8Renderer13AudioRenderer22dequeueTrackAccessUnitEv() called");
    return 0;
}

/* Demangled: android::Renderer::~Renderer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8RendererD2Ev(void) {
    ALOGD("_ZN7android8RendererD2Ev() called");
    return 0;
}

/* Demangled: android::Renderer::onSetFormat(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer11onSetFormatERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android8Renderer11onSetFormatERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::Sink::postKeyFrameRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4Sink19postKeyFrameRequestEv(void) {
    ALOGD("_ZN7android4Sink19postKeyFrameRequestEv() called");
    return 0;
}

/* Demangled: android::Recorder::setVideoSource(int, android::sp<android::AMessage>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Recorder14setVideoSourceEiRNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android8Recorder14setVideoSourceEiRNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::Renderer::onRenderVideo() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer13onRenderVideoEv(void) {
    ALOGD("_ZN7android8Renderer13onRenderVideoEv() called");
    return 0;
}

/* Demangled: android::Renderer::notifyError(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer11notifyErrorEi(void) {
    ALOGD("_ZN7android8Renderer11notifyErrorEi() called");
    return 0;
}

/* Demangled: android::EncoderContext::needToManuallyPrependSPSPPS() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14EncoderContext27needToManuallyPrependSPSPPSEv(void) {
    ALOGD("_ZNK7android14EncoderContext27needToManuallyPrependSPSPPSEv() called");
    return 0;
}

/* Demangled: android::Sink::startRecord() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4Sink11startRecordEv(void) {
    ALOGD("_ZN7android4Sink11startRecordEv() called");
    return 0;
}

/* Demangled: android::Renderer::scheduleVideoRenderIfNecessary(long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer30scheduleVideoRenderIfNecessaryEl(void) {
    ALOGD("_ZN7android8Renderer30scheduleVideoRenderIfNecessaryEl() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::EncoderContext::scheduleDoMoreWork() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14EncoderContext18scheduleDoMoreWorkEv(void) {
    ALOGD("_ZN7android14EncoderContext18scheduleDoMoreWorkEv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE = NULL;

/* Demangled: android::Sink::start(bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4Sink5startEbb(void) {
    ALOGD("_ZN7android4Sink5startEbb() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::MediaCodecBuffer> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::MediaCodecBuffer> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Recorder::MediaRecordListner */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8Recorder18MediaRecordListnerE = NULL;

/* Demangled: android::Recorder::postAsynAndWaitReturnError(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Recorder26postAsynAndWaitReturnErrorERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android8Recorder26postAsynAndWaitReturnErrorERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::Sink::SetSurface(android::sp<android::IGraphicBufferProducer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4Sink10SetSurfaceERKNS_2spINS_22IGraphicBufferProducerEEE(void) {
    ALOGD("_ZN7android4Sink10SetSurfaceERKNS_2spINS_22IGraphicBufferProducerEEE() called");
    return 0;
}

/* Demangled: android::BnInterface<android::IMediaRecorderClient>::onAsBinder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11BnInterfaceINS_20IMediaRecorderClientEE10onAsBinderEv(void) {
    ALOGD("_ZN7android11BnInterfaceINS_20IMediaRecorderClientEE10onAsBinderEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::IMediaRecorderClient-in-android::Recorder::MediaRecordListner */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8Recorder18MediaRecordListnerE0_NS_20IMediaRecorderClientE = NULL;

/* Demangled: android::Renderer::DecoderContext::releaseOutputBuffer(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer14DecoderContext19releaseOutputBufferEm(void) {
    ALOGD("_ZN7android8Renderer14DecoderContext19releaseOutputBufferEm() called");
    return 0;
}

/* Demangled: android::Renderer::AudioRenderer::writeNonBlocking(unsigned char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer13AudioRenderer16writeNonBlockingEPKhm(void) {
    ALOGD("_ZN7android8Renderer13AudioRenderer16writeNonBlockingEPKhm() called");
    return 0;
}

/* Demangled: android::Renderer::AudioRenderer::AudioRenderer(android::sp<android::Renderer::DecoderContext> const&, android::sp<android::AMessage>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer13AudioRendererC1ERKNS_2spINS0_14DecoderContextEEENS2_INS_8AMessageEEE(void) {
    ALOGD("_ZN7android8Renderer13AudioRendererC1ERKNS_2spINS0_14DecoderContextEEENS2_INS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: vtable for android::Sink */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4SinkE = NULL;

/* Demangled: android::Renderer::Renderer(int, android::sp<android::IGraphicBufferProducer> const&, android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8RendererC1EiRKNS_2spINS_22IGraphicBufferProducerEEERKNS1_INS_8AMessageEEE(void) {
    ALOGD("_ZN7android8RendererC1EiRKNS_2spINS_22IGraphicBufferProducerEEERKNS1_INS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::Sink::~Sink() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4SinkD0Ev(void) {
    ALOGD("_ZN7android4SinkD0Ev() called");
    return 0;
}

/* Demangled: android::Sink::initRecorder(android::record_config*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4Sink12initRecorderEPNS_13record_configE(void) {
    ALOGD("_ZN7android4Sink12initRecorderEPNS_13record_configE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Demangled: android::EncoderContext::queueAccessUnit(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14EncoderContext15queueAccessUnitERKNS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android14EncoderContext15queueAccessUnitERKNS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::Renderer::onQueueAccessUnit(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer17onQueueAccessUnitERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android8Renderer17onQueueAccessUnitERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::EncoderContext::onMessageReceived(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14EncoderContext17onMessageReceivedERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android14EncoderContext17onMessageReceivedERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::markIDRInfo(char const*, bool, android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11markIDRInfoEPKcbRKNS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android11markIDRInfoEPKcbRKNS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::Sink::dispatchInputAccessUnit(android::Sink::TrackIndex, android::sp<android::ABuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4Sink23dispatchInputAccessUnitENS0_10TrackIndexERNS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android4Sink23dispatchInputAccessUnitENS0_10TrackIndexERNS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::Renderer::DecoderContext::DecoderContext(int, android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer14DecoderContextC1EiRKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android8Renderer14DecoderContextC1EiRKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::EncoderContext::~EncoderContext() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14EncoderContextD0Ev(void) {
    ALOGD("_ZN7android14EncoderContextD0Ev() called");
    return 0;
}

/* Demangled: android::Sink::convertToMeta(bool, android::sp<android::AMessage>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4Sink13convertToMetaEbNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android4Sink13convertToMetaEbNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::Sink::queueAccessUnit(android::Sink::TrackIndex, android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4Sink15queueAccessUnitENS0_10TrackIndexERKNS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android4Sink15queueAccessUnitENS0_10TrackIndexERKNS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::Renderer::DecoderContext::renderOutputBufferAndRelease(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer14DecoderContext28renderOutputBufferAndReleaseEm(void) {
    ALOGD("_ZN7android8Renderer14DecoderContext28renderOutputBufferAndReleaseEm() called");
    return 0;
}

/* Demangled: android::Renderer::AudioRenderer::onMessageReceived(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer13AudioRenderer17onMessageReceivedERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android8Renderer13AudioRenderer17onMessageReceivedERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::MediaCodecBuffer> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::EncoderContext::initEncoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14EncoderContext11initEncoderEv(void) {
    ALOGD("_ZN7android14EncoderContext11initEncoderEv() called");
    return 0;
}

/* Exported Object: vtable for android::List<android::sp<android::ABuffer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListINS_2spINS_7ABufferEEEEE = NULL;

/* Exported Object: construction vtable for android::BBinder-in-android::Recorder::MediaRecordListner */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8Recorder18MediaRecordListnerE8_NS_7BBinderE = NULL;

/* Demangled: android::Renderer::AudioRenderer::~AudioRenderer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer13AudioRendererD1Ev(void) {
    ALOGD("_ZN7android8Renderer13AudioRendererD1Ev() called");
    return 0;
}

/* Demangled: android::Renderer::resetSurfaceTransformDegree(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer27resetSurfaceTransformDegreeEib(void) {
    ALOGD("_ZN7android8Renderer27resetSurfaceTransformDegreeEib() called");
    return 0;
}

/* Demangled: android::Recorder::setAudioSource(int, android::sp<android::AMessage>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Recorder14setAudioSourceEiRNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android8Recorder14setAudioSourceEiRNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::BnInterface<android::IMediaRecorderClient>-in-android::Recorder::MediaRecordListner */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8Recorder18MediaRecordListnerE0_NS_11BnInterfaceINS_20IMediaRecorderClientEEE = NULL;

/* Demangled: android::Renderer::DecoderContext::onMessageReceived(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer14DecoderContext17onMessageReceivedERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android8Renderer14DecoderContext17onMessageReceivedERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::EncoderContext::getInputBufferCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14EncoderContext19getInputBufferCountEv(void) {
    ALOGD("_ZNK7android14EncoderContext19getInputBufferCountEv() called");
    return 0;
}

/* Demangled: android::copyMeta(android::sp<android::AMessage>, android::sp<android::AMessage>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8copyMetaENS_2spINS_8AMessageEEES2_(void) {
    ALOGD("_ZN7android8copyMetaENS_2spINS_8AMessageEEES2_() called");
    return 0;
}

/* Demangled: android::Sink::stop_l(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4Sink6stop_lEi(void) {
    ALOGD("_ZN7android4Sink6stop_lEi() called");
    return 0;
}

/* Demangled: android::Recorder::Recorder(android::Recorder::record_mode_t, android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8RecorderC1ENS0_13record_mode_tERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android8RecorderC1ENS0_13record_mode_tERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Renderer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8RendererE = NULL;

/* Demangled: android::Recorder::setParameters(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Recorder13setParametersERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android8Recorder13setParametersERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::Sink::Sink(int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4SinkC1Eijj(void) {
    ALOGD("_ZN7android4SinkC1Eijj() called");
    return 0;
}

/* Demangled: android::Recorder::~Recorder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8RecorderD2Ev(void) {
    ALOGD("_ZN7android8RecorderD2Ev() called");
    return 0;
}

/* Demangled: android::Renderer::~Renderer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8RendererD1Ev(void) {
    ALOGD("_ZN7android8RendererD1Ev() called");
    return 0;
}

/* Demangled: android::EncoderContext::doMoreWork() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14EncoderContext10doMoreWorkEv(void) {
    ALOGD("_ZN7android14EncoderContext10doMoreWorkEv() called");
    return 0;
}

/* Demangled: android::Renderer::DecoderContext::~DecoderContext() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer14DecoderContextD2Ev(void) {
    ALOGD("_ZN7android8Renderer14DecoderContextD2Ev() called");
    return 0;
}

/* Demangled: android::Sink::postAsynAndWaitReturnError(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4Sink26postAsynAndWaitReturnErrorERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android4Sink26postAsynAndWaitReturnErrorERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::Sink::TrackIndex, android::Sink::TrackInfo*> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Renderer::AudioRenderer::getAudioPlayOutTimeUs() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer13AudioRenderer21getAudioPlayOutTimeUsEv(void) {
    ALOGD("_ZN7android8Renderer13AudioRenderer21getAudioPlayOutTimeUsEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<android::MediaCodecBuffer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spINS_16MediaCodecBufferEEEEE = NULL;

/* Demangled: android::Renderer::DecoderContext::notifyError(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer14DecoderContext11notifyErrorEi(void) {
    ALOGD("_ZN7android8Renderer14DecoderContext11notifyErrorEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Recorder::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Recorder4stopEv(void) {
    ALOGD("_ZN7android8Recorder4stopEv() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::MediaCodecBuffer> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::EncoderContext::IsSilence(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14EncoderContext9IsSilenceERKNS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android14EncoderContext9IsSilenceERKNS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::Sink::SetNotify(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4Sink9SetNotifyERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android4Sink9SetNotifyERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Exported Object: VTT for android::Recorder::MediaRecordListner */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8Recorder18MediaRecordListnerE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::EncoderContext> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Recorder::setVideoEncoder(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Recorder15setVideoEncoderEi(void) {
    ALOGD("_ZN7android8Recorder15setVideoEncoderEi() called");
    return 0;
}

/* Demangled: android::Sink::addAccessUnitToPCMMixer(android::Sink::TrackIndex, android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4Sink23addAccessUnitToPCMMixerENS0_10TrackIndexERKNS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android4Sink23addAccessUnitToPCMMixerENS0_10TrackIndexERKNS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::Recorder::queueAccessUnit(int, android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Recorder15queueAccessUnitEiRKNS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android8Recorder15queueAccessUnitEiRKNS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::Sink::TrackIndex, android::Sink::TrackInfo*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Exported Object: vtable for android::List<android::Renderer::AudioRenderer::BufferInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListINS_8Renderer13AudioRenderer10BufferInfoEEE = NULL;

/* Demangled: android::Renderer::AudioRenderer::schedulePushIfNecessary() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer13AudioRenderer23schedulePushIfNecessaryEv(void) {
    ALOGD("_ZN7android8Renderer13AudioRenderer23schedulePushIfNecessaryEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Recorder::addAudioSource(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Recorder14addAudioSourceEb(void) {
    ALOGD("_ZN7android8Recorder14addAudioSourceEb() called");
    return 0;
}

/* Demangled: android::Renderer::DecoderContext::queueInputBuffer(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer14DecoderContext16queueInputBufferERKNS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android8Renderer14DecoderContext16queueInputBufferERKNS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::Sink::initLooper_l() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4Sink12initLooper_lEv(void) {
    ALOGD("_ZN7android4Sink12initLooper_lEv() called");
    return 0;
}

/* Demangled: android::Sink::onMessageReceived(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4Sink17onMessageReceivedERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android4Sink17onMessageReceivedERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::Sink::TrackIndex, android::Sink::TrackInfo*> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Recorder::writeSamplesToMuxter(int, android::sp<android::ABuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Recorder20writeSamplesToMuxterEiRNS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android8Recorder20writeSamplesToMuxterEiRNS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::EncoderContext> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE10do_compareEPKvS8_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE10do_compareEPKvS8_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Recorder::setOutputFormat(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Recorder15setOutputFormatEi(void) {
    ALOGD("_ZN7android8Recorder15setOutputFormatEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::EncoderContext::EncoderContext(android::sp<android::AMessage> const&, android::sp<android::ALooper> const&, android::sp<android::AMessage> const&, android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14EncoderContextC1ERKNS_2spINS_8AMessageEEERKNS1_INS_7ALooperEEES5_S5_(void) {
    ALOGD("_ZN7android14EncoderContextC1ERKNS_2spINS_8AMessageEEERKNS1_INS_7ALooperEEES5_S5_() called");
    return 0;
}

/* Demangled: android::Renderer::AudioRenderer::onPushAudio() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer13AudioRenderer11onPushAudioEv(void) {
    ALOGD("_ZN7android8Renderer13AudioRenderer11onPushAudioEv() called");
    return 0;
}

/* Demangled: android::EncoderContext::getVideoBitrate() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14EncoderContext15getVideoBitrateEv(void) {
    ALOGD("_ZNK7android14EncoderContext15getVideoBitrateEv() called");
    return 0;
}

/* Demangled: android::Renderer::AudioRenderer::queueInputBuffer(unsigned long, long, android::sp<android::MediaCodecBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer13AudioRenderer16queueInputBufferEmlRKNS_2spINS_16MediaCodecBufferEEE(void) {
    ALOGD("_ZN7android8Renderer13AudioRenderer16queueInputBufferEmlRKNS_2spINS_16MediaCodecBufferEEE() called");
    return 0;
}

/* Demangled: android::Renderer::Renderer(int, android::sp<android::IGraphicBufferProducer> const&, android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8RendererC2EiRKNS_2spINS_22IGraphicBufferProducerEEERKNS1_INS_8AMessageEEE(void) {
    ALOGD("_ZN7android8RendererC2EiRKNS_2spINS_22IGraphicBufferProducerEEERKNS1_INS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Demangled: android::Sink::~Sink() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4SinkD2Ev(void) {
    ALOGD("_ZN7android4SinkD2Ev() called");
    return 0;
}

/* Demangled: android::Sink::findAndParseCsdNAL(android::sp<android::ABuffer>&, bool, int*, int*, int*, int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4Sink18findAndParseCsdNALERNS_2spINS_7ABufferEEEbPiS5_S5_S5_S5_S5_(void) {
    ALOGD("_ZN7android4Sink18findAndParseCsdNALERNS_2spINS_7ABufferEEEbPiS5_S5_S5_S5_S5_() called");
    return 0;
}

/* Demangled: android::Sink::stopRecord() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4Sink10stopRecordEv(void) {
    ALOGD("_ZN7android4Sink10stopRecordEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::EncoderContext> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::List<unsigned long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListImEE = NULL;

/* Demangled: android::Recorder::addVideoSource(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Recorder14addVideoSourceEb(void) {
    ALOGD("_ZN7android8Recorder14addVideoSourceEb() called");
    return 0;
}

/* Demangled: android::Renderer::AudioRenderer::~AudioRenderer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer13AudioRendererD0Ev(void) {
    ALOGD("_ZN7android8Renderer13AudioRendererD0Ev() called");
    return 0;
}

/* Demangled: android::EncoderContext::releaseEncoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14EncoderContext14releaseEncoderEv(void) {
    ALOGD("_ZN7android14EncoderContext14releaseEncoderEv() called");
    return 0;
}

/* Demangled: android::EncoderContext::~EncoderContext() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14EncoderContextD2Ev(void) {
    ALOGD("_ZN7android14EncoderContextD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::Sink::TrackIndex, android::Sink::TrackInfo*> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Sink::setSinkCongfig(android::audio_dec_fmt*, android::video_dec_fmt*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4Sink14setSinkCongfigEPNS_13audio_dec_fmtEPNS_13video_dec_fmtE(void) {
    ALOGD("_ZN7android4Sink14setSinkCongfigEPNS_13audio_dec_fmtEPNS_13video_dec_fmtE() called");
    return 0;
}

/* Demangled: android::Recorder::~Recorder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8RecorderD1Ev(void) {
    ALOGD("_ZN7android8RecorderD1Ev() called");
    return 0;
}

/* Demangled: android::Renderer::~Renderer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8RendererD0Ev(void) {
    ALOGD("_ZN7android8RendererD0Ev() called");
    return 0;
}

/* Demangled: android::Renderer::onDecoderNotify(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer15onDecoderNotifyERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android8Renderer15onDecoderNotifyERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::EncoderContext::requestIDRFrame() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14EncoderContext15requestIDRFrameEv(void) {
    ALOGD("_ZN7android14EncoderContext15requestIDRFrameEv() called");
    return 0;
}

/* Demangled: android::Sink::findAndParseCsdNALHEVC(android::sp<android::ABuffer>&, bool, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4Sink22findAndParseCsdNALHEVCERNS_2spINS_7ABufferEEEbPiS5_(void) {
    ALOGD("_ZN7android4Sink22findAndParseCsdNALHEVCERNS_2spINS_7ABufferEEEbPiS5_() called");
    return 0;
}

/* Demangled: android::Recorder::prepare() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Recorder7prepareEv(void) {
    ALOGD("_ZN7android8Recorder7prepareEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::Sink::TrackIndex, android::Sink::TrackInfo*> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Recorder::Recorder(android::Recorder::record_mode_t, android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8RecorderC2ENS0_13record_mode_tERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android8RecorderC2ENS0_13record_mode_tERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::Renderer::DecoderContext::~DecoderContext() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer14DecoderContextD1Ev(void) {
    ALOGD("_ZN7android8Renderer14DecoderContextD1Ev() called");
    return 0;
}

/* Exported Object: vtable for android::List<android::Renderer::OutputInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListINS_8Renderer10OutputInfoEEE = NULL;

/* Demangled: android::Renderer::internalSetFormat(int, android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer17internalSetFormatEiRKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android8Renderer17internalSetFormatEiRKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::Recorder::setAudioEncoder(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Recorder15setAudioEncoderEi(void) {
    ALOGD("_ZN7android8Recorder15setAudioEncoderEi() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::MediaCodecBuffer> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::EncoderContext::getOutputFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14EncoderContext15getOutputFormatEv(void) {
    ALOGD("_ZNK7android14EncoderContext15getOutputFormatEv() called");
    return 0;
}

/* Demangled: android::Sink::stop(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4Sink4stopEi(void) {
    ALOGD("_ZN7android4Sink4stopEi() called");
    return 0;
}

/* Demangled: android::Sink::handlePCMMix() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4Sink12handlePCMMixEv(void) {
    ALOGD("_ZN7android4Sink12handlePCMMixEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::Sink::TrackIndex, android::Sink::TrackInfo*> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<android::EncoderContext> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEEE = NULL;

/* Demangled: android::Recorder::setOutputFile(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Recorder13setOutputFileEPKc(void) {
    ALOGD("_ZN7android8Recorder13setOutputFileEPKc() called");
    return 0;
}

/* Demangled: android::EncoderContext::stopAsync() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14EncoderContext9stopAsyncEv(void) {
    ALOGD("_ZN7android14EncoderContext9stopAsyncEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::EncoderContext> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: construction vtable for android::IInterface-in-android::Recorder::MediaRecordListner */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8Recorder18MediaRecordListnerE0_NS_10IInterfaceE = NULL;

/* Demangled: android::Renderer::setFormat(int, android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer9setFormatEiRKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android8Renderer9setFormatEiRKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: construction vtable for android::IBinder-in-android::Recorder::MediaRecordListner */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8Recorder18MediaRecordListnerE8_NS_7IBinderE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::EncoderContext> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Recorder::setOutputFile(int, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Recorder13setOutputFileEill(void) {
    ALOGD("_ZN7android8Recorder13setOutputFileEill() called");
    return 0;
}

/* Exported Object: vtable for android::AHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8AHandlerE = NULL;

/* Demangled: android::Renderer::queueAccessUnit(int, android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer15queueAccessUnitEiRKNS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android8Renderer15queueAccessUnitEiRKNS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::Sink::TrackIndex, android::Sink::TrackInfo*> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIliEEEE = NULL;

/* Demangled: android::Renderer::dequeueTrackAccessUnit(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer22dequeueTrackAccessUnitEi(void) {
    ALOGD("_ZN7android8Renderer22dequeueTrackAccessUnitEi() called");
    return 0;
}

/* Demangled: android::Renderer::stop(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer4stopEi(void) {
    ALOGD("_ZN7android8Renderer4stopEi() called");
    return 0;
}

/* Demangled: android::Recorder::preWriteCsdBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Recorder17preWriteCsdBufferEv(void) {
    ALOGD("_ZN7android8Recorder17preWriteCsdBufferEv() called");
    return 0;
}

/* Demangled: android::Renderer::queueOutputBuffer(int, unsigned long, long, android::sp<android::MediaCodecBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer17queueOutputBufferEimlRKNS_2spINS_16MediaCodecBufferEEE(void) {
    ALOGD("_ZN7android8Renderer17queueOutputBufferEimlRKNS_2spINS_16MediaCodecBufferEEE() called");
    return 0;
}

/* Demangled: android::Sink::compareSettingChange(android::audio_dec_fmt*, android::video_dec_fmt*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4Sink20compareSettingChangeEPNS_13audio_dec_fmtEPNS_13video_dec_fmtE(void) {
    ALOGD("_ZN7android4Sink20compareSettingChangeEPNS_13audio_dec_fmtEPNS_13video_dec_fmtE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Recorder::setAVTimeStampMap(long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Recorder17setAVTimeStampMapEll(void) {
    ALOGD("_ZN7android8Recorder17setAVTimeStampMapEll() called");
    return 0;
}

/* Demangled: android::Renderer::DecoderContext::queueDecoderInputBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer14DecoderContext24queueDecoderInputBuffersEv(void) {
    ALOGD("_ZN7android8Renderer14DecoderContext24queueDecoderInputBuffersEv() called");
    return 0;
}

/* Demangled: android::Renderer::AudioRenderer::AudioRenderer(android::sp<android::Renderer::DecoderContext> const&, android::sp<android::AMessage>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer13AudioRendererC2ERKNS_2spINS0_14DecoderContextEEENS2_INS_8AMessageEEE(void) {
    ALOGD("_ZN7android8Renderer13AudioRendererC2ERKNS_2spINS0_14DecoderContextEEENS2_INS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::EncoderContext::feedRawAudioInputBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14EncoderContext24feedRawAudioInputBuffersEv(void) {
    ALOGD("_ZN7android14EncoderContext24feedRawAudioInputBuffersEv() called");
    return 0;
}

/* Demangled: android::Sink::~Sink() */
extern "C" __attribute__((visibility("default"))) int _ZN7android4SinkD1Ev(void) {
    ALOGD("_ZN7android4SinkD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::EncoderContext> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::List<long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListIlEE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, long> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIllEEEE = NULL;

/* Demangled: android::Renderer::getAudioPlayOutTimeUs(long, long*, long*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer21getAudioPlayOutTimeUsElPlS1_(void) {
    ALOGD("_ZN7android8Renderer21getAudioPlayOutTimeUsElPlS1_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::EncoderContext::EncoderContext(android::sp<android::AMessage> const&, android::sp<android::ALooper> const&, android::sp<android::AMessage> const&, android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14EncoderContextC2ERKNS_2spINS_8AMessageEEERKNS1_INS_7ALooperEEES5_S5_(void) {
    ALOGD("_ZN7android14EncoderContextC2ERKNS_2spINS_8AMessageEEERKNS1_INS_7ALooperEEES5_S5_() called");
    return 0;
}

/* Exported Object: vtable for android::EncoderContext */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android14EncoderContextE = NULL;

/* Demangled: android::Sink::waitForNextNal(android::sp<android::ABuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4Sink14waitForNextNalERNS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android4Sink14waitForNextNalERNS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::Renderer::DecoderContext::DecoderContext(int, android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer14DecoderContextC2EiRKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android8Renderer14DecoderContextC2EiRKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::EncoderContext::~EncoderContext() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14EncoderContextD1Ev(void) {
    ALOGD("_ZN7android14EncoderContextD1Ev() called");
    return 0;
}

/* Demangled: android::Renderer::DecoderContext::init(android::sp<android::AMessage> const&, android::sp<android::Surface> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8Renderer14DecoderContext4initERKNS_2spINS_8AMessageEEERKNS2_INS_7SurfaceEEE(void) {
    ALOGD("_ZN7android8Renderer14DecoderContext4initERKNS_2spINS_8AMessageEEERKNS2_INS_7SurfaceEEE() called");
    return 0;
}

/* Exported Object: vtable for android::Renderer::AudioRenderer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8Renderer13AudioRendererE = NULL;

/* Demangled: android::Vector<android::sp<android::MediaCodecBuffer> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::EncoderContext::feedEncoderInputBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14EncoderContext23feedEncoderInputBuffersEv(void) {
    ALOGD("_ZN7android14EncoderContext23feedEncoderInputBuffersEv() called");
    return 0;
}
