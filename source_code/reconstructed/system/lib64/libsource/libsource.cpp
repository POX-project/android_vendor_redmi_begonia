/*
 * Reverse-Engineered Source for: libsource.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libsource"

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
#include "libsource.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::Source::evaluateBitrateAdaptive(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source23evaluateBitrateAdaptiveEi(void) {
    ALOGD("_ZN7android6Source23evaluateBitrateAdaptiveEi() called");
    return 0;
}

/* Demangled: android::VTCameraSource::setCurrentVtMode(android::VT_CALL_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14VTCameraSource16setCurrentVtModeENS_12VT_CALL_MODEE(void) {
    ALOGD("_ZN7android14VTCameraSource16setCurrentVtModeENS_12VT_CALL_MODEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Demangled: android::Source::refineWhByRotationDegree(int*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source24refineWhByRotationDegreeEPiS1_i(void) {
    ALOGD("_ZN7android6Source24refineWhByRotationDegreeEPiS1_i() called");
    return 0;
}

/* Demangled: android::VTCameraSource::createInputProducer(android::sp<android::IGraphicBufferProducer>*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14VTCameraSource19createInputProducerEPNS_2spINS_22IGraphicBufferProducerEEEi(void) {
    ALOGD("_ZN7android14VTCameraSource19createInputProducerEPNS_2spINS_22IGraphicBufferProducerEEEi() called");
    return 0;
}

/* Demangled: android::EncoderSource::setAvpfParamters(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource16setAvpfParamtersERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android13EncoderSource16setAvpfParamtersERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::EncoderSource::Puller::~Puller() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource6PullerD2Ev(void) {
    ALOGD("_ZN7android13EncoderSource6PullerD2Ev() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::MediaCodecBuffer> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::MediaBufferObserver */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android19MediaBufferObserverE = NULL;

/* Demangled: android::Source::setupVideoEncoder(android::sp<android::MediaSource>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source17setupVideoEncoderENS_2spINS_11MediaSourceEEE(void) {
    ALOGD("_ZN7android6Source17setupVideoEncoderENS_2spINS_11MediaSourceEEE() called");
    return 0;
}

/* Demangled: android::EncoderSource::getFormat() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource9getFormatEv(void) {
    ALOGD("_ZN7android13EncoderSource9getFormatEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::EncoderSource::Puller::FramePostDropCnt> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::VTCameraSource::signalBufferReturned(android::MediaBufferBase*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N7android14VTCameraSource20signalBufferReturnedEPNS_15MediaBufferBaseE(void) {
    ALOGD("_ZThn8_N7android14VTCameraSource20signalBufferReturnedEPNS_15MediaBufferBaseE() called");
    return 0;
}

/* Exported Object: vtable for android::List<android::MediaBufferBase*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListIPNS_15MediaBufferBaseEEE = NULL;

/* Demangled: android::EncoderSource::Rotator::setNotify(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource7Rotator9setNotifyERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android13EncoderSource7Rotator9setNotifyERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::EncoderSource::Puller::postSynchronouslyAndReturnError(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource6Puller31postSynchronouslyAndReturnErrorERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android13EncoderSource6Puller31postSynchronouslyAndReturnErrorERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::EncoderSource::EncoderSource(android::sp<android::ALooper> const&, android::sp<android::AMessage> const&, android::sp<android::MediaSource> const&, android::sp<android::AMessage> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSourceC2ERKNS_2spINS_7ALooperEEERKNS1_INS_8AMessageEEERKNS1_INS_11MediaSourceEEES9_i(void) {
    ALOGD("_ZN7android13EncoderSourceC2ERKNS_2spINS_7ALooperEEERKNS1_INS_8AMessageEEERKNS1_INS_11MediaSourceEEES9_i() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::EncoderSource::Puller::FramePostDropCnt> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Source::onMessageReceived(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source17onMessageReceivedERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android6Source17onMessageReceivedERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::EncoderSource::Rotator::flush_l(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource7Rotator7flush_lEii(void) {
    ALOGD("_ZN7android13EncoderSource7Rotator7flush_lEii() called");
    return 0;
}

/* Demangled: android::EncoderSource::releaseEncoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource14releaseEncoderEv(void) {
    ALOGD("_ZN7android13EncoderSource14releaseEncoderEv() called");
    return 0;
}

/* Exported Object: vtable for android::VTCameraSource */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android14VTCameraSourceE = NULL;

