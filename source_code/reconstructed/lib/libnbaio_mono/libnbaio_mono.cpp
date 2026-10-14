/*
 * Reverse-Engineered Source for: libnbaio_mono.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libnbaio_mono"

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
#include "libnbaio_mono.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::NBAIO_Sink::writeVia(int (*)(void*, void*, unsigned int), unsigned int, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10NBAIO_Sink8writeViaEPFiPvS1_jEjS1_j(void) {
    ALOGD("_ZN7android10NBAIO_Sink8writeViaEPFiPvS1_jEjS1_j() called");
    return 0;
}

/* Demangled: android::MonoPipeReader::read(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14MonoPipeReader4readEPvj(void) {
    ALOGD("_ZN7android14MonoPipeReader4readEPvj() called");
    return 0;
}

/* Demangled: android::MonoPipeReader::MonoPipeReader(android::MonoPipe*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14MonoPipeReaderC1EPNS_8MonoPipeE(void) {
    ALOGD("_ZN7android14MonoPipeReaderC1EPNS_8MonoPipeE() called");
    return 0;
}

/* Demangled: android::Format_isValid(android::NBAIO_Format const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Format_isValidERKNS_12NBAIO_FormatE(void) {
    ALOGD("_ZN7android14Format_isValidERKNS_12NBAIO_FormatE() called");
    return 0;
}

/* Demangled: android::Format_from_SR_C(unsigned int, unsigned int, audio_format_t) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16Format_from_SR_CEjj14audio_format_t(void) {
    ALOGD("_ZN7android16Format_from_SR_CEjj14audio_format_t() called");
    return 0;
}

/* Exported Object: vtable for android::NBAIO_Port */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android10NBAIO_PortE = NULL;

/* Demangled: android::MonoPipeReader::MonoPipeReader(android::MonoPipe*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14MonoPipeReaderC2EPNS_8MonoPipeE(void) {
    ALOGD("_ZN7android14MonoPipeReaderC2EPNS_8MonoPipeE() called");
    return 0;
}

/* Exported Object: vtable for android::NBAIO_Sink */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android10NBAIO_SinkE = NULL;

/* Demangled: android::MonoPipe::~MonoPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8MonoPipeD0Ev(void) {
    ALOGD("_ZN7android8MonoPipeD0Ev() called");
    return 0;
}

/* Exported Object: vtable for android::MonoPipe */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8MonoPipeE = NULL;

/* Demangled: android::MonoPipeReader::onTimestamp(android::ExtendedTimestamp const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14MonoPipeReader11onTimestampERKNS_17ExtendedTimestampE(void) {
    ALOGD("_ZN7android14MonoPipeReader11onTimestampERKNS_17ExtendedTimestampE() called");
    return 0;
}

/* Demangled: android::MonoPipeReader::~MonoPipeReader() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14MonoPipeReaderD0Ev(void) {
    ALOGD("_ZN7android14MonoPipeReaderD0Ev() called");
    return 0;
}

/* Exported Object: vtable for android::MonoPipeReader */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android14MonoPipeReaderE = NULL;

