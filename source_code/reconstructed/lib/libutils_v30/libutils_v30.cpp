/*
 * Reverse-Engineered Source for: libutils-v30.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libutils_v30"

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
#include "libutils_v30.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::Tokenizer::nextLine() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9Tokenizer8nextLineEv(void) {
    ALOGD("_ZN7android9Tokenizer8nextLineEv() called");
    return 0;
}

/* Demangled: android::SortedVectorImpl::_indexOrderOf(void const*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16SortedVectorImpl13_indexOrderOfEPKvPj(void) {
    ALOGD("_ZNK7android16SortedVectorImpl13_indexOrderOfEPKvPj() called");
    return 0;
}

/* Demangled: android::SimpleLooperCallback::SimpleLooperCallback(int (*)(int, int, void*)) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20SimpleLooperCallbackC2EPFiiiPvE(void) {
    ALOGD("_ZN7android20SimpleLooperCallbackC2EPFiiiPvE() called");
    return 0;
}

/* Demangled: android::Vector<android::sysprop_change_callback_info>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_28sysprop_change_callback_infoEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_28sysprop_change_callback_infoEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::Looper::pollInner(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper9pollInnerEi(void) {
    ALOGD("_ZN7android6Looper9pollInnerEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE10do_compareEPKvS7_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE10do_compareEPKvS7_() called");
    return 0;
}

/* Demangled: android::Printer::printFormatLine(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7Printer15printFormatLineEPKcz(void) {
    ALOGD("_ZN7android7Printer15printFormatLineEPKcz() called");
    return 0;
}

/* Demangled: android::String8::toLower(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String87toLowerEjj(void) {
    ALOGD("_ZN7android7String87toLowerEjj() called");
    return 0;
}

/* Demangled: android::VectorImpl::capacity() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android10VectorImpl8capacityEv(void) {
    ALOGD("_ZNK7android10VectorImpl8capacityEv() called");
    return 0;
}

/* Demangled: android::Vector<android::sysprop_change_callback_info>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_28sysprop_change_callback_infoEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_28sysprop_change_callback_infoEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::Looper::MessageEnvelope>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_6Looper15MessageEnvelopeEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::RefBase::onLastWeakRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase13onLastWeakRefEPKv(void) {
    ALOGD("_ZN7android7RefBase13onLastWeakRefEPKv() called");
    return 0;
}

/* Demangled: android::Vector<android::Looper::Response>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_6Looper8ResponseEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_6Looper8ResponseEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: virtual thunk to android::LooperCallback::~LooperCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android14LooperCallbackD0Ev(void) {
    ALOGD("_ZTv0_n12_N7android14LooperCallbackD0Ev() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::String8> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE = NULL;

/* Demangled: android::String16::String16(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C2EPKc(void) {
    ALOGD("_ZN7android8String16C2EPKc() called");
    return 0;
}

/* Demangled: android::VectorImpl::itemSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android10VectorImpl8itemSizeEv(void) {
    ALOGD("_ZNK7android10VectorImpl8itemSizeEv() called");
    return 0;
}

/* Demangled: utf16_to_utf8 */
extern "C" __attribute__((visibility("default"))) int utf16_to_utf8(void) {
    ALOGD("utf16_to_utf8() called");
    return 0;
}

/* Demangled: do_report_sysprop_change */
extern "C" __attribute__((visibility("default"))) int do_report_sysprop_change(void) {
    ALOGD("do_report_sysprop_change() called");
    return 0;
}

/* Demangled: virtual thunk to android::WeakMessageHandler::~WeakMessageHandler() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android18WeakMessageHandlerD1Ev(void) {
    ALOGD("_ZTv0_n12_N7android18WeakMessageHandlerD1Ev() called");
    return 0;
}

/* Demangled: android::PropertyMap::hasProperty(android::String8 const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11PropertyMap11hasPropertyERKNS_7String8E(void) {
    ALOGD("_ZNK7android11PropertyMap11hasPropertyERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::String8::real_append(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String811real_appendEPKcj(void) {
    ALOGD("_ZN7android7String811real_appendEPKcj() called");
    return 0;
}

/* Demangled: androidCreateThreadGetID(int (*)(void*), void*, void**) */
extern "C" __attribute__((visibility("default"))) int _Z24androidCreateThreadGetIDPFiPvES_PS_(void) {
    ALOGD("_Z24androidCreateThreadGetIDPFiPvES_PS_() called");
    return 0;
}

/* Demangled: android::WeakMessageHandler::WeakMessageHandler(android::wp<android::MessageHandler> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18WeakMessageHandlerC2ERKNS_2wpINS_14MessageHandlerEEE(void) {
    ALOGD("_ZN7android18WeakMessageHandlerC2ERKNS_2wpINS_14MessageHandlerEEE() called");
    return 0;
}

/* Demangled: android::StopWatch::~StopWatch() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9StopWatchD2Ev(void) {
    ALOGD("_ZN7android9StopWatchD2Ev() called");
    return 0;
}

/* Demangled: android::String8::setTo(char16_t const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String85setToEPKDsj(void) {
    ALOGD("_ZN7android7String85setToEPKDsj() called");
    return 0;
}

/* Demangled: android::MessageHandler::~MessageHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14MessageHandlerD2Ev(void) {
    ALOGD("_ZN7android14MessageHandlerD2Ev() called");
    return 0;
}

/* Demangled: android::Looper::removeMessages(android::sp<android::MessageHandler> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper14removeMessagesERKNS_2spINS_14MessageHandlerEEE(void) {
    ALOGD("_ZN7android6Looper14removeMessagesERKNS_2spINS_14MessageHandlerEEE() called");
    return 0;
}

/* Demangled: android::String8::setTo(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String85setToERKS0_(void) {
    ALOGD("_ZN7android7String85setToERKS0_() called");
    return 0;
}

/* Demangled: android::String8::String8(char16_t const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C2EPKDsj(void) {
    ALOGD("_ZN7android7String8C2EPKDsj() called");
    return 0;
}

/* Demangled: strlen32 */
extern "C" __attribute__((visibility("default"))) int strlen32(void) {
    ALOGD("strlen32() called");
    return 0;
}

/* Demangled: android::VectorImpl::_grow(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl5_growEjj(void) {
    ALOGD("_ZN7android10VectorImpl5_growEjj() called");
    return 0;
}

/* Demangled: android::Looper::rebuildEpollLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper18rebuildEpollLockedEv(void) {
    ALOGD("_ZN7android6Looper18rebuildEpollLockedEv() called");
    return 0;
}

/* Demangled: android::StopWatch::name() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9StopWatch4nameEv(void) {
    ALOGD("_ZNK7android9StopWatch4nameEv() called");
    return 0;
}

/* Demangled: android::String8::String8(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C2ERKS0_(void) {
    ALOGD("_ZN7android7String8C2ERKS0_() called");
    return 0;
}

/* Demangled: android::VectorImpl::insertArrayAt(void const*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl13insertArrayAtEPKvjj(void) {
    ALOGD("_ZN7android10VectorImpl13insertArrayAtEPKvjj() called");
    return 0;
}

/* Demangled: android::VectorImpl::VectorImpl(android::VectorImpl const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImplC2ERKS0_(void) {
    ALOGD("_ZN7android10VectorImplC2ERKS0_() called");
    return 0;
}

/* Demangled: android::SortedVectorImpl::~SortedVectorImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SortedVectorImplD1Ev(void) {
    ALOGD("_ZN7android16SortedVectorImplD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVectorImpl::operator=(android::SortedVectorImpl const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SortedVectorImplaSERKS0_(void) {
    ALOGD("_ZN7android16SortedVectorImplaSERKS0_() called");
    return 0;
}

/* Demangled: android::Vector<android::Looper::MessageEnvelope>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_6Looper15MessageEnvelopeEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::String8Printer::String8Printer(android::String8*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14String8PrinterC1EPNS_7String8EPKc(void) {
    ALOGD("_ZN7android14String8PrinterC1EPNS_7String8EPKc() called");
    return 0;
}

/* Demangled: android::SortedVectorImpl::indexOf(void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16SortedVectorImpl7indexOfEPKv(void) {
    ALOGD("_ZNK7android16SortedVectorImpl7indexOfEPKv() called");
    return 0;
}

/* Demangled: android::RefBase::~RefBase() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBaseD0Ev(void) {
    ALOGD("_ZN7android7RefBaseD0Ev() called");
    return 0;
}

/* Demangled: android::String16::String16(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C2ERKNS_7String8E(void) {
    ALOGD("_ZN7android8String16C2ERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::WeakMessageHandler::~WeakMessageHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN7android18WeakMessageHandlerD1Ev(void) {
    ALOGD("_ZN7android18WeakMessageHandlerD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::Tokenizer::getLocation() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9Tokenizer11getLocationEv(void) {
    ALOGD("_ZNK7android9Tokenizer11getLocationEv() called");
    return 0;
}

/* Demangled: android::RefBase::weakref_type::trackMe(bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase12weakref_type7trackMeEbb(void) {
    ALOGD("_ZN7android7RefBase12weakref_type7trackMeEbb() called");
    return 0;
}

/* Demangled: android::String16::String16(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C1EPKc(void) {
    ALOGD("_ZN7android8String16C1EPKc() called");
    return 0;
}

/* Demangled: android::Vector<android::Looper::Response>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_6Looper8ResponseEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_6Looper8ResponseEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: androidCreateThreadEtc */
extern "C" __attribute__((visibility("default"))) int androidCreateThreadEtc(void) {
    ALOGD("androidCreateThreadEtc() called");
    return 0;
}