/* Demangled: android::Source::disableCVO(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source10disableCVOEb(void) {
    ALOGD("_ZN7android6Source10disableCVOEb() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::EncoderSource::Rotator::pause() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource7Rotator5pauseEv(void) {
    ALOGD("_ZN7android13EncoderSource7Rotator5pauseEv() called");
    return 0;
}

/* Demangled: android::VTCameraSource::signalBufferReturned(android::MediaBufferBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14VTCameraSource20signalBufferReturnedEPNS_15MediaBufferBaseE(void) {
    ALOGD("_ZN7android14VTCameraSource20signalBufferReturnedEPNS_15MediaBufferBaseE() called");
    return 0;
}

/* Demangled: android::VTCameraSource::setUseAbsoluteTimestamps() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14VTCameraSource24setUseAbsoluteTimestampsEv(void) {
    ALOGD("_ZN7android14VTCameraSource24setUseAbsoluteTimestampsEv() called");
    return 0;
}

/* Demangled: android::VTCameraSource::~VTCameraSource() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14VTCameraSourceD0Ev(void) {
    ALOGD("_ZN7android14VTCameraSourceD0Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::GraphicBuffer> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::EncoderSource::EncoderSource(android::sp<android::ALooper> const&, android::sp<android::AMessage> const&, android::sp<android::MediaSource> const&, android::sp<android::AMessage> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSourceC1ERKNS_2spINS_7ALooperEEERKNS1_INS_8AMessageEEERKNS1_INS_11MediaSourceEEES9_i(void) {
    ALOGD("_ZN7android13EncoderSourceC1ERKNS_2spINS_7ALooperEEERKNS1_INS_8AMessageEEERKNS1_INS_11MediaSourceEEES9_i() called");
    return 0;
}

/* Demangled: android::EncoderSource::~EncoderSource() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSourceD1Ev(void) {
    ALOGD("_ZN7android13EncoderSourceD1Ev() called");
    return 0;
}

/* Demangled: android::EncoderSource::requestFullIDRFrame() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource19requestFullIDRFrameEv(void) {
    ALOGD("_ZN7android13EncoderSource19requestFullIDRFrameEv() called");
    return 0;
}

/* Demangled: android::VTCameraSource::start(android::MetaData*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14VTCameraSource5startEPNS_8MetaDataE(void) {
    ALOGD("_ZN7android14VTCameraSource5startEPNS_8MetaDataE() called");
    return 0;
}

/* Exported Object: vtable for android::MediaBufferHolder */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android17MediaBufferHolderE = NULL;

/* Exported Object: vtable for android::EncoderSource::Puller */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android13EncoderSource6PullerE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIliEEEE = NULL;