/* Demangled: android::MonoPipe::getTimestamp(android::ExtendedTimestamp&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8MonoPipe12getTimestampERNS_17ExtendedTimestampE(void) {
    ALOGD("_ZN7android8MonoPipe12getTimestampERNS_17ExtendedTimestampE() called");
    return 0;
}

/* Demangled: android::MonoPipe::write(void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8MonoPipe5writeEPKvj(void) {
    ALOGD("_ZN7android8MonoPipe5writeEPKvj() called");
    return 0;
}

/* Demangled: android::MonoPipe::~MonoPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8MonoPipeD1Ev(void) {
    ALOGD("_ZN7android8MonoPipeD1Ev() called");
    return 0;
}

/* Demangled: android::MonoPipeReader::~MonoPipeReader() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14MonoPipeReaderD1Ev(void) {
    ALOGD("_ZN7android14MonoPipeReaderD1Ev() called");
    return 0;
}

/* Demangled: android::Format_channelCount(android::NBAIO_Format const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19Format_channelCountERKNS_12NBAIO_FormatE(void) {
    ALOGD("_ZN7android19Format_channelCountERKNS_12NBAIO_FormatE() called");
    return 0;
}

/* Demangled: android::Format_frameSize(android::NBAIO_Format const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16Format_frameSizeERKNS_12NBAIO_FormatE(void) {
    ALOGD("_ZN7android16Format_frameSizeERKNS_12NBAIO_FormatE() called");
    return 0;
}

/* Demangled: android::MonoPipe::availableToWrite() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8MonoPipe16availableToWriteEv(void) {
    ALOGD("_ZN7android8MonoPipe16availableToWriteEv() called");
    return 0;
}

/* Demangled: android::MonoPipe::~MonoPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8MonoPipeD2Ev(void) {
    ALOGD("_ZN7android8MonoPipeD2Ev() called");
    return 0;
}

/* Demangled: android::NBAIO_Source::readVia(int (*)(void*, void const*, unsigned int), unsigned int, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12NBAIO_Source7readViaEPFiPvPKvjEjS1_j(void) {
    ALOGD("_ZN7android12NBAIO_Source7readViaEPFiPvPKvjEjS1_j() called");
    return 0;
}

/* Demangled: android::MonoPipeReader::availableToRead() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14MonoPipeReader15availableToReadEv(void) {
    ALOGD("_ZN7android14MonoPipeReader15availableToReadEv() called");
    return 0;
}

/* Demangled: android::MonoPipeReader::~MonoPipeReader() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14MonoPipeReaderD2Ev(void) {
    ALOGD("_ZN7android14MonoPipeReaderD2Ev() called");
    return 0;
}

/* Demangled: android::Format_isEqual(android::NBAIO_Format const&, android::NBAIO_Format const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14Format_isEqualERKNS_12NBAIO_FormatES2_(void) {
    ALOGD("_ZN7android14Format_isEqualERKNS_12NBAIO_FormatES2_() called");
    return 0;
}

/* Demangled: android::NBAIO_Port::negotiate(android::NBAIO_Format const*, unsigned int, android::NBAIO_Format*, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10NBAIO_Port9negotiateEPKNS_12NBAIO_FormatEjPS1_Rj(void) {
    ALOGD("_ZN7android10NBAIO_Port9negotiateEPKNS_12NBAIO_FormatEjPS1_Rj() called");
    return 0;
}

/* Exported Object: android::Format_Invalid */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14Format_InvalidE = NULL;

/* Demangled: android::Format_sampleRate(android::NBAIO_Format const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17Format_sampleRateERKNS_12NBAIO_FormatE(void) {
    ALOGD("_ZN7android17Format_sampleRateERKNS_12NBAIO_FormatE() called");
    return 0;
}

/* Demangled: android::MonoPipe::setAvgFrames(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8MonoPipe12setAvgFramesEj(void) {
    ALOGD("_ZN7android8MonoPipe12setAvgFramesEj() called");
    return 0;
}

/* Demangled: android::MonoPipeReader::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14MonoPipeReader5flushEv(void) {
    ALOGD("_ZN7android14MonoPipeReader5flushEv() called");
    return 0;
}

/* Demangled: android::MonoPipe::shutdown(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8MonoPipe8shutdownEb(void) {
    ALOGD("_ZN7android8MonoPipe8shutdownEb() called");
    return 0;
}

/* Demangled: android::MonoPipe::MonoPipe(unsigned int, android::NBAIO_Format const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8MonoPipeC1EjRKNS_12NBAIO_FormatEb(void) {
    ALOGD("_ZN7android8MonoPipeC1EjRKNS_12NBAIO_FormatEb() called");
    return 0;
}

/* Demangled: android::MonoPipe::isShutdown() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8MonoPipe10isShutdownEv(void) {
    ALOGD("_ZN7android8MonoPipe10isShutdownEv() called");
    return 0;
}

/* Demangled: android::MonoPipe::MonoPipe(unsigned int, android::NBAIO_Format const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8MonoPipeC2EjRKNS_12NBAIO_FormatEb(void) {
    ALOGD("_ZN7android8MonoPipeC2EjRKNS_12NBAIO_FormatEb() called");
    return 0;
}

/* Exported Object: vtable for android::NBAIO_Source */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12NBAIO_SourceE = NULL;