/* Demangled: virtual thunk to android::SimpleLooperCallback::~SimpleLooperCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android20SimpleLooperCallbackD0Ev(void) {
    ALOGD("_ZTv0_n12_N7android20SimpleLooperCallbackD0Ev() called");
    return 0;
}

/* Demangled: android::String8Printer::String8Printer(android::String8*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14String8PrinterC2EPNS_7String8EPKc(void) {
    ALOGD("_ZN7android14String8PrinterC2EPNS_7String8EPKc() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::RefBase::weakref_type::incWeak(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase12weakref_type7incWeakEPKv(void) {
    ALOGD("_ZN7android7RefBase12weakref_type7incWeakEPKv() called");
    return 0;
}

/* Demangled: utf32_to_utf8 */
extern "C" __attribute__((visibility("default"))) int utf32_to_utf8(void) {
    ALOGD("utf32_to_utf8() called");
    return 0;
}

/* Demangled: android::String16::startsWith(android::String16 const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8String1610startsWithERKS0_(void) {
    ALOGD("_ZNK7android8String1610startsWithERKS0_() called");
    return 0;
}

/* Demangled: utf8_to_utf16 */
extern "C" __attribute__((visibility("default"))) int utf8_to_utf16(void) {
    ALOGD("utf8_to_utf16() called");
    return 0;
}

/* Demangled: android::Looper::isPolling() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Looper9isPollingEv(void) {
    ALOGD("_ZNK7android6Looper9isPollingEv() called");
    return 0;
}

/* Exported Object: vtable for android::FdPrinter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android9FdPrinterE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::StopWatch::StopWatch(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9StopWatchC1EPKci(void) {
    ALOGD("_ZN7android9StopWatchC1EPKci() called");
    return 0;
}

/* Demangled: android::String8::String8(char32_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C2EPKDi(void) {
    ALOGD("_ZN7android7String8C2EPKDi() called");
    return 0;
}

/* Demangled: android::String8::String8(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C2EPKc(void) {
    ALOGD("_ZN7android7String8C2EPKc() called");
    return 0;
}

/* Demangled: android::String16::String16(android::String16::StaticLinkage) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C2ENS0_13StaticLinkageE(void) {
    ALOGD("_ZN7android8String16C2ENS0_13StaticLinkageE() called");
    return 0;
}

/* Demangled: android::JenkinsHashMixShorts(unsigned int, unsigned short const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20JenkinsHashMixShortsEjPKtj(void) {
    ALOGD("_ZN7android20JenkinsHashMixShortsEjPKtj() called");
    return 0;
}

/* Demangled: android::String16::allocFromUTF8(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String1613allocFromUTF8EPKcj(void) {
    ALOGD("_ZN7android8String1613allocFromUTF8EPKcj() called");
    return 0;
}

/* Demangled: android::String16::String16(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C1ERKNS_7String8E(void) {
    ALOGD("_ZN7android8String16C1ERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::Vector<android::sysprop_change_callback_info>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_28sysprop_change_callback_infoEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_28sysprop_change_callback_infoEE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sysprop_change_callback_info> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_28sysprop_change_callback_infoEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::Looper::MessageEnvelope>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_6Looper15MessageEnvelopeEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::Vector<android::Looper::Response>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_6Looper8ResponseEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_6Looper8ResponseEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::PropertyMap::Parser::Parser(android::PropertyMap*, android::Tokenizer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11PropertyMap6ParserC1EPS0_PNS_9TokenizerE(void) {
    ALOGD("_ZN7android11PropertyMap6ParserC1EPS0_PNS_9TokenizerE() called");
    return 0;
}

/* Demangled: android::Tokenizer::nextToken(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9Tokenizer9nextTokenEPKc(void) {
    ALOGD("_ZN7android9Tokenizer9nextTokenEPKc() called");
    return 0;
}

/* Demangled: android::sp_report_race() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14sp_report_raceEv(void) {
    ALOGD("_ZN7android14sp_report_raceEv() called");
    return 0;
}

/* Demangled: android::FileMap::FileMap() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FileMapC2Ev(void) {
    ALOGD("_ZN7android7FileMapC2Ev() called");
    return 0;
}

/* Demangled: android::PropertyMap::Parser::~Parser() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11PropertyMap6ParserD2Ev(void) {
    ALOGD("_ZN7android11PropertyMap6ParserD2Ev() called");
    return 0;
}

/* Demangled: android::RefBase::createWeak(void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7RefBase10createWeakEPKv(void) {
    ALOGD("_ZNK7android7RefBase10createWeakEPKv() called");
    return 0;
}

/* Demangled: android::Looper::sendMessage(android::sp<android::MessageHandler> const&, android::Message const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper11sendMessageERKNS_2spINS_14MessageHandlerEEERKNS_7MessageE(void) {
    ALOGD("_ZN7android6Looper11sendMessageERKNS_2spINS_14MessageHandlerEEERKNS_7MessageE() called");
    return 0;
}

/* Demangled: android::Vector<android::Looper::Response>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_6Looper8ResponseEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_6Looper8ResponseEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::String8::append(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String86appendERKS0_(void) {
    ALOGD("_ZN7android7String86appendERKS0_() called");
    return 0;
}

/* Demangled: android::String16::startsWith(char16_t const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8String1610startsWithEPKDs(void) {
    ALOGD("_ZNK7android8String1610startsWithEPKDs() called");
    return 0;
}

/* Demangled: android::RefBase::forceIncStrong(void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7RefBase14forceIncStrongEPKv(void) {
    ALOGD("_ZNK7android7RefBase14forceIncStrongEPKv() called");
    return 0;
}

/* Demangled: android::VectorImpl::setCapacity(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl11setCapacityEj(void) {
    ALOGD("_ZN7android10VectorImpl11setCapacityEj() called");
    return 0;
}

/* Exported Object: vtable for android::MessageHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android14MessageHandlerE = NULL;

/* Exported Object: vtable for android::Vector<android::Looper::MessageEnvelope> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_6Looper15MessageEnvelopeEEE = NULL;

/* Demangled: android::FileMap::~FileMap() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FileMapD2Ev(void) {
    ALOGD("_ZN7android7FileMapD2Ev() called");
    return 0;
}

/* Demangled: android::String8::String8(android::String16 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C2ERKNS_8String16E(void) {
    ALOGD("_ZN7android7String8C2ERKNS_8String16E() called");
    return 0;
}

/* Demangled: android::VectorImpl::add(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl3addEPKv(void) {
    ALOGD("_ZN7android10VectorImpl3addEPKv() called");
    return 0;
}

/* Demangled: virtual thunk to android::MessageHandler::~MessageHandler() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android14MessageHandlerD0Ev(void) {
    ALOGD("_ZTv0_n12_N7android14MessageHandlerD0Ev() called");
    return 0;
}

/* Demangled: android::String8::String8(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C1EPKc(void) {
    ALOGD("_ZN7android7String8C1EPKc() called");
    return 0;
}

/* Demangled: android::Thread::~Thread() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6ThreadD0Ev(void) {
    ALOGD("_ZN7android6ThreadD0Ev() called");
    return 0;
}

/* Demangled: android::Tokenizer::~Tokenizer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9TokenizerD2Ev(void) {
    ALOGD("_ZN7android9TokenizerD2Ev() called");
    return 0;
}

/* Demangled: android::VectorImpl::pop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl3popEv(void) {
    ALOGD("_ZN7android10VectorImpl3popEv() called");
    return 0;
}

/* Demangled: android::VectorImpl::insertAt(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl8insertAtEjj(void) {
    ALOGD("_ZN7android10VectorImpl8insertAtEjj() called");
    return 0;
}

/* Demangled: strnlen32 */
extern "C" __attribute__((visibility("default"))) int strnlen32(void) {
    ALOGD("strnlen32() called");
    return 0;
}

/* Demangled: android::NativeHandle::NativeHandle(native_handle*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12NativeHandleC1EP13native_handleb(void) {
    ALOGD("_ZN7android12NativeHandleC1EP13native_handleb() called");
    return 0;
}

/* Demangled: android::PropertyMap::addAll(android::PropertyMap const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11PropertyMap6addAllEPKS0_(void) {
    ALOGD("_ZN7android11PropertyMap6addAllEPKS0_() called");
    return 0;
}

/* Demangled: android::Thread::requestExitAndWait() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Thread18requestExitAndWaitEv(void) {
    ALOGD("_ZN7android6Thread18requestExitAndWaitEv() called");
    return 0;
}

/* Demangled: android::String8::String8(char16_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C2EPKDs(void) {
    ALOGD("_ZN7android7String8C2EPKDs() called");
    return 0;
}

/* Demangled: android::Looper::removeFd(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper8removeFdEii(void) {
    ALOGD("_ZN7android6Looper8removeFdEii() called");
    return 0;
}

/* Demangled: android::Vector<android::sysprop_change_callback_info>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_28sysprop_change_callback_infoEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_28sysprop_change_callback_infoEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::LogPrinter::printLine(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10LogPrinter9printLineEPKc(void) {
    ALOGD("_ZN7android10LogPrinter9printLineEPKc() called");
    return 0;
}

/* Demangled: android::RefBase::renameRefId(android::RefBase*, void const*, void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase11renameRefIdEPS0_PKvS3_(void) {
    ALOGD("_ZN7android7RefBase11renameRefIdEPS0_PKvS3_() called");
    return 0;
}

/* Demangled: android::Looper::sendMessageDelayed(long long, android::sp<android::MessageHandler> const&, android::Message const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper18sendMessageDelayedExRKNS_2spINS_14MessageHandlerEEERKNS_7MessageE(void) {
    ALOGD("_ZN7android6Looper18sendMessageDelayedExRKNS_2spINS_14MessageHandlerEEERKNS_7MessageE() called");
    return 0;
}

/* Demangled: android::PrefixPrinter::PrefixPrinter(android::Printer&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13PrefixPrinterC1ERNS_7PrinterEPKc(void) {
    ALOGD("_ZN7android13PrefixPrinterC1ERNS_7PrinterEPKc() called");
    return 0;
}

/* Demangled: toMillisecondTimeoutDelay */
extern "C" __attribute__((visibility("default"))) int toMillisecondTimeoutDelay(void) {
    ALOGD("toMillisecondTimeoutDelay() called");
    return 0;
}