/* Demangled: android::VTCameraSource::setFrameAvailableListener(android::sp<android::VTCameraSource::FrameAvailableListener> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14VTCameraSource25setFrameAvailableListenerERKNS_2spINS0_22FrameAvailableListenerEEE(void) {
    ALOGD("_ZN7android14VTCameraSource25setFrameAvailableListenerERKNS_2spINS0_22FrameAvailableListenerEEE() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::GraphicBuffer> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Source::setSourceResolutionDegree() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source25setSourceResolutionDegreeEv(void) {
    ALOGD("_ZN7android6Source25setSourceResolutionDegreeEv() called");
    return 0;
}

/* Demangled: android::EncoderSource::pause() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource5pauseEv(void) {
    ALOGD("_ZN7android13EncoderSource5pauseEv() called");
    return 0;
}

/* Demangled: android::EncoderSource::resume() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource6resumeEv(void) {
    ALOGD("_ZN7android13EncoderSource6resumeEv() called");
    return 0;
}

/* Demangled: android::EncoderSource::Rotator::~Rotator() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource7RotatorD1Ev(void) {
    ALOGD("_ZN7android13EncoderSource7RotatorD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<android::MediaCodecBuffer>, unsigned long> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::VTCameraSource::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14VTCameraSource4stopEv(void) {
    ALOGD("_ZN7android14VTCameraSource4stopEv() called");
    return 0;
}

/* Demangled: android::VTCameraSource::metaDataStoredInVideoBuffers() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14VTCameraSource28metaDataStoredInVideoBuffersEv(void) {
    ALOGD("_ZNK7android14VTCameraSource28metaDataStoredInVideoBuffersEv() called");
    return 0;
}

/* Demangled: android::Source::SetNotify(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source9SetNotifyERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android6Source9SetNotifyERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Exported Object: vtable for android::List<android::sp<android::MediaCodecBuffer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListINS_2spINS_16MediaCodecBufferEEEEE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::EncoderSource::Puller::FramePostDropCnt> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEEE = NULL;

/* Demangled: android::VTCameraSource::getTimestamp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14VTCameraSource12getTimestampEv(void) {
    ALOGD("_ZN7android14VTCameraSource12getTimestampEv() called");
    return 0;
}

/* Demangled: android::EncoderSource::Puller::start() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource6Puller5startEv(void) {
    ALOGD("_ZN7android13EncoderSource6Puller5startEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<android::GraphicBuffer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spINS_13GraphicBufferEEEEE = NULL;

/* Demangled: android::EncoderSource::Rotator::flush(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource7Rotator5flushEii(void) {
    ALOGD("_ZN7android13EncoderSource7Rotator5flushEii() called");
    return 0;
}

/* Demangled: android::EncoderSource::Puller::setNotify(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource6Puller9setNotifyERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android13EncoderSource6Puller9setNotifyERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::EncoderSource::Puller::setConfig(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource6Puller9setConfigERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android13EncoderSource6Puller9setConfigERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::EncoderSource::Rotator::Rotator(int, android::sp<android::ALooper> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource7RotatorC1EiRKNS_2spINS_7ALooperEEE(void) {
    ALOGD("_ZN7android13EncoderSource7RotatorC1EiRKNS_2spINS_7ALooperEEE() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::MediaCodecBuffer> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::EncoderSource::releaseABuffer(android::sp<android::MediaCodecBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource14releaseABufferERNS_2spINS_16MediaCodecBufferEEE(void) {
    ALOGD("_ZN7android13EncoderSource14releaseABufferERNS_2spINS_16MediaCodecBufferEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::EncoderSource::Puller::FramePostDropCnt> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::EncoderSource::Puller::FramePostDropCnt> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::EncoderSource::Puller::framerateEvaluation(long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource6Puller19framerateEvaluationEl(void) {
    ALOGD("_ZN7android13EncoderSource6Puller19framerateEvaluationEl() called");
    return 0;
}

/* Demangled: android::EncoderSource::Puller::dropFrameAsAdaptive(long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource6Puller19dropFrameAsAdaptiveEl(void) {
    ALOGD("_ZN7android13EncoderSource6Puller19dropFrameAsAdaptiveEl() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<android::MediaCodecBuffer>, unsigned long> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: VTT for android::VTCameraSource */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android14VTCameraSourceE = NULL;

/* Demangled: android::Source::stop_l() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source6stop_lEv(void) {
    ALOGD("_ZN7android6Source6stop_lEv() called");
    return 0;
}

/* Demangled: android::Source::~Source() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6SourceD0Ev(void) {
    ALOGD("_ZN7android6SourceD0Ev() called");
    return 0;
}

/* Demangled: android::Source::setDeviceRoateDegree(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source20setDeviceRoateDegreeEi(void) {
    ALOGD("_ZN7android6Source20setDeviceRoateDegreeEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::EncoderSource::Puller::resume() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource6Puller6resumeEv(void) {
    ALOGD("_ZN7android13EncoderSource6Puller6resumeEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<android::MediaCodecBuffer>, unsigned long> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<android::MediaCodecBuffer>, unsigned long> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE10do_compareEPKvS8_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE10do_compareEPKvS8_() called");
    return 0;
}

/* Demangled: android::VTCameraSource::~VTCameraSource() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14VTCameraSourceD1Ev(void) {
    ALOGD("_ZN7android14VTCameraSourceD1Ev() called");
    return 0;
}

/* Exported Object: android::Source::gInstanceCount */
extern "C" __attribute__((visibility("default"))) void* _ZN7android6Source14gInstanceCountE = NULL;

