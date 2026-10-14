/*
 * Reverse-Engineered ABI Specification for: libutils-v30.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libutils.so
 */

#ifndef BEGONIA_RE_LIBUTILS_V30_H
#define BEGONIA_RE_LIBUTILS_V30_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android9Tokenizer8nextLineEv */
/* Demangled: android::Tokenizer::nextLine() */
int _ZN7android9Tokenizer8nextLineEv(void);

/* Symbol: _ZNK7android16SortedVectorImpl13_indexOrderOfEPKvPj */
/* Demangled: android::SortedVectorImpl::_indexOrderOf(void const*, unsigned int*) const */
int _ZNK7android16SortedVectorImpl13_indexOrderOfEPKvPj(void);

/* Symbol: _ZN7android20SimpleLooperCallbackC2EPFiiiPvE */
/* Demangled: android::SimpleLooperCallback::SimpleLooperCallback(int (*)(int, int, void*)) */
int _ZN7android20SimpleLooperCallbackC2EPFiiiPvE(void);

/* Symbol: _ZNK7android6VectorINS_28sysprop_change_callback_infoEE10do_destroyEPvj */
/* Demangled: android::Vector<android::sysprop_change_callback_info>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_28sysprop_change_callback_infoEE10do_destroyEPvj(void);

/* Symbol: _ZN7android6Looper9pollInnerEi */
/* Demangled: android::Looper::pollInner(int) */
int _ZN7android6Looper9pollInnerEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE10do_compareEPKvS7_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE10do_compareEPKvS7_(void);

/* Symbol: _ZN7android7Printer15printFormatLineEPKcz */
/* Demangled: android::Printer::printFormatLine(char const*, ...) */
int _ZN7android7Printer15printFormatLineEPKcz(void);

/* Symbol: _ZN7android7String87toLowerEjj */
/* Demangled: android::String8::toLower(unsigned int, unsigned int) */
int _ZN7android7String87toLowerEjj(void);

/* Symbol: _ZNK7android10VectorImpl8capacityEv */
/* Demangled: android::VectorImpl::capacity() const */
int _ZNK7android10VectorImpl8capacityEv(void);

/* Symbol: _ZNK7android6VectorINS_28sysprop_change_callback_infoEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::sysprop_change_callback_info>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_28sysprop_change_callback_infoEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE12do_constructEPvj */
/* Demangled: android::Vector<android::Looper::MessageEnvelope>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE12do_constructEPvj(void);

/* Symbol: _ZN7android7RefBase13onLastWeakRefEPKv */
/* Demangled: android::RefBase::onLastWeakRef(void const*) */
int _ZN7android7RefBase13onLastWeakRefEPKv(void);