/* Demangled: android::VectorImpl::~VectorImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImplD0Ev(void) {
    ALOGD("_ZN7android10VectorImplD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVectorImpl::merge(android::SortedVectorImpl const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SortedVectorImpl5mergeERKS0_(void) {
    ALOGD("_ZN7android16SortedVectorImpl5mergeERKS0_() called");
    return 0;
}

/* Demangled: android::LogPrinter::LogPrinter(char const*, android_LogPriority, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10LogPrinterC2EPKc19android_LogPriorityS2_b(void) {
    ALOGD("_ZN7android10LogPrinterC2EPKc19android_LogPriorityS2_b() called");
    return 0;
}

/* Demangled: android::String8::String8(char32_t const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C1EPKDij(void) {
    ALOGD("_ZN7android7String8C1EPKDij() called");
    return 0;
}

/* Demangled: android::String16::allocFromUTF16(char16_t const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String1614allocFromUTF16EPKDsj(void) {
    ALOGD("_ZN7android8String1614allocFromUTF16EPKDsj() called");
    return 0;
}

/* Demangled: androidSetThreadName */
extern "C" __attribute__((visibility("default"))) int androidSetThreadName(void) {
    ALOGD("androidSetThreadName() called");
    return 0;
}

/* Demangled: android::Looper::setForThread(android::sp<android::Looper> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper12setForThreadERKNS_2spIS0_EE(void) {
    ALOGD("_ZN7android6Looper12setForThreadERKNS_2spIS0_EE() called");
    return 0;
}

/* Demangled: android::PrefixPrinter::PrefixPrinter(android::Printer&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13PrefixPrinterC2ERNS_7PrinterEPKc(void) {
    ALOGD("_ZN7android13PrefixPrinterC2ERNS_7PrinterEPKc() called");
    return 0;
}

/* Demangled: android::String16::String16(char16_t const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C2EPKDsj(void) {
    ALOGD("_ZN7android8String16C2EPKDsj() called");
    return 0;
}

/* Demangled: android::Tokenizer::Tokenizer(android::String8 const&, android::FileMap*, char*, bool, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9TokenizerC1ERKNS_7String8EPNS_7FileMapEPcbj(void) {
    ALOGD("_ZN7android9TokenizerC1ERKNS_7String8EPNS_7FileMapEPcbj() called");
    return 0;
}

/* Demangled: android::VectorImpl::editArrayImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl13editArrayImplEv(void) {
    ALOGD("_ZN7android10VectorImpl13editArrayImplEv() called");
    return 0;
}

/* Demangled: android::Looper::addFd(int, int, int, android::sp<android::LooperCallback> const&, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper5addFdEiiiRKNS_2spINS_14LooperCallbackEEEPv(void) {
    ALOGD("_ZN7android6Looper5addFdEiiiRKNS_2spINS_14LooperCallbackEEEPv() called");
    return 0;
}

/* Demangled: android::FileMap::operator=(android::FileMap&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FileMapaSEOS0_(void) {
    ALOGD("_ZN7android7FileMapaSEOS0_() called");
    return 0;
}

/* Demangled: android::RefBase::getWeakRefs() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7RefBase11getWeakRefsEv(void) {
    ALOGD("_ZNK7android7RefBase11getWeakRefsEv() called");
    return 0;
}

/* Demangled: android::String8::String8(android::String8::StaticLinkage) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C1ENS0_13StaticLinkageE(void) {
    ALOGD("_ZN7android7String8C1ENS0_13StaticLinkageE() called");
    return 0;
}

/* Demangled: android::String16::String16(android::String16 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C2ERKS0_(void) {
    ALOGD("_ZN7android8String16C2ERKS0_() called");
    return 0;
}

/* Demangled: android::SimpleLooperCallback::~SimpleLooperCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN7android20SimpleLooperCallbackD0Ev(void) {
    ALOGD("_ZN7android20SimpleLooperCallbackD0Ev() called");
    return 0;
}

/* Demangled: android::Printer::~Printer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7PrinterD0Ev(void) {
    ALOGD("_ZN7android7PrinterD0Ev() called");
    return 0;
}

/* Demangled: android::String8::length() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7String86lengthEv(void) {
    ALOGD("_ZNK7android7String86lengthEv() called");
    return 0;
}

/* Exported Object: vtable for android::RefBase */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android7RefBaseE = NULL;

/* Demangled: android::SharedBuffer::release(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SharedBuffer7releaseEj(void) {
    ALOGD("_ZNK7android12SharedBuffer7releaseEj() called");
    return 0;
}

/* Demangled: android::String16::insert(unsigned int, char16_t const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String166insertEjPKDsj(void) {
    ALOGD("_ZN7android8String166insertEjPKDsj() called");
    return 0;
}

/* Demangled: android::String16::String16(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C2EPKcj(void) {
    ALOGD("_ZN7android8String16C2EPKcj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEEE = NULL;

/* Demangled: virtual thunk to android::LooperCallback::~LooperCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android14LooperCallbackD1Ev(void) {
    ALOGD("_ZTv0_n12_N7android14LooperCallbackD1Ev() called");
    return 0;
}

/* Demangled: android::RefBase::onIncStrongAttempted(unsigned int, void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase20onIncStrongAttemptedEjPKv(void) {
    ALOGD("_ZN7android7RefBase20onIncStrongAttemptedEjPKv() called");
    return 0;
}

/* Demangled: android::SharedBuffer::editResize(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SharedBuffer10editResizeEj(void) {
    ALOGD("_ZNK7android12SharedBuffer10editResizeEj() called");
    return 0;
}

/* Demangled: android::String8::String8(char32_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C1EPKDi(void) {
    ALOGD("_ZN7android7String8C1EPKDi() called");
    return 0;
}

/* Demangled: android::String16::String16(char16_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C1EPKDs(void) {
    ALOGD("_ZN7android8String16C1EPKDs() called");
    return 0;
}

/* Demangled: android::Looper::awoken() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper6awokenEv(void) {
    ALOGD("_ZN7android6Looper6awokenEv() called");
    return 0;
}

/* Demangled: utf8_to_utf16_length */
extern "C" __attribute__((visibility("default"))) int utf8_to_utf16_length(void) {
    ALOGD("utf8_to_utf16_length() called");
    return 0;
}

/* Demangled: android::Thread::_threadLoop(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Thread11_threadLoopEPv(void) {
    ALOGD("_ZN7android6Thread11_threadLoopEPv() called");
    return 0;
}

/* Demangled: android::RefBase::weakref_type::decWeak(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase12weakref_type7decWeakEPKv(void) {
    ALOGD("_ZN7android7RefBase12weakref_type7decWeakEPKv() called");
    return 0;
}

/* Demangled: android::Looper::prepare(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper7prepareEi(void) {
    ALOGD("_ZN7android6Looper7prepareEi() called");
    return 0;
}

/* Demangled: android::NativeHandle::NativeHandle(native_handle*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12NativeHandleC2EP13native_handleb(void) {
    ALOGD("_ZN7android12NativeHandleC2EP13native_handleb() called");
    return 0;
}

/* Demangled: android::RefBase::RefBase() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBaseC1Ev(void) {
    ALOGD("_ZN7android7RefBaseC1Ev() called");
    return 0;
}

/* Demangled: android::Vector<android::Looper::MessageEnvelope>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_6Looper15MessageEnvelopeEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::VectorImpl::appendArray(void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl11appendArrayEPKvj(void) {
    ALOGD("_ZN7android10VectorImpl11appendArrayEPKvj() called");
    return 0;
}

/* Demangled: android::SortedVectorImpl::SortedVectorImpl(android::VectorImpl const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SortedVectorImplC2ERKNS_10VectorImplE(void) {
    ALOGD("_ZN7android16SortedVectorImplC2ERKNS_10VectorImplE() called");
    return 0;
}

/* Demangled: android::SortedVectorImpl::~SortedVectorImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SortedVectorImplD2Ev(void) {
    ALOGD("_ZN7android16SortedVectorImplD2Ev() called");
    return 0;
}

/* Demangled: androidSetCreateThreadFunc */
extern "C" __attribute__((visibility("default"))) int androidSetCreateThreadFunc(void) {
    ALOGD("androidSetCreateThreadFunc() called");
    return 0;
}