/* Demangled: android::EncoderSource::Rotator::postSynchronouslyAndReturnError(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource7Rotator31postSynchronouslyAndReturnErrorERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android13EncoderSource7Rotator31postSynchronouslyAndReturnErrorERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Exported Object: vtable for android::List<long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListIlEE = NULL;

/* Demangled: android::EncoderSource::~EncoderSource() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSourceD2Ev(void) {
    ALOGD("_ZN7android13EncoderSourceD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<android::MediaCodecBuffer>, unsigned long> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::VTCameraSource::getMediaBufferHandleVA(android::MediaBufferBase*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14VTCameraSource22getMediaBufferHandleVAEPNS_15MediaBufferBaseEPi(void) {
    ALOGD("_ZN7android14VTCameraSource22getMediaBufferHandleVAEPNS_15MediaBufferBaseEPi() called");
    return 0;
}

/* Demangled: android::Source::checkSaveSourceConfig(android::video_enc_fmt_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source21checkSaveSourceConfigEPNS_15video_enc_fmt_tE(void) {
    ALOGD("_ZN7android6Source21checkSaveSourceConfigEPNS_15video_enc_fmt_tE() called");
    return 0;
}

/* Demangled: android::VTCameraSource::setMaxAcquiredBufferCount(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14VTCameraSource25setMaxAcquiredBufferCountEm(void) {
    ALOGD("_ZN7android14VTCameraSource25setMaxAcquiredBufferCountEm() called");
    return 0;
}

/* Demangled: android::EncoderSource::Rotator::resume() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource7Rotator6resumeEv(void) {
    ALOGD("_ZN7android13EncoderSource7Rotator6resumeEv() called");
    return 0;
}

/* Demangled: android::EncoderSource::Puller::Puller(int, android::sp<android::MediaSource> const&, android::sp<android::ALooper> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource6PullerC2EiRKNS_2spINS_11MediaSourceEEERKNS2_INS_7ALooperEEE(void) {
    ALOGD("_ZN7android13EncoderSource6PullerC2EiRKNS_2spINS_11MediaSourceEEERKNS2_INS_7ALooperEEE() called");
    return 0;
}

/* Demangled: android::EncoderSource::setFramerate() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource12setFramerateEv(void) {
    ALOGD("_ZN7android13EncoderSource12setFramerateEv() called");
    return 0;
}

/* Demangled: android::EncoderSource::flush_l(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource7flush_lEii(void) {
    ALOGD("_ZN7android13EncoderSource7flush_lEii() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::GraphicBuffer> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::EncoderSource::Rotator::~Rotator() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource7RotatorD2Ev(void) {
    ALOGD("_ZN7android13EncoderSource7RotatorD2Ev() called");
    return 0;
}

/* Demangled: android::EncoderSource::Puller::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource6Puller4stopEv(void) {
    ALOGD("_ZN7android13EncoderSource6Puller4stopEv() called");
    return 0;
}

/* Demangled: android::EncoderSource::Puller::Puller(int, android::sp<android::MediaSource> const&, android::sp<android::ALooper> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource6PullerC1EiRKNS_2spINS_11MediaSourceEEERKNS2_INS_7ALooperEEE(void) {
    ALOGD("_ZN7android13EncoderSource6PullerC1EiRKNS_2spINS_11MediaSourceEEERKNS2_INS_7ALooperEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Source::setCodecParameters(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source18setCodecParametersEi(void) {
    ALOGD("_ZN7android6Source18setCodecParametersEi() called");
    return 0;
}

/* Demangled: android::EncoderSource::checkInitFail() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource13checkInitFailEv(void) {
    ALOGD("_ZN7android13EncoderSource13checkInitFailEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::VTCameraSource::onBuffersReleased() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N7android14VTCameraSource17onBuffersReleasedEv(void) {
    ALOGD("_ZThn16_N7android14VTCameraSource17onBuffersReleasedEv() called");
    return 0;
}

/* Demangled: android::Source::setCurrentCameraInfo(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source20setCurrentCameraInfoEiii(void) {
    ALOGD("_ZN7android6Source20setCurrentCameraInfoEiii() called");
    return 0;
}

/* Demangled: android::Source::adjustEncBitRate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source16adjustEncBitRateEi(void) {
    ALOGD("_ZN7android6Source16adjustEncBitRateEi() called");
    return 0;
}

/* Exported Object: vtable for android::Source */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6SourceE = NULL;

