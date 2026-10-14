/*
 * Reverse-Engineered ABI Specification for: libsink.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libsink-mtk.so
 */

#ifndef BEGONIA_RE_LIBSINK_H
#define BEGONIA_RE_LIBSINK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android4Sink15updateTrackInfoENS0_10TrackIndexERNS_2spINS_7ABufferEEE */
/* Demangled: android::Sink::updateTrackInfo(android::Sink::TrackIndex, android::sp<android::ABuffer>&) */
int _ZN7android4Sink15updateTrackInfoENS0_10TrackIndexERNS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN7android8Recorder5startEv */
/* Demangled: android::Recorder::start() */
int _ZN7android8Recorder5startEv(void);

/* Symbol: _ZN7android8Recorder17onMessageReceivedERKNS_2spINS_8AMessageEEE */
/* Demangled: android::Recorder::onMessageReceived(android::sp<android::AMessage> const&) */
int _ZN7android8Recorder17onMessageReceivedERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android8Renderer14DecoderContext15onDecoderNotifyEv */
/* Demangled: android::Renderer::DecoderContext::onDecoderNotify() */
int _ZN7android8Renderer14DecoderContext15onDecoderNotifyEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE10do_compareEPKvS5_(void);

/* Symbol: _ZN7android14EncoderContext15setVideoBitrateEi */
/* Demangled: android::EncoderContext::setVideoBitrate(int) */
int _ZN7android14EncoderContext15setVideoBitrateEi(void);

/* Symbol: _ZTVN7android8RecorderE */
/* Demangled: vtable for android::Recorder */
extern void* _ZTVN7android8RecorderE;

/* Symbol: _ZN7android8RecorderD0Ev */
/* Demangled: android::Recorder::~Recorder() */
int _ZN7android8RecorderD0Ev(void);

/* Symbol: _ZN7android8Recorder17HandleEventNotifyEiii */
/* Demangled: android::Recorder::HandleEventNotify(int, int, int) */
int _ZN7android8Recorder17HandleEventNotifyEiii(void);

/* Symbol: _ZN7android8Renderer14DecoderContext27scheduleDecoderNotificationEv */
/* Demangled: android::Renderer::DecoderContext::scheduleDecoderNotification() */
int _ZN7android8Renderer14DecoderContext27scheduleDecoderNotificationEv(void);

/* Symbol: _ZN7android8Renderer13AudioRendererD2Ev */
/* Demangled: android::Renderer::AudioRenderer::~AudioRenderer() */
int _ZN7android8Renderer13AudioRendererD2Ev(void);