/* Demangled: android::LooperCallback::~LooperCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14LooperCallbackD0Ev(void) {
    ALOGD("_ZN7android14LooperCallbackD0Ev() called");
    return 0;
}

/* Demangled: android::Looper::addFd(int, int, int, int (*)(int, int, void*), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper5addFdEiiiPFiiiPvES1_(void) {
    ALOGD("_ZN7android6Looper5addFdEiiiPFiiiPvES1_() called");
    return 0;
}

/* Demangled: android::Vector<android::Looper::Response>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_6Looper8ResponseEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_6Looper8ResponseEE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: construction vtable for android::MessageHandler-in-android::WeakMessageHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android18WeakMessageHandlerE0_NS_14MessageHandlerE = NULL;

/* Demangled: android::SortedVectorImpl::add(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SortedVectorImpl3addEPKv(void) {
    ALOGD("_ZN7android16SortedVectorImpl3addEPKv() called");
    return 0;
}

/* Demangled: android::RefBase::~RefBase() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBaseD1Ev(void) {
    ALOGD("_ZN7android7RefBaseD1Ev() called");
    return 0;
}

/* Demangled: android::WeakMessageHandler::~WeakMessageHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN7android18WeakMessageHandlerD2Ev(void) {
    ALOGD("_ZN7android18WeakMessageHandlerD2Ev() called");
    return 0;
}

/* Demangled: android::SimpleLooperCallback::SimpleLooperCallback(int (*)(int, int, void*)) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20SimpleLooperCallbackC1EPFiiiPvE(void) {
    ALOGD("_ZN7android20SimpleLooperCallbackC1EPFiiiPvE() called");
    return 0;
}

/* Demangled: android::FileMap::advise(android::FileMap::MapAdvice) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FileMap6adviseENS0_9MapAdviceE(void) {
    ALOGD("_ZN7android7FileMap6adviseENS0_9MapAdviceE() called");
    return 0;
}

/* Demangled: android::PropertyMap::PropertyMap() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11PropertyMapC1Ev(void) {
    ALOGD("_ZN7android11PropertyMapC1Ev() called");
    return 0;
}

/* Demangled: android::SharedBuffer::edit() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SharedBuffer4editEv(void) {
    ALOGD("_ZNK7android12SharedBuffer4editEv() called");
    return 0;
}

/* Demangled: android::VectorImpl::insertVectorAt(android::VectorImpl const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl14insertVectorAtERKS0_j(void) {
    ALOGD("_ZN7android10VectorImpl14insertVectorAtERKS0_j() called");
    return 0;
}

/* Demangled: android::PropertyMap::Parser::parse() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11PropertyMap6Parser5parseEv(void) {
    ALOGD("_ZN7android11PropertyMap6Parser5parseEv() called");
    return 0;
}

/* Demangled: android::String8::String8(char16_t const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C1EPKDsj(void) {
    ALOGD("_ZN7android7String8C1EPKDsj() called");
    return 0;
}

/* Demangled: android::String16::append(char16_t const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String166appendEPKDsj(void) {
    ALOGD("_ZN7android8String166appendEPKDsj() called");
    return 0;
}

/* Exported Object: vtable for android::VectorImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android10VectorImplE = NULL;

/* Demangled: virtual thunk to android::SimpleLooperCallback::~SimpleLooperCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android20SimpleLooperCallbackD1Ev(void) {
    ALOGD("_ZTv0_n12_N7android20SimpleLooperCallbackD1Ev() called");
    return 0;
}

/* Demangled: android::JenkinsHashWhiten(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17JenkinsHashWhitenEj(void) {
    ALOGD("_ZN7android17JenkinsHashWhitenEj() called");
    return 0;
}

/* Demangled: android::String8::String8(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C1ERKS0_(void) {
    ALOGD("_ZN7android7String8C1ERKS0_() called");
    return 0;
}

/* Demangled: android::String16::append(android::String16 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String166appendERKS0_(void) {
    ALOGD("_ZN7android8String166appendERKS0_() called");
    return 0;
}

/* Demangled: android::VectorImpl::replaceAt(void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl9replaceAtEPKvj(void) {
    ALOGD("_ZN7android10VectorImpl9replaceAtEPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::LooperCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android14LooperCallbackE = NULL;

/* Demangled: android::PropertyMap::~PropertyMap() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11PropertyMapD1Ev(void) {
    ALOGD("_ZN7android11PropertyMapD1Ev() called");
    return 0;
}

/* Demangled: android::String8::String8(char16_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C1EPKDs(void) {
    ALOGD("_ZN7android7String8C1EPKDs() called");
    return 0;
}

/* Demangled: strcpy16 */
extern "C" __attribute__((visibility("default"))) int strcpy16(void) {
    ALOGD("strcpy16() called");
    return 0;
}

/* Demangled: android::SimpleLooperCallback::handleEvent(int, int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20SimpleLooperCallback11handleEventEiiPv(void) {
    ALOGD("_ZN7android20SimpleLooperCallback11handleEventEiiPv() called");
    return 0;
}

/* Demangled: android::Looper::pushResponse(int, android::Looper::Request const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper12pushResponseEiRKNS0_7RequestE(void) {
    ALOGD("_ZN7android6Looper12pushResponseEiRKNS0_7RequestE() called");
    return 0;
}

/* Demangled: android::report_sysprop_change() */
extern "C" __attribute__((visibility("default"))) int _ZN7android21report_sysprop_changeEv(void) {
    ALOGD("_ZN7android21report_sysprop_changeEv() called");
    return 0;
}

/* Demangled: android::Looper::~Looper() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6LooperD0Ev(void) {
    ALOGD("_ZN7android6LooperD0Ev() called");
    return 0;
}

/* Demangled: android::RefBase::renameRefId(android::RefBase::weakref_type*, void const*, void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase11renameRefIdEPNS0_12weakref_typeEPKvS4_(void) {
    ALOGD("_ZN7android7RefBase11renameRefIdEPNS0_12weakref_typeEPKvS4_() called");
    return 0;
}

/* Demangled: android::String8::toUpper() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String87toUpperEv(void) {
    ALOGD("_ZN7android7String87toUpperEv() called");
    return 0;
}

/* Demangled: android::String16::String16() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C1Ev(void) {
    ALOGD("_ZN7android8String16C1Ev() called");
    return 0;
}

/* Demangled: android::Looper::pollOnce(int, int*, int*, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper8pollOnceEiPiS1_PPv(void) {
    ALOGD("_ZN7android6Looper8pollOnceEiPiS1_PPv() called");
    return 0;
}

/* Exported Object: vtable for android::SimpleLooperCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android20SimpleLooperCallbackE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::RefBase::decStrong(void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7RefBase9decStrongEPKv(void) {
    ALOGD("_ZNK7android7RefBase9decStrongEPKv() called");
    return 0;
}

/* Demangled: android::Looper::wake() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper4wakeEv(void) {
    ALOGD("_ZN7android6Looper4wakeEv() called");
    return 0;
}

/* Demangled: android::LogPrinter::printRaw(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10LogPrinter8printRawEPKc(void) {
    ALOGD("_ZN7android10LogPrinter8printRawEPKc() called");
    return 0;
}

/* Demangled: android::String8::setPathName(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String811setPathNameEPKc(void) {
    ALOGD("_ZN7android7String811setPathNameEPKc() called");
    return 0;
}

/* Demangled: android::String16::setTo(char16_t const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String165setToEPKDsj(void) {
    ALOGD("_ZN7android8String165setToEPKDsj() called");
    return 0;
}

/* Demangled: android::String16::release() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String167releaseEv(void) {
    ALOGD("_ZN7android8String167releaseEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::LooperCallback-in-android::SimpleLooperCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android20SimpleLooperCallbackE0_NS_14LooperCallbackE = NULL;

/* Exported Object: vtable for android::Printer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android7PrinterE = NULL;

/* Demangled: android::String16::setTo(android::String16 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String165setToERKS0_(void) {
    ALOGD("_ZN7android8String165setToERKS0_() called");
    return 0;
}

/* Demangled: android::String16::~String16() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16D1Ev(void) {
    ALOGD("_ZN7android8String16D1Ev() called");
    return 0;
}

/* Demangled: android::Thread::isRunning() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Thread9isRunningEv(void) {
    ALOGD("_ZNK7android6Thread9isRunningEv() called");
    return 0;
}

/* Demangled: androidCreateRawThreadEtc */
extern "C" __attribute__((visibility("default"))) int androidCreateRawThreadEtc(void) {
    ALOGD("androidCreateRawThreadEtc() called");
    return 0;
}

/* Demangled: android::StopWatch::lap() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9StopWatch3lapEv(void) {
    ALOGD("_ZN7android9StopWatch3lapEv() called");
    return 0;
}

/* Demangled: android::Thread::join() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Thread4joinEv(void) {
    ALOGD("_ZN7android6Thread4joinEv() called");
    return 0;
}

/* Demangled: android::Vector<android::Looper::MessageEnvelope>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_6Looper15MessageEnvelopeEE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: VTT for android::SimpleLooperCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android20SimpleLooperCallbackE = NULL;

/* Demangled: virtual thunk to android::MessageHandler::~MessageHandler() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android14MessageHandlerD1Ev(void) {
    ALOGD("_ZTv0_n12_N7android14MessageHandlerD1Ev() called");
    return 0;
}

/* Demangled: android::Thread::~Thread() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6ThreadD1Ev(void) {
    ALOGD("_ZN7android6ThreadD1Ev() called");
    return 0;
}

/* Demangled: android::Looper::Looper(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6LooperC1Eb(void) {
    ALOGD("_ZN7android6LooperC1Eb() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: strlen16 */
extern "C" __attribute__((visibility("default"))) int strlen16(void) {
    ALOGD("strlen16() called");
    return 0;
}

/* Demangled: android::VectorImpl::VectorImpl(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImplC2Ejj(void) {
    ALOGD("_ZN7android10VectorImplC2Ejj() called");
    return 0;
}

/* Demangled: android::String8::append(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String86appendEPKc(void) {
    ALOGD("_ZN7android7String86appendEPKc() called");
    return 0;
}

/* Demangled: android::Tokenizer::open(android::String8 const&, android::Tokenizer**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9Tokenizer4openERKNS_7String8EPPS0_(void) {
    ALOGD("_ZN7android9Tokenizer4openERKNS_7String8EPPS0_() called");
    return 0;
}

/* Demangled: android::RefBase::onFirstRef() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase10onFirstRefEv(void) {
    ALOGD("_ZN7android7RefBase10onFirstRefEv() called");
    return 0;
}

/* Demangled: android::String8::setTo(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String85setToEPKc(void) {
    ALOGD("_ZN7android7String85setToEPKc() called");
    return 0;
}

/* Demangled: utf8_to_utf16_no_null_terminator */
extern "C" __attribute__((visibility("default"))) int utf8_to_utf16_no_null_terminator(void) {
    ALOGD("utf8_to_utf16_no_null_terminator() called");
    return 0;
}

