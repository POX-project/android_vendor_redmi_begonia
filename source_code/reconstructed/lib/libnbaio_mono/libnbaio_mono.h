/*
 * Reverse-Engineered ABI Specification for: libnbaio_mono.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libnbaio_mono.so
 */

#ifndef BEGONIA_RE_LIBNBAIO_MONO_H
#define BEGONIA_RE_LIBNBAIO_MONO_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android10NBAIO_Sink8writeViaEPFiPvS1_jEjS1_j */
/* Demangled: android::NBAIO_Sink::writeVia(int (*)(void*, void*, unsigned int), unsigned int, void*, unsigned int) */
int _ZN7android10NBAIO_Sink8writeViaEPFiPvS1_jEjS1_j(void);

/* Symbol: _ZN7android14MonoPipeReader4readEPvj */
/* Demangled: android::MonoPipeReader::read(void*, unsigned int) */
int _ZN7android14MonoPipeReader4readEPvj(void);

/* Symbol: _ZN7android14MonoPipeReaderC1EPNS_8MonoPipeE */
/* Demangled: android::MonoPipeReader::MonoPipeReader(android::MonoPipe*) */
int _ZN7android14MonoPipeReaderC1EPNS_8MonoPipeE(void);

/* Symbol: _ZN7android14Format_isValidERKNS_12NBAIO_FormatE */
/* Demangled: android::Format_isValid(android::NBAIO_Format const&) */
int _ZN7android14Format_isValidERKNS_12NBAIO_FormatE(void);

/* Symbol: _ZN7android16Format_from_SR_CEjj14audio_format_t */
/* Demangled: android::Format_from_SR_C(unsigned int, unsigned int, audio_format_t) */
int _ZN7android16Format_from_SR_CEjj14audio_format_t(void);

/* Symbol: _ZTVN7android10NBAIO_PortE */
/* Demangled: vtable for android::NBAIO_Port */
extern void* _ZTVN7android10NBAIO_PortE;

/* Symbol: _ZN7android14MonoPipeReaderC2EPNS_8MonoPipeE */
/* Demangled: android::MonoPipeReader::MonoPipeReader(android::MonoPipe*) */
int _ZN7android14MonoPipeReaderC2EPNS_8MonoPipeE(void);

/* Symbol: _ZTVN7android10NBAIO_SinkE */
/* Demangled: vtable for android::NBAIO_Sink */
extern void* _ZTVN7android10NBAIO_SinkE;

/* Symbol: _ZN7android8MonoPipeD0Ev */
/* Demangled: android::MonoPipe::~MonoPipe() */
int _ZN7android8MonoPipeD0Ev(void);

/* Symbol: _ZTVN7android8MonoPipeE */
/* Demangled: vtable for android::MonoPipe */
extern void* _ZTVN7android8MonoPipeE;

/* Symbol: _ZN7android14MonoPipeReader11onTimestampERKNS_17ExtendedTimestampE */
/* Demangled: android::MonoPipeReader::onTimestamp(android::ExtendedTimestamp const&) */
int _ZN7android14MonoPipeReader11onTimestampERKNS_17ExtendedTimestampE(void);

/* Symbol: _ZN7android14MonoPipeReaderD0Ev */
/* Demangled: android::MonoPipeReader::~MonoPipeReader() */
int _ZN7android14MonoPipeReaderD0Ev(void);

/* Symbol: _ZTVN7android14MonoPipeReaderE */
/* Demangled: vtable for android::MonoPipeReader */
extern void* _ZTVN7android14MonoPipeReaderE;

/* Symbol: _ZN7android8MonoPipe12getTimestampERNS_17ExtendedTimestampE */
/* Demangled: android::MonoPipe::getTimestamp(android::ExtendedTimestamp&) */
int _ZN7android8MonoPipe12getTimestampERNS_17ExtendedTimestampE(void);

/* Symbol: _ZN7android8MonoPipe5writeEPKvj */
/* Demangled: android::MonoPipe::write(void const*, unsigned int) */
int _ZN7android8MonoPipe5writeEPKvj(void);

/* Symbol: _ZN7android8MonoPipeD1Ev */
/* Demangled: android::MonoPipe::~MonoPipe() */
int _ZN7android8MonoPipeD1Ev(void);

/* Symbol: _ZN7android14MonoPipeReaderD1Ev */
/* Demangled: android::MonoPipeReader::~MonoPipeReader() */
int _ZN7android14MonoPipeReaderD1Ev(void);