/* Demangled: android::Source::Source(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6SourceC1Eij(void) {
    ALOGD("_ZN7android6SourceC1Eij() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::VTCameraSource::onFrameAvailable(android::BufferItem const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N7android14VTCameraSource16onFrameAvailableERKNS_10BufferItemE(void) {
    ALOGD("_ZThn16_N7android14VTCameraSource16onFrameAvailableERKNS_10BufferItemE() called");
    return 0;
}

/* Demangled: android::EncoderSource::Rotator::createBufferProducerNotify(android::sp<android::AMessage>&, android::sp<android::AMessage>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource7Rotator26createBufferProducerNotifyERNS_2spINS_8AMessageEEES5_(void) {
    ALOGD("_ZN7android13EncoderSource7Rotator26createBufferProducerNotifyERNS_2spINS_8AMessageEEES5_() called");
    return 0;
}

/* Demangled: android::EncoderSource::resetEncoder(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource12resetEncoderERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android13EncoderSource12resetEncoderERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::EncoderSource::feedEncoderInputBuffersAfterRotate() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource34feedEncoderInputBuffersAfterRotateEv(void) {
    ALOGD("_ZN7android13EncoderSource34feedEncoderInputBuffersAfterRotateEv() called");
    return 0;
}

/* Exported Object: vtable for android::AHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8AHandlerE = NULL;

/* Demangled: android::Source::~Source() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6SourceD1Ev(void) {
    ALOGD("_ZN7android6SourceD1Ev() called");
    return 0;
}

/* Demangled: android::Source::setAvpfParamters(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source16setAvpfParamtersERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android6Source16setAvpfParamtersERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::EncoderSource::Puller::FramePostDropCnt> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<android::MediaCodecBuffer>, unsigned long> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::VTCameraSource::onBuffersReleased() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14VTCameraSource17onBuffersReleasedEv(void) {
    ALOGD("_ZN7android14VTCameraSource17onBuffersReleasedEv() called");
    return 0;
}

/* Demangled: android::Source::Start(android::VT_CALL_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source5StartENS_12VT_CALL_MODEE(void) {
    ALOGD("_ZN7android6Source5StartENS_12VT_CALL_MODEE() called");
    return 0;
}

/* Demangled: android::Source::startEncoderSource_l() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source20startEncoderSource_lEv(void) {
    ALOGD("_ZN7android6Source20startEncoderSource_lEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Demangled: android::EncoderSource::Puller::~Puller() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource6PullerD0Ev(void) {
    ALOGD("_ZN7android13EncoderSource6PullerD0Ev() called");
    return 0;
}

/* Exported Object: vtable for android::EncoderSource */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android13EncoderSourceE = NULL;