/* Demangled: android::add_sysprop_change_callback(void (*)(), int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android27add_sysprop_change_callbackEPFvvEi(void) {
    ALOGD("_ZN7android27add_sysprop_change_callbackEPFvvEi() called");
    return 0;
}

/* Demangled: android::PropertyMap::load(android::String8 const&, android::PropertyMap**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11PropertyMap4loadERKNS_7String8EPPS0_(void) {
    ALOGD("_ZN7android11PropertyMap4loadERKNS_7String8EPPS0_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_() called");
    return 0;
}

/* Demangled: android::RefBase::getStrongCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7RefBase14getStrongCountEv(void) {
    ALOGD("_ZNK7android7RefBase14getStrongCountEv() called");
    return 0;
}

/* Demangled: android::String8::format(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String86formatEPKcz(void) {
    ALOGD("_ZN7android7String86formatEPKcz() called");
    return 0;
}

/* Demangled: android::String16::acquire() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String167acquireEv(void) {
    ALOGD("_ZN7android8String167acquireEv() called");
    return 0;
}

/* Demangled: android::FileMap::create(char const*, int, long long, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FileMap6createEPKcixjb(void) {
    ALOGD("_ZN7android7FileMap6createEPKcixjb() called");
    return 0;
}

/* Demangled: android::String16::edit() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String164editEv(void) {
    ALOGD("_ZN7android8String164editEv() called");
    return 0;
}

/* Demangled: android::String16::makeLower() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String169makeLowerEv(void) {
    ALOGD("_ZN7android8String169makeLowerEv() called");
    return 0;
}

/* Demangled: android::String16::String16(android::String16 const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C2ERKS0_jj(void) {
    ALOGD("_ZN7android8String16C2ERKS0_jj() called");
    return 0;
}

/* Demangled: android::String16::staticStringSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8String1616staticStringSizeEv(void) {
    ALOGD("_ZNK7android8String1616staticStringSizeEv() called");
    return 0;
}

/* Demangled: android::MessageHandler::~MessageHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14MessageHandlerD0Ev(void) {
    ALOGD("_ZN7android14MessageHandlerD0Ev() called");
    return 0;
}

/* Demangled: android::PropertyMap::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11PropertyMap5clearEv(void) {
    ALOGD("_ZN7android11PropertyMap5clearEv() called");
    return 0;
}

/* Demangled: android::Thread::Thread(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6ThreadC2Eb(void) {
    ALOGD("_ZN7android6ThreadC2Eb() called");
    return 0;
}

/* Demangled: android::VectorImpl::~VectorImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImplD1Ev(void) {
    ALOGD("_ZN7android10VectorImplD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::SharedBuffer::dealloc(android::SharedBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12SharedBuffer7deallocEPKS0_(void) {
    ALOGD("_ZN7android12SharedBuffer7deallocEPKS0_() called");
    return 0;
}

/* Demangled: android::String8::convertToResPath() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String816convertToResPathEv(void) {
    ALOGD("_ZN7android7String816convertToResPathEv() called");
    return 0;
}

/* Demangled: android::String8::String8(android::String16 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C1ERKNS_8String16E(void) {
    ALOGD("_ZN7android7String8C1ERKNS_8String16E() called");
    return 0;
}

/* Demangled: android::PropertyMap::tryGetProperty(android::String8 const&, bool&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11PropertyMap14tryGetPropertyERKNS_7String8ERb(void) {
    ALOGD("_ZNK7android11PropertyMap14tryGetPropertyERKNS_7String8ERb() called");
    return 0;
}

/* Demangled: strstr16 */
extern "C" __attribute__((visibility("default"))) int strstr16(void) {
    ALOGD("strstr16() called");
    return 0;
}

/* Demangled: utf32_from_utf8_at */
extern "C" __attribute__((visibility("default"))) int utf32_from_utf8_at(void) {
    ALOGD("utf32_from_utf8_at() called");
    return 0;
}

/* Demangled: android::VectorImpl::insertAt(void const*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl8insertAtEPKvjj(void) {
    ALOGD("_ZN7android10VectorImpl8insertAtEPKvjj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::sp_report_stack_pointer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android23sp_report_stack_pointerEv(void) {
    ALOGD("_ZN7android23sp_report_stack_pointerEv() called");
    return 0;
}

/* Demangled: android::Tokenizer::peekRemainderOfLine() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9Tokenizer19peekRemainderOfLineEv(void) {
    ALOGD("_ZNK7android9Tokenizer19peekRemainderOfLineEv() called");
    return 0;
}

/* Demangled: android::RefBase::weakref_type::printRefs() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7RefBase12weakref_type9printRefsEv(void) {
    ALOGD("_ZNK7android7RefBase12weakref_type9printRefsEv() called");
    return 0;
}

/* Demangled: android::String8::toLower() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String87toLowerEv(void) {
    ALOGD("_ZN7android7String87toLowerEv() called");
    return 0;
}

/* Demangled: android::String16::setTo(android::String16 const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String165setToERKS0_jj(void) {
    ALOGD("_ZN7android8String165setToERKS0_jj() called");
    return 0;
}

/* Demangled: android::SimpleLooperCallback::~SimpleLooperCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN7android20SimpleLooperCallbackD1Ev(void) {
    ALOGD("_ZN7android20SimpleLooperCallbackD1Ev() called");
    return 0;
}

/* Demangled: android::Looper::threadDestructor(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper16threadDestructorEPv(void) {
    ALOGD("_ZN7android6Looper16threadDestructorEPv() called");
    return 0;
}

/* Demangled: android::Printer::~Printer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7PrinterD1Ev(void) {
    ALOGD("_ZN7android7PrinterD1Ev() called");
    return 0;
}

/* Demangled: android::String16::remove(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String166removeEjj(void) {
    ALOGD("_ZN7android8String166removeEjj() called");
    return 0;
}

/* Demangled: android::WeakMessageHandler::WeakMessageHandler(android::wp<android::MessageHandler> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18WeakMessageHandlerC1ERKNS_2wpINS_14MessageHandlerEEE(void) {
    ALOGD("_ZN7android18WeakMessageHandlerC1ERKNS_2wpINS_14MessageHandlerEEE() called");
    return 0;
}

/* Demangled: android::PropertyMap::tryGetProperty(android::String8 const&, float&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11PropertyMap14tryGetPropertyERKNS_7String8ERf(void) {
    ALOGD("_ZNK7android11PropertyMap14tryGetPropertyERKNS_7String8ERf() called");
    return 0;
}

/* Demangled: android::String16::String16(char16_t const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C1EPKDsj(void) {
    ALOGD("_ZN7android8String16C1EPKDsj() called");
    return 0;
}

/* Demangled: android::VectorImpl::add() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl3addEv(void) {
    ALOGD("_ZN7android10VectorImpl3addEv() called");
    return 0;
}

/* Demangled: android::FdPrinter::printLine(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FdPrinter9printLineEPKc(void) {
    ALOGD("_ZN7android9FdPrinter9printLineEPKc() called");
    return 0;
}

/* Demangled: android::SharedBuffer::reset(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SharedBuffer5resetEj(void) {
    ALOGD("_ZNK7android12SharedBuffer5resetEj() called");
    return 0;
}

/* Demangled: android::String16::String16(android::String16 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C1ERKS0_(void) {
    ALOGD("_ZN7android8String16C1ERKS0_() called");
    return 0;
}

/* Exported Object: vtable for android::String8Printer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android14String8PrinterE = NULL;

/* Demangled: android::PropertyMap::tryGetProperty(android::String8 const&, int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11PropertyMap14tryGetPropertyERKNS_7String8ERi(void) {
    ALOGD("_ZNK7android11PropertyMap14tryGetPropertyERKNS_7String8ERi() called");
    return 0;
}

/* Demangled: android::RefBase::renameRefs(unsigned int, android::ReferenceRenamer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase10renameRefsEjRKNS_16ReferenceRenamerE(void) {
    ALOGD("_ZN7android7RefBase10renameRefsEjRKNS_16ReferenceRenamerE() called");
    return 0;
}

/* Demangled: android::RefBase::RefBase() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBaseC2Ev(void) {
    ALOGD("_ZN7android7RefBaseC2Ev() called");
    return 0;
}

/* Demangled: android::StopWatch::elapsedTime() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9StopWatch11elapsedTimeEv(void) {
    ALOGD("_ZNK7android9StopWatch11elapsedTimeEv() called");
    return 0;
}

/* Demangled: android::String16::setTo(char16_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String165setToEPKDs(void) {
    ALOGD("_ZN7android8String165setToEPKDs() called");
    return 0;
}

/* Demangled: android::VectorImpl::push() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl4pushEv(void) {
    ALOGD("_ZN7android10VectorImpl4pushEv() called");
    return 0;
}

/* Demangled: android::Looper::initTLSKey() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper10initTLSKeyEv(void) {
    ALOGD("_ZN7android6Looper10initTLSKeyEv() called");
    return 0;
}

/* Demangled: android::FileMap::FileMap(android::FileMap&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FileMapC2EOS0_(void) {
    ALOGD("_ZN7android7FileMapC2EOS0_() called");
    return 0;
}

/* Demangled: android::String16::String16(android::String16 const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C1ERKS0_jj(void) {
    ALOGD("_ZN7android8String16C1ERKS0_jj() called");
    return 0;
}

/* Demangled: android::elapsedRealtime() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15elapsedRealtimeEv(void) {
    ALOGD("_ZN7android15elapsedRealtimeEv() called");
    return 0;
}

/* Demangled: android::Tokenizer::fromContents(android::String8 const&, char const*, android::Tokenizer**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9Tokenizer12fromContentsERKNS_7String8EPKcPPS0_(void) {
    ALOGD("_ZN7android9Tokenizer12fromContentsERKNS_7String8EPKcPPS0_() called");
    return 0;
}

/* Demangled: strnlen16 */
extern "C" __attribute__((visibility("default"))) int strnlen16(void) {
    ALOGD("strnlen16() called");
    return 0;
}

/* Demangled: android::String8::String8() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C1Ev(void) {
    ALOGD("_ZN7android7String8C1Ev() called");
    return 0;
}

/* Demangled: android::Thread::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Thread10readyToRunEv(void) {
    ALOGD("_ZN7android6Thread10readyToRunEv() called");
    return 0;
}

/* Demangled: android::LooperCallback::~LooperCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14LooperCallbackD1Ev(void) {
    ALOGD("_ZN7android14LooperCallbackD1Ev() called");
    return 0;
}

/* Exported Object: VTT for android::WeakMessageHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android18WeakMessageHandlerE = NULL;

/* Demangled: android::NativeHandle::~NativeHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12NativeHandleD1Ev(void) {
    ALOGD("_ZN7android12NativeHandleD1Ev() called");
    return 0;
}

/* Demangled: android::RefBase::~RefBase() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBaseD2Ev(void) {
    ALOGD("_ZN7android7RefBaseD2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVectorImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android16SortedVectorImplE = NULL;

/* Demangled: android::PropertyMap::PropertyMap() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11PropertyMapC2Ev(void) {
    ALOGD("_ZN7android11PropertyMapC2Ev() called");
    return 0;
}

/* Demangled: android::RefBase::weakref_type::refBase() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7RefBase12weakref_type7refBaseEv(void) {
    ALOGD("_ZNK7android7RefBase12weakref_type7refBaseEv() called");
    return 0;
}

/* Demangled: android::String16::replaceAll(char16_t, char16_t) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String1610replaceAllEDsDs(void) {
    ALOGD("_ZN7android8String1610replaceAllEDsDs() called");
    return 0;
}

/* Demangled: android::String8::~String8() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8D1Ev(void) {
    ALOGD("_ZN7android7String8D1Ev() called");
    return 0;
}

/* Demangled: android::String8::find_extension() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7String814find_extensionEv(void) {
    ALOGD("_ZNK7android7String814find_extensionEv() called");
    return 0;
}

/* Demangled: virtual thunk to android::Thread::~Thread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android6ThreadD0Ev(void) {
    ALOGD("_ZTv0_n12_N7android6ThreadD0Ev() called");
    return 0;
}

/* Demangled: android::StopWatch::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9StopWatch5resetEv(void) {
    ALOGD("_ZN7android9StopWatch5resetEv() called");
    return 0;
}

/* Demangled: android::String16::size() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8String164sizeEv(void) {
    ALOGD("_ZNK7android8String164sizeEv() called");
    return 0;
}

/* Exported Object: VTT for android::MessageHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android14MessageHandlerE = NULL;

/* Exported Object: android::FileMap::mPageSize */
extern "C" __attribute__((visibility("default"))) void* _ZN7android7FileMap9mPageSizeE = NULL;

/* Demangled: android::PropertyMap::~PropertyMap() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11PropertyMapD2Ev(void) {
    ALOGD("_ZN7android11PropertyMapD2Ev() called");
    return 0;
}

/* Demangled: android::VectorImpl::removeItemsAt(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl13removeItemsAtEjj(void) {
    ALOGD("_ZN7android10VectorImpl13removeItemsAtEjj() called");
    return 0;
}

/* Demangled: android::VectorImpl::sort(int (*)(void const*, void const*)) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl4sortEPFiPKvS2_E(void) {
    ALOGD("_ZN7android10VectorImpl4sortEPFiPKvS2_E() called");
    return 0;
}

/* Demangled: android::SharedBuffer::attemptEdit() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SharedBuffer11attemptEditEv(void) {
    ALOGD("_ZNK7android12SharedBuffer11attemptEditEv() called");
    return 0;
}

/* Demangled: android::VectorImpl::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl6resizeEj(void) {
    ALOGD("_ZN7android10VectorImpl6resizeEj() called");
    return 0;
}

/* Demangled: android::SortedVectorImpl::merge(android::VectorImpl const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SortedVectorImpl5mergeERKNS_10VectorImplE(void) {
    ALOGD("_ZN7android16SortedVectorImpl5mergeERKNS_10VectorImplE() called");
    return 0;
}

/* Demangled: android::Looper::~Looper() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6LooperD1Ev(void) {
    ALOGD("_ZN7android6LooperD1Ev() called");
    return 0;
}

/* Demangled: android::Looper::Request::initEventItem(epoll_event*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Looper7Request13initEventItemEP11epoll_event(void) {
    ALOGD("_ZNK7android6Looper7Request13initEventItemEP11epoll_event() called");
    return 0;
}

/* Demangled: android::LogPrinter::LogPrinter(char const*, android_LogPriority, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10LogPrinterC1EPKc19android_LogPriorityS2_b(void) {
    ALOGD("_ZN7android10LogPrinterC1EPKc19android_LogPriorityS2_b() called");
    return 0;
}

/* Demangled: android::String8::appendFormatV(char const*, std::__va_list) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String813appendFormatVEPKcSt9__va_list(void) {
    ALOGD("_ZN7android7String813appendFormatVEPKcSt9__va_list() called");
    return 0;
}

/* Demangled: android::String16::String16() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C2Ev(void) {
    ALOGD("_ZN7android8String16C2Ev() called");
    return 0;
}

/* Demangled: android::elapsedRealtimeNano() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19elapsedRealtimeNanoEv(void) {
    ALOGD("_ZN7android19elapsedRealtimeNanoEv() called");
    return 0;
}

/* Demangled: android::get_report_sysprop_change_func() */
extern "C" __attribute__((visibility("default"))) int _ZN7android30get_report_sysprop_change_funcEv(void) {
    ALOGD("_ZN7android30get_report_sysprop_change_funcEv() called");
    return 0;
}

/* Demangled: android::PrefixPrinter::printLine(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13PrefixPrinter9printLineEPKc(void) {
    ALOGD("_ZN7android13PrefixPrinter9printLineEPKc() called");
    return 0;
}

/* Exported Object: vtable for android::PrefixPrinter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android13PrefixPrinterE = NULL;

/* Demangled: android::PropertyMap::addProperty(android::String8 const&, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11PropertyMap11addPropertyERKNS_7String8ES3_(void) {
    ALOGD("_ZN7android11PropertyMap11addPropertyERKNS_7String8ES3_() called");
    return 0;
}

/* Demangled: android::RefBase::extendObjectLifetime(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase20extendObjectLifetimeEi(void) {
    ALOGD("_ZN7android7RefBase20extendObjectLifetimeEi() called");
    return 0;
}

/* Demangled: android::SharedBuffer::alloc(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12SharedBuffer5allocEj(void) {
    ALOGD("_ZN7android12SharedBuffer5allocEj() called");
    return 0;
}

/* Demangled: android::String8::appendPath(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String810appendPathEPKc(void) {
    ALOGD("_ZN7android7String810appendPathEPKc() called");
    return 0;
}

/* Demangled: android::String8::getPathExtension() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7String816getPathExtensionEv(void) {
    ALOGD("_ZNK7android7String816getPathExtensionEv() called");
    return 0;
}

/* Demangled: android::Looper::getAllowNonCallbacks() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Looper20getAllowNonCallbacksEv(void) {
    ALOGD("_ZNK7android6Looper20getAllowNonCallbacksEv() called");
    return 0;
}

/* Demangled: android::WeakMessageHandler::handleMessage(android::Message const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18WeakMessageHandler13handleMessageERKNS_7MessageE(void) {
    ALOGD("_ZN7android18WeakMessageHandler13handleMessageERKNS_7MessageE() called");
    return 0;
}

/* Demangled: android::Vector<android::Looper::Response>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_6Looper8ResponseEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_6Looper8ResponseEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::String16::~String16() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16D2Ev(void) {
    ALOGD("_ZN7android8String16D2Ev() called");
    return 0;
}

/* Demangled: android::String16::findFirst(char16_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8String169findFirstEDs(void) {
    ALOGD("_ZNK7android8String169findFirstEDs() called");
    return 0;
}

/* Demangled: android::Looper::sendMessageAtTime(long long, android::sp<android::MessageHandler> const&, android::Message const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper17sendMessageAtTimeExRKNS_2spINS_14MessageHandlerEEERKNS_7MessageE(void) {
    ALOGD("_ZN7android6Looper17sendMessageAtTimeExRKNS_2spINS_14MessageHandlerEEERKNS_7MessageE() called");
    return 0;
}

/* Demangled: android::RefBase::weakref_type::getWeakCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7RefBase12weakref_type12getWeakCountEv(void) {
    ALOGD("_ZNK7android7RefBase12weakref_type12getWeakCountEv() called");
    return 0;
}

/* Demangled: android::String16::editResize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String1610editResizeEj(void) {
    ALOGD("_ZN7android8String1610editResizeEj() called");
    return 0;
}

/* Demangled: android::String16::String16(char16_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C2EPKDs(void) {
    ALOGD("_ZN7android8String16C2EPKDs() called");
    return 0;
}

/* Demangled: androidSetThreadPriority */
extern "C" __attribute__((visibility("default"))) int androidSetThreadPriority(void) {
    ALOGD("androidSetThreadPriority() called");
    return 0;
}