/* Symbol: _ZN7android19Format_channelCountERKNS_12NBAIO_FormatE */
/* Demangled: android::Format_channelCount(android::NBAIO_Format const&) */
int _ZN7android19Format_channelCountERKNS_12NBAIO_FormatE(void);

/* Symbol: _ZN7android16Format_frameSizeERKNS_12NBAIO_FormatE */
/* Demangled: android::Format_frameSize(android::NBAIO_Format const&) */
int _ZN7android16Format_frameSizeERKNS_12NBAIO_FormatE(void);

/* Symbol: _ZN7android8MonoPipe16availableToWriteEv */
/* Demangled: android::MonoPipe::availableToWrite() */
int _ZN7android8MonoPipe16availableToWriteEv(void);

/* Symbol: _ZN7android8MonoPipeD2Ev */
/* Demangled: android::MonoPipe::~MonoPipe() */
int _ZN7android8MonoPipeD2Ev(void);

/* Symbol: _ZN7android12NBAIO_Source7readViaEPFiPvPKvjEjS1_j */
/* Demangled: android::NBAIO_Source::readVia(int (*)(void*, void const*, unsigned int), unsigned int, void*, unsigned int) */
int _ZN7android12NBAIO_Source7readViaEPFiPvPKvjEjS1_j(void);

/* Symbol: _ZN7android14MonoPipeReader15availableToReadEv */
/* Demangled: android::MonoPipeReader::availableToRead() */
int _ZN7android14MonoPipeReader15availableToReadEv(void);

/* Symbol: _ZN7android14MonoPipeReaderD2Ev */
/* Demangled: android::MonoPipeReader::~MonoPipeReader() */
int _ZN7android14MonoPipeReaderD2Ev(void);

/* Symbol: _ZN7android14Format_isEqualERKNS_12NBAIO_FormatES2_ */
/* Demangled: android::Format_isEqual(android::NBAIO_Format const&, android::NBAIO_Format const&) */
int _ZN7android14Format_isEqualERKNS_12NBAIO_FormatES2_(void);

/* Symbol: _ZN7android10NBAIO_Port9negotiateEPKNS_12NBAIO_FormatEjPS1_Rj */
/* Demangled: android::NBAIO_Port::negotiate(android::NBAIO_Format const*, unsigned int, android::NBAIO_Format*, unsigned int&) */
int _ZN7android10NBAIO_Port9negotiateEPKNS_12NBAIO_FormatEjPS1_Rj(void);

/* Symbol: _ZN7android14Format_InvalidE */
/* Demangled: android::Format_Invalid */
extern void* _ZN7android14Format_InvalidE;

/* Symbol: _ZN7android17Format_sampleRateERKNS_12NBAIO_FormatE */
/* Demangled: android::Format_sampleRate(android::NBAIO_Format const&) */
int _ZN7android17Format_sampleRateERKNS_12NBAIO_FormatE(void);

/* Symbol: _ZN7android8MonoPipe12setAvgFramesEj */
/* Demangled: android::MonoPipe::setAvgFrames(unsigned int) */
int _ZN7android8MonoPipe12setAvgFramesEj(void);

/* Symbol: _ZN7android14MonoPipeReader5flushEv */
/* Demangled: android::MonoPipeReader::flush() */
int _ZN7android14MonoPipeReader5flushEv(void);

/* Symbol: _ZN7android8MonoPipe8shutdownEb */
/* Demangled: android::MonoPipe::shutdown(bool) */
int _ZN7android8MonoPipe8shutdownEb(void);

/* Symbol: _ZN7android8MonoPipeC1EjRKNS_12NBAIO_FormatEb */
/* Demangled: android::MonoPipe::MonoPipe(unsigned int, android::NBAIO_Format const&, bool) */
int _ZN7android8MonoPipeC1EjRKNS_12NBAIO_FormatEb(void);

/* Symbol: _ZN7android8MonoPipe10isShutdownEv */
/* Demangled: android::MonoPipe::isShutdown() */
int _ZN7android8MonoPipe10isShutdownEv(void);

/* Symbol: _ZN7android8MonoPipeC2EjRKNS_12NBAIO_FormatEb */
/* Demangled: android::MonoPipe::MonoPipe(unsigned int, android::NBAIO_Format const&, bool) */
int _ZN7android8MonoPipeC2EjRKNS_12NBAIO_FormatEb(void);

/* Symbol: _ZTVN7android12NBAIO_SourceE */
/* Demangled: vtable for android::NBAIO_Source */
extern void* _ZTVN7android12NBAIO_SourceE;

__END_DECLS

#endif /* BEGONIA_RE_LIBNBAIO_MONO_H */