/* Demangled: android::EncoderSource::onMessageReceived(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource17onMessageReceivedERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android13EncoderSource17onMessageReceivedERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::MediaCodecBuffer> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::VTCameraSource::~VTCameraSource() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14VTCameraSourceD2Ev(void) {
    ALOGD("_ZN7android14VTCameraSourceD2Ev() called");
    return 0;
}

/* Demangled: android::Source::initLooper_l() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source12initLooper_lEv(void) {
    ALOGD("_ZN7android6Source12initLooper_lEv() called");
    return 0;
}

/* Demangled: android::Source::resetRotateDegree() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source17resetRotateDegreeEv(void) {
    ALOGD("_ZN7android6Source17resetRotateDegreeEv() called");
    return 0;
}

/* Demangled: android::Source::adjustEncBySignal() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source17adjustEncBySignalEv(void) {
    ALOGD("_ZN7android6Source17adjustEncBySignalEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::EncoderSource::Rotator::rotate() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource7Rotator6rotateEv(void) {
    ALOGD("_ZN7android13EncoderSource7Rotator6rotateEv() called");
    return 0;
}

/* Demangled: android::VTCameraSource::setFrameRate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14VTCameraSource12setFrameRateEi(void) {
    ALOGD("_ZN7android14VTCameraSource12setFrameRateEi() called");
    return 0;
}

/* Demangled: android::EncoderSource::postSynchronouslyAndReturnError(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource31postSynchronouslyAndReturnErrorERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android13EncoderSource31postSynchronouslyAndReturnErrorERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::EncoderSource::Puller::FramePostDropCnt> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE10do_compareEPKvS8_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE10do_compareEPKvS8_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::MediaCodecBuffer> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::MediaCodecBuffer> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::VTCameraSource::passMetadataBuffer_l(android::MediaBufferBase**, ANativeWindowBuffer*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14VTCameraSource20passMetadataBuffer_lEPPNS_15MediaBufferBaseEP19ANativeWindowBuffer(void) {
    ALOGD("_ZNK7android14VTCameraSource20passMetadataBuffer_lEPPNS_15MediaBufferBaseEP19ANativeWindowBuffer() called");
    return 0;
}

/* Demangled: android::EncoderSource::Puller::onMessageReceived(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource6Puller17onMessageReceivedERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android13EncoderSource6Puller17onMessageReceivedERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::EncoderSource::doMoreWork(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource10doMoreWorkEii(void) {
    ALOGD("_ZN7android13EncoderSource10doMoreWorkEii() called");
    return 0;
}

/* Demangled: android::EncoderSource::requestIDRFrame() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource15requestIDRFrameEv(void) {
    ALOGD("_ZN7android13EncoderSource15requestIDRFrameEv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE = NULL;

/* Demangled: android::Source::setSourceConfig(android::video_enc_fmt_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source15setSourceConfigEPNS_15video_enc_fmt_tE(void) {
    ALOGD("_ZN7android6Source15setSourceConfigEPNS_15video_enc_fmt_tE() called");
    return 0;
}

/* Demangled: android::Source::adjustEncBitRate_l(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source18adjustEncBitRate_lEi(void) {
    ALOGD("_ZN7android6Source18adjustEncBitRate_lEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::EncoderSource::Puller::pause() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource6Puller5pauseEv(void) {
    ALOGD("_ZN7android13EncoderSource6Puller5pauseEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<android::MediaCodecBuffer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spINS_16MediaCodecBufferEEEEE = NULL;

/* Demangled: non-virtual thunk to android::VTCameraSource::~VTCameraSource() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N7android14VTCameraSourceD0Ev(void) {
    ALOGD("_ZThn8_N7android14VTCameraSourceD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::ConsumerListener-in-android::VTCameraSource */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android14VTCameraSourceE16_NS_16ConsumerListenerE = NULL;