/* Demangled: android::VectorImpl::_shrink(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl7_shrinkEjj(void) {
    ALOGD("_ZN7android10VectorImpl7_shrinkEjj() called");
    return 0;
}

/* Demangled: android::PropertyMap::Parser::Parser(android::PropertyMap*, android::Tokenizer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11PropertyMap6ParserC2EPS0_PNS_9TokenizerE(void) {
    ALOGD("_ZN7android11PropertyMap6ParserC2EPS0_PNS_9TokenizerE() called");
    return 0;
}

/* Demangled: android::Thread::~Thread() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6ThreadD2Ev(void) {
    ALOGD("_ZN7android6ThreadD2Ev() called");
    return 0;
}

/* Demangled: android::VectorImpl::sort(int (*)(void const*, void const*, void*), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl4sortEPFiPKvS2_PvES3_(void) {
    ALOGD("_ZN7android10VectorImpl4sortEPFiPKvS2_PvES3_() called");
    return 0;
}

/* Demangled: android::Looper::Looper(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6LooperC2Eb(void) {
    ALOGD("_ZN7android6LooperC2Eb() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::Looper::Response> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_6Looper8ResponseEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::VectorImpl::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl5clearEv(void) {
    ALOGD("_ZN7android10VectorImpl5clearEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::String8::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String85clearEv(void) {
    ALOGD("_ZN7android7String85clearEv() called");
    return 0;
}

/* Demangled: android::String8::append(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String86appendEPKcj(void) {
    ALOGD("_ZN7android7String86appendEPKcj() called");
    return 0;
}

/* Demangled: android::Thread::exitPending() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Thread11exitPendingEv(void) {
    ALOGD("_ZNK7android6Thread11exitPendingEv() called");
    return 0;
}

/* Demangled: android::Tokenizer::Tokenizer(android::String8 const&, android::FileMap*, char*, bool, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9TokenizerC2ERKNS_7String8EPNS_7FileMapEPcbj(void) {
    ALOGD("_ZN7android9TokenizerC2ERKNS_7String8EPNS_7FileMapEPcbj() called");
    return 0;
}

/* Demangled: android::RefBase::incStrong(void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7RefBase9incStrongEPKv(void) {
    ALOGD("_ZNK7android7RefBase9incStrongEPKv() called");
    return 0;
}

/* Demangled: android::Looper::removeMessages(android::sp<android::MessageHandler> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper14removeMessagesERKNS_2spINS_14MessageHandlerEEEi(void) {
    ALOGD("_ZN7android6Looper14removeMessagesERKNS_2spINS_14MessageHandlerEEEi() called");
    return 0;
}

/* Demangled: virtual thunk to android::WeakMessageHandler::~WeakMessageHandler() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android18WeakMessageHandlerD0Ev(void) {
    ALOGD("_ZTv0_n12_N7android18WeakMessageHandlerD0Ev() called");
    return 0;
}

/* Demangled: android::statusToString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14statusToStringEi(void) {
    ALOGD("_ZN7android14statusToStringEi() called");
    return 0;
}

/* Demangled: android::String8::setTo(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String85setToEPKcj(void) {
    ALOGD("_ZN7android7String85setToEPKcj() called");
    return 0;
}

/* Demangled: android::String8::formatV(char const*, std::__va_list) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String87formatVEPKcSt9__va_list(void) {
    ALOGD("_ZN7android7String87formatVEPKcSt9__va_list() called");
    return 0;
}

/* Demangled: android::StopWatch::~StopWatch() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9StopWatchD1Ev(void) {
    ALOGD("_ZN7android9StopWatchD1Ev() called");
    return 0;
}

/* Demangled: android::String8::String8(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C2EPKcj(void) {
    ALOGD("_ZN7android7String8C2EPKcj() called");
    return 0;
}

/* Demangled: android::String8::walkPath(android::String8*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7String88walkPathEPS0_(void) {
    ALOGD("_ZNK7android7String88walkPathEPS0_() called");
    return 0;
}

/* Demangled: utf32_to_utf8_length */
extern "C" __attribute__((visibility("default"))) int utf32_to_utf8_length(void) {
    ALOGD("utf32_to_utf8_length() called");
    return 0;
}

/* Demangled: android::VectorImpl::push(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl4pushEPKv(void) {
    ALOGD("_ZN7android10VectorImpl4pushEPKv() called");
    return 0;
}

/* Demangled: android::MessageHandler::~MessageHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14MessageHandlerD1Ev(void) {
    ALOGD("_ZN7android14MessageHandlerD1Ev() called");
    return 0;
}

/* Exported Object: vtable for android::Looper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6LooperE = NULL;

/* Demangled: android::FileMap::FileMap(android::FileMap&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FileMapC1EOS0_(void) {
    ALOGD("_ZN7android7FileMapC1EOS0_() called");
    return 0;
}

/* Demangled: android::String8::appendFormat(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String812appendFormatEPKcz(void) {
    ALOGD("_ZN7android7String812appendFormatEPKcz() called");
    return 0;
}

/* Demangled: android::VectorImpl::~VectorImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImplD2Ev(void) {
    ALOGD("_ZN7android10VectorImplD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVectorImpl::~SortedVectorImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SortedVectorImplD0Ev(void) {
    ALOGD("_ZN7android16SortedVectorImplD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::String8Printer::printLine(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14String8Printer9printLineEPKc(void) {
    ALOGD("_ZN7android14String8Printer9printLineEPKc() called");
    return 0;
}

/* Demangled: android::Printer::Printer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7PrinterC2Ev(void) {
    ALOGD("_ZN7android7PrinterC2Ev() called");
    return 0;
}

/* Demangled: android::SortedVectorImpl::SortedVectorImpl(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SortedVectorImplC2Ejj(void) {
    ALOGD("_ZN7android16SortedVectorImplC2Ejj() called");
    return 0;
}

/* Demangled: android::Tokenizer::skipDelimiters(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9Tokenizer14skipDelimitersEPKc(void) {
    ALOGD("_ZN7android9Tokenizer14skipDelimitersEPKc() called");
    return 0;
}

/* Demangled: android::String8::lockBuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String810lockBufferEj(void) {
    ALOGD("_ZN7android7String810lockBufferEj() called");
    return 0;
}

/* Demangled: android::WeakMessageHandler::~WeakMessageHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN7android18WeakMessageHandlerD0Ev(void) {
    ALOGD("_ZN7android18WeakMessageHandlerD0Ev() called");
    return 0;
}

/* Demangled: android::PropertyMap::tryGetProperty(android::String8 const&, android::String8&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11PropertyMap14tryGetPropertyERKNS_7String8ERS1_(void) {
    ALOGD("_ZNK7android11PropertyMap14tryGetPropertyERKNS_7String8ERS1_() called");
    return 0;
}

/* Demangled: android::String8::find(char const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7String84findEPKcj(void) {
    ALOGD("_ZNK7android7String84findEPKcj() called");
    return 0;
}

/* Demangled: android::RefBase::weakref_type::attemptIncStrong(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase12weakref_type16attemptIncStrongEPKv(void) {
    ALOGD("_ZN7android7RefBase12weakref_type16attemptIncStrongEPKv() called");
    return 0;
}

/* Demangled: android::String8::removeAll(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String89removeAllEPKc(void) {
    ALOGD("_ZN7android7String89removeAllEPKc() called");
    return 0;
}

/* Demangled: strzcmp16 */
extern "C" __attribute__((visibility("default"))) int strzcmp16(void) {
    ALOGD("strzcmp16() called");
    return 0;
}

/* Demangled: android::Thread::getTid() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6Thread6getTidEv(void) {
    ALOGD("_ZNK7android6Thread6getTidEv() called");
    return 0;
}

/* Demangled: android::SimpleLooperCallback::~SimpleLooperCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN7android20SimpleLooperCallbackD2Ev(void) {
    ALOGD("_ZN7android20SimpleLooperCallbackD2Ev() called");
    return 0;
}

/* Demangled: android::Printer::~Printer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7PrinterD2Ev(void) {
    ALOGD("_ZN7android7PrinterD2Ev() called");
    return 0;
}

/* Demangled: android::String16::insert(unsigned int, char16_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String166insertEjPKDs(void) {
    ALOGD("_ZN7android8String166insertEjPKDs() called");
    return 0;
}

/* Demangled: android::String16::findLast(char16_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8String168findLastEDs(void) {
    ALOGD("_ZNK7android8String168findLastEDs() called");
    return 0;
}

/* Demangled: android::Looper::scheduleEpollRebuildLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper26scheduleEpollRebuildLockedEv(void) {
    ALOGD("_ZN7android6Looper26scheduleEpollRebuildLockedEv() called");
    return 0;
}

/* Demangled: android::NativeHandle::create(native_handle*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12NativeHandle6createEP13native_handleb(void) {
    ALOGD("_ZN7android12NativeHandle6createEP13native_handleb() called");
    return 0;
}

/* Demangled: systemTime */
extern "C" __attribute__((visibility("default"))) int systemTime(void) {
    ALOGD("systemTime() called");
    return 0;
}

/* Demangled: android::String8::getPathDir() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7String810getPathDirEv(void) {
    ALOGD("_ZNK7android7String810getPathDirEv() called");
    return 0;
}

/* Demangled: strcmp16 */
extern "C" __attribute__((visibility("default"))) int strcmp16(void) {
    ALOGD("strcmp16() called");
    return 0;
}

