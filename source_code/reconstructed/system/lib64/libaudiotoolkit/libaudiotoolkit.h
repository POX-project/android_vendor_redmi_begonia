/*
 * Reverse-Engineered ABI Specification for: libaudiotoolkit.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libaudiotoolkit.so
 */

#ifndef BEGONIA_RE_LIBAUDIOTOOLKIT_H
#define BEGONIA_RE_LIBAUDIOTOOLKIT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android13Base64_DecodeEPKcPhm */
/* Demangled: android::Base64_Decode(char const*, unsigned char*, unsigned long) */
int _ZN7android13Base64_DecodeEPKcPhm(void);

/* Symbol: _ZN7android13Base64_EncodeEPKhPcm */
/* Demangled: android::Base64_Encode(unsigned char const*, char*, unsigned long) */
int _ZN7android13Base64_EncodeEPKhPcm(void);

/* Symbol: _ZN7android17Base64_OutputSizeEbm */
/* Demangled: android::Base64_OutputSize(bool, unsigned long) */
int _ZN7android17Base64_OutputSizeEbm(void);

/* Symbol: _ZN7android20build_decoding_tableEv */
/* Demangled: android::build_decoding_table() */
int _ZN7android20build_decoding_tableEv(void);

/* Symbol: _ZN7android12base64DecodeENS_7String8EPm */
/* Demangled: android::base64Decode(android::String8, unsigned long*) */
int _ZN7android12base64DecodeENS_7String8EPm(void);

/* Symbol: _ZN7android12base64EncodeEPKhm */
/* Demangled: android::base64Encode(unsigned char const*, unsigned long) */
int _ZN7android12base64EncodeEPKhm(void);

/* Symbol: _ZN7android14base64_cleanupEPc */
/* Demangled: android::base64_cleanup(char*) */
int _ZN7android14base64_cleanupEPc(void);

/* Symbol: _ZN7android19delAudioHalDumpFileEPKc */
/* Demangled: android::delAudioHalDumpFile(char const*) */
int _ZN7android19delAudioHalDumpFileEPKc(void);

/* Symbol: _ZN7android23getAudioHalDumpFileListEv */
/* Demangled: android::getAudioHalDumpFileList() */
int _ZN7android23getAudioHalDumpFileListEv(void);

/* Symbol: _ZN7android27AudioToolKit_GetDecodedDataENS_7String8EmPv */
/* Demangled: android::AudioToolKit_GetDecodedData(android::String8, unsigned long, void*) */
int _ZN7android27AudioToolKit_GetDecodedDataENS_7String8EmPv(void);

/* Symbol: _ZN7android27readAudioHalDumpFileContentEPcPPhmm */
/* Demangled: android::readAudioHalDumpFileContent(char*, unsigned char**, unsigned long, unsigned long) */
int _ZN7android27readAudioHalDumpFileContentEPcPPhmm(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBAUDIOTOOLKIT_H */
