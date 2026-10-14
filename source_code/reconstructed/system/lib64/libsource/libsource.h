/*
 * Reverse-Engineered ABI Specification for: libsource.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libsource.so
 */

#ifndef BEGONIA_RE_LIBSOURCE_H
#define BEGONIA_RE_LIBSOURCE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android6Source23evaluateBitrateAdaptiveEi */
/* Demangled: android::Source::evaluateBitrateAdaptive(int) */
int _ZN7android6Source23evaluateBitrateAdaptiveEi(void);

/* Symbol: _ZN7android14VTCameraSource16setCurrentVtModeENS_12VT_CALL_MODEE */
/* Demangled: android::VTCameraSource::setCurrentVtMode(android::VT_CALL_MODE) */
int _ZN7android14VTCameraSource16setCurrentVtModeENS_12VT_CALL_MODEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE10do_compareEPKvS5_(void);

/* Symbol: _ZN7android6Source24refineWhByRotationDegreeEPiS1_i */
/* Demangled: android::Source::refineWhByRotationDegree(int*, int*, int) */
int _ZN7android6Source24refineWhByRotationDegreeEPiS1_i(void);

/* Symbol: _ZN7android14VTCameraSource19createInputProducerEPNS_2spINS_22IGraphicBufferProducerEEEi */
/* Demangled: android::VTCameraSource::createInputProducer(android::sp<android::IGraphicBufferProducer>*, int) */
int _ZN7android14VTCameraSource19createInputProducerEPNS_2spINS_22IGraphicBufferProducerEEEi(void);

/* Symbol: _ZN7android13EncoderSource16setAvpfParamtersERKNS_2spINS_8AMessageEEE */
/* Demangled: android::EncoderSource::setAvpfParamters(android::sp<android::AMessage> const&) */
int _ZN7android13EncoderSource16setAvpfParamtersERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android13EncoderSource6PullerD2Ev */
/* Demangled: android::EncoderSource::Puller::~Puller() */
int _ZN7android13EncoderSource6PullerD2Ev(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::sp<android::MediaCodecBuffer> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN7android19MediaBufferObserverE */
/* Demangled: vtable for android::MediaBufferObserver */
extern void* _ZTVN7android19MediaBufferObserverE;

/* Symbol: _ZN7android6Source17setupVideoEncoderENS_2spINS_11MediaSourceEEE */
/* Demangled: android::Source::setupVideoEncoder(android::sp<android::MediaSource>) */
int _ZN7android6Source17setupVideoEncoderENS_2spINS_11MediaSourceEEE(void);

/* Symbol: _ZN7android13EncoderSource9getFormatEv */
/* Demangled: android::EncoderSource::getFormat() */
int _ZN7android13EncoderSource9getFormatEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::EncoderSource::Puller::FramePostDropCnt> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE12do_constructEPvm(void);

/* Symbol: _ZThn8_N7android14VTCameraSource20signalBufferReturnedEPNS_15MediaBufferBaseE */
/* Demangled: non-virtual thunk to android::VTCameraSource::signalBufferReturned(android::MediaBufferBase*) */
int _ZThn8_N7android14VTCameraSource20signalBufferReturnedEPNS_15MediaBufferBaseE(void);

/* Symbol: _ZTVN7android4ListIPNS_15MediaBufferBaseEEE */
/* Demangled: vtable for android::List<android::MediaBufferBase*> */
extern void* _ZTVN7android4ListIPNS_15MediaBufferBaseEEE;

/* Symbol: _ZN7android13EncoderSource7Rotator9setNotifyERKNS_2spINS_8AMessageEEE */
/* Demangled: android::EncoderSource::Rotator::setNotify(android::sp<android::AMessage> const&) */
int _ZN7android13EncoderSource7Rotator9setNotifyERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android13EncoderSource6Puller31postSynchronouslyAndReturnErrorERKNS_2spINS_8AMessageEEE */
/* Demangled: android::EncoderSource::Puller::postSynchronouslyAndReturnError(android::sp<android::AMessage> const&) */
int _ZN7android13EncoderSource6Puller31postSynchronouslyAndReturnErrorERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android13EncoderSourceC2ERKNS_2spINS_7ALooperEEERKNS1_INS_8AMessageEEERKNS1_INS_11MediaSourceEEES9_i */
/* Demangled: android::EncoderSource::EncoderSource(android::sp<android::ALooper> const&, android::sp<android::AMessage> const&, android::sp<android::MediaSource> const&, android::sp<android::AMessage> const&, int) */
int _ZN7android13EncoderSourceC2ERKNS_2spINS_7ALooperEEERKNS1_INS_8AMessageEEERKNS1_INS_11MediaSourceEEES9_i(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::EncoderSource::Puller::FramePostDropCnt> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN7android6Source17onMessageReceivedERKNS_2spINS_8AMessageEEE */
/* Demangled: android::Source::onMessageReceived(android::sp<android::AMessage> const&) */
int _ZN7android6Source17onMessageReceivedERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android13EncoderSource7Rotator7flush_lEii */
/* Demangled: android::EncoderSource::Rotator::flush_l(int, int) */
int _ZN7android13EncoderSource7Rotator7flush_lEii(void);

/* Symbol: _ZN7android13EncoderSource14releaseEncoderEv */
/* Demangled: android::EncoderSource::releaseEncoder() */
int _ZN7android13EncoderSource14releaseEncoderEv(void);

/* Symbol: _ZTVN7android14VTCameraSourceE */
/* Demangled: vtable for android::VTCameraSource */
extern void* _ZTVN7android14VTCameraSourceE;

/* Symbol: _ZN7android6Source10disableCVOEb */
/* Demangled: android::Source::disableCVO(bool) */
int _ZN7android6Source10disableCVOEb(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm(void);

/* Symbol: _ZN7android13EncoderSource7Rotator5pauseEv */
/* Demangled: android::EncoderSource::Rotator::pause() */
int _ZN7android13EncoderSource7Rotator5pauseEv(void);

/* Symbol: _ZN7android14VTCameraSource20signalBufferReturnedEPNS_15MediaBufferBaseE */
/* Demangled: android::VTCameraSource::signalBufferReturned(android::MediaBufferBase*) */
int _ZN7android14VTCameraSource20signalBufferReturnedEPNS_15MediaBufferBaseE(void);

/* Symbol: _ZN7android14VTCameraSource24setUseAbsoluteTimestampsEv */
/* Demangled: android::VTCameraSource::setUseAbsoluteTimestamps() */
int _ZN7android14VTCameraSource24setUseAbsoluteTimestampsEv(void);

/* Symbol: _ZN7android14VTCameraSourceD0Ev */
/* Demangled: android::VTCameraSource::~VTCameraSource() */
int _ZN7android14VTCameraSourceD0Ev(void);

/* Symbol: _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::sp<android::GraphicBuffer> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN7android13EncoderSourceC1ERKNS_2spINS_7ALooperEEERKNS1_INS_8AMessageEEERKNS1_INS_11MediaSourceEEES9_i */
/* Demangled: android::EncoderSource::EncoderSource(android::sp<android::ALooper> const&, android::sp<android::AMessage> const&, android::sp<android::MediaSource> const&, android::sp<android::AMessage> const&, int) */
int _ZN7android13EncoderSourceC1ERKNS_2spINS_7ALooperEEERKNS1_INS_8AMessageEEERKNS1_INS_11MediaSourceEEES9_i(void);

/* Symbol: _ZN7android13EncoderSourceD1Ev */
/* Demangled: android::EncoderSource::~EncoderSource() */
int _ZN7android13EncoderSourceD1Ev(void);

/* Symbol: _ZN7android13EncoderSource19requestFullIDRFrameEv */
/* Demangled: android::EncoderSource::requestFullIDRFrame() */
int _ZN7android13EncoderSource19requestFullIDRFrameEv(void);

/* Symbol: _ZN7android14VTCameraSource5startEPNS_8MetaDataE */
/* Demangled: android::VTCameraSource::start(android::MetaData*) */
int _ZN7android14VTCameraSource5startEPNS_8MetaDataE(void);

/* Symbol: _ZTVN7android17MediaBufferHolderE */
/* Demangled: vtable for android::MediaBufferHolder */
extern void* _ZTVN7android17MediaBufferHolderE;

/* Symbol: _ZTVN7android13EncoderSource6PullerE */
/* Demangled: vtable for android::EncoderSource::Puller */
extern void* _ZTVN7android13EncoderSource6PullerE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIliEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, int> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIliEEEE;

/* Symbol: _ZN7android14VTCameraSource25setFrameAvailableListenerERKNS_2spINS0_22FrameAvailableListenerEEE */
/* Demangled: android::VTCameraSource::setFrameAvailableListener(android::sp<android::VTCameraSource::FrameAvailableListener> const&) */
int _ZN7android14VTCameraSource25setFrameAvailableListenerERKNS_2spINS0_22FrameAvailableListenerEEE(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE12do_constructEPvm */
/* Demangled: android::Vector<android::sp<android::GraphicBuffer> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE12do_constructEPvm(void);

/* Symbol: _ZN7android6Source25setSourceResolutionDegreeEv */
/* Demangled: android::Source::setSourceResolutionDegree() */
int _ZN7android6Source25setSourceResolutionDegreeEv(void);

/* Symbol: _ZN7android13EncoderSource5pauseEv */
/* Demangled: android::EncoderSource::pause() */
int _ZN7android13EncoderSource5pauseEv(void);

/* Symbol: _ZN7android13EncoderSource6resumeEv */
/* Demangled: android::EncoderSource::resume() */
int _ZN7android13EncoderSource6resumeEv(void);

/* Symbol: _ZN7android13EncoderSource7RotatorD1Ev */
/* Demangled: android::EncoderSource::Rotator::~Rotator() */
int _ZN7android13EncoderSource7RotatorD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<android::MediaCodecBuffer>, unsigned long> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN7android14VTCameraSource4stopEv */
/* Demangled: android::VTCameraSource::stop() */
int _ZN7android14VTCameraSource4stopEv(void);

/* Symbol: _ZNK7android14VTCameraSource28metaDataStoredInVideoBuffersEv */
/* Demangled: android::VTCameraSource::metaDataStoredInVideoBuffers() const */
int _ZNK7android14VTCameraSource28metaDataStoredInVideoBuffersEv(void);

/* Symbol: _ZN7android6Source9SetNotifyERKNS_2spINS_8AMessageEEE */
/* Demangled: android::Source::SetNotify(android::sp<android::AMessage> const&) */
int _ZN7android6Source9SetNotifyERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZTVN7android4ListINS_2spINS_16MediaCodecBufferEEEEE */
/* Demangled: vtable for android::List<android::sp<android::MediaCodecBuffer> > */
extern void* _ZTVN7android4ListINS_2spINS_16MediaCodecBufferEEEEE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, android::EncoderSource::Puller::FramePostDropCnt> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEEE;

/* Symbol: _ZN7android14VTCameraSource12getTimestampEv */
/* Demangled: android::VTCameraSource::getTimestamp() */
int _ZN7android14VTCameraSource12getTimestampEv(void);

/* Symbol: _ZN7android13EncoderSource6Puller5startEv */
/* Demangled: android::EncoderSource::Puller::start() */
int _ZN7android13EncoderSource6Puller5startEv(void);

/* Symbol: _ZTVN7android6VectorINS_2spINS_13GraphicBufferEEEEE */
/* Demangled: vtable for android::Vector<android::sp<android::GraphicBuffer> > */
extern void* _ZTVN7android6VectorINS_2spINS_13GraphicBufferEEEEE;

/* Symbol: _ZN7android13EncoderSource7Rotator5flushEii */
/* Demangled: android::EncoderSource::Rotator::flush(int, int) */
int _ZN7android13EncoderSource7Rotator5flushEii(void);

/* Symbol: _ZN7android13EncoderSource6Puller9setNotifyERKNS_2spINS_8AMessageEEE */
/* Demangled: android::EncoderSource::Puller::setNotify(android::sp<android::AMessage> const&) */
int _ZN7android13EncoderSource6Puller9setNotifyERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android13EncoderSource6Puller9setConfigERKNS_2spINS_8AMessageEEE */
/* Demangled: android::EncoderSource::Puller::setConfig(android::sp<android::AMessage> const&) */
int _ZN7android13EncoderSource6Puller9setConfigERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android13EncoderSource7RotatorC1EiRKNS_2spINS_7ALooperEEE */
/* Demangled: android::EncoderSource::Rotator::Rotator(int, android::sp<android::ALooper> const&) */
int _ZN7android13EncoderSource7RotatorC1EiRKNS_2spINS_7ALooperEEE(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE10do_destroyEPvm */
/* Demangled: android::Vector<android::sp<android::MediaCodecBuffer> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE10do_destroyEPvm(void);

/* Symbol: _ZN7android13EncoderSource14releaseABufferERNS_2spINS_16MediaCodecBufferEEE */
/* Demangled: android::EncoderSource::releaseABuffer(android::sp<android::MediaCodecBuffer>&) */
int _ZN7android13EncoderSource14releaseABufferERNS_2spINS_16MediaCodecBufferEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::EncoderSource::Puller::FramePostDropCnt> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::EncoderSource::Puller::FramePostDropCnt> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN7android13EncoderSource6Puller19framerateEvaluationEl */
/* Demangled: android::EncoderSource::Puller::framerateEvaluation(long) */
int _ZN7android13EncoderSource6Puller19framerateEvaluationEl(void);

/* Symbol: _ZN7android13EncoderSource6Puller19dropFrameAsAdaptiveEl */
/* Demangled: android::EncoderSource::Puller::dropFrameAsAdaptive(long) */
int _ZN7android13EncoderSource6Puller19dropFrameAsAdaptiveEl(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<android::MediaCodecBuffer>, unsigned long> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTTN7android14VTCameraSourceE */
/* Demangled: VTT for android::VTCameraSource */
extern void* _ZTTN7android14VTCameraSourceE;

/* Symbol: _ZN7android6Source6stop_lEv */
/* Demangled: android::Source::stop_l() */
int _ZN7android6Source6stop_lEv(void);

/* Symbol: _ZN7android6SourceD0Ev */
/* Demangled: android::Source::~Source() */
int _ZN7android6SourceD0Ev(void);

/* Symbol: _ZN7android6Source20setDeviceRoateDegreeEi */
/* Demangled: android::Source::setDeviceRoateDegree(int) */
int _ZN7android6Source20setDeviceRoateDegreeEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN7android13EncoderSource6Puller6resumeEv */
/* Demangled: android::EncoderSource::Puller::resume() */
int _ZN7android13EncoderSource6Puller6resumeEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<android::MediaCodecBuffer>, unsigned long> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE10do_compareEPKvS8_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<android::MediaCodecBuffer>, unsigned long> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE10do_compareEPKvS8_(void);

/* Symbol: _ZN7android14VTCameraSourceD1Ev */
/* Demangled: android::VTCameraSource::~VTCameraSource() */
int _ZN7android14VTCameraSourceD1Ev(void);

/* Symbol: _ZN7android6Source14gInstanceCountE */
/* Demangled: android::Source::gInstanceCount */
extern void* _ZN7android6Source14gInstanceCountE;

/* Symbol: _ZN7android13EncoderSource7Rotator31postSynchronouslyAndReturnErrorERKNS_2spINS_8AMessageEEE */
/* Demangled: android::EncoderSource::Rotator::postSynchronouslyAndReturnError(android::sp<android::AMessage> const&) */
int _ZN7android13EncoderSource7Rotator31postSynchronouslyAndReturnErrorERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZTVN7android4ListIlEE */
/* Demangled: vtable for android::List<long> */
extern void* _ZTVN7android4ListIlEE;

/* Symbol: _ZN7android13EncoderSourceD2Ev */
/* Demangled: android::EncoderSource::~EncoderSource() */
int _ZN7android13EncoderSourceD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<android::MediaCodecBuffer>, unsigned long> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE12do_constructEPvm(void);

/* Symbol: _ZN7android14VTCameraSource22getMediaBufferHandleVAEPNS_15MediaBufferBaseEPi */
/* Demangled: android::VTCameraSource::getMediaBufferHandleVA(android::MediaBufferBase*, int*) */
int _ZN7android14VTCameraSource22getMediaBufferHandleVAEPNS_15MediaBufferBaseEPi(void);

/* Symbol: _ZN7android6Source21checkSaveSourceConfigEPNS_15video_enc_fmt_tE */
/* Demangled: android::Source::checkSaveSourceConfig(android::video_enc_fmt_t*) */
int _ZN7android6Source21checkSaveSourceConfigEPNS_15video_enc_fmt_tE(void);

/* Symbol: _ZN7android14VTCameraSource25setMaxAcquiredBufferCountEm */
/* Demangled: android::VTCameraSource::setMaxAcquiredBufferCount(unsigned long) */
int _ZN7android14VTCameraSource25setMaxAcquiredBufferCountEm(void);

/* Symbol: _ZN7android13EncoderSource7Rotator6resumeEv */
/* Demangled: android::EncoderSource::Rotator::resume() */
int _ZN7android13EncoderSource7Rotator6resumeEv(void);

/* Symbol: _ZN7android13EncoderSource6PullerC2EiRKNS_2spINS_11MediaSourceEEERKNS2_INS_7ALooperEEE */
/* Demangled: android::EncoderSource::Puller::Puller(int, android::sp<android::MediaSource> const&, android::sp<android::ALooper> const&) */
int _ZN7android13EncoderSource6PullerC2EiRKNS_2spINS_11MediaSourceEEERKNS2_INS_7ALooperEEE(void);

/* Symbol: _ZN7android13EncoderSource12setFramerateEv */
/* Demangled: android::EncoderSource::setFramerate() */
int _ZN7android13EncoderSource12setFramerateEv(void);

/* Symbol: _ZN7android13EncoderSource7flush_lEii */
/* Demangled: android::EncoderSource::flush_l(int, int) */
int _ZN7android13EncoderSource7flush_lEii(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE10do_destroyEPvm */
/* Demangled: android::Vector<android::sp<android::GraphicBuffer> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE10do_destroyEPvm(void);

/* Symbol: _ZN7android13EncoderSource7RotatorD2Ev */
/* Demangled: android::EncoderSource::Rotator::~Rotator() */
int _ZN7android13EncoderSource7RotatorD2Ev(void);

/* Symbol: _ZN7android13EncoderSource6Puller4stopEv */
/* Demangled: android::EncoderSource::Puller::stop() */
int _ZN7android13EncoderSource6Puller4stopEv(void);

/* Symbol: _ZN7android13EncoderSource6PullerC1EiRKNS_2spINS_11MediaSourceEEERKNS2_INS_7ALooperEEE */
/* Demangled: android::EncoderSource::Puller::Puller(int, android::sp<android::MediaSource> const&, android::sp<android::ALooper> const&) */
int _ZN7android13EncoderSource6PullerC1EiRKNS_2spINS_11MediaSourceEEERKNS2_INS_7ALooperEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE10do_destroyEPvm(void);

/* Symbol: _ZN7android6Source18setCodecParametersEi */
/* Demangled: android::Source::setCodecParameters(int) */
int _ZN7android6Source18setCodecParametersEi(void);

/* Symbol: _ZN7android13EncoderSource13checkInitFailEv */
/* Demangled: android::EncoderSource::checkInitFail() */
int _ZN7android13EncoderSource13checkInitFailEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE12do_constructEPvm(void);

/* Symbol: _ZThn16_N7android14VTCameraSource17onBuffersReleasedEv */
/* Demangled: non-virtual thunk to android::VTCameraSource::onBuffersReleased() */
int _ZThn16_N7android14VTCameraSource17onBuffersReleasedEv(void);

/* Symbol: _ZN7android6Source20setCurrentCameraInfoEiii */
/* Demangled: android::Source::setCurrentCameraInfo(int, int, int) */
int _ZN7android6Source20setCurrentCameraInfoEiii(void);

/* Symbol: _ZN7android6Source16adjustEncBitRateEi */
/* Demangled: android::Source::adjustEncBitRate(int) */
int _ZN7android6Source16adjustEncBitRateEi(void);

/* Symbol: _ZTVN7android6SourceE */
/* Demangled: vtable for android::Source */
extern void* _ZTVN7android6SourceE;

/* Symbol: _ZN7android6SourceC1Eij */
/* Demangled: android::Source::Source(int, unsigned int) */
int _ZN7android6SourceC1Eij(void);

/* Symbol: _ZThn16_N7android14VTCameraSource16onFrameAvailableERKNS_10BufferItemE */
/* Demangled: non-virtual thunk to android::VTCameraSource::onFrameAvailable(android::BufferItem const&) */
int _ZThn16_N7android14VTCameraSource16onFrameAvailableERKNS_10BufferItemE(void);

/* Symbol: _ZN7android13EncoderSource7Rotator26createBufferProducerNotifyERNS_2spINS_8AMessageEEES5_ */
/* Demangled: android::EncoderSource::Rotator::createBufferProducerNotify(android::sp<android::AMessage>&, android::sp<android::AMessage>&) */
int _ZN7android13EncoderSource7Rotator26createBufferProducerNotifyERNS_2spINS_8AMessageEEES5_(void);

/* Symbol: _ZN7android13EncoderSource12resetEncoderERKNS_2spINS_8AMessageEEE */
/* Demangled: android::EncoderSource::resetEncoder(android::sp<android::AMessage> const&) */
int _ZN7android13EncoderSource12resetEncoderERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android13EncoderSource34feedEncoderInputBuffersAfterRotateEv */
/* Demangled: android::EncoderSource::feedEncoderInputBuffersAfterRotate() */
int _ZN7android13EncoderSource34feedEncoderInputBuffersAfterRotateEv(void);

/* Symbol: _ZTVN7android8AHandlerE */
/* Demangled: vtable for android::AHandler */
extern void* _ZTVN7android8AHandlerE;

/* Symbol: _ZN7android6SourceD1Ev */
/* Demangled: android::Source::~Source() */
int _ZN7android6SourceD1Ev(void);

/* Symbol: _ZN7android6Source16setAvpfParamtersERKNS_2spINS_8AMessageEEE */
/* Demangled: android::Source::setAvpfParamters(android::sp<android::AMessage> const&) */
int _ZN7android6Source16setAvpfParamtersERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::EncoderSource::Puller::FramePostDropCnt> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<android::MediaCodecBuffer>, unsigned long> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN7android14VTCameraSource17onBuffersReleasedEv */
/* Demangled: android::VTCameraSource::onBuffersReleased() */
int _ZN7android14VTCameraSource17onBuffersReleasedEv(void);

/* Symbol: _ZN7android6Source5StartENS_12VT_CALL_MODEE */
/* Demangled: android::Source::Start(android::VT_CALL_MODE) */
int _ZN7android6Source5StartENS_12VT_CALL_MODEE(void);

/* Symbol: _ZN7android6Source20startEncoderSource_lEv */
/* Demangled: android::Source::startEncoderSource_l() */
int _ZN7android6Source20startEncoderSource_lEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_(void);

/* Symbol: _ZN7android13EncoderSource6PullerD0Ev */
/* Demangled: android::EncoderSource::Puller::~Puller() */
int _ZN7android13EncoderSource6PullerD0Ev(void);

/* Symbol: _ZTVN7android13EncoderSourceE */
/* Demangled: vtable for android::EncoderSource */
extern void* _ZTVN7android13EncoderSourceE;

/* Symbol: _ZN7android13EncoderSource17onMessageReceivedERKNS_2spINS_8AMessageEEE */
/* Demangled: android::EncoderSource::onMessageReceived(android::sp<android::AMessage> const&) */
int _ZN7android13EncoderSource17onMessageReceivedERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::sp<android::MediaCodecBuffer> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN7android14VTCameraSourceD2Ev */
/* Demangled: android::VTCameraSource::~VTCameraSource() */
int _ZN7android14VTCameraSourceD2Ev(void);

/* Symbol: _ZN7android6Source12initLooper_lEv */
/* Demangled: android::Source::initLooper_l() */
int _ZN7android6Source12initLooper_lEv(void);

/* Symbol: _ZN7android6Source17resetRotateDegreeEv */
/* Demangled: android::Source::resetRotateDegree() */
int _ZN7android6Source17resetRotateDegreeEv(void);

/* Symbol: _ZN7android6Source17adjustEncBySignalEv */
/* Demangled: android::Source::adjustEncBySignal() */
int _ZN7android6Source17adjustEncBySignalEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm(void);

/* Symbol: _ZN7android13EncoderSource7Rotator6rotateEv */
/* Demangled: android::EncoderSource::Rotator::rotate() */
int _ZN7android13EncoderSource7Rotator6rotateEv(void);

/* Symbol: _ZN7android14VTCameraSource12setFrameRateEi */
/* Demangled: android::VTCameraSource::setFrameRate(int) */
int _ZN7android14VTCameraSource12setFrameRateEi(void);

/* Symbol: _ZN7android13EncoderSource31postSynchronouslyAndReturnErrorERKNS_2spINS_8AMessageEEE */
/* Demangled: android::EncoderSource::postSynchronouslyAndReturnError(android::sp<android::AMessage> const&) */
int _ZN7android13EncoderSource31postSynchronouslyAndReturnErrorERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE10do_compareEPKvS8_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::EncoderSource::Puller::FramePostDropCnt> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE10do_compareEPKvS8_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE12do_constructEPvm */
/* Demangled: android::Vector<android::sp<android::MediaCodecBuffer> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::sp<android::MediaCodecBuffer> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android14VTCameraSource20passMetadataBuffer_lEPPNS_15MediaBufferBaseEP19ANativeWindowBuffer */
/* Demangled: android::VTCameraSource::passMetadataBuffer_l(android::MediaBufferBase**, ANativeWindowBuffer*) const */
int _ZNK7android14VTCameraSource20passMetadataBuffer_lEPPNS_15MediaBufferBaseEP19ANativeWindowBuffer(void);

/* Symbol: _ZN7android13EncoderSource6Puller17onMessageReceivedERKNS_2spINS_8AMessageEEE */
/* Demangled: android::EncoderSource::Puller::onMessageReceived(android::sp<android::AMessage> const&) */
int _ZN7android13EncoderSource6Puller17onMessageReceivedERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android13EncoderSource10doMoreWorkEii */
/* Demangled: android::EncoderSource::doMoreWork(int, int) */
int _ZN7android13EncoderSource10doMoreWorkEii(void);

/* Symbol: _ZN7android13EncoderSource15requestIDRFrameEv */
/* Demangled: android::EncoderSource::requestIDRFrame() */
int _ZN7android13EncoderSource15requestIDRFrameEv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE;

/* Symbol: _ZN7android6Source15setSourceConfigEPNS_15video_enc_fmt_tE */
/* Demangled: android::Source::setSourceConfig(android::video_enc_fmt_t*) */
int _ZN7android6Source15setSourceConfigEPNS_15video_enc_fmt_tE(void);

/* Symbol: _ZN7android6Source18adjustEncBitRate_lEi */
/* Demangled: android::Source::adjustEncBitRate_l(int) */
int _ZN7android6Source18adjustEncBitRate_lEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN7android13EncoderSource6Puller5pauseEv */
/* Demangled: android::EncoderSource::Puller::pause() */
int _ZN7android13EncoderSource6Puller5pauseEv(void);

/* Symbol: _ZTVN7android6VectorINS_2spINS_16MediaCodecBufferEEEEE */
/* Demangled: vtable for android::Vector<android::sp<android::MediaCodecBuffer> > */
extern void* _ZTVN7android6VectorINS_2spINS_16MediaCodecBufferEEEEE;

/* Symbol: _ZThn8_N7android14VTCameraSourceD0Ev */
/* Demangled: non-virtual thunk to android::VTCameraSource::~VTCameraSource() */
int _ZThn8_N7android14VTCameraSourceD0Ev(void);

/* Symbol: _ZTCN7android14VTCameraSourceE16_NS_16ConsumerListenerE */
/* Demangled: construction vtable for android::ConsumerListener-in-android::VTCameraSource */
extern void* _ZTCN7android14VTCameraSourceE16_NS_16ConsumerListenerE;

/* Symbol: _ZN7android14VTCameraSourceC1Ei */
/* Demangled: android::VTCameraSource::VTCameraSource(int) */
int _ZN7android14VTCameraSourceC1Ei(void);

/* Symbol: _ZN7android6Source26postAsynAndWaitReturnErrorERKNS_2spINS_8AMessageEEE */
/* Demangled: android::Source::postAsynAndWaitReturnError(android::sp<android::AMessage> const&) */
int _ZN7android6Source26postAsynAndWaitReturnErrorERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android13EncoderSource7onStartEv */
/* Demangled: android::EncoderSource::onStart() */
int _ZN7android13EncoderSource7onStartEv(void);

/* Symbol: _ZThn16_N7android14VTCameraSourceD0Ev */
/* Demangled: non-virtual thunk to android::VTCameraSource::~VTCameraSource() */
int _ZThn16_N7android14VTCameraSourceD0Ev(void);

/* Symbol: _ZN7android13EncoderSource18setCodecParametersERKNS_2spINS_8AMessageEEE */
/* Demangled: android::EncoderSource::setCodecParameters(android::sp<android::AMessage> const&) */
int _ZN7android13EncoderSource18setCodecParametersERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::sp<android::MediaCodecBuffer> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTv0_n24_N7android14VTCameraSourceD0Ev */
/* Demangled: virtual thunk to android::VTCameraSource::~VTCameraSource() */
int _ZTv0_n24_N7android14VTCameraSourceD0Ev(void);

/* Symbol: _ZThn16_N7android14VTCameraSource23onSidebandStreamChangedEv */
/* Demangled: non-virtual thunk to android::VTCameraSource::onSidebandStreamChanged() */
int _ZThn16_N7android14VTCameraSource23onSidebandStreamChangedEv(void);

/* Symbol: _ZN7android6Source22getBufferQueueProducerEPNS_2spINS_22IGraphicBufferProducerEEE */
/* Demangled: android::Source::getBufferQueueProducer(android::sp<android::IGraphicBufferProducer>*) */
int _ZN7android6Source22getBufferQueueProducerEPNS_2spINS_22IGraphicBufferProducerEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::EncoderSource::Puller::FramePostDropCnt> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android14VTCameraSource12getFrameRateEv */
/* Demangled: android::VTCameraSource::getFrameRate() const */
int _ZNK7android14VTCameraSource12getFrameRateEv(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::sp<android::GraphicBuffer> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN7android13EncoderSource5startEv */
/* Demangled: android::EncoderSource::start() */
int _ZN7android13EncoderSource5startEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN7android13calcFrameRateEii */
/* Demangled: android::calcFrameRate(int, int) */
int _ZN7android13calcFrameRateEii(void);

/* Symbol: _ZN7android13EncoderSource7RotatorC2EiRKNS_2spINS_7ALooperEEE */
/* Demangled: android::EncoderSource::Rotator::Rotator(int, android::sp<android::ALooper> const&) */
int _ZN7android13EncoderSource7RotatorC2EiRKNS_2spINS_7ALooperEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::sp<android::GraphicBuffer> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN7android6SourceD2Ev */
/* Demangled: android::Source::~Source() */
int _ZN7android6SourceD2Ev(void);

/* Symbol: _ZN7android6Source19stopEncoderSource_lEv */
/* Demangled: android::Source::stopEncoderSource_l() */
int _ZN7android6Source19stopEncoderSource_lEv(void);

/* Symbol: _ZN7android6Source6ResumeEv */
/* Demangled: android::Source::Resume() */
int _ZN7android6Source6ResumeEv(void);

/* Symbol: _ZN7android13EncoderSource6Puller17resetFrameDropperEv */
/* Demangled: android::EncoderSource::Puller::resetFrameDropper() */
int _ZN7android13EncoderSource6Puller17resetFrameDropperEv(void);

/* Symbol: _ZN7android14VTCameraSource16readRepeatBufferEPPNS_15MediaBufferBaseEPKNS_10MediaTrack11ReadOptionsE */
/* Demangled: android::VTCameraSource::readRepeatBuffer(android::MediaBufferBase**, android::MediaTrack::ReadOptions const*) */
int _ZN7android14VTCameraSource16readRepeatBufferEPPNS_15MediaBufferBaseEPKNS_10MediaTrack11ReadOptionsE(void);

/* Symbol: _ZN7android13EncoderSource6PullerD1Ev */
/* Demangled: android::EncoderSource::Puller::~Puller() */
int _ZN7android13EncoderSource6PullerD1Ev(void);

/* Symbol: _ZN7android6Source22notifyResolutionDegreeEiii */
/* Demangled: android::Source::notifyResolutionDegree(int, int, int) */
int _ZN7android6Source22notifyResolutionDegreeEiii(void);

/* Symbol: _ZN7android13EncoderSource6Puller12schedulePullEv */
/* Demangled: android::EncoderSource::Puller::schedulePull() */
int _ZN7android13EncoderSource6Puller12schedulePullEv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::sp<android::MediaCodecBuffer>, unsigned long> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEEE;

/* Symbol: _ZN7android13EncoderSource11initEncoderEv */
/* Demangled: android::EncoderSource::initEncoder() */
int _ZN7android13EncoderSource11initEncoderEv(void);

/* Symbol: _ZTCN7android14VTCameraSourceE0_NS_11MediaSourceE */
/* Demangled: construction vtable for android::MediaSource-in-android::VTCameraSource */
extern void* _ZTCN7android14VTCameraSourceE0_NS_11MediaSourceE;

/* Symbol: _ZNK7android13EncoderSource19getInputBufferCountEv */
/* Demangled: android::EncoderSource::getInputBufferCount() const */
int _ZNK7android13EncoderSource19getInputBufferCountEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN7android13EncoderSource7RotatorE */
/* Demangled: vtable for android::EncoderSource::Rotator */
extern void* _ZTVN7android13EncoderSource7RotatorE;

/* Symbol: _ZN7android13EncoderSource7Rotator4stopEv */
/* Demangled: android::EncoderSource::Rotator::stop() */
int _ZN7android13EncoderSource7Rotator4stopEv(void);

/* Symbol: _ZN7android13EncoderSource5flushEii */
/* Demangled: android::EncoderSource::flush(int, int) */
int _ZN7android13EncoderSource5flushEii(void);

/* Symbol: _ZN7android14VTCameraSource19setResolutionDegreeEiiiiii */
/* Demangled: android::VTCameraSource::setResolutionDegree(int, int, int, int, int, int) */
int _ZN7android14VTCameraSource19setResolutionDegreeEiiiiii(void);

/* Symbol: _ZThn8_N7android14VTCameraSourceD1Ev */
/* Demangled: non-virtual thunk to android::VTCameraSource::~VTCameraSource() */
int _ZThn8_N7android14VTCameraSourceD1Ev(void);

/* Symbol: _ZN7android14VTCameraSource9getFormatEv */
/* Demangled: android::VTCameraSource::getFormat() */
int _ZN7android14VTCameraSource9getFormatEv(void);

/* Symbol: _ZN7android14VTCameraSource23onSidebandStreamChangedEv */
/* Demangled: android::VTCameraSource::onSidebandStreamChanged() */
int _ZN7android14VTCameraSource23onSidebandStreamChangedEv(void);

/* Symbol: _ZN7android6SourceC2Eij */
/* Demangled: android::Source::Source(int, unsigned int) */
int _ZN7android6SourceC2Eij(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<android::MediaCodecBuffer>, unsigned long> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN7android14VTCameraSourceC2Ei */
/* Demangled: android::VTCameraSource::VTCameraSource(int) */
int _ZN7android14VTCameraSourceC2Ei(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::sp<android::GraphicBuffer> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN7android6Source4StopEv */
/* Demangled: android::Source::Stop() */
int _ZN7android6Source4StopEv(void);

/* Symbol: _ZN7android6Source19resetByUpdateConfigEi */
/* Demangled: android::Source::resetByUpdateConfig(int) */
int _ZN7android6Source19resetByUpdateConfigEi(void);

/* Symbol: _ZN7android13EncoderSource7Rotator17onMessageReceivedERKNS_2spINS_8AMessageEEE */
/* Demangled: android::EncoderSource::Rotator::onMessageReceived(android::sp<android::AMessage> const&) */
int _ZN7android13EncoderSource7Rotator17onMessageReceivedERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android13EncoderSource6Puller19resetFrameEvaluatorEv */
/* Demangled: android::EncoderSource::Puller::resetFrameEvaluator() */
int _ZN7android13EncoderSource6Puller19resetFrameEvaluatorEv(void);

/* Symbol: _ZN7android13EncoderSourceD0Ev */
/* Demangled: android::EncoderSource::~EncoderSource() */
int _ZN7android13EncoderSourceD0Ev(void);

/* Symbol: _ZThn16_N7android14VTCameraSourceD1Ev */
/* Demangled: non-virtual thunk to android::VTCameraSource::~VTCameraSource() */
int _ZThn16_N7android14VTCameraSourceD1Ev(void);

/* Symbol: _ZN7android6Source20compareSettingChangeEPNS_15video_enc_fmt_tE */
/* Demangled: android::Source::compareSettingChange(android::video_enc_fmt_t*) */
int _ZN7android6Source20compareSettingChangeEPNS_15video_enc_fmt_tE(void);

/* Symbol: _ZN7android6Source5PauseEv */
/* Demangled: android::Source::Pause() */
int _ZN7android6Source5PauseEv(void);

/* Symbol: _ZN7android13EncoderSource18scheduleDoMoreWorkEv */
/* Demangled: android::EncoderSource::scheduleDoMoreWork() */
int _ZN7android13EncoderSource18scheduleDoMoreWorkEv(void);

/* Symbol: _ZTv0_n24_N7android14VTCameraSourceD1Ev */
/* Demangled: virtual thunk to android::VTCameraSource::~VTCameraSource() */
int _ZTv0_n24_N7android14VTCameraSourceD1Ev(void);

/* Symbol: _ZN7android6Source11notifyErrorEi */
/* Demangled: android::Source::notifyError(int) */
int _ZN7android6Source11notifyErrorEi(void);

/* Symbol: _ZN7android13EncoderSource4stopEv */
/* Demangled: android::EncoderSource::stop() */
int _ZN7android13EncoderSource4stopEv(void);

/* Symbol: _ZN7android13EncoderSource7RotatorD0Ev */
/* Demangled: android::EncoderSource::Rotator::~Rotator() */
int _ZN7android13EncoderSource7RotatorD0Ev(void);

/* Symbol: _ZN7android14VTCameraSource4readEPPNS_15MediaBufferBaseEPKNS_10MediaTrack11ReadOptionsE */
/* Demangled: android::VTCameraSource::read(android::MediaBufferBase**, android::MediaTrack::ReadOptions const*) */
int _ZN7android14VTCameraSource4readEPPNS_15MediaBufferBaseEPKNS_10MediaTrack11ReadOptionsE(void);

/* Symbol: _ZN7android14VTCameraSource16onFrameAvailableERKNS_10BufferItemE */
/* Demangled: android::VTCameraSource::onFrameAvailable(android::BufferItem const&) */
int _ZN7android14VTCameraSource16onFrameAvailableERKNS_10BufferItemE(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBSOURCE_H */