/* Demangled: android::String8::unlockBuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String812unlockBufferEj(void) {
    ALOGD("_ZN7android7String812unlockBufferEj() called");
    return 0;
}

/* Demangled: android::SortedVectorImpl::orderOf(void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16SortedVectorImpl7orderOfEPKv(void) {
    ALOGD("_ZNK7android16SortedVectorImpl7orderOfEPKv() called");
    return 0;
}

/* Demangled: android::FdPrinter::FdPrinter(int, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FdPrinterC1EijPKc(void) {
    ALOGD("_ZN7android9FdPrinterC1EijPKc() called");
    return 0;
}

/* Demangled: android::SharedBuffer::acquire() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SharedBuffer7acquireEv(void) {
    ALOGD("_ZNK7android12SharedBuffer7acquireEv() called");
    return 0;
}

/* Demangled: android::String16::String16(android::String16::StaticLinkage) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C1ENS0_13StaticLinkageE(void) {
    ALOGD("_ZN7android8String16C1ENS0_13StaticLinkageE() called");
    return 0;
}

/* Demangled: android::String16::String16(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String16C1EPKcj(void) {
    ALOGD("_ZN7android8String16C1EPKcj() called");
    return 0;
}

/* Demangled: android::String16::contains(char16_t const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8String168containsEPKDs(void) {
    ALOGD("_ZNK7android8String168containsEPKDs() called");
    return 0;
}

/* Demangled: android::VectorImpl::itemLocation(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android10VectorImpl12itemLocationEj(void) {
    ALOGD("_ZNK7android10VectorImpl12itemLocationEj() called");
    return 0;
}

/* Demangled: android::FileMap::FileMap() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FileMapC1Ev(void) {
    ALOGD("_ZN7android7FileMapC1Ev() called");
    return 0;
}

/* Demangled: android::PropertyMap::Parser::~Parser() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11PropertyMap6ParserD1Ev(void) {
    ALOGD("_ZN7android11PropertyMap6ParserD1Ev() called");
    return 0;
}

/* Demangled: android::RefBase::weakref_type::attemptIncWeak(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase12weakref_type14attemptIncWeakEPKv(void) {
    ALOGD("_ZN7android7RefBase12weakref_type14attemptIncWeakEPKv() called");
    return 0;
}

/* Demangled: android::Thread::requestExit() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Thread11requestExitEv(void) {
    ALOGD("_ZN7android6Thread11requestExitEv() called");
    return 0;
}

/* Exported Object: VTT for android::LooperCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android14LooperCallbackE = NULL;

/* Demangled: android::JenkinsHashMixBytes(unsigned int, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19JenkinsHashMixBytesEjPKhj(void) {
    ALOGD("_ZN7android19JenkinsHashMixBytesEjPKhj() called");
    return 0;
}

/* Demangled: android::String8::getPathLeaf() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7String811getPathLeafEv(void) {
    ALOGD("_ZNK7android7String811getPathLeafEv() called");
    return 0;
}

/* Demangled: android::String8::String8() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C2Ev(void) {
    ALOGD("_ZN7android7String8C2Ev() called");
    return 0;
}

/* Demangled: utf16_to_utf8_length */
extern "C" __attribute__((visibility("default"))) int utf16_to_utf8_length(void) {
    ALOGD("utf16_to_utf8_length() called");
    return 0;
}

/* Demangled: android::VectorImpl::operator=(android::VectorImpl const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImplaSERKS0_(void) {
    ALOGD("_ZN7android10VectorImplaSERKS0_() called");
    return 0;
}

/* Demangled: android::Vector<android::sysprop_change_callback_info>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_28sysprop_change_callback_infoEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_28sysprop_change_callback_infoEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::LooperCallback::~LooperCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14LooperCallbackD2Ev(void) {
    ALOGD("_ZN7android14LooperCallbackD2Ev() called");
    return 0;
}

/* Demangled: android::Looper::pollAll(int, int*, int*, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper7pollAllEiPiS1_PPv(void) {
    ALOGD("_ZN7android6Looper7pollAllEiPiS1_PPv() called");
    return 0;
}

/* Demangled: android::FileMap::~FileMap() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7FileMapD1Ev(void) {
    ALOGD("_ZN7android7FileMapD1Ev() called");
    return 0;
}

/* Demangled: android::NativeHandle::~NativeHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12NativeHandleD2Ev(void) {
    ALOGD("_ZN7android12NativeHandleD2Ev() called");
    return 0;
}

/* Demangled: android::String8::setPathName(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String811setPathNameEPKcj(void) {
    ALOGD("_ZN7android7String811setPathNameEPKcj() called");
    return 0;
}

/* Demangled: android::String8::toUpper(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String87toUpperEjj(void) {
    ALOGD("_ZN7android7String87toUpperEjj() called");
    return 0;
}

/* Demangled: android::String16::alloc(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8String165allocEj(void) {
    ALOGD("_ZN7android8String165allocEj() called");
    return 0;
}

/* Exported Object: VTT for android::Thread */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android6ThreadE = NULL;

/* Demangled: android::SortedVectorImpl::remove(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16SortedVectorImpl6removeEPKv(void) {
    ALOGD("_ZN7android16SortedVectorImpl6removeEPKv() called");
    return 0;
}

/* Demangled: android::Looper::removeFd(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper8removeFdEi(void) {
    ALOGD("_ZN7android6Looper8removeFdEi() called");
    return 0;
}

/* Exported Object: vtable for android::WeakMessageHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android18WeakMessageHandlerE = NULL;

/* Demangled: android::Tokenizer::~Tokenizer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9TokenizerD1Ev(void) {
    ALOGD("_ZN7android9TokenizerD1Ev() called");
    return 0;
}

/* Demangled: android::RefBase::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7RefBase15onLastStrongRefEPKv(void) {
    ALOGD("_ZN7android7RefBase15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: android::VectorImpl::appendVector(android::VectorImpl const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl12appendVectorERKS0_(void) {
    ALOGD("_ZN7android10VectorImpl12appendVectorERKS0_() called");
    return 0;
}

/* Demangled: android::VectorImpl::editItemLocation(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl16editItemLocationEj(void) {
    ALOGD("_ZN7android10VectorImpl16editItemLocationEj() called");
    return 0;
}

/* Demangled: android::String8::~String8() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8D2Ev(void) {
    ALOGD("_ZN7android7String8D2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to android::Thread::~Thread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android6ThreadD1Ev(void) {
    ALOGD("_ZTv0_n12_N7android6ThreadD1Ev() called");
    return 0;
}

/* Demangled: android::VectorImpl::replaceAt(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl9replaceAtEj(void) {
    ALOGD("_ZN7android10VectorImpl9replaceAtEj() called");
    return 0;
}

/* Demangled: android::String8::String8(android::String8::StaticLinkage) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C2ENS0_13StaticLinkageE(void) {
    ALOGD("_ZN7android7String8C2ENS0_13StaticLinkageE() called");
    return 0;
}

/* Demangled: android::Thread::run(char const*, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Thread3runEPKcij(void) {
    ALOGD("_ZN7android6Thread3runEPKcij() called");
    return 0;
}

/* Demangled: androidGetThreadPriority */
extern "C" __attribute__((visibility("default"))) int androidGetThreadPriority(void) {
    ALOGD("androidGetThreadPriority() called");
    return 0;
}

/* Demangled: android::VectorImpl::release_storage() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl15release_storageEv(void) {
    ALOGD("_ZN7android10VectorImpl15release_storageEv() called");
    return 0;
}

/* Demangled: android::StopWatch::StopWatch(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9StopWatchC2EPKci(void) {
    ALOGD("_ZN7android9StopWatchC2EPKci() called");
    return 0;
}

/* Demangled: android::String8::setTo(char32_t const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String85setToEPKDij(void) {
    ALOGD("_ZN7android7String85setToEPKDij() called");
    return 0;
}

/* Demangled: utf8_length */
extern "C" __attribute__((visibility("default"))) int utf8_length(void) {
    ALOGD("utf8_length() called");
    return 0;
}

/* Demangled: android::Vector<android::sysprop_change_callback_info>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_28sysprop_change_callback_infoEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_28sysprop_change_callback_infoEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::Looper::MessageEnvelope>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_6Looper15MessageEnvelopeEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::FdPrinter::FdPrinter(int, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9FdPrinterC2EijPKc(void) {
    ALOGD("_ZN7android9FdPrinterC2EijPKc() called");
    return 0;
}

/* Exported Object: vtable for android::LogPrinter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android10LogPrinterE = NULL;

/* Demangled: android::String8::String8(char32_t const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C2EPKDij(void) {
    ALOGD("_ZN7android7String8C2EPKDij() called");
    return 0;
}

/* Demangled: android::String16::isStaticString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8String1614isStaticStringEv(void) {
    ALOGD("_ZNK7android8String1614isStaticStringEv() called");
    return 0;
}

/* Demangled: android::Looper::~Looper() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6LooperD2Ev(void) {
    ALOGD("_ZN7android6LooperD2Ev() called");
    return 0;
}

/* Demangled: android::String8::String8(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String8C1EPKcj(void) {
    ALOGD("_ZN7android7String8C1EPKcj() called");
    return 0;
}

/* Exported Object: vtable for android::Thread */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6ThreadE = NULL;

/* Demangled: android::VectorImpl::finish_vector() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10VectorImpl13finish_vectorEv(void) {
    ALOGD("_ZN7android10VectorImpl13finish_vectorEv() called");
    return 0;
}

/* Demangled: android::String8::unlockBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7String812unlockBufferEv(void) {
    ALOGD("_ZN7android7String812unlockBufferEv() called");
    return 0;
}

/* Demangled: android::String8::getBasePath() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android7String811getBasePathEv(void) {
    ALOGD("_ZNK7android7String811getBasePathEv() called");
    return 0;
}

/* Demangled: android::uptimeMillis() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12uptimeMillisEv(void) {
    ALOGD("_ZN7android12uptimeMillisEv() called");
    return 0;
}

/* Demangled: androidCreateThread */
extern "C" __attribute__((visibility("default"))) int androidCreateThread(void) {
    ALOGD("androidCreateThread() called");
    return 0;
}

/* Demangled: android::Looper::getForThread() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6Looper12getForThreadEv(void) {
    ALOGD("_ZN7android6Looper12getForThreadEv() called");
    return 0;
}

/* Demangled: strncmp16 */
extern "C" __attribute__((visibility("default"))) int strncmp16(void) {
    ALOGD("strncmp16() called");
    return 0;
}

/* Demangled: androidGetThreadId */
extern "C" __attribute__((visibility("default"))) int androidGetThreadId(void) {
    ALOGD("androidGetThreadId() called");
    return 0;
}