/* Demangled: android::VTCameraSource::VTCameraSource(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14VTCameraSourceC1Ei(void) {
    ALOGD("_ZN7android14VTCameraSourceC1Ei() called");
    return 0;
}

/* Demangled: android::Source::postAsynAndWaitReturnError(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source26postAsynAndWaitReturnErrorERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android6Source26postAsynAndWaitReturnErrorERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::EncoderSource::onStart() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource7onStartEv(void) {
    ALOGD("_ZN7android13EncoderSource7onStartEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::VTCameraSource::~VTCameraSource() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N7android14VTCameraSourceD0Ev(void) {
    ALOGD("_ZThn16_N7android14VTCameraSourceD0Ev() called");
    return 0;
}

/* Demangled: android::EncoderSource::setCodecParameters(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource18setCodecParametersERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android13EncoderSource18setCodecParametersERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::MediaCodecBuffer> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_16MediaCodecBufferEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to android::VTCameraSource::~VTCameraSource() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android14VTCameraSourceD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android14VTCameraSourceD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::VTCameraSource::onSidebandStreamChanged() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N7android14VTCameraSource23onSidebandStreamChangedEv(void) {
    ALOGD("_ZThn16_N7android14VTCameraSource23onSidebandStreamChangedEv() called");
    return 0;
}

/* Demangled: android::Source::getBufferQueueProducer(android::sp<android::IGraphicBufferProducer>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source22getBufferQueueProducerEPNS_2spINS_22IGraphicBufferProducerEEE(void) {
    ALOGD("_ZN7android6Source22getBufferQueueProducerEPNS_2spINS_22IGraphicBufferProducerEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::EncoderSource::Puller::FramePostDropCnt> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_13EncoderSource6Puller16FramePostDropCntEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::VTCameraSource::getFrameRate() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14VTCameraSource12getFrameRateEv(void) {
    ALOGD("_ZNK7android14VTCameraSource12getFrameRateEv() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::GraphicBuffer> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::EncoderSource::start() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource5startEv(void) {
    ALOGD("_ZN7android13EncoderSource5startEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::calcFrameRate(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13calcFrameRateEii(void) {
    ALOGD("_ZN7android13calcFrameRateEii() called");
    return 0;
}

/* Demangled: android::EncoderSource::Rotator::Rotator(int, android::sp<android::ALooper> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource7RotatorC2EiRKNS_2spINS_7ALooperEEE(void) {
    ALOGD("_ZN7android13EncoderSource7RotatorC2EiRKNS_2spINS_7ALooperEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::GraphicBuffer> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Source::~Source() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6SourceD2Ev(void) {
    ALOGD("_ZN7android6SourceD2Ev() called");
    return 0;
}

/* Demangled: android::Source::stopEncoderSource_l() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source19stopEncoderSource_lEv(void) {
    ALOGD("_ZN7android6Source19stopEncoderSource_lEv() called");
    return 0;
}

/* Demangled: android::Source::Resume() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source6ResumeEv(void) {
    ALOGD("_ZN7android6Source6ResumeEv() called");
    return 0;
}

/* Demangled: android::EncoderSource::Puller::resetFrameDropper() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource6Puller17resetFrameDropperEv(void) {
    ALOGD("_ZN7android13EncoderSource6Puller17resetFrameDropperEv() called");
    return 0;
}

/* Demangled: android::VTCameraSource::readRepeatBuffer(android::MediaBufferBase**, android::MediaTrack::ReadOptions const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14VTCameraSource16readRepeatBufferEPPNS_15MediaBufferBaseEPKNS_10MediaTrack11ReadOptionsE(void) {
    ALOGD("_ZN7android14VTCameraSource16readRepeatBufferEPPNS_15MediaBufferBaseEPKNS_10MediaTrack11ReadOptionsE() called");
    return 0;
}

/* Demangled: android::EncoderSource::Puller::~Puller() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource6PullerD1Ev(void) {
    ALOGD("_ZN7android13EncoderSource6PullerD1Ev() called");
    return 0;
}

/* Demangled: android::Source::notifyResolutionDegree(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source22notifyResolutionDegreeEiii(void) {
    ALOGD("_ZN7android6Source22notifyResolutionDegreeEiii() called");
    return 0;
}

/* Demangled: android::EncoderSource::Puller::schedulePull() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource6Puller12schedulePullEv(void) {
    ALOGD("_ZN7android13EncoderSource6Puller12schedulePullEv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::sp<android::MediaCodecBuffer>, unsigned long> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEEE = NULL;

/* Demangled: android::EncoderSource::initEncoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource11initEncoderEv(void) {
    ALOGD("_ZN7android13EncoderSource11initEncoderEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::MediaSource-in-android::VTCameraSource */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android14VTCameraSourceE0_NS_11MediaSourceE = NULL;