/* Symbol: _ZN7android8Renderer17onMessageReceivedERKNS_2spINS_8AMessageEEE */
/* Demangled: android::Renderer::onMessageReceived(android::sp<android::AMessage> const&) */
int _ZN7android8Renderer17onMessageReceivedERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android14EncoderContext11notifyErrorEi */
/* Demangled: android::EncoderContext::notifyError(int) */
int _ZN7android14EncoderContext11notifyErrorEi(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::Sink::TrackIndex, android::Sink::TrackInfo*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEEE;

/* Symbol: _ZN7android8Recorder11notifyErrorEv */
/* Demangled: android::Recorder::notifyError() */
int _ZN7android8Recorder11notifyErrorEv(void);

/* Symbol: _ZTVN7android8Renderer14DecoderContextE */
/* Demangled: vtable for android::Renderer::DecoderContext */
extern void* _ZTVN7android8Renderer14DecoderContextE;

/* Symbol: _ZN7android8Renderer14DecoderContextD0Ev */
/* Demangled: android::Renderer::DecoderContext::~DecoderContext() */
int _ZN7android8Renderer14DecoderContextD0Ev(void);

/* Symbol: _ZN7android8Renderer14DecoderContext17queueOutputBufferEmlRKNS_2spINS_16MediaCodecBufferEEE */
/* Demangled: android::Renderer::DecoderContext::queueOutputBuffer(unsigned long, long, android::sp<android::MediaCodecBuffer> const&) */
int _ZN7android8Renderer14DecoderContext17queueOutputBufferEmlRKNS_2spINS_16MediaCodecBufferEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::EncoderContext> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE12do_constructEPvm(void);

/* Symbol: _ZTCN7android8Recorder18MediaRecordListnerE0_NS_21BnMediaRecorderClientE */
/* Demangled: construction vtable for android::BnMediaRecorderClient-in-android::Recorder::MediaRecordListner */
extern void* _ZTCN7android8Recorder18MediaRecordListnerE0_NS_21BnMediaRecorderClientE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN7android4SinkC2Eijj */
/* Demangled: android::Sink::Sink(int, unsigned int, unsigned int) */
int _ZN7android4SinkC2Eijj(void);

/* Symbol: _ZN7android8Renderer13AudioRenderer22dequeueTrackAccessUnitEv */
/* Demangled: android::Renderer::AudioRenderer::dequeueTrackAccessUnit() */
int _ZN7android8Renderer13AudioRenderer22dequeueTrackAccessUnitEv(void);

/* Symbol: _ZN7android8RendererD2Ev */
/* Demangled: android::Renderer::~Renderer() */
int _ZN7android8RendererD2Ev(void);

/* Symbol: _ZN7android8Renderer11onSetFormatERKNS_2spINS_8AMessageEEE */
/* Demangled: android::Renderer::onSetFormat(android::sp<android::AMessage> const&) */
int _ZN7android8Renderer11onSetFormatERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android4Sink19postKeyFrameRequestEv */
/* Demangled: android::Sink::postKeyFrameRequest() */
int _ZN7android4Sink19postKeyFrameRequestEv(void);

/* Symbol: _ZN7android8Recorder14setVideoSourceEiRNS_2spINS_8AMessageEEE */
/* Demangled: android::Recorder::setVideoSource(int, android::sp<android::AMessage>&) */
int _ZN7android8Recorder14setVideoSourceEiRNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android8Renderer13onRenderVideoEv */
/* Demangled: android::Renderer::onRenderVideo() */
int _ZN7android8Renderer13onRenderVideoEv(void);

/* Symbol: _ZN7android8Renderer11notifyErrorEi */
/* Demangled: android::Renderer::notifyError(int) */
int _ZN7android8Renderer11notifyErrorEi(void);

/* Symbol: _ZNK7android14EncoderContext27needToManuallyPrependSPSPPSEv */
/* Demangled: android::EncoderContext::needToManuallyPrependSPSPPS() const */
int _ZNK7android14EncoderContext27needToManuallyPrependSPSPPSEv(void);

/* Symbol: _ZN7android4Sink11startRecordEv */
/* Demangled: android::Sink::startRecord() */
int _ZN7android4Sink11startRecordEv(void);

/* Symbol: _ZN7android8Renderer30scheduleVideoRenderIfNecessaryEl */
/* Demangled: android::Renderer::scheduleVideoRenderIfNecessary(long) */
int _ZN7android8Renderer30scheduleVideoRenderIfNecessaryEl(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE12do_constructEPvm(void);

/* Symbol: _ZN7android14EncoderContext18scheduleDoMoreWorkEv */
/* Demangled: android::EncoderContext::scheduleDoMoreWork() */
int _ZN7android14EncoderContext18scheduleDoMoreWorkEv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE;

/* Symbol: _ZN7android4Sink5startEbb */
/* Demangled: android::Sink::start(bool, bool) */
int _ZN7android4Sink5startEbb(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::sp<android::MediaCodecBuffer> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::sp<android::MediaCodecBuffer> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTVN7android8Recorder18MediaRecordListnerE */
/* Demangled: vtable for android::Recorder::MediaRecordListner */
extern void* _ZTVN7android8Recorder18MediaRecordListnerE;

/* Symbol: _ZN7android8Recorder26postAsynAndWaitReturnErrorERKNS_2spINS_8AMessageEEE */
/* Demangled: android::Recorder::postAsynAndWaitReturnError(android::sp<android::AMessage> const&) */
int _ZN7android8Recorder26postAsynAndWaitReturnErrorERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android4Sink10SetSurfaceERKNS_2spINS_22IGraphicBufferProducerEEE */
/* Demangled: android::Sink::SetSurface(android::sp<android::IGraphicBufferProducer> const&) */
int _ZN7android4Sink10SetSurfaceERKNS_2spINS_22IGraphicBufferProducerEEE(void);

/* Symbol: _ZN7android11BnInterfaceINS_20IMediaRecorderClientEE10onAsBinderEv */
/* Demangled: android::BnInterface<android::IMediaRecorderClient>::onAsBinder() */
int _ZN7android11BnInterfaceINS_20IMediaRecorderClientEE10onAsBinderEv(void);

/* Symbol: _ZTCN7android8Recorder18MediaRecordListnerE0_NS_20IMediaRecorderClientE */
/* Demangled: construction vtable for android::IMediaRecorderClient-in-android::Recorder::MediaRecordListner */
extern void* _ZTCN7android8Recorder18MediaRecordListnerE0_NS_20IMediaRecorderClientE;

/* Symbol: _ZN7android8Renderer14DecoderContext19releaseOutputBufferEm */
/* Demangled: android::Renderer::DecoderContext::releaseOutputBuffer(unsigned long) */
int _ZN7android8Renderer14DecoderContext19releaseOutputBufferEm(void);

/* Symbol: _ZN7android8Renderer13AudioRenderer16writeNonBlockingEPKhm */
/* Demangled: android::Renderer::AudioRenderer::writeNonBlocking(unsigned char const*, unsigned long) */
int _ZN7android8Renderer13AudioRenderer16writeNonBlockingEPKhm(void);

/* Symbol: _ZN7android8Renderer13AudioRendererC1ERKNS_2spINS0_14DecoderContextEEENS2_INS_8AMessageEEE */
/* Demangled: android::Renderer::AudioRenderer::AudioRenderer(android::sp<android::Renderer::DecoderContext> const&, android::sp<android::AMessage>) */
int _ZN7android8Renderer13AudioRendererC1ERKNS_2spINS0_14DecoderContextEEENS2_INS_8AMessageEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE10do_destroyEPvm(void);

/* Symbol: _ZTVN7android4SinkE */
/* Demangled: vtable for android::Sink */
extern void* _ZTVN7android4SinkE;

/* Symbol: _ZN7android8RendererC1EiRKNS_2spINS_22IGraphicBufferProducerEEERKNS1_INS_8AMessageEEE */
/* Demangled: android::Renderer::Renderer(int, android::sp<android::IGraphicBufferProducer> const&, android::sp<android::AMessage> const&) */
int _ZN7android8RendererC1EiRKNS_2spINS_22IGraphicBufferProducerEEERKNS1_INS_8AMessageEEE(void);

/* Symbol: _ZN7android4SinkD0Ev */
/* Demangled: android::Sink::~Sink() */
int _ZN7android4SinkD0Ev(void);

/* Symbol: _ZN7android4Sink12initRecorderEPNS_13record_configE */
/* Demangled: android::Sink::initRecorder(android::record_config*) */
int _ZN7android4Sink12initRecorderEPNS_13record_configE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_(void);

/* Symbol: _ZN7android14EncoderContext15queueAccessUnitERKNS_2spINS_7ABufferEEE */
/* Demangled: android::EncoderContext::queueAccessUnit(android::sp<android::ABuffer> const&) */
int _ZN7android14EncoderContext15queueAccessUnitERKNS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN7android8Renderer17onQueueAccessUnitERKNS_2spINS_8AMessageEEE */
/* Demangled: android::Renderer::onQueueAccessUnit(android::sp<android::AMessage> const&) */
int _ZN7android8Renderer17onQueueAccessUnitERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android14EncoderContext17onMessageReceivedERKNS_2spINS_8AMessageEEE */
/* Demangled: android::EncoderContext::onMessageReceived(android::sp<android::AMessage> const&) */
int _ZN7android14EncoderContext17onMessageReceivedERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android11markIDRInfoEPKcbRKNS_2spINS_7ABufferEEE */
/* Demangled: android::markIDRInfo(char const*, bool, android::sp<android::ABuffer> const&) */
int _ZN7android11markIDRInfoEPKcbRKNS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN7android4Sink23dispatchInputAccessUnitENS0_10TrackIndexERNS_2spINS_7ABufferEEE */
/* Demangled: android::Sink::dispatchInputAccessUnit(android::Sink::TrackIndex, android::sp<android::ABuffer>&) */
int _ZN7android4Sink23dispatchInputAccessUnitENS0_10TrackIndexERNS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN7android8Renderer14DecoderContextC1EiRKNS_2spINS_8AMessageEEE */
/* Demangled: android::Renderer::DecoderContext::DecoderContext(int, android::sp<android::AMessage> const&) */
int _ZN7android8Renderer14DecoderContextC1EiRKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN7android14EncoderContextD0Ev */
/* Demangled: android::EncoderContext::~EncoderContext() */
int _ZN7android14EncoderContextD0Ev(void);

/* Symbol: _ZN7android4Sink13convertToMetaEbNS_2spINS_8AMessageEEE */
/* Demangled: android::Sink::convertToMeta(bool, android::sp<android::AMessage>) */
int _ZN7android4Sink13convertToMetaEbNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android4Sink15queueAccessUnitENS0_10TrackIndexERKNS_2spINS_7ABufferEEE */
/* Demangled: android::Sink::queueAccessUnit(android::Sink::TrackIndex, android::sp<android::ABuffer> const&) */
int _ZN7android4Sink15queueAccessUnitENS0_10TrackIndexERKNS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN7android8Renderer14DecoderContext28renderOutputBufferAndReleaseEm */
/* Demangled: android::Renderer::DecoderContext::renderOutputBufferAndRelease(unsigned long) */
int _ZN7android8Renderer14DecoderContext28renderOutputBufferAndReleaseEm(void);

/* Symbol: _ZN7android8Renderer13AudioRenderer17onMessageReceivedERKNS_2spINS_8AMessageEEE */
/* Demangled: android::Renderer::AudioRenderer::onMessageReceived(android::sp<android::AMessage> const&) */
int _ZN7android8Renderer13AudioRenderer17onMessageReceivedERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::sp<android::MediaCodecBuffer> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN7android14EncoderContext11initEncoderEv */
/* Demangled: android::EncoderContext::initEncoder() */
int _ZN7android14EncoderContext11initEncoderEv(void);

/* Symbol: _ZTVN7android4ListINS_2spINS_7ABufferEEEEE */
/* Demangled: vtable for android::List<android::sp<android::ABuffer> > */
extern void* _ZTVN7android4ListINS_2spINS_7ABufferEEEEE;

/* Symbol: _ZTCN7android8Recorder18MediaRecordListnerE8_NS_7BBinderE */
/* Demangled: construction vtable for android::BBinder-in-android::Recorder::MediaRecordListner */
extern void* _ZTCN7android8Recorder18MediaRecordListnerE8_NS_7BBinderE;

/* Symbol: _ZN7android8Renderer13AudioRendererD1Ev */
/* Demangled: android::Renderer::AudioRenderer::~AudioRenderer() */
int _ZN7android8Renderer13AudioRendererD1Ev(void);

/* Symbol: _ZN7android8Renderer27resetSurfaceTransformDegreeEib */
/* Demangled: android::Renderer::resetSurfaceTransformDegree(int, bool) */
int _ZN7android8Renderer27resetSurfaceTransformDegreeEib(void);

/* Symbol: _ZN7android8Recorder14setAudioSourceEiRNS_2spINS_8AMessageEEE */
/* Demangled: android::Recorder::setAudioSource(int, android::sp<android::AMessage>&) */
int _ZN7android8Recorder14setAudioSourceEiRNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZTCN7android8Recorder18MediaRecordListnerE0_NS_11BnInterfaceINS_20IMediaRecorderClientEEE */
/* Demangled: construction vtable for android::BnInterface<android::IMediaRecorderClient>-in-android::Recorder::MediaRecordListner */
extern void* _ZTCN7android8Recorder18MediaRecordListnerE0_NS_11BnInterfaceINS_20IMediaRecorderClientEEE;

/* Symbol: _ZN7android8Renderer14DecoderContext17onMessageReceivedERKNS_2spINS_8AMessageEEE */
/* Demangled: android::Renderer::DecoderContext::onMessageReceived(android::sp<android::AMessage> const&) */
int _ZN7android8Renderer14DecoderContext17onMessageReceivedERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZNK7android14EncoderContext19getInputBufferCountEv */
/* Demangled: android::EncoderContext::getInputBufferCount() const */
int _ZNK7android14EncoderContext19getInputBufferCountEv(void);

/* Symbol: _ZN7android8copyMetaENS_2spINS_8AMessageEEES2_ */
/* Demangled: android::copyMeta(android::sp<android::AMessage>, android::sp<android::AMessage>) */
int _ZN7android8copyMetaENS_2spINS_8AMessageEEES2_(void);

/* Symbol: _ZN7android4Sink6stop_lEi */
/* Demangled: android::Sink::stop_l(int) */
int _ZN7android4Sink6stop_lEi(void);

/* Symbol: _ZN7android8RecorderC1ENS0_13record_mode_tERKNS_2spINS_8AMessageEEE */
/* Demangled: android::Recorder::Recorder(android::Recorder::record_mode_t, android::sp<android::AMessage> const&) */
int _ZN7android8RecorderC1ENS0_13record_mode_tERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN7android8RendererE */
/* Demangled: vtable for android::Renderer */
extern void* _ZTVN7android8RendererE;

/* Symbol: _ZN7android8Recorder13setParametersERKNS_2spINS_8AMessageEEE */
/* Demangled: android::Recorder::setParameters(android::sp<android::AMessage> const&) */
int _ZN7android8Recorder13setParametersERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android4SinkC1Eijj */
/* Demangled: android::Sink::Sink(int, unsigned int, unsigned int) */
int _ZN7android4SinkC1Eijj(void);

/* Symbol: _ZN7android8RecorderD2Ev */
/* Demangled: android::Recorder::~Recorder() */
int _ZN7android8RecorderD2Ev(void);

/* Symbol: _ZN7android8RendererD1Ev */
/* Demangled: android::Renderer::~Renderer() */
int _ZN7android8RendererD1Ev(void);

/* Symbol: _ZN7android14EncoderContext10doMoreWorkEv */
/* Demangled: android::EncoderContext::doMoreWork() */
int _ZN7android14EncoderContext10doMoreWorkEv(void);

/* Symbol: _ZN7android8Renderer14DecoderContextD2Ev */
/* Demangled: android::Renderer::DecoderContext::~DecoderContext() */
int _ZN7android8Renderer14DecoderContextD2Ev(void);

/* Symbol: _ZN7android4Sink26postAsynAndWaitReturnErrorERKNS_2spINS_8AMessageEEE */
/* Demangled: android::Sink::postAsynAndWaitReturnError(android::sp<android::AMessage> const&) */
int _ZN7android4Sink26postAsynAndWaitReturnErrorERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::Sink::TrackIndex, android::Sink::TrackInfo*> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN7android8Renderer13AudioRenderer21getAudioPlayOutTimeUsEv */
/* Demangled: android::Renderer::AudioRenderer::getAudioPlayOutTimeUs() */
int _ZN7android8Renderer13AudioRenderer21getAudioPlayOutTimeUsEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorINS_2spINS_16MediaCodecBufferEEEEE */
/* Demangled: vtable for android::Vector<android::sp<android::MediaCodecBuffer> > */
extern void* _ZTVN7android6VectorINS_2spINS_16MediaCodecBufferEEEEE;

/* Symbol: _ZN7android8Renderer14DecoderContext11notifyErrorEi */
/* Demangled: android::Renderer::DecoderContext::notifyError(int) */
int _ZN7android8Renderer14DecoderContext11notifyErrorEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN7android8Recorder4stopEv */
/* Demangled: android::Recorder::stop() */
int _ZN7android8Recorder4stopEv(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE10do_destroyEPvm */
/* Demangled: android::Vector<android::sp<android::MediaCodecBuffer> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE10do_destroyEPvm(void);

/* Symbol: _ZN7android14EncoderContext9IsSilenceERKNS_2spINS_7ABufferEEE */
/* Demangled: android::EncoderContext::IsSilence(android::sp<android::ABuffer> const&) */
int _ZN7android14EncoderContext9IsSilenceERKNS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN7android4Sink9SetNotifyERKNS_2spINS_8AMessageEEE */
/* Demangled: android::Sink::SetNotify(android::sp<android::AMessage> const&) */
int _ZN7android4Sink9SetNotifyERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZTTN7android8Recorder18MediaRecordListnerE */
/* Demangled: VTT for android::Recorder::MediaRecordListner */
extern void* _ZTTN7android8Recorder18MediaRecordListnerE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::EncoderContext> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN7android8Recorder15setVideoEncoderEi */
/* Demangled: android::Recorder::setVideoEncoder(int) */
int _ZN7android8Recorder15setVideoEncoderEi(void);

/* Symbol: _ZN7android4Sink23addAccessUnitToPCMMixerENS0_10TrackIndexERKNS_2spINS_7ABufferEEE */
/* Demangled: android::Sink::addAccessUnitToPCMMixer(android::Sink::TrackIndex, android::sp<android::ABuffer> const&) */
int _ZN7android4Sink23addAccessUnitToPCMMixerENS0_10TrackIndexERKNS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN7android8Recorder15queueAccessUnitEiRKNS_2spINS_7ABufferEEE */
/* Demangled: android::Recorder::queueAccessUnit(int, android::sp<android::ABuffer> const&) */
int _ZN7android8Recorder15queueAccessUnitEiRKNS_2spINS_7ABufferEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::Sink::TrackIndex, android::Sink::TrackInfo*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE10do_compareEPKvS9_(void);

/* Symbol: _ZTVN7android4ListINS_8Renderer13AudioRenderer10BufferInfoEEE */
/* Demangled: vtable for android::List<android::Renderer::AudioRenderer::BufferInfo> */
extern void* _ZTVN7android4ListINS_8Renderer13AudioRenderer10BufferInfoEEE;

/* Symbol: _ZN7android8Renderer13AudioRenderer23schedulePushIfNecessaryEv */
/* Demangled: android::Renderer::AudioRenderer::schedulePushIfNecessary() */
int _ZN7android8Renderer13AudioRenderer23schedulePushIfNecessaryEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm(void);

/* Symbol: _ZN7android8Recorder14addAudioSourceEb */
/* Demangled: android::Recorder::addAudioSource(bool) */
int _ZN7android8Recorder14addAudioSourceEb(void);

/* Symbol: _ZN7android8Renderer14DecoderContext16queueInputBufferERKNS_2spINS_7ABufferEEE */
/* Demangled: android::Renderer::DecoderContext::queueInputBuffer(android::sp<android::ABuffer> const&) */
int _ZN7android8Renderer14DecoderContext16queueInputBufferERKNS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN7android4Sink12initLooper_lEv */
/* Demangled: android::Sink::initLooper_l() */
int _ZN7android4Sink12initLooper_lEv(void);

/* Symbol: _ZN7android4Sink17onMessageReceivedERKNS_2spINS_8AMessageEEE */
/* Demangled: android::Sink::onMessageReceived(android::sp<android::AMessage> const&) */
int _ZN7android4Sink17onMessageReceivedERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::Sink::TrackIndex, android::Sink::TrackInfo*> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN7android8Recorder20writeSamplesToMuxterEiRNS_2spINS_7ABufferEEE */
/* Demangled: android::Recorder::writeSamplesToMuxter(int, android::sp<android::ABuffer>&) */
int _ZN7android8Recorder20writeSamplesToMuxterEiRNS_2spINS_7ABufferEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE10do_compareEPKvS8_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::EncoderContext> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE10do_compareEPKvS8_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE12do_constructEPvm(void);

/* Symbol: _ZN7android8Recorder15setOutputFormatEi */
/* Demangled: android::Recorder::setOutputFormat(int) */
int _ZN7android8Recorder15setOutputFormatEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN7android14EncoderContextC1ERKNS_2spINS_8AMessageEEERKNS1_INS_7ALooperEEES5_S5_ */
/* Demangled: android::EncoderContext::EncoderContext(android::sp<android::AMessage> const&, android::sp<android::ALooper> const&, android::sp<android::AMessage> const&, android::sp<android::AMessage> const&) */
int _ZN7android14EncoderContextC1ERKNS_2spINS_8AMessageEEERKNS1_INS_7ALooperEEES5_S5_(void);

/* Symbol: _ZN7android8Renderer13AudioRenderer11onPushAudioEv */
/* Demangled: android::Renderer::AudioRenderer::onPushAudio() */
int _ZN7android8Renderer13AudioRenderer11onPushAudioEv(void);

/* Symbol: _ZNK7android14EncoderContext15getVideoBitrateEv */
/* Demangled: android::EncoderContext::getVideoBitrate() const */
int _ZNK7android14EncoderContext15getVideoBitrateEv(void);

/* Symbol: _ZN7android8Renderer13AudioRenderer16queueInputBufferEmlRKNS_2spINS_16MediaCodecBufferEEE */
/* Demangled: android::Renderer::AudioRenderer::queueInputBuffer(unsigned long, long, android::sp<android::MediaCodecBuffer> const&) */
int _ZN7android8Renderer13AudioRenderer16queueInputBufferEmlRKNS_2spINS_16MediaCodecBufferEEE(void);

/* Symbol: _ZN7android8RendererC2EiRKNS_2spINS_22IGraphicBufferProducerEEERKNS1_INS_8AMessageEEE */
/* Demangled: android::Renderer::Renderer(int, android::sp<android::IGraphicBufferProducer> const&, android::sp<android::AMessage> const&) */
int _ZN7android8RendererC2EiRKNS_2spINS_22IGraphicBufferProducerEEERKNS1_INS_8AMessageEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE10do_compareEPKvS5_(void);

/* Symbol: _ZN7android4SinkD2Ev */
/* Demangled: android::Sink::~Sink() */
int _ZN7android4SinkD2Ev(void);

/* Symbol: _ZN7android4Sink18findAndParseCsdNALERNS_2spINS_7ABufferEEEbPiS5_S5_S5_S5_S5_ */
/* Demangled: android::Sink::findAndParseCsdNAL(android::sp<android::ABuffer>&, bool, int*, int*, int*, int*, int*, int*) */
int _ZN7android4Sink18findAndParseCsdNALERNS_2spINS_7ABufferEEEbPiS5_S5_S5_S5_S5_(void);

/* Symbol: _ZN7android4Sink10stopRecordEv */
/* Demangled: android::Sink::stopRecord() */
int _ZN7android4Sink10stopRecordEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::EncoderContext> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN7android4ListImEE */
/* Demangled: vtable for android::List<unsigned long> */
extern void* _ZTVN7android4ListImEE;

/* Symbol: _ZN7android8Recorder14addVideoSourceEb */
/* Demangled: android::Recorder::addVideoSource(bool) */
int _ZN7android8Recorder14addVideoSourceEb(void);

/* Symbol: _ZN7android8Renderer13AudioRendererD0Ev */
/* Demangled: android::Renderer::AudioRenderer::~AudioRenderer() */
int _ZN7android8Renderer13AudioRendererD0Ev(void);

/* Symbol: _ZN7android14EncoderContext14releaseEncoderEv */
/* Demangled: android::EncoderContext::releaseEncoder() */
int _ZN7android14EncoderContext14releaseEncoderEv(void);

/* Symbol: _ZN7android14EncoderContextD2Ev */
/* Demangled: android::EncoderContext::~EncoderContext() */
int _ZN7android14EncoderContextD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::Sink::TrackIndex, android::Sink::TrackInfo*> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN7android4Sink14setSinkCongfigEPNS_13audio_dec_fmtEPNS_13video_dec_fmtE */
/* Demangled: android::Sink::setSinkCongfig(android::audio_dec_fmt*, android::video_dec_fmt*) */
int _ZN7android4Sink14setSinkCongfigEPNS_13audio_dec_fmtEPNS_13video_dec_fmtE(void);

/* Symbol: _ZN7android8RecorderD1Ev */
/* Demangled: android::Recorder::~Recorder() */
int _ZN7android8RecorderD1Ev(void);

/* Symbol: _ZN7android8RendererD0Ev */
/* Demangled: android::Renderer::~Renderer() */
int _ZN7android8RendererD0Ev(void);

/* Symbol: _ZN7android8Renderer15onDecoderNotifyERKNS_2spINS_8AMessageEEE */
/* Demangled: android::Renderer::onDecoderNotify(android::sp<android::AMessage> const&) */
int _ZN7android8Renderer15onDecoderNotifyERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android14EncoderContext15requestIDRFrameEv */
/* Demangled: android::EncoderContext::requestIDRFrame() */
int _ZN7android14EncoderContext15requestIDRFrameEv(void);

/* Symbol: _ZN7android4Sink22findAndParseCsdNALHEVCERNS_2spINS_7ABufferEEEbPiS5_ */
/* Demangled: android::Sink::findAndParseCsdNALHEVC(android::sp<android::ABuffer>&, bool, int*, int*) */
int _ZN7android4Sink22findAndParseCsdNALHEVCERNS_2spINS_7ABufferEEEbPiS5_(void);

/* Symbol: _ZN7android8Recorder7prepareEv */
/* Demangled: android::Recorder::prepare() */
int _ZN7android8Recorder7prepareEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::Sink::TrackIndex, android::Sink::TrackInfo*> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE10do_destroyEPvm(void);

/* Symbol: _ZN7android8RecorderC2ENS0_13record_mode_tERKNS_2spINS_8AMessageEEE */
/* Demangled: android::Recorder::Recorder(android::Recorder::record_mode_t, android::sp<android::AMessage> const&) */
int _ZN7android8RecorderC2ENS0_13record_mode_tERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android8Renderer14DecoderContextD1Ev */
/* Demangled: android::Renderer::DecoderContext::~DecoderContext() */
int _ZN7android8Renderer14DecoderContextD1Ev(void);

/* Symbol: _ZTVN7android4ListINS_8Renderer10OutputInfoEEE */
/* Demangled: vtable for android::List<android::Renderer::OutputInfo> */
extern void* _ZTVN7android4ListINS_8Renderer10OutputInfoEEE;

/* Symbol: _ZN7android8Renderer17internalSetFormatEiRKNS_2spINS_8AMessageEEE */
/* Demangled: android::Renderer::internalSetFormat(int, android::sp<android::AMessage> const&) */
int _ZN7android8Renderer17internalSetFormatEiRKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android8Recorder15setAudioEncoderEi */
/* Demangled: android::Recorder::setAudioEncoder(int) */
int _ZN7android8Recorder15setAudioEncoderEi(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE12do_constructEPvm */
/* Demangled: android::Vector<android::sp<android::MediaCodecBuffer> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android14EncoderContext15getOutputFormatEv */
/* Demangled: android::EncoderContext::getOutputFormat() const */
int _ZNK7android14EncoderContext15getOutputFormatEv(void);

/* Symbol: _ZN7android4Sink4stopEi */
/* Demangled: android::Sink::stop(int) */
int _ZN7android4Sink4stopEi(void);

/* Symbol: _ZN7android4Sink12handlePCMMixEv */
/* Demangled: android::Sink::handlePCMMix() */
int _ZN7android4Sink12handlePCMMixEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::Sink::TrackIndex, android::Sink::TrackInfo*> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<android::EncoderContext> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEEE;

/* Symbol: _ZN7android8Recorder13setOutputFileEPKc */
/* Demangled: android::Recorder::setOutputFile(char const*) */
int _ZN7android8Recorder13setOutputFileEPKc(void);

/* Symbol: _ZN7android14EncoderContext9stopAsyncEv */
/* Demangled: android::EncoderContext::stopAsync() */
int _ZN7android14EncoderContext9stopAsyncEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::EncoderContext> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZTCN7android8Recorder18MediaRecordListnerE0_NS_10IInterfaceE */
/* Demangled: construction vtable for android::IInterface-in-android::Recorder::MediaRecordListner */
extern void* _ZTCN7android8Recorder18MediaRecordListnerE0_NS_10IInterfaceE;

/* Symbol: _ZN7android8Renderer9setFormatEiRKNS_2spINS_8AMessageEEE */
/* Demangled: android::Renderer::setFormat(int, android::sp<android::AMessage> const&) */
int _ZN7android8Renderer9setFormatEiRKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm(void);

/* Symbol: _ZTCN7android8Recorder18MediaRecordListnerE8_NS_7IBinderE */
/* Demangled: construction vtable for android::IBinder-in-android::Recorder::MediaRecordListner */
extern void* _ZTCN7android8Recorder18MediaRecordListnerE8_NS_7IBinderE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::EncoderContext> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN7android8Recorder13setOutputFileEill */
/* Demangled: android::Recorder::setOutputFile(int, long, long) */
int _ZN7android8Recorder13setOutputFileEill(void);

/* Symbol: _ZTVN7android8AHandlerE */
/* Demangled: vtable for android::AHandler */
extern void* _ZTVN7android8AHandlerE;

/* Symbol: _ZN7android8Renderer15queueAccessUnitEiRKNS_2spINS_7ABufferEEE */
/* Demangled: android::Renderer::queueAccessUnit(int, android::sp<android::ABuffer> const&) */
int _ZN7android8Renderer15queueAccessUnitEiRKNS_2spINS_7ABufferEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::Sink::TrackIndex, android::Sink::TrackInfo*> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_4Sink10TrackIndexEPNS2_9TrackInfoEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIliEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, int> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIliEEEE;

/* Symbol: _ZN7android8Renderer22dequeueTrackAccessUnitEi */
/* Demangled: android::Renderer::dequeueTrackAccessUnit(int) */
int _ZN7android8Renderer22dequeueTrackAccessUnitEi(void);

/* Symbol: _ZN7android8Renderer4stopEi */
/* Demangled: android::Renderer::stop(int) */
int _ZN7android8Renderer4stopEi(void);

/* Symbol: _ZN7android8Recorder17preWriteCsdBufferEv */
/* Demangled: android::Recorder::preWriteCsdBuffer() */
int _ZN7android8Recorder17preWriteCsdBufferEv(void);

/* Symbol: _ZN7android8Renderer17queueOutputBufferEimlRKNS_2spINS_16MediaCodecBufferEEE */
/* Demangled: android::Renderer::queueOutputBuffer(int, unsigned long, long, android::sp<android::MediaCodecBuffer> const&) */
int _ZN7android8Renderer17queueOutputBufferEimlRKNS_2spINS_16MediaCodecBufferEEE(void);

/* Symbol: _ZN7android4Sink20compareSettingChangeEPNS_13audio_dec_fmtEPNS_13video_dec_fmtE */
/* Demangled: android::Sink::compareSettingChange(android::audio_dec_fmt*, android::video_dec_fmt*) */
int _ZN7android4Sink20compareSettingChangeEPNS_13audio_dec_fmtEPNS_13video_dec_fmtE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN7android8Recorder17setAVTimeStampMapEll */
/* Demangled: android::Recorder::setAVTimeStampMap(long, long) */
int _ZN7android8Recorder17setAVTimeStampMapEll(void);

/* Symbol: _ZN7android8Renderer14DecoderContext24queueDecoderInputBuffersEv */
/* Demangled: android::Renderer::DecoderContext::queueDecoderInputBuffers() */
int _ZN7android8Renderer14DecoderContext24queueDecoderInputBuffersEv(void);

/* Symbol: _ZN7android8Renderer13AudioRendererC2ERKNS_2spINS0_14DecoderContextEEENS2_INS_8AMessageEEE */
/* Demangled: android::Renderer::AudioRenderer::AudioRenderer(android::sp<android::Renderer::DecoderContext> const&, android::sp<android::AMessage>) */
int _ZN7android8Renderer13AudioRendererC2ERKNS_2spINS0_14DecoderContextEEENS2_INS_8AMessageEEE(void);

/* Symbol: _ZN7android14EncoderContext24feedRawAudioInputBuffersEv */
/* Demangled: android::EncoderContext::feedRawAudioInputBuffers() */
int _ZN7android14EncoderContext24feedRawAudioInputBuffersEv(void);

/* Symbol: _ZN7android4SinkD1Ev */
/* Demangled: android::Sink::~Sink() */
int _ZN7android4SinkD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::EncoderContext> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_14EncoderContextEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN7android4ListIlEE */
/* Demangled: vtable for android::List<long> */
extern void* _ZTVN7android4ListIlEE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIllEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, long> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIllEEEE;

/* Symbol: _ZN7android8Renderer21getAudioPlayOutTimeUsElPlS1_ */
/* Demangled: android::Renderer::getAudioPlayOutTimeUs(long, long*, long*) */
int _ZN7android8Renderer21getAudioPlayOutTimeUsElPlS1_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN7android14EncoderContextC2ERKNS_2spINS_8AMessageEEERKNS1_INS_7ALooperEEES5_S5_ */
/* Demangled: android::EncoderContext::EncoderContext(android::sp<android::AMessage> const&, android::sp<android::ALooper> const&, android::sp<android::AMessage> const&, android::sp<android::AMessage> const&) */
int _ZN7android14EncoderContextC2ERKNS_2spINS_8AMessageEEERKNS1_INS_7ALooperEEES5_S5_(void);

/* Symbol: _ZTVN7android14EncoderContextE */
/* Demangled: vtable for android::EncoderContext */
extern void* _ZTVN7android14EncoderContextE;

/* Symbol: _ZN7android4Sink14waitForNextNalERNS_2spINS_7ABufferEEE */
/* Demangled: android::Sink::waitForNextNal(android::sp<android::ABuffer>&) */
int _ZN7android4Sink14waitForNextNalERNS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN7android8Renderer14DecoderContextC2EiRKNS_2spINS_8AMessageEEE */
/* Demangled: android::Renderer::DecoderContext::DecoderContext(int, android::sp<android::AMessage> const&) */
int _ZN7android8Renderer14DecoderContextC2EiRKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android14EncoderContextD1Ev */
/* Demangled: android::EncoderContext::~EncoderContext() */
int _ZN7android14EncoderContextD1Ev(void);

/* Symbol: _ZN7android8Renderer14DecoderContext4initERKNS_2spINS_8AMessageEEERKNS2_INS_7SurfaceEEE */
/* Demangled: android::Renderer::DecoderContext::init(android::sp<android::AMessage> const&, android::sp<android::Surface> const&) */
int _ZN7android8Renderer14DecoderContext4initERKNS_2spINS_8AMessageEEERKNS2_INS_7SurfaceEEE(void);

/* Symbol: _ZTVN7android8Renderer13AudioRendererE */
/* Demangled: vtable for android::Renderer::AudioRenderer */
extern void* _ZTVN7android8Renderer13AudioRendererE;

/* Symbol: _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::sp<android::MediaCodecBuffer> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN7android14EncoderContext23feedEncoderInputBuffersEv */
/* Demangled: android::EncoderContext::feedEncoderInputBuffers() */
int _ZN7android14EncoderContext23feedEncoderInputBuffersEv(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBSINK_H */
