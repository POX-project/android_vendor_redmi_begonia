/*
 * Reverse-Engineered ABI Specification for: libaudiotoolkit_vendor.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libaudiotoolkit_vendor.so
 */

#ifndef BEGONIA_RE_LIBAUDIOTOOLKIT_VENDOR_H
#define BEGONIA_RE_LIBAUDIOTOOLKIT_VENDOR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android12base64DecodeENS_7String8EPj */
/* Demangled: android::base64Decode(android::String8, unsigned int*) */
int _ZN7android12base64DecodeENS_7String8EPj(void);

/* Symbol: _ZN7android12base64EncodeEPKhj */
/* Demangled: android::base64Encode(unsigned char const*, unsigned int) */
int _ZN7android12base64EncodeEPKhj(void);

/* Symbol: _ZN7android20build_decoding_tableEv */
/* Demangled: android::build_decoding_table() */
int _ZN7android20build_decoding_tableEv(void);

/* Symbol: _ZN7android27AudioToolKit_GetDecodedDataENS_7String8EjPv */
/* Demangled: android::AudioToolKit_GetDecodedData(android::String8, unsigned int, void*) */
int _ZN7android27AudioToolKit_GetDecodedDataENS_7String8EjPv(void);

/* Symbol: _ZN7android13Base64_DecodeEPKcPhj */
/* Demangled: android::Base64_Decode(char const*, unsigned char*, unsigned int) */
int _ZN7android13Base64_DecodeEPKcPhj(void);

/* Symbol: _ZN7android13Base64_EncodeEPKhPcj */
/* Demangled: android::Base64_Encode(unsigned char const*, char*, unsigned int) */
int _ZN7android13Base64_EncodeEPKhPcj(void);

/* Symbol: _ZN7android14base64_cleanupEPc */
/* Demangled: android::base64_cleanup(char*) */
int _ZN7android14base64_cleanupEPc(void);

/* Symbol: _ZN7android17Base64_OutputSizeEbj */
/* Demangled: android::Base64_OutputSize(bool, unsigned int) */
int _ZN7android17Base64_OutputSizeEbj(void);

/* Symbol: _ZN7android19delAudioHalDumpFileEPKc */
/* Demangled: android::delAudioHalDumpFile(char const*) */
int _ZN7android19delAudioHalDumpFileEPKc(void);

/* Symbol: _ZN7android23getAudioHalDumpFileListEv */
/* Demangled: android::getAudioHalDumpFileList() */
int _ZN7android23getAudioHalDumpFileListEv(void);

/* Symbol: _ZN7android27readAudioHalDumpFileContentEPcPPhjj */
/* Demangled: android::readAudioHalDumpFileContent(char*, unsigned char**, unsigned int, unsigned int) */
int _ZN7android27readAudioHalDumpFileContentEPcPPhjj(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBAUDIOTOOLKIT_VENDOR_H */