/* Demangled: android::EncoderSource::getInputBufferCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android13EncoderSource19getInputBufferCountEv(void) {
    ALOGD("_ZNK7android13EncoderSource19getInputBufferCountEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::EncoderSource::Rotator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android13EncoderSource7RotatorE = NULL;

/* Demangled: android::EncoderSource::Rotator::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource7Rotator4stopEv(void) {
    ALOGD("_ZN7android13EncoderSource7Rotator4stopEv() called");
    return 0;
}

/* Demangled: android::EncoderSource::flush(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource5flushEii(void) {
    ALOGD("_ZN7android13EncoderSource5flushEii() called");
    return 0;
}

/* Demangled: android::VTCameraSource::setResolutionDegree(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14VTCameraSource19setResolutionDegreeEiiiiii(void) {
    ALOGD("_ZN7android14VTCameraSource19setResolutionDegreeEiiiiii() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::VTCameraSource::~VTCameraSource() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N7android14VTCameraSourceD1Ev(void) {
    ALOGD("_ZThn8_N7android14VTCameraSourceD1Ev() called");
    return 0;
}

/* Demangled: android::VTCameraSource::getFormat() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14VTCameraSource9getFormatEv(void) {
    ALOGD("_ZN7android14VTCameraSource9getFormatEv() called");
    return 0;
}

/* Demangled: android::VTCameraSource::onSidebandStreamChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14VTCameraSource23onSidebandStreamChangedEv(void) {
    ALOGD("_ZN7android14VTCameraSource23onSidebandStreamChangedEv() called");
    return 0;
}

/* Demangled: android::Source::Source(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6SourceC2Eij(void) {
    ALOGD("_ZN7android6SourceC2Eij() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::sp<android::MediaCodecBuffer>, unsigned long> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_2spINS_16MediaCodecBufferEEEmEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::VTCameraSource::VTCameraSource(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14VTCameraSourceC2Ei(void) {
    ALOGD("_ZN7android14VTCameraSourceC2Ei() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::GraphicBuffer> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_13GraphicBufferEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Source::Stop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source4StopEv(void) {
    ALOGD("_ZN7android6Source4StopEv() called");
    return 0;
}

/* Demangled: android::Source::resetByUpdateConfig(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source19resetByUpdateConfigEi(void) {
    ALOGD("_ZN7android6Source19resetByUpdateConfigEi() called");
    return 0;
}

/* Demangled: android::EncoderSource::Rotator::onMessageReceived(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource7Rotator17onMessageReceivedERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android13EncoderSource7Rotator17onMessageReceivedERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::EncoderSource::Puller::resetFrameEvaluator() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource6Puller19resetFrameEvaluatorEv(void) {
    ALOGD("_ZN7android13EncoderSource6Puller19resetFrameEvaluatorEv() called");
    return 0;
}

/* Demangled: android::EncoderSource::~EncoderSource() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSourceD0Ev(void) {
    ALOGD("_ZN7android13EncoderSourceD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::VTCameraSource::~VTCameraSource() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N7android14VTCameraSourceD1Ev(void) {
    ALOGD("_ZThn16_N7android14VTCameraSourceD1Ev() called");
    return 0;
}

/* Demangled: android::Source::compareSettingChange(android::video_enc_fmt_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source20compareSettingChangeEPNS_15video_enc_fmt_tE(void) {
    ALOGD("_ZN7android6Source20compareSettingChangeEPNS_15video_enc_fmt_tE() called");
    return 0;
}

/* Demangled: android::Source::Pause() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source5PauseEv(void) {
    ALOGD("_ZN7android6Source5PauseEv() called");
    return 0;
}

/* Demangled: android::EncoderSource::scheduleDoMoreWork() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource18scheduleDoMoreWorkEv(void) {
    ALOGD("_ZN7android13EncoderSource18scheduleDoMoreWorkEv() called");
    return 0;
}

/* Demangled: virtual thunk to android::VTCameraSource::~VTCameraSource() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android14VTCameraSourceD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android14VTCameraSourceD1Ev() called");
    return 0;
}

/* Demangled: android::Source::notifyError(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Source11notifyErrorEi(void) {
    ALOGD("_ZN7android6Source11notifyErrorEi() called");
    return 0;
}

/* Demangled: android::EncoderSource::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource4stopEv(void) {
    ALOGD("_ZN7android13EncoderSource4stopEv() called");
    return 0;
}

/* Demangled: android::EncoderSource::Rotator::~Rotator() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13EncoderSource7RotatorD0Ev(void) {
    ALOGD("_ZN7android13EncoderSource7RotatorD0Ev() called");
    return 0;
}

/* Demangled: android::VTCameraSource::read(android::MediaBufferBase**, android::MediaTrack::ReadOptions const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14VTCameraSource4readEPPNS_15MediaBufferBaseEPKNS_10MediaTrack11ReadOptionsE(void) {
    ALOGD("_ZN7android14VTCameraSource4readEPPNS_15MediaBufferBaseEPKNS_10MediaTrack11ReadOptionsE() called");
    return 0;
}

/* Demangled: android::VTCameraSource::onFrameAvailable(android::BufferItem const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14VTCameraSource16onFrameAvailableERKNS_10BufferItemE(void) {
    ALOGD("_ZN7android14VTCameraSource16onFrameAvailableERKNS_10BufferItemE() called");
    return 0;
}