/* Symbol: _ZNK7android6VectorINS_6Looper8ResponseEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::Looper::Response>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_6Looper8ResponseEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZTv0_n12_N7android14LooperCallbackD0Ev */
/* Demangled: virtual thunk to android::LooperCallback::~LooperCallback() */
int _ZTv0_n12_N7android14LooperCallbackD0Ev(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::String8> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE;

/* Symbol: _ZN7android8String16C2EPKc */
/* Demangled: android::String16::String16(char const*) */
int _ZN7android8String16C2EPKc(void);

/* Symbol: _ZNK7android10VectorImpl8itemSizeEv */
/* Demangled: android::VectorImpl::itemSize() const */
int _ZNK7android10VectorImpl8itemSizeEv(void);

/* Symbol: utf16_to_utf8 */
/* Demangled: utf16_to_utf8 */
int utf16_to_utf8(void);

/* Symbol: do_report_sysprop_change */
/* Demangled: do_report_sysprop_change */
int do_report_sysprop_change(void);

/* Symbol: _ZTv0_n12_N7android18WeakMessageHandlerD1Ev */
/* Demangled: virtual thunk to android::WeakMessageHandler::~WeakMessageHandler() */
int _ZTv0_n12_N7android18WeakMessageHandlerD1Ev(void);

/* Symbol: _ZNK7android11PropertyMap11hasPropertyERKNS_7String8E */
/* Demangled: android::PropertyMap::hasProperty(android::String8 const&) const */
int _ZNK7android11PropertyMap11hasPropertyERKNS_7String8E(void);

/* Symbol: _ZN7android7String811real_appendEPKcj */
/* Demangled: android::String8::real_append(char const*, unsigned int) */
int _ZN7android7String811real_appendEPKcj(void);

/* Symbol: _Z24androidCreateThreadGetIDPFiPvES_PS_ */
/* Demangled: androidCreateThreadGetID(int (*)(void*), void*, void**) */
int _Z24androidCreateThreadGetIDPFiPvES_PS_(void);

/* Symbol: _ZN7android18WeakMessageHandlerC2ERKNS_2wpINS_14MessageHandlerEEE */
/* Demangled: android::WeakMessageHandler::WeakMessageHandler(android::wp<android::MessageHandler> const&) */
int _ZN7android18WeakMessageHandlerC2ERKNS_2wpINS_14MessageHandlerEEE(void);

/* Symbol: _ZN7android9StopWatchD2Ev */
/* Demangled: android::StopWatch::~StopWatch() */
int _ZN7android9StopWatchD2Ev(void);

/* Symbol: _ZN7android7String85setToEPKDsj */
/* Demangled: android::String8::setTo(char16_t const*, unsigned int) */
int _ZN7android7String85setToEPKDsj(void);

/* Symbol: _ZN7android14MessageHandlerD2Ev */
/* Demangled: android::MessageHandler::~MessageHandler() */
int _ZN7android14MessageHandlerD2Ev(void);

/* Symbol: _ZN7android6Looper14removeMessagesERKNS_2spINS_14MessageHandlerEEE */
/* Demangled: android::Looper::removeMessages(android::sp<android::MessageHandler> const&) */
int _ZN7android6Looper14removeMessagesERKNS_2spINS_14MessageHandlerEEE(void);

/* Symbol: _ZN7android7String85setToERKS0_ */
/* Demangled: android::String8::setTo(android::String8 const&) */
int _ZN7android7String85setToERKS0_(void);

/* Symbol: _ZN7android7String8C2EPKDsj */
/* Demangled: android::String8::String8(char16_t const*, unsigned int) */
int _ZN7android7String8C2EPKDsj(void);

/* Symbol: strlen32 */
/* Demangled: strlen32 */
int strlen32(void);

/* Symbol: _ZN7android10VectorImpl5_growEjj */
/* Demangled: android::VectorImpl::_grow(unsigned int, unsigned int) */
int _ZN7android10VectorImpl5_growEjj(void);

/* Symbol: _ZN7android6Looper18rebuildEpollLockedEv */
/* Demangled: android::Looper::rebuildEpollLocked() */
int _ZN7android6Looper18rebuildEpollLockedEv(void);

/* Symbol: _ZNK7android9StopWatch4nameEv */
/* Demangled: android::StopWatch::name() const */
int _ZNK7android9StopWatch4nameEv(void);

/* Symbol: _ZN7android7String8C2ERKS0_ */
/* Demangled: android::String8::String8(android::String8 const&) */
int _ZN7android7String8C2ERKS0_(void);

/* Symbol: _ZN7android10VectorImpl13insertArrayAtEPKvjj */
/* Demangled: android::VectorImpl::insertArrayAt(void const*, unsigned int, unsigned int) */
int _ZN7android10VectorImpl13insertArrayAtEPKvjj(void);

/* Symbol: _ZN7android10VectorImplC2ERKS0_ */
/* Demangled: android::VectorImpl::VectorImpl(android::VectorImpl const&) */
int _ZN7android10VectorImplC2ERKS0_(void);

/* Symbol: _ZN7android16SortedVectorImplD1Ev */
/* Demangled: android::SortedVectorImpl::~SortedVectorImpl() */
int _ZN7android16SortedVectorImplD1Ev(void);

/* Symbol: _ZN7android16SortedVectorImplaSERKS0_ */
/* Demangled: android::SortedVectorImpl::operator=(android::SortedVectorImpl const&) */
int _ZN7android16SortedVectorImplaSERKS0_(void);

/* Symbol: _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::Looper::MessageEnvelope>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android14String8PrinterC1EPNS_7String8EPKc */
/* Demangled: android::String8Printer::String8Printer(android::String8*, char const*) */
int _ZN7android14String8PrinterC1EPNS_7String8EPKc(void);

/* Symbol: _ZNK7android16SortedVectorImpl7indexOfEPKv */
/* Demangled: android::SortedVectorImpl::indexOf(void const*) const */
int _ZNK7android16SortedVectorImpl7indexOfEPKv(void);

/* Symbol: _ZN7android7RefBaseD0Ev */
/* Demangled: android::RefBase::~RefBase() */
int _ZN7android7RefBaseD0Ev(void);

/* Symbol: _ZN7android8String16C2ERKNS_7String8E */
/* Demangled: android::String16::String16(android::String8 const&) */
int _ZN7android8String16C2ERKNS_7String8E(void);

/* Symbol: _ZN7android18WeakMessageHandlerD1Ev */
/* Demangled: android::WeakMessageHandler::~WeakMessageHandler() */
int _ZN7android18WeakMessageHandlerD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZNK7android9Tokenizer11getLocationEv */
/* Demangled: android::Tokenizer::getLocation() const */
int _ZNK7android9Tokenizer11getLocationEv(void);

/* Symbol: _ZN7android7RefBase12weakref_type7trackMeEbb */
/* Demangled: android::RefBase::weakref_type::trackMe(bool, bool) */
int _ZN7android7RefBase12weakref_type7trackMeEbb(void);

/* Symbol: _ZN7android8String16C1EPKc */
/* Demangled: android::String16::String16(char const*) */
int _ZN7android8String16C1EPKc(void);

/* Symbol: _ZNK7android6VectorINS_6Looper8ResponseEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::Looper::Response>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_6Looper8ResponseEE8do_splatEPvPKvj(void);

/* Symbol: androidCreateThreadEtc */
/* Demangled: androidCreateThreadEtc */
int androidCreateThreadEtc(void);

/* Symbol: _ZTv0_n12_N7android20SimpleLooperCallbackD0Ev */
/* Demangled: virtual thunk to android::SimpleLooperCallback::~SimpleLooperCallback() */
int _ZTv0_n12_N7android20SimpleLooperCallbackD0Ev(void);

/* Symbol: _ZN7android14String8PrinterC2EPNS_7String8EPKc */
/* Demangled: android::String8Printer::String8Printer(android::String8*, char const*) */
int _ZN7android14String8PrinterC2EPNS_7String8EPKc(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj(void);

/* Symbol: _ZN7android7RefBase12weakref_type7incWeakEPKv */
/* Demangled: android::RefBase::weakref_type::incWeak(void const*) */
int _ZN7android7RefBase12weakref_type7incWeakEPKv(void);

/* Symbol: utf32_to_utf8 */
/* Demangled: utf32_to_utf8 */
int utf32_to_utf8(void);

/* Symbol: _ZNK7android8String1610startsWithERKS0_ */
/* Demangled: android::String16::startsWith(android::String16 const&) const */
int _ZNK7android8String1610startsWithERKS0_(void);

/* Symbol: utf8_to_utf16 */
/* Demangled: utf8_to_utf16 */
int utf8_to_utf16(void);

/* Symbol: _ZNK7android6Looper9isPollingEv */
/* Demangled: android::Looper::isPolling() const */
int _ZNK7android6Looper9isPollingEv(void);

/* Symbol: _ZTVN7android9FdPrinterE */
/* Demangled: vtable for android::FdPrinter */
extern void* _ZTVN7android9FdPrinterE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android9StopWatchC1EPKci */
/* Demangled: android::StopWatch::StopWatch(char const*, int) */
int _ZN7android9StopWatchC1EPKci(void);

/* Symbol: _ZN7android7String8C2EPKDi */
/* Demangled: android::String8::String8(char32_t const*) */
int _ZN7android7String8C2EPKDi(void);

/* Symbol: _ZN7android7String8C2EPKc */
/* Demangled: android::String8::String8(char const*) */
int _ZN7android7String8C2EPKc(void);

/* Symbol: _ZN7android8String16C2ENS0_13StaticLinkageE */
/* Demangled: android::String16::String16(android::String16::StaticLinkage) */
int _ZN7android8String16C2ENS0_13StaticLinkageE(void);

/* Symbol: _ZN7android20JenkinsHashMixShortsEjPKtj */
/* Demangled: android::JenkinsHashMixShorts(unsigned int, unsigned short const*, unsigned int) */
int _ZN7android20JenkinsHashMixShortsEjPKtj(void);

/* Symbol: _ZN7android8String1613allocFromUTF8EPKcj */
/* Demangled: android::String16::allocFromUTF8(char const*, unsigned int) */
int _ZN7android8String1613allocFromUTF8EPKcj(void);

/* Symbol: _ZN7android8String16C1ERKNS_7String8E */
/* Demangled: android::String16::String16(android::String8 const&) */
int _ZN7android8String16C1ERKNS_7String8E(void);

/* Symbol: _ZNK7android6VectorINS_28sysprop_change_callback_infoEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::sysprop_change_callback_info>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_28sysprop_change_callback_infoEE7do_copyEPvPKvj(void);

/* Symbol: _ZTVN7android6VectorINS_28sysprop_change_callback_infoEEE */
/* Demangled: vtable for android::Vector<android::sysprop_change_callback_info> */
extern void* _ZTVN7android6VectorINS_28sysprop_change_callback_infoEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE12do_constructEPvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE10do_destroyEPvj */
/* Demangled: android::Vector<android::Looper::MessageEnvelope>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android6VectorINS_6Looper8ResponseEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::Looper::Response>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_6Looper8ResponseEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android11PropertyMap6ParserC1EPS0_PNS_9TokenizerE */
/* Demangled: android::PropertyMap::Parser::Parser(android::PropertyMap*, android::Tokenizer*) */
int _ZN7android11PropertyMap6ParserC1EPS0_PNS_9TokenizerE(void);

/* Symbol: _ZN7android9Tokenizer9nextTokenEPKc */
/* Demangled: android::Tokenizer::nextToken(char const*) */
int _ZN7android9Tokenizer9nextTokenEPKc(void);

/* Symbol: _ZN7android14sp_report_raceEv */
/* Demangled: android::sp_report_race() */
int _ZN7android14sp_report_raceEv(void);

/* Symbol: _ZN7android7FileMapC2Ev */
/* Demangled: android::FileMap::FileMap() */
int _ZN7android7FileMapC2Ev(void);

/* Symbol: _ZN7android11PropertyMap6ParserD2Ev */
/* Demangled: android::PropertyMap::Parser::~Parser() */
int _ZN7android11PropertyMap6ParserD2Ev(void);

/* Symbol: _ZNK7android7RefBase10createWeakEPKv */
/* Demangled: android::RefBase::createWeak(void const*) const */
int _ZNK7android7RefBase10createWeakEPKv(void);

/* Symbol: _ZN7android6Looper11sendMessageERKNS_2spINS_14MessageHandlerEEERKNS_7MessageE */
/* Demangled: android::Looper::sendMessage(android::sp<android::MessageHandler> const&, android::Message const&) */
int _ZN7android6Looper11sendMessageERKNS_2spINS_14MessageHandlerEEERKNS_7MessageE(void);

/* Symbol: _ZNK7android6VectorINS_6Looper8ResponseEE10do_destroyEPvj */
/* Demangled: android::Vector<android::Looper::Response>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_6Looper8ResponseEE10do_destroyEPvj(void);

/* Symbol: _ZN7android7String86appendERKS0_ */
/* Demangled: android::String8::append(android::String8 const&) */
int _ZN7android7String86appendERKS0_(void);

/* Symbol: _ZNK7android8String1610startsWithEPKDs */
/* Demangled: android::String16::startsWith(char16_t const*) const */
int _ZNK7android8String1610startsWithEPKDs(void);

/* Symbol: _ZNK7android7RefBase14forceIncStrongEPKv */
/* Demangled: android::RefBase::forceIncStrong(void const*) const */
int _ZNK7android7RefBase14forceIncStrongEPKv(void);

/* Symbol: _ZN7android10VectorImpl11setCapacityEj */
/* Demangled: android::VectorImpl::setCapacity(unsigned int) */
int _ZN7android10VectorImpl11setCapacityEj(void);

/* Symbol: _ZTVN7android14MessageHandlerE */
/* Demangled: vtable for android::MessageHandler */
extern void* _ZTVN7android14MessageHandlerE;

/* Symbol: _ZTVN7android6VectorINS_6Looper15MessageEnvelopeEEE */
/* Demangled: vtable for android::Vector<android::Looper::MessageEnvelope> */
extern void* _ZTVN7android6VectorINS_6Looper15MessageEnvelopeEEE;

/* Symbol: _ZN7android7FileMapD2Ev */
/* Demangled: android::FileMap::~FileMap() */
int _ZN7android7FileMapD2Ev(void);

/* Symbol: _ZN7android7String8C2ERKNS_8String16E */
/* Demangled: android::String8::String8(android::String16 const&) */
int _ZN7android7String8C2ERKNS_8String16E(void);

/* Symbol: _ZN7android10VectorImpl3addEPKv */
/* Demangled: android::VectorImpl::add(void const*) */
int _ZN7android10VectorImpl3addEPKv(void);

/* Symbol: _ZTv0_n12_N7android14MessageHandlerD0Ev */
/* Demangled: virtual thunk to android::MessageHandler::~MessageHandler() */
int _ZTv0_n12_N7android14MessageHandlerD0Ev(void);

/* Symbol: _ZN7android7String8C1EPKc */
/* Demangled: android::String8::String8(char const*) */
int _ZN7android7String8C1EPKc(void);

/* Symbol: _ZN7android6ThreadD0Ev */
/* Demangled: android::Thread::~Thread() */
int _ZN7android6ThreadD0Ev(void);

/* Symbol: _ZN7android9TokenizerD2Ev */
/* Demangled: android::Tokenizer::~Tokenizer() */
int _ZN7android9TokenizerD2Ev(void);

/* Symbol: _ZN7android10VectorImpl3popEv */
/* Demangled: android::VectorImpl::pop() */
int _ZN7android10VectorImpl3popEv(void);

/* Symbol: _ZN7android10VectorImpl8insertAtEjj */
/* Demangled: android::VectorImpl::insertAt(unsigned int, unsigned int) */
int _ZN7android10VectorImpl8insertAtEjj(void);

/* Symbol: strnlen32 */
/* Demangled: strnlen32 */
int strnlen32(void);

/* Symbol: _ZN7android12NativeHandleC1EP13native_handleb */
/* Demangled: android::NativeHandle::NativeHandle(native_handle*, bool) */
int _ZN7android12NativeHandleC1EP13native_handleb(void);

/* Symbol: _ZN7android11PropertyMap6addAllEPKS0_ */
/* Demangled: android::PropertyMap::addAll(android::PropertyMap const*) */
int _ZN7android11PropertyMap6addAllEPKS0_(void);

/* Symbol: _ZN7android6Thread18requestExitAndWaitEv */
/* Demangled: android::Thread::requestExitAndWait() */
int _ZN7android6Thread18requestExitAndWaitEv(void);

/* Symbol: _ZN7android7String8C2EPKDs */
/* Demangled: android::String8::String8(char16_t const*) */
int _ZN7android7String8C2EPKDs(void);

/* Symbol: _ZN7android6Looper8removeFdEii */
/* Demangled: android::Looper::removeFd(int, int) */
int _ZN7android6Looper8removeFdEii(void);

/* Symbol: _ZNK7android6VectorINS_28sysprop_change_callback_infoEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::sysprop_change_callback_info>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_28sysprop_change_callback_infoEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android10LogPrinter9printLineEPKc */
/* Demangled: android::LogPrinter::printLine(char const*) */
int _ZN7android10LogPrinter9printLineEPKc(void);

/* Symbol: _ZN7android7RefBase11renameRefIdEPS0_PKvS3_ */
/* Demangled: android::RefBase::renameRefId(android::RefBase*, void const*, void const*) */
int _ZN7android7RefBase11renameRefIdEPS0_PKvS3_(void);

/* Symbol: _ZN7android6Looper18sendMessageDelayedExRKNS_2spINS_14MessageHandlerEEERKNS_7MessageE */
/* Demangled: android::Looper::sendMessageDelayed(long long, android::sp<android::MessageHandler> const&, android::Message const&) */
int _ZN7android6Looper18sendMessageDelayedExRKNS_2spINS_14MessageHandlerEEERKNS_7MessageE(void);

/* Symbol: _ZN7android13PrefixPrinterC1ERNS_7PrinterEPKc */
/* Demangled: android::PrefixPrinter::PrefixPrinter(android::Printer&, char const*) */
int _ZN7android13PrefixPrinterC1ERNS_7PrinterEPKc(void);

/* Symbol: toMillisecondTimeoutDelay */
/* Demangled: toMillisecondTimeoutDelay */
int toMillisecondTimeoutDelay(void);

/* Symbol: _ZN7android10VectorImplD0Ev */
/* Demangled: android::VectorImpl::~VectorImpl() */
int _ZN7android10VectorImplD0Ev(void);

/* Symbol: _ZN7android16SortedVectorImpl5mergeERKS0_ */
/* Demangled: android::SortedVectorImpl::merge(android::SortedVectorImpl const&) */
int _ZN7android16SortedVectorImpl5mergeERKS0_(void);

/* Symbol: _ZN7android10LogPrinterC2EPKc19android_LogPriorityS2_b */
/* Demangled: android::LogPrinter::LogPrinter(char const*, android_LogPriority, char const*, bool) */
int _ZN7android10LogPrinterC2EPKc19android_LogPriorityS2_b(void);

/* Symbol: _ZN7android7String8C1EPKDij */
/* Demangled: android::String8::String8(char32_t const*, unsigned int) */
int _ZN7android7String8C1EPKDij(void);

/* Symbol: _ZN7android8String1614allocFromUTF16EPKDsj */
/* Demangled: android::String16::allocFromUTF16(char16_t const*, unsigned int) */
int _ZN7android8String1614allocFromUTF16EPKDsj(void);

/* Symbol: androidSetThreadName */
/* Demangled: androidSetThreadName */
int androidSetThreadName(void);

/* Symbol: _ZN7android6Looper12setForThreadERKNS_2spIS0_EE */
/* Demangled: android::Looper::setForThread(android::sp<android::Looper> const&) */
int _ZN7android6Looper12setForThreadERKNS_2spIS0_EE(void);

/* Symbol: _ZN7android13PrefixPrinterC2ERNS_7PrinterEPKc */
/* Demangled: android::PrefixPrinter::PrefixPrinter(android::Printer&, char const*) */
int _ZN7android13PrefixPrinterC2ERNS_7PrinterEPKc(void);

/* Symbol: _ZN7android8String16C2EPKDsj */
/* Demangled: android::String16::String16(char16_t const*, unsigned int) */
int _ZN7android8String16C2EPKDsj(void);

/* Symbol: _ZN7android9TokenizerC1ERKNS_7String8EPNS_7FileMapEPcbj */
/* Demangled: android::Tokenizer::Tokenizer(android::String8 const&, android::FileMap*, char*, bool, unsigned int) */
int _ZN7android9TokenizerC1ERKNS_7String8EPNS_7FileMapEPcbj(void);

/* Symbol: _ZN7android10VectorImpl13editArrayImplEv */
/* Demangled: android::VectorImpl::editArrayImpl() */
int _ZN7android10VectorImpl13editArrayImplEv(void);

/* Symbol: _ZN7android6Looper5addFdEiiiRKNS_2spINS_14LooperCallbackEEEPv */
/* Demangled: android::Looper::addFd(int, int, int, android::sp<android::LooperCallback> const&, void*) */
int _ZN7android6Looper5addFdEiiiRKNS_2spINS_14LooperCallbackEEEPv(void);

/* Symbol: _ZN7android7FileMapaSEOS0_ */
/* Demangled: android::FileMap::operator=(android::FileMap&&) */
int _ZN7android7FileMapaSEOS0_(void);

/* Symbol: _ZNK7android7RefBase11getWeakRefsEv */
/* Demangled: android::RefBase::getWeakRefs() const */
int _ZNK7android7RefBase11getWeakRefsEv(void);

/* Symbol: _ZN7android7String8C1ENS0_13StaticLinkageE */
/* Demangled: android::String8::String8(android::String8::StaticLinkage) */
int _ZN7android7String8C1ENS0_13StaticLinkageE(void);

/* Symbol: _ZN7android8String16C2ERKS0_ */
/* Demangled: android::String16::String16(android::String16 const&) */
int _ZN7android8String16C2ERKS0_(void);

/* Symbol: _ZN7android20SimpleLooperCallbackD0Ev */
/* Demangled: android::SimpleLooperCallback::~SimpleLooperCallback() */
int _ZN7android20SimpleLooperCallbackD0Ev(void);

/* Symbol: _ZN7android7PrinterD0Ev */
/* Demangled: android::Printer::~Printer() */
int _ZN7android7PrinterD0Ev(void);

/* Symbol: _ZNK7android7String86lengthEv */
/* Demangled: android::String8::length() const */
int _ZNK7android7String86lengthEv(void);

/* Symbol: _ZTVN7android7RefBaseE */
/* Demangled: vtable for android::RefBase */
extern void* _ZTVN7android7RefBaseE;

/* Symbol: _ZNK7android12SharedBuffer7releaseEj */
/* Demangled: android::SharedBuffer::release(unsigned int) const */
int _ZNK7android12SharedBuffer7releaseEj(void);

/* Symbol: _ZN7android8String166insertEjPKDsj */
/* Demangled: android::String16::insert(unsigned int, char16_t const*, unsigned int) */
int _ZN7android8String166insertEjPKDsj(void);

/* Symbol: _ZN7android8String16C2EPKcj */
/* Demangled: android::String16::String16(char const*, unsigned int) */
int _ZN7android8String16C2EPKcj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEEE;

/* Symbol: _ZTv0_n12_N7android14LooperCallbackD1Ev */
/* Demangled: virtual thunk to android::LooperCallback::~LooperCallback() */
int _ZTv0_n12_N7android14LooperCallbackD1Ev(void);

/* Symbol: _ZN7android7RefBase20onIncStrongAttemptedEjPKv */
/* Demangled: android::RefBase::onIncStrongAttempted(unsigned int, void const*) */
int _ZN7android7RefBase20onIncStrongAttemptedEjPKv(void);

/* Symbol: _ZNK7android12SharedBuffer10editResizeEj */
/* Demangled: android::SharedBuffer::editResize(unsigned int) const */
int _ZNK7android12SharedBuffer10editResizeEj(void);

/* Symbol: _ZN7android7String8C1EPKDi */
/* Demangled: android::String8::String8(char32_t const*) */
int _ZN7android7String8C1EPKDi(void);

/* Symbol: _ZN7android8String16C1EPKDs */
/* Demangled: android::String16::String16(char16_t const*) */
int _ZN7android8String16C1EPKDs(void);

/* Symbol: _ZN7android6Looper6awokenEv */
/* Demangled: android::Looper::awoken() */
int _ZN7android6Looper6awokenEv(void);

/* Symbol: utf8_to_utf16_length */
/* Demangled: utf8_to_utf16_length */
int utf8_to_utf16_length(void);

/* Symbol: _ZN7android6Thread11_threadLoopEPv */
/* Demangled: android::Thread::_threadLoop(void*) */
int _ZN7android6Thread11_threadLoopEPv(void);

/* Symbol: _ZN7android7RefBase12weakref_type7decWeakEPKv */
/* Demangled: android::RefBase::weakref_type::decWeak(void const*) */
int _ZN7android7RefBase12weakref_type7decWeakEPKv(void);

/* Symbol: _ZN7android6Looper7prepareEi */
/* Demangled: android::Looper::prepare(int) */
int _ZN7android6Looper7prepareEi(void);

/* Symbol: _ZN7android12NativeHandleC2EP13native_handleb */
/* Demangled: android::NativeHandle::NativeHandle(native_handle*, bool) */
int _ZN7android12NativeHandleC2EP13native_handleb(void);

/* Symbol: _ZN7android7RefBaseC1Ev */
/* Demangled: android::RefBase::RefBase() */
int _ZN7android7RefBaseC1Ev(void);

/* Symbol: _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::Looper::MessageEnvelope>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android10VectorImpl11appendArrayEPKvj */
/* Demangled: android::VectorImpl::appendArray(void const*, unsigned int) */
int _ZN7android10VectorImpl11appendArrayEPKvj(void);

/* Symbol: _ZN7android16SortedVectorImplC2ERKNS_10VectorImplE */
/* Demangled: android::SortedVectorImpl::SortedVectorImpl(android::VectorImpl const&) */
int _ZN7android16SortedVectorImplC2ERKNS_10VectorImplE(void);

/* Symbol: _ZN7android16SortedVectorImplD2Ev */
/* Demangled: android::SortedVectorImpl::~SortedVectorImpl() */
int _ZN7android16SortedVectorImplD2Ev(void);

/* Symbol: androidSetCreateThreadFunc */
/* Demangled: androidSetCreateThreadFunc */
int androidSetCreateThreadFunc(void);

/* Symbol: _ZN7android14LooperCallbackD0Ev */
/* Demangled: android::LooperCallback::~LooperCallback() */
int _ZN7android14LooperCallbackD0Ev(void);

/* Symbol: _ZN7android6Looper5addFdEiiiPFiiiPvES1_ */
/* Demangled: android::Looper::addFd(int, int, int, int (*)(int, int, void*), void*) */
int _ZN7android6Looper5addFdEiiiPFiiiPvES1_(void);

/* Symbol: _ZNK7android6VectorINS_6Looper8ResponseEE12do_constructEPvj */
/* Demangled: android::Vector<android::Looper::Response>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_6Looper8ResponseEE12do_constructEPvj(void);

/* Symbol: _ZTCN7android18WeakMessageHandlerE0_NS_14MessageHandlerE */
/* Demangled: construction vtable for android::MessageHandler-in-android::WeakMessageHandler */
extern void* _ZTCN7android18WeakMessageHandlerE0_NS_14MessageHandlerE;

/* Symbol: _ZN7android16SortedVectorImpl3addEPKv */
/* Demangled: android::SortedVectorImpl::add(void const*) */
int _ZN7android16SortedVectorImpl3addEPKv(void);

/* Symbol: _ZN7android7RefBaseD1Ev */
/* Demangled: android::RefBase::~RefBase() */
int _ZN7android7RefBaseD1Ev(void);

/* Symbol: _ZN7android18WeakMessageHandlerD2Ev */
/* Demangled: android::WeakMessageHandler::~WeakMessageHandler() */
int _ZN7android18WeakMessageHandlerD2Ev(void);

/* Symbol: _ZN7android20SimpleLooperCallbackC1EPFiiiPvE */
/* Demangled: android::SimpleLooperCallback::SimpleLooperCallback(int (*)(int, int, void*)) */
int _ZN7android20SimpleLooperCallbackC1EPFiiiPvE(void);

/* Symbol: _ZN7android7FileMap6adviseENS0_9MapAdviceE */
/* Demangled: android::FileMap::advise(android::FileMap::MapAdvice) */
int _ZN7android7FileMap6adviseENS0_9MapAdviceE(void);

/* Symbol: _ZN7android11PropertyMapC1Ev */
/* Demangled: android::PropertyMap::PropertyMap() */
int _ZN7android11PropertyMapC1Ev(void);

/* Symbol: _ZNK7android12SharedBuffer4editEv */
/* Demangled: android::SharedBuffer::edit() const */
int _ZNK7android12SharedBuffer4editEv(void);

/* Symbol: _ZN7android10VectorImpl14insertVectorAtERKS0_j */
/* Demangled: android::VectorImpl::insertVectorAt(android::VectorImpl const&, unsigned int) */
int _ZN7android10VectorImpl14insertVectorAtERKS0_j(void);

/* Symbol: _ZN7android11PropertyMap6Parser5parseEv */
/* Demangled: android::PropertyMap::Parser::parse() */
int _ZN7android11PropertyMap6Parser5parseEv(void);

/* Symbol: _ZN7android7String8C1EPKDsj */
/* Demangled: android::String8::String8(char16_t const*, unsigned int) */
int _ZN7android7String8C1EPKDsj(void);

/* Symbol: _ZN7android8String166appendEPKDsj */
/* Demangled: android::String16::append(char16_t const*, unsigned int) */
int _ZN7android8String166appendEPKDsj(void);

/* Symbol: _ZTVN7android10VectorImplE */
/* Demangled: vtable for android::VectorImpl */
extern void* _ZTVN7android10VectorImplE;

/* Symbol: _ZTv0_n12_N7android20SimpleLooperCallbackD1Ev */
/* Demangled: virtual thunk to android::SimpleLooperCallback::~SimpleLooperCallback() */
int _ZTv0_n12_N7android20SimpleLooperCallbackD1Ev(void);

/* Symbol: _ZN7android17JenkinsHashWhitenEj */
/* Demangled: android::JenkinsHashWhiten(unsigned int) */
int _ZN7android17JenkinsHashWhitenEj(void);

/* Symbol: _ZN7android7String8C1ERKS0_ */
/* Demangled: android::String8::String8(android::String8 const&) */
int _ZN7android7String8C1ERKS0_(void);

/* Symbol: _ZN7android8String166appendERKS0_ */
/* Demangled: android::String16::append(android::String16 const&) */
int _ZN7android8String166appendERKS0_(void);

/* Symbol: _ZN7android10VectorImpl9replaceAtEPKvj */
/* Demangled: android::VectorImpl::replaceAt(void const*, unsigned int) */
int _ZN7android10VectorImpl9replaceAtEPKvj(void);

/* Symbol: _ZTVN7android14LooperCallbackE */
/* Demangled: vtable for android::LooperCallback */
extern void* _ZTVN7android14LooperCallbackE;

/* Symbol: _ZN7android11PropertyMapD1Ev */
/* Demangled: android::PropertyMap::~PropertyMap() */
int _ZN7android11PropertyMapD1Ev(void);

/* Symbol: _ZN7android7String8C1EPKDs */
/* Demangled: android::String8::String8(char16_t const*) */
int _ZN7android7String8C1EPKDs(void);

/* Symbol: strcpy16 */
/* Demangled: strcpy16 */
int strcpy16(void);

/* Symbol: _ZN7android20SimpleLooperCallback11handleEventEiiPv */
/* Demangled: android::SimpleLooperCallback::handleEvent(int, int, void*) */
int _ZN7android20SimpleLooperCallback11handleEventEiiPv(void);

/* Symbol: _ZN7android6Looper12pushResponseEiRKNS0_7RequestE */
/* Demangled: android::Looper::pushResponse(int, android::Looper::Request const&) */
int _ZN7android6Looper12pushResponseEiRKNS0_7RequestE(void);

/* Symbol: _ZN7android21report_sysprop_changeEv */
/* Demangled: android::report_sysprop_change() */
int _ZN7android21report_sysprop_changeEv(void);

/* Symbol: _ZN7android6LooperD0Ev */
/* Demangled: android::Looper::~Looper() */
int _ZN7android6LooperD0Ev(void);

/* Symbol: _ZN7android7RefBase11renameRefIdEPNS0_12weakref_typeEPKvS4_ */
/* Demangled: android::RefBase::renameRefId(android::RefBase::weakref_type*, void const*, void const*) */
int _ZN7android7RefBase11renameRefIdEPNS0_12weakref_typeEPKvS4_(void);

/* Symbol: _ZN7android7String87toUpperEv */
/* Demangled: android::String8::toUpper() */
int _ZN7android7String87toUpperEv(void);

/* Symbol: _ZN7android8String16C1Ev */
/* Demangled: android::String16::String16() */
int _ZN7android8String16C1Ev(void);

/* Symbol: _ZN7android6Looper8pollOnceEiPiS1_PPv */
/* Demangled: android::Looper::pollOnce(int, int*, int*, void**) */
int _ZN7android6Looper8pollOnceEiPiS1_PPv(void);

/* Symbol: _ZTVN7android20SimpleLooperCallbackE */
/* Demangled: vtable for android::SimpleLooperCallback */
extern void* _ZTVN7android20SimpleLooperCallbackE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj(void);

/* Symbol: _ZNK7android7RefBase9decStrongEPKv */
/* Demangled: android::RefBase::decStrong(void const*) const */
int _ZNK7android7RefBase9decStrongEPKv(void);

/* Symbol: _ZN7android6Looper4wakeEv */
/* Demangled: android::Looper::wake() */
int _ZN7android6Looper4wakeEv(void);

/* Symbol: _ZN7android10LogPrinter8printRawEPKc */
/* Demangled: android::LogPrinter::printRaw(char const*) */
int _ZN7android10LogPrinter8printRawEPKc(void);

/* Symbol: _ZN7android7String811setPathNameEPKc */
/* Demangled: android::String8::setPathName(char const*) */
int _ZN7android7String811setPathNameEPKc(void);

/* Symbol: _ZN7android8String165setToEPKDsj */
/* Demangled: android::String16::setTo(char16_t const*, unsigned int) */
int _ZN7android8String165setToEPKDsj(void);

/* Symbol: _ZN7android8String167releaseEv */
/* Demangled: android::String16::release() */
int _ZN7android8String167releaseEv(void);

/* Symbol: _ZTCN7android20SimpleLooperCallbackE0_NS_14LooperCallbackE */
/* Demangled: construction vtable for android::LooperCallback-in-android::SimpleLooperCallback */
extern void* _ZTCN7android20SimpleLooperCallbackE0_NS_14LooperCallbackE;

/* Symbol: _ZTVN7android7PrinterE */
/* Demangled: vtable for android::Printer */
extern void* _ZTVN7android7PrinterE;

/* Symbol: _ZN7android8String165setToERKS0_ */
/* Demangled: android::String16::setTo(android::String16 const&) */
int _ZN7android8String165setToERKS0_(void);

/* Symbol: _ZN7android8String16D1Ev */
/* Demangled: android::String16::~String16() */
int _ZN7android8String16D1Ev(void);

/* Symbol: _ZNK7android6Thread9isRunningEv */
/* Demangled: android::Thread::isRunning() const */
int _ZNK7android6Thread9isRunningEv(void);

/* Symbol: androidCreateRawThreadEtc */
/* Demangled: androidCreateRawThreadEtc */
int androidCreateRawThreadEtc(void);

/* Symbol: _ZN7android9StopWatch3lapEv */
/* Demangled: android::StopWatch::lap() */
int _ZN7android9StopWatch3lapEv(void);

/* Symbol: _ZN7android6Thread4joinEv */
/* Demangled: android::Thread::join() */
int _ZN7android6Thread4joinEv(void);

/* Symbol: _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::Looper::MessageEnvelope>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE7do_copyEPvPKvj(void);

/* Symbol: _ZTTN7android20SimpleLooperCallbackE */
/* Demangled: VTT for android::SimpleLooperCallback */
extern void* _ZTTN7android20SimpleLooperCallbackE;

/* Symbol: _ZTv0_n12_N7android14MessageHandlerD1Ev */
/* Demangled: virtual thunk to android::MessageHandler::~MessageHandler() */
int _ZTv0_n12_N7android14MessageHandlerD1Ev(void);

/* Symbol: _ZN7android6ThreadD1Ev */
/* Demangled: android::Thread::~Thread() */
int _ZN7android6ThreadD1Ev(void);

/* Symbol: _ZN7android6LooperC1Eb */
/* Demangled: android::Looper::Looper(bool) */
int _ZN7android6LooperC1Eb(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj(void);

/* Symbol: strlen16 */
/* Demangled: strlen16 */
int strlen16(void);

/* Symbol: _ZN7android10VectorImplC2Ejj */
/* Demangled: android::VectorImpl::VectorImpl(unsigned int, unsigned int) */
int _ZN7android10VectorImplC2Ejj(void);

/* Symbol: _ZN7android7String86appendEPKc */
/* Demangled: android::String8::append(char const*) */
int _ZN7android7String86appendEPKc(void);

/* Symbol: _ZN7android9Tokenizer4openERKNS_7String8EPPS0_ */
/* Demangled: android::Tokenizer::open(android::String8 const&, android::Tokenizer**) */
int _ZN7android9Tokenizer4openERKNS_7String8EPPS0_(void);

/* Symbol: _ZN7android7RefBase10onFirstRefEv */
/* Demangled: android::RefBase::onFirstRef() */
int _ZN7android7RefBase10onFirstRefEv(void);

/* Symbol: _ZN7android7String85setToEPKc */
/* Demangled: android::String8::setTo(char const*) */
int _ZN7android7String85setToEPKc(void);

/* Symbol: utf8_to_utf16_no_null_terminator */
/* Demangled: utf8_to_utf16_no_null_terminator */
int utf8_to_utf16_no_null_terminator(void);

/* Symbol: _ZN7android27add_sysprop_change_callbackEPFvvEi */
/* Demangled: android::add_sysprop_change_callback(void (*)(), int) */
int _ZN7android27add_sysprop_change_callbackEPFvvEi(void);

/* Symbol: _ZN7android11PropertyMap4loadERKNS_7String8EPPS0_ */
/* Demangled: android::PropertyMap::load(android::String8 const&, android::PropertyMap**) */
int _ZN7android11PropertyMap4loadERKNS_7String8EPPS0_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_(void);

/* Symbol: _ZNK7android7RefBase14getStrongCountEv */
/* Demangled: android::RefBase::getStrongCount() const */
int _ZNK7android7RefBase14getStrongCountEv(void);

/* Symbol: _ZN7android7String86formatEPKcz */
/* Demangled: android::String8::format(char const*, ...) */
int _ZN7android7String86formatEPKcz(void);

/* Symbol: _ZN7android8String167acquireEv */
/* Demangled: android::String16::acquire() */
int _ZN7android8String167acquireEv(void);

/* Symbol: _ZN7android7FileMap6createEPKcixjb */
/* Demangled: android::FileMap::create(char const*, int, long long, unsigned int, bool) */
int _ZN7android7FileMap6createEPKcixjb(void);

/* Symbol: _ZN7android8String164editEv */
/* Demangled: android::String16::edit() */
int _ZN7android8String164editEv(void);

/* Symbol: _ZN7android8String169makeLowerEv */
/* Demangled: android::String16::makeLower() */
int _ZN7android8String169makeLowerEv(void);

/* Symbol: _ZN7android8String16C2ERKS0_jj */
/* Demangled: android::String16::String16(android::String16 const&, unsigned int, unsigned int) */
int _ZN7android8String16C2ERKS0_jj(void);

/* Symbol: _ZNK7android8String1616staticStringSizeEv */
/* Demangled: android::String16::staticStringSize() const */
int _ZNK7android8String1616staticStringSizeEv(void);

/* Symbol: _ZN7android14MessageHandlerD0Ev */
/* Demangled: android::MessageHandler::~MessageHandler() */
int _ZN7android14MessageHandlerD0Ev(void);

/* Symbol: _ZN7android11PropertyMap5clearEv */
/* Demangled: android::PropertyMap::clear() */
int _ZN7android11PropertyMap5clearEv(void);

/* Symbol: _ZN7android6ThreadC2Eb */
/* Demangled: android::Thread::Thread(bool) */
int _ZN7android6ThreadC2Eb(void);

/* Symbol: _ZN7android10VectorImplD1Ev */
/* Demangled: android::VectorImpl::~VectorImpl() */
int _ZN7android10VectorImplD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android12SharedBuffer7deallocEPKS0_ */
/* Demangled: android::SharedBuffer::dealloc(android::SharedBuffer const*) */
int _ZN7android12SharedBuffer7deallocEPKS0_(void);

/* Symbol: _ZN7android7String816convertToResPathEv */
/* Demangled: android::String8::convertToResPath() */
int _ZN7android7String816convertToResPathEv(void);

/* Symbol: _ZN7android7String8C1ERKNS_8String16E */
/* Demangled: android::String8::String8(android::String16 const&) */
int _ZN7android7String8C1ERKNS_8String16E(void);

/* Symbol: _ZNK7android11PropertyMap14tryGetPropertyERKNS_7String8ERb */
/* Demangled: android::PropertyMap::tryGetProperty(android::String8 const&, bool&) const */
int _ZNK7android11PropertyMap14tryGetPropertyERKNS_7String8ERb(void);

/* Symbol: strstr16 */
/* Demangled: strstr16 */
int strstr16(void);

/* Symbol: utf32_from_utf8_at */
/* Demangled: utf32_from_utf8_at */
int utf32_from_utf8_at(void);

/* Symbol: _ZN7android10VectorImpl8insertAtEPKvjj */
/* Demangled: android::VectorImpl::insertAt(void const*, unsigned int, unsigned int) */
int _ZN7android10VectorImpl8insertAtEPKvjj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE10do_destroyEPvj(void);

/* Symbol: _ZN7android23sp_report_stack_pointerEv */
/* Demangled: android::sp_report_stack_pointer() */
int _ZN7android23sp_report_stack_pointerEv(void);

/* Symbol: _ZNK7android9Tokenizer19peekRemainderOfLineEv */
/* Demangled: android::Tokenizer::peekRemainderOfLine() const */
int _ZNK7android9Tokenizer19peekRemainderOfLineEv(void);

/* Symbol: _ZNK7android7RefBase12weakref_type9printRefsEv */
/* Demangled: android::RefBase::weakref_type::printRefs() const */
int _ZNK7android7RefBase12weakref_type9printRefsEv(void);

/* Symbol: _ZN7android7String87toLowerEv */
/* Demangled: android::String8::toLower() */
int _ZN7android7String87toLowerEv(void);

/* Symbol: _ZN7android8String165setToERKS0_jj */
/* Demangled: android::String16::setTo(android::String16 const&, unsigned int, unsigned int) */
int _ZN7android8String165setToERKS0_jj(void);

/* Symbol: _ZN7android20SimpleLooperCallbackD1Ev */
/* Demangled: android::SimpleLooperCallback::~SimpleLooperCallback() */
int _ZN7android20SimpleLooperCallbackD1Ev(void);

/* Symbol: _ZN7android6Looper16threadDestructorEPv */
/* Demangled: android::Looper::threadDestructor(void*) */
int _ZN7android6Looper16threadDestructorEPv(void);

/* Symbol: _ZN7android7PrinterD1Ev */
/* Demangled: android::Printer::~Printer() */
int _ZN7android7PrinterD1Ev(void);

/* Symbol: _ZN7android8String166removeEjj */
/* Demangled: android::String16::remove(unsigned int, unsigned int) */
int _ZN7android8String166removeEjj(void);

/* Symbol: _ZN7android18WeakMessageHandlerC1ERKNS_2wpINS_14MessageHandlerEEE */
/* Demangled: android::WeakMessageHandler::WeakMessageHandler(android::wp<android::MessageHandler> const&) */
int _ZN7android18WeakMessageHandlerC1ERKNS_2wpINS_14MessageHandlerEEE(void);

/* Symbol: _ZNK7android11PropertyMap14tryGetPropertyERKNS_7String8ERf */
/* Demangled: android::PropertyMap::tryGetProperty(android::String8 const&, float&) const */
int _ZNK7android11PropertyMap14tryGetPropertyERKNS_7String8ERf(void);

/* Symbol: _ZN7android8String16C1EPKDsj */
/* Demangled: android::String16::String16(char16_t const*, unsigned int) */
int _ZN7android8String16C1EPKDsj(void);

/* Symbol: _ZN7android10VectorImpl3addEv */
/* Demangled: android::VectorImpl::add() */
int _ZN7android10VectorImpl3addEv(void);

/* Symbol: _ZN7android9FdPrinter9printLineEPKc */
/* Demangled: android::FdPrinter::printLine(char const*) */
int _ZN7android9FdPrinter9printLineEPKc(void);

/* Symbol: _ZNK7android12SharedBuffer5resetEj */
/* Demangled: android::SharedBuffer::reset(unsigned int) const */
int _ZNK7android12SharedBuffer5resetEj(void);

/* Symbol: _ZN7android8String16C1ERKS0_ */
/* Demangled: android::String16::String16(android::String16 const&) */
int _ZN7android8String16C1ERKS0_(void);

/* Symbol: _ZTVN7android14String8PrinterE */
/* Demangled: vtable for android::String8Printer */
extern void* _ZTVN7android14String8PrinterE;

/* Symbol: _ZNK7android11PropertyMap14tryGetPropertyERKNS_7String8ERi */
/* Demangled: android::PropertyMap::tryGetProperty(android::String8 const&, int&) const */
int _ZNK7android11PropertyMap14tryGetPropertyERKNS_7String8ERi(void);

/* Symbol: _ZN7android7RefBase10renameRefsEjRKNS_16ReferenceRenamerE */
/* Demangled: android::RefBase::renameRefs(unsigned int, android::ReferenceRenamer const&) */
int _ZN7android7RefBase10renameRefsEjRKNS_16ReferenceRenamerE(void);

/* Symbol: _ZN7android7RefBaseC2Ev */
/* Demangled: android::RefBase::RefBase() */
int _ZN7android7RefBaseC2Ev(void);

/* Symbol: _ZNK7android9StopWatch11elapsedTimeEv */
/* Demangled: android::StopWatch::elapsedTime() const */
int _ZNK7android9StopWatch11elapsedTimeEv(void);

/* Symbol: _ZN7android8String165setToEPKDs */
/* Demangled: android::String16::setTo(char16_t const*) */
int _ZN7android8String165setToEPKDs(void);

/* Symbol: _ZN7android10VectorImpl4pushEv */
/* Demangled: android::VectorImpl::push() */
int _ZN7android10VectorImpl4pushEv(void);

/* Symbol: _ZN7android6Looper10initTLSKeyEv */
/* Demangled: android::Looper::initTLSKey() */
int _ZN7android6Looper10initTLSKeyEv(void);

/* Symbol: _ZN7android7FileMapC2EOS0_ */
/* Demangled: android::FileMap::FileMap(android::FileMap&&) */
int _ZN7android7FileMapC2EOS0_(void);

/* Symbol: _ZN7android8String16C1ERKS0_jj */
/* Demangled: android::String16::String16(android::String16 const&, unsigned int, unsigned int) */
int _ZN7android8String16C1ERKS0_jj(void);

/* Symbol: _ZN7android15elapsedRealtimeEv */
/* Demangled: android::elapsedRealtime() */
int _ZN7android15elapsedRealtimeEv(void);

/* Symbol: _ZN7android9Tokenizer12fromContentsERKNS_7String8EPKcPPS0_ */
/* Demangled: android::Tokenizer::fromContents(android::String8 const&, char const*, android::Tokenizer**) */
int _ZN7android9Tokenizer12fromContentsERKNS_7String8EPKcPPS0_(void);

/* Symbol: strnlen16 */
/* Demangled: strnlen16 */
int strnlen16(void);

/* Symbol: _ZN7android7String8C1Ev */
/* Demangled: android::String8::String8() */
int _ZN7android7String8C1Ev(void);

/* Symbol: _ZN7android6Thread10readyToRunEv */
/* Demangled: android::Thread::readyToRun() */
int _ZN7android6Thread10readyToRunEv(void);

/* Symbol: _ZN7android14LooperCallbackD1Ev */
/* Demangled: android::LooperCallback::~LooperCallback() */
int _ZN7android14LooperCallbackD1Ev(void);

/* Symbol: _ZTTN7android18WeakMessageHandlerE */
/* Demangled: VTT for android::WeakMessageHandler */
extern void* _ZTTN7android18WeakMessageHandlerE;

/* Symbol: _ZN7android12NativeHandleD1Ev */
/* Demangled: android::NativeHandle::~NativeHandle() */
int _ZN7android12NativeHandleD1Ev(void);

/* Symbol: _ZN7android7RefBaseD2Ev */
/* Demangled: android::RefBase::~RefBase() */
int _ZN7android7RefBaseD2Ev(void);

/* Symbol: _ZTVN7android16SortedVectorImplE */
/* Demangled: vtable for android::SortedVectorImpl */
extern void* _ZTVN7android16SortedVectorImplE;

/* Symbol: _ZN7android11PropertyMapC2Ev */
/* Demangled: android::PropertyMap::PropertyMap() */
int _ZN7android11PropertyMapC2Ev(void);

/* Symbol: _ZNK7android7RefBase12weakref_type7refBaseEv */
/* Demangled: android::RefBase::weakref_type::refBase() const */
int _ZNK7android7RefBase12weakref_type7refBaseEv(void);

/* Symbol: _ZN7android8String1610replaceAllEDsDs */
/* Demangled: android::String16::replaceAll(char16_t, char16_t) */
int _ZN7android8String1610replaceAllEDsDs(void);

/* Symbol: _ZN7android7String8D1Ev */
/* Demangled: android::String8::~String8() */
int _ZN7android7String8D1Ev(void);

/* Symbol: _ZNK7android7String814find_extensionEv */
/* Demangled: android::String8::find_extension() const */
int _ZNK7android7String814find_extensionEv(void);

/* Symbol: _ZTv0_n12_N7android6ThreadD0Ev */
/* Demangled: virtual thunk to android::Thread::~Thread() */
int _ZTv0_n12_N7android6ThreadD0Ev(void);

/* Symbol: _ZN7android9StopWatch5resetEv */
/* Demangled: android::StopWatch::reset() */
int _ZN7android9StopWatch5resetEv(void);

/* Symbol: _ZNK7android8String164sizeEv */
/* Demangled: android::String16::size() const */
int _ZNK7android8String164sizeEv(void);

/* Symbol: _ZTTN7android14MessageHandlerE */
/* Demangled: VTT for android::MessageHandler */
extern void* _ZTTN7android14MessageHandlerE;

/* Symbol: _ZN7android7FileMap9mPageSizeE */
/* Demangled: android::FileMap::mPageSize */
extern void* _ZN7android7FileMap9mPageSizeE;

/* Symbol: _ZN7android11PropertyMapD2Ev */
/* Demangled: android::PropertyMap::~PropertyMap() */
int _ZN7android11PropertyMapD2Ev(void);

/* Symbol: _ZN7android10VectorImpl13removeItemsAtEjj */
/* Demangled: android::VectorImpl::removeItemsAt(unsigned int, unsigned int) */
int _ZN7android10VectorImpl13removeItemsAtEjj(void);

/* Symbol: _ZN7android10VectorImpl4sortEPFiPKvS2_E */
/* Demangled: android::VectorImpl::sort(int (*)(void const*, void const*)) */
int _ZN7android10VectorImpl4sortEPFiPKvS2_E(void);

/* Symbol: _ZNK7android12SharedBuffer11attemptEditEv */
/* Demangled: android::SharedBuffer::attemptEdit() const */
int _ZNK7android12SharedBuffer11attemptEditEv(void);

/* Symbol: _ZN7android10VectorImpl6resizeEj */
/* Demangled: android::VectorImpl::resize(unsigned int) */
int _ZN7android10VectorImpl6resizeEj(void);

/* Symbol: _ZN7android16SortedVectorImpl5mergeERKNS_10VectorImplE */
/* Demangled: android::SortedVectorImpl::merge(android::VectorImpl const&) */
int _ZN7android16SortedVectorImpl5mergeERKNS_10VectorImplE(void);

/* Symbol: _ZN7android6LooperD1Ev */
/* Demangled: android::Looper::~Looper() */
int _ZN7android6LooperD1Ev(void);

/* Symbol: _ZNK7android6Looper7Request13initEventItemEP11epoll_event */
/* Demangled: android::Looper::Request::initEventItem(epoll_event*) const */
int _ZNK7android6Looper7Request13initEventItemEP11epoll_event(void);

/* Symbol: _ZN7android10LogPrinterC1EPKc19android_LogPriorityS2_b */
/* Demangled: android::LogPrinter::LogPrinter(char const*, android_LogPriority, char const*, bool) */
int _ZN7android10LogPrinterC1EPKc19android_LogPriorityS2_b(void);

/* Symbol: _ZN7android7String813appendFormatVEPKcSt9__va_list */
/* Demangled: android::String8::appendFormatV(char const*, std::__va_list) */
int _ZN7android7String813appendFormatVEPKcSt9__va_list(void);

/* Symbol: _ZN7android8String16C2Ev */
/* Demangled: android::String16::String16() */
int _ZN7android8String16C2Ev(void);

/* Symbol: _ZN7android19elapsedRealtimeNanoEv */
/* Demangled: android::elapsedRealtimeNano() */
int _ZN7android19elapsedRealtimeNanoEv(void);

/* Symbol: _ZN7android30get_report_sysprop_change_funcEv */
/* Demangled: android::get_report_sysprop_change_func() */
int _ZN7android30get_report_sysprop_change_funcEv(void);

/* Symbol: _ZN7android13PrefixPrinter9printLineEPKc */
/* Demangled: android::PrefixPrinter::printLine(char const*) */
int _ZN7android13PrefixPrinter9printLineEPKc(void);

/* Symbol: _ZTVN7android13PrefixPrinterE */
/* Demangled: vtable for android::PrefixPrinter */
extern void* _ZTVN7android13PrefixPrinterE;

/* Symbol: _ZN7android11PropertyMap11addPropertyERKNS_7String8ES3_ */
/* Demangled: android::PropertyMap::addProperty(android::String8 const&, android::String8 const&) */
int _ZN7android11PropertyMap11addPropertyERKNS_7String8ES3_(void);

/* Symbol: _ZN7android7RefBase20extendObjectLifetimeEi */
/* Demangled: android::RefBase::extendObjectLifetime(int) */
int _ZN7android7RefBase20extendObjectLifetimeEi(void);

/* Symbol: _ZN7android12SharedBuffer5allocEj */
/* Demangled: android::SharedBuffer::alloc(unsigned int) */
int _ZN7android12SharedBuffer5allocEj(void);

/* Symbol: _ZN7android7String810appendPathEPKc */
/* Demangled: android::String8::appendPath(char const*) */
int _ZN7android7String810appendPathEPKc(void);

/* Symbol: _ZNK7android7String816getPathExtensionEv */
/* Demangled: android::String8::getPathExtension() const */
int _ZNK7android7String816getPathExtensionEv(void);

/* Symbol: _ZNK7android6Looper20getAllowNonCallbacksEv */
/* Demangled: android::Looper::getAllowNonCallbacks() const */
int _ZNK7android6Looper20getAllowNonCallbacksEv(void);

/* Symbol: _ZN7android18WeakMessageHandler13handleMessageERKNS_7MessageE */
/* Demangled: android::WeakMessageHandler::handleMessage(android::Message const&) */
int _ZN7android18WeakMessageHandler13handleMessageERKNS_7MessageE(void);

/* Symbol: _ZNK7android6VectorINS_6Looper8ResponseEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::Looper::Response>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_6Looper8ResponseEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android8String16D2Ev */
/* Demangled: android::String16::~String16() */
int _ZN7android8String16D2Ev(void);

/* Symbol: _ZNK7android8String169findFirstEDs */
/* Demangled: android::String16::findFirst(char16_t) const */
int _ZNK7android8String169findFirstEDs(void);

/* Symbol: _ZN7android6Looper17sendMessageAtTimeExRKNS_2spINS_14MessageHandlerEEERKNS_7MessageE */
/* Demangled: android::Looper::sendMessageAtTime(long long, android::sp<android::MessageHandler> const&, android::Message const&) */
int _ZN7android6Looper17sendMessageAtTimeExRKNS_2spINS_14MessageHandlerEEERKNS_7MessageE(void);

/* Symbol: _ZNK7android7RefBase12weakref_type12getWeakCountEv */
/* Demangled: android::RefBase::weakref_type::getWeakCount() const */
int _ZNK7android7RefBase12weakref_type12getWeakCountEv(void);

/* Symbol: _ZN7android8String1610editResizeEj */
/* Demangled: android::String16::editResize(unsigned int) */
int _ZN7android8String1610editResizeEj(void);

/* Symbol: _ZN7android8String16C2EPKDs */
/* Demangled: android::String16::String16(char16_t const*) */
int _ZN7android8String16C2EPKDs(void);

/* Symbol: androidSetThreadPriority */
/* Demangled: androidSetThreadPriority */
int androidSetThreadPriority(void);

/* Symbol: _ZN7android10VectorImpl7_shrinkEjj */
/* Demangled: android::VectorImpl::_shrink(unsigned int, unsigned int) */
int _ZN7android10VectorImpl7_shrinkEjj(void);

/* Symbol: _ZN7android11PropertyMap6ParserC2EPS0_PNS_9TokenizerE */
/* Demangled: android::PropertyMap::Parser::Parser(android::PropertyMap*, android::Tokenizer*) */
int _ZN7android11PropertyMap6ParserC2EPS0_PNS_9TokenizerE(void);

/* Symbol: _ZN7android6ThreadD2Ev */
/* Demangled: android::Thread::~Thread() */
int _ZN7android6ThreadD2Ev(void);

/* Symbol: _ZN7android10VectorImpl4sortEPFiPKvS2_PvES3_ */
/* Demangled: android::VectorImpl::sort(int (*)(void const*, void const*, void*), void*) */
int _ZN7android10VectorImpl4sortEPFiPKvS2_PvES3_(void);

/* Symbol: _ZN7android6LooperC2Eb */
/* Demangled: android::Looper::Looper(bool) */
int _ZN7android6LooperC2Eb(void);

/* Symbol: _ZTVN7android6VectorINS_6Looper8ResponseEEE */
/* Demangled: vtable for android::Vector<android::Looper::Response> */
extern void* _ZTVN7android6VectorINS_6Looper8ResponseEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android10VectorImpl5clearEv */
/* Demangled: android::VectorImpl::clear() */
int _ZN7android10VectorImpl5clearEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android7String85clearEv */
/* Demangled: android::String8::clear() */
int _ZN7android7String85clearEv(void);

/* Symbol: _ZN7android7String86appendEPKcj */
/* Demangled: android::String8::append(char const*, unsigned int) */
int _ZN7android7String86appendEPKcj(void);

/* Symbol: _ZNK7android6Thread11exitPendingEv */
/* Demangled: android::Thread::exitPending() const */
int _ZNK7android6Thread11exitPendingEv(void);

/* Symbol: _ZN7android9TokenizerC2ERKNS_7String8EPNS_7FileMapEPcbj */
/* Demangled: android::Tokenizer::Tokenizer(android::String8 const&, android::FileMap*, char*, bool, unsigned int) */
int _ZN7android9TokenizerC2ERKNS_7String8EPNS_7FileMapEPcbj(void);

/* Symbol: _ZNK7android7RefBase9incStrongEPKv */
/* Demangled: android::RefBase::incStrong(void const*) const */
int _ZNK7android7RefBase9incStrongEPKv(void);

/* Symbol: _ZN7android6Looper14removeMessagesERKNS_2spINS_14MessageHandlerEEEi */
/* Demangled: android::Looper::removeMessages(android::sp<android::MessageHandler> const&, int) */
int _ZN7android6Looper14removeMessagesERKNS_2spINS_14MessageHandlerEEEi(void);

/* Symbol: _ZTv0_n12_N7android18WeakMessageHandlerD0Ev */
/* Demangled: virtual thunk to android::WeakMessageHandler::~WeakMessageHandler() */
int _ZTv0_n12_N7android18WeakMessageHandlerD0Ev(void);

/* Symbol: _ZN7android14statusToStringEi */
/* Demangled: android::statusToString(int) */
int _ZN7android14statusToStringEi(void);

/* Symbol: _ZN7android7String85setToEPKcj */
/* Demangled: android::String8::setTo(char const*, unsigned int) */
int _ZN7android7String85setToEPKcj(void);

/* Symbol: _ZN7android7String87formatVEPKcSt9__va_list */
/* Demangled: android::String8::formatV(char const*, std::__va_list) */
int _ZN7android7String87formatVEPKcSt9__va_list(void);

/* Symbol: _ZN7android9StopWatchD1Ev */
/* Demangled: android::StopWatch::~StopWatch() */
int _ZN7android9StopWatchD1Ev(void);

/* Symbol: _ZN7android7String8C2EPKcj */
/* Demangled: android::String8::String8(char const*, unsigned int) */
int _ZN7android7String8C2EPKcj(void);

/* Symbol: _ZNK7android7String88walkPathEPS0_ */
/* Demangled: android::String8::walkPath(android::String8*) const */
int _ZNK7android7String88walkPathEPS0_(void);

/* Symbol: utf32_to_utf8_length */
/* Demangled: utf32_to_utf8_length */
int utf32_to_utf8_length(void);

/* Symbol: _ZN7android10VectorImpl4pushEPKv */
/* Demangled: android::VectorImpl::push(void const*) */
int _ZN7android10VectorImpl4pushEPKv(void);

/* Symbol: _ZN7android14MessageHandlerD1Ev */
/* Demangled: android::MessageHandler::~MessageHandler() */
int _ZN7android14MessageHandlerD1Ev(void);

/* Symbol: _ZTVN7android6LooperE */
/* Demangled: vtable for android::Looper */
extern void* _ZTVN7android6LooperE;

/* Symbol: _ZN7android7FileMapC1EOS0_ */
/* Demangled: android::FileMap::FileMap(android::FileMap&&) */
int _ZN7android7FileMapC1EOS0_(void);

/* Symbol: _ZN7android7String812appendFormatEPKcz */
/* Demangled: android::String8::appendFormat(char const*, ...) */
int _ZN7android7String812appendFormatEPKcz(void);

/* Symbol: _ZN7android10VectorImplD2Ev */
/* Demangled: android::VectorImpl::~VectorImpl() */
int _ZN7android10VectorImplD2Ev(void);

/* Symbol: _ZN7android16SortedVectorImplD0Ev */
/* Demangled: android::SortedVectorImpl::~SortedVectorImpl() */
int _ZN7android16SortedVectorImplD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::Looper::Request> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_6Looper7RequestEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android14String8Printer9printLineEPKc */
/* Demangled: android::String8Printer::printLine(char const*) */
int _ZN7android14String8Printer9printLineEPKc(void);

/* Symbol: _ZN7android7PrinterC2Ev */
/* Demangled: android::Printer::Printer() */
int _ZN7android7PrinterC2Ev(void);

/* Symbol: _ZN7android16SortedVectorImplC2Ejj */
/* Demangled: android::SortedVectorImpl::SortedVectorImpl(unsigned int, unsigned int) */
int _ZN7android16SortedVectorImplC2Ejj(void);

/* Symbol: _ZN7android9Tokenizer14skipDelimitersEPKc */
/* Demangled: android::Tokenizer::skipDelimiters(char const*) */
int _ZN7android9Tokenizer14skipDelimitersEPKc(void);

/* Symbol: _ZN7android7String810lockBufferEj */
/* Demangled: android::String8::lockBuffer(unsigned int) */
int _ZN7android7String810lockBufferEj(void);

/* Symbol: _ZN7android18WeakMessageHandlerD0Ev */
/* Demangled: android::WeakMessageHandler::~WeakMessageHandler() */
int _ZN7android18WeakMessageHandlerD0Ev(void);

/* Symbol: _ZNK7android11PropertyMap14tryGetPropertyERKNS_7String8ERS1_ */
/* Demangled: android::PropertyMap::tryGetProperty(android::String8 const&, android::String8&) const */
int _ZNK7android11PropertyMap14tryGetPropertyERKNS_7String8ERS1_(void);

/* Symbol: _ZNK7android7String84findEPKcj */
/* Demangled: android::String8::find(char const*, unsigned int) const */
int _ZNK7android7String84findEPKcj(void);

/* Symbol: _ZN7android7RefBase12weakref_type16attemptIncStrongEPKv */
/* Demangled: android::RefBase::weakref_type::attemptIncStrong(void const*) */
int _ZN7android7RefBase12weakref_type16attemptIncStrongEPKv(void);

/* Symbol: _ZN7android7String89removeAllEPKc */
/* Demangled: android::String8::removeAll(char const*) */
int _ZN7android7String89removeAllEPKc(void);

/* Symbol: strzcmp16 */
/* Demangled: strzcmp16 */
int strzcmp16(void);

/* Symbol: _ZNK7android6Thread6getTidEv */
/* Demangled: android::Thread::getTid() const */
int _ZNK7android6Thread6getTidEv(void);

/* Symbol: _ZN7android20SimpleLooperCallbackD2Ev */
/* Demangled: android::SimpleLooperCallback::~SimpleLooperCallback() */
int _ZN7android20SimpleLooperCallbackD2Ev(void);

/* Symbol: _ZN7android7PrinterD2Ev */
/* Demangled: android::Printer::~Printer() */
int _ZN7android7PrinterD2Ev(void);

/* Symbol: _ZN7android8String166insertEjPKDs */
/* Demangled: android::String16::insert(unsigned int, char16_t const*) */
int _ZN7android8String166insertEjPKDs(void);

/* Symbol: _ZNK7android8String168findLastEDs */
/* Demangled: android::String16::findLast(char16_t) const */
int _ZNK7android8String168findLastEDs(void);

/* Symbol: _ZN7android6Looper26scheduleEpollRebuildLockedEv */
/* Demangled: android::Looper::scheduleEpollRebuildLocked() */
int _ZN7android6Looper26scheduleEpollRebuildLockedEv(void);

/* Symbol: _ZN7android12NativeHandle6createEP13native_handleb */
/* Demangled: android::NativeHandle::create(native_handle*, bool) */
int _ZN7android12NativeHandle6createEP13native_handleb(void);

/* Symbol: systemTime */
/* Demangled: systemTime */
int systemTime(void);

/* Symbol: _ZNK7android7String810getPathDirEv */
/* Demangled: android::String8::getPathDir() const */
int _ZNK7android7String810getPathDirEv(void);

/* Symbol: strcmp16 */
/* Demangled: strcmp16 */
int strcmp16(void);

/* Symbol: _ZN7android7String812unlockBufferEj */
/* Demangled: android::String8::unlockBuffer(unsigned int) */
int _ZN7android7String812unlockBufferEj(void);

/* Symbol: _ZNK7android16SortedVectorImpl7orderOfEPKv */
/* Demangled: android::SortedVectorImpl::orderOf(void const*) const */
int _ZNK7android16SortedVectorImpl7orderOfEPKv(void);

/* Symbol: _ZN7android9FdPrinterC1EijPKc */
/* Demangled: android::FdPrinter::FdPrinter(int, unsigned int, char const*) */
int _ZN7android9FdPrinterC1EijPKc(void);

/* Symbol: _ZNK7android12SharedBuffer7acquireEv */
/* Demangled: android::SharedBuffer::acquire() const */
int _ZNK7android12SharedBuffer7acquireEv(void);

/* Symbol: _ZN7android8String16C1ENS0_13StaticLinkageE */
/* Demangled: android::String16::String16(android::String16::StaticLinkage) */
int _ZN7android8String16C1ENS0_13StaticLinkageE(void);

/* Symbol: _ZN7android8String16C1EPKcj */
/* Demangled: android::String16::String16(char const*, unsigned int) */
int _ZN7android8String16C1EPKcj(void);

/* Symbol: _ZNK7android8String168containsEPKDs */
/* Demangled: android::String16::contains(char16_t const*) const */
int _ZNK7android8String168containsEPKDs(void);

/* Symbol: _ZNK7android10VectorImpl12itemLocationEj */
/* Demangled: android::VectorImpl::itemLocation(unsigned int) const */
int _ZNK7android10VectorImpl12itemLocationEj(void);

/* Symbol: _ZN7android7FileMapC1Ev */
/* Demangled: android::FileMap::FileMap() */
int _ZN7android7FileMapC1Ev(void);

/* Symbol: _ZN7android11PropertyMap6ParserD1Ev */
/* Demangled: android::PropertyMap::Parser::~Parser() */
int _ZN7android11PropertyMap6ParserD1Ev(void);

/* Symbol: _ZN7android7RefBase12weakref_type14attemptIncWeakEPKv */
/* Demangled: android::RefBase::weakref_type::attemptIncWeak(void const*) */
int _ZN7android7RefBase12weakref_type14attemptIncWeakEPKv(void);

/* Symbol: _ZN7android6Thread11requestExitEv */
/* Demangled: android::Thread::requestExit() */
int _ZN7android6Thread11requestExitEv(void);

/* Symbol: _ZTTN7android14LooperCallbackE */
/* Demangled: VTT for android::LooperCallback */
extern void* _ZTTN7android14LooperCallbackE;

/* Symbol: _ZN7android19JenkinsHashMixBytesEjPKhj */
/* Demangled: android::JenkinsHashMixBytes(unsigned int, unsigned char const*, unsigned int) */
int _ZN7android19JenkinsHashMixBytesEjPKhj(void);

/* Symbol: _ZNK7android7String811getPathLeafEv */
/* Demangled: android::String8::getPathLeaf() const */
int _ZNK7android7String811getPathLeafEv(void);

/* Symbol: _ZN7android7String8C2Ev */
/* Demangled: android::String8::String8() */
int _ZN7android7String8C2Ev(void);

/* Symbol: utf16_to_utf8_length */
/* Demangled: utf16_to_utf8_length */
int utf16_to_utf8_length(void);

/* Symbol: _ZN7android10VectorImplaSERKS0_ */
/* Demangled: android::VectorImpl::operator=(android::VectorImpl const&) */
int _ZN7android10VectorImplaSERKS0_(void);

/* Symbol: _ZNK7android6VectorINS_28sysprop_change_callback_infoEE12do_constructEPvj */
/* Demangled: android::Vector<android::sysprop_change_callback_info>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_28sysprop_change_callback_infoEE12do_constructEPvj(void);

/* Symbol: _ZN7android14LooperCallbackD2Ev */
/* Demangled: android::LooperCallback::~LooperCallback() */
int _ZN7android14LooperCallbackD2Ev(void);

/* Symbol: _ZN7android6Looper7pollAllEiPiS1_PPv */
/* Demangled: android::Looper::pollAll(int, int*, int*, void**) */
int _ZN7android6Looper7pollAllEiPiS1_PPv(void);

/* Symbol: _ZN7android7FileMapD1Ev */
/* Demangled: android::FileMap::~FileMap() */
int _ZN7android7FileMapD1Ev(void);

/* Symbol: _ZN7android12NativeHandleD2Ev */
/* Demangled: android::NativeHandle::~NativeHandle() */
int _ZN7android12NativeHandleD2Ev(void);

/* Symbol: _ZN7android7String811setPathNameEPKcj */
/* Demangled: android::String8::setPathName(char const*, unsigned int) */
int _ZN7android7String811setPathNameEPKcj(void);

/* Symbol: _ZN7android7String87toUpperEjj */
/* Demangled: android::String8::toUpper(unsigned int, unsigned int) */
int _ZN7android7String87toUpperEjj(void);

/* Symbol: _ZN7android8String165allocEj */
/* Demangled: android::String16::alloc(unsigned int) */
int _ZN7android8String165allocEj(void);

/* Symbol: _ZTTN7android6ThreadE */
/* Demangled: VTT for android::Thread */
extern void* _ZTTN7android6ThreadE;

/* Symbol: _ZN7android16SortedVectorImpl6removeEPKv */
/* Demangled: android::SortedVectorImpl::remove(void const*) */
int _ZN7android16SortedVectorImpl6removeEPKv(void);

/* Symbol: _ZN7android6Looper8removeFdEi */
/* Demangled: android::Looper::removeFd(int) */
int _ZN7android6Looper8removeFdEi(void);

/* Symbol: _ZTVN7android18WeakMessageHandlerE */
/* Demangled: vtable for android::WeakMessageHandler */
extern void* _ZTVN7android18WeakMessageHandlerE;

/* Symbol: _ZN7android9TokenizerD1Ev */
/* Demangled: android::Tokenizer::~Tokenizer() */
int _ZN7android9TokenizerD1Ev(void);

/* Symbol: _ZN7android7RefBase15onLastStrongRefEPKv */
/* Demangled: android::RefBase::onLastStrongRef(void const*) */
int _ZN7android7RefBase15onLastStrongRefEPKv(void);

/* Symbol: _ZN7android10VectorImpl12appendVectorERKS0_ */
/* Demangled: android::VectorImpl::appendVector(android::VectorImpl const&) */
int _ZN7android10VectorImpl12appendVectorERKS0_(void);

/* Symbol: _ZN7android10VectorImpl16editItemLocationEj */
/* Demangled: android::VectorImpl::editItemLocation(unsigned int) */
int _ZN7android10VectorImpl16editItemLocationEj(void);

/* Symbol: _ZN7android7String8D2Ev */
/* Demangled: android::String8::~String8() */
int _ZN7android7String8D2Ev(void);

/* Symbol: _ZTv0_n12_N7android6ThreadD1Ev */
/* Demangled: virtual thunk to android::Thread::~Thread() */
int _ZTv0_n12_N7android6ThreadD1Ev(void);

/* Symbol: _ZN7android10VectorImpl9replaceAtEj */
/* Demangled: android::VectorImpl::replaceAt(unsigned int) */
int _ZN7android10VectorImpl9replaceAtEj(void);

/* Symbol: _ZN7android7String8C2ENS0_13StaticLinkageE */
/* Demangled: android::String8::String8(android::String8::StaticLinkage) */
int _ZN7android7String8C2ENS0_13StaticLinkageE(void);

/* Symbol: _ZN7android6Thread3runEPKcij */
/* Demangled: android::Thread::run(char const*, int, unsigned int) */
int _ZN7android6Thread3runEPKcij(void);

/* Symbol: androidGetThreadPriority */
/* Demangled: androidGetThreadPriority */
int androidGetThreadPriority(void);

/* Symbol: _ZN7android10VectorImpl15release_storageEv */
/* Demangled: android::VectorImpl::release_storage() */
int _ZN7android10VectorImpl15release_storageEv(void);

/* Symbol: _ZN7android9StopWatchC2EPKci */
/* Demangled: android::StopWatch::StopWatch(char const*, int) */
int _ZN7android9StopWatchC2EPKci(void);

/* Symbol: _ZN7android7String85setToEPKDij */
/* Demangled: android::String8::setTo(char32_t const*, unsigned int) */
int _ZN7android7String85setToEPKDij(void);

/* Symbol: utf8_length */
/* Demangled: utf8_length */
int utf8_length(void);

/* Symbol: _ZNK7android6VectorINS_28sysprop_change_callback_infoEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::sysprop_change_callback_info>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_28sysprop_change_callback_infoEE8do_splatEPvPKvj(void);

/* Symbol: _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::Looper::MessageEnvelope>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_6Looper15MessageEnvelopeEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android9FdPrinterC2EijPKc */
/* Demangled: android::FdPrinter::FdPrinter(int, unsigned int, char const*) */
int _ZN7android9FdPrinterC2EijPKc(void);

/* Symbol: _ZTVN7android10LogPrinterE */
/* Demangled: vtable for android::LogPrinter */
extern void* _ZTVN7android10LogPrinterE;

/* Symbol: _ZN7android7String8C2EPKDij */
/* Demangled: android::String8::String8(char32_t const*, unsigned int) */
int _ZN7android7String8C2EPKDij(void);

/* Symbol: _ZNK7android8String1614isStaticStringEv */
/* Demangled: android::String16::isStaticString() const */
int _ZNK7android8String1614isStaticStringEv(void);

/* Symbol: _ZN7android6LooperD2Ev */
/* Demangled: android::Looper::~Looper() */
int _ZN7android6LooperD2Ev(void);

/* Symbol: _ZN7android7String8C1EPKcj */
/* Demangled: android::String8::String8(char const*, unsigned int) */
int _ZN7android7String8C1EPKcj(void);

/* Symbol: _ZTVN7android6ThreadE */
/* Demangled: vtable for android::Thread */
extern void* _ZTVN7android6ThreadE;

/* Symbol: _ZN7android10VectorImpl13finish_vectorEv */
/* Demangled: android::VectorImpl::finish_vector() */
int _ZN7android10VectorImpl13finish_vectorEv(void);

/* Symbol: _ZN7android7String812unlockBufferEv */
/* Demangled: android::String8::unlockBuffer() */
int _ZN7android7String812unlockBufferEv(void);

/* Symbol: _ZNK7android7String811getBasePathEv */
/* Demangled: android::String8::getBasePath() const */
int _ZNK7android7String811getBasePathEv(void);

/* Symbol: _ZN7android12uptimeMillisEv */
/* Demangled: android::uptimeMillis() */
int _ZN7android12uptimeMillisEv(void);

/* Symbol: androidCreateThread */
/* Demangled: androidCreateThread */
int androidCreateThread(void);

/* Symbol: _ZN7android6Looper12getForThreadEv */
/* Demangled: android::Looper::getForThread() */
int _ZN7android6Looper12getForThreadEv(void);

/* Symbol: strncmp16 */
/* Demangled: strncmp16 */
int strncmp16(void);

/* Symbol: androidGetThreadId */
/* Demangled: androidGetThreadId */
int androidGetThreadId(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBUTILS_V30_H */
