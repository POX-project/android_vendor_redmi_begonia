/*
 * Reverse-Engineered ABI Specification for: libspeechparser_vendor.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libspeechparser_vendor.so
 */

#ifndef BEGONIA_RE_LIBSPEECHPARSER_VENDOR_H
#define BEGONIA_RE_LIBSPEECHPARSER_VENDOR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: gAppHandle */
/* Demangled: gAppHandle */
extern void* gAppHandle;

/* Symbol: gNumSpeechNetwork */
/* Demangled: gNumSpeechNetwork */
extern void* gNumSpeechNetwork;

/* Symbol: gSpeechParserAttribute */
/* Demangled: gSpeechParserAttribute */
extern void* gSpeechParserAttribute;

/* Symbol: getSpeechProfile_SP */
/* Demangled: getSpeechProfile_SP */
int getSpeechProfile_SP(void);

/* Symbol: setMDParamDataHdr */
/* Demangled: setMDParamDataHdr */
int setMDParamDataHdr(void);

/* Symbol: spHandleInit */
/* Demangled: spHandleInit */
int spHandleInit(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZNSt3__16vectorIN7android7String8ENS_9allocatorIS2_EEE6assignIPKS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
/* Demangled: _ZNSt3__16vectorIN7android7String8ENS_9allocatorIS2_EEE6assignIPKS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
int _ZNSt3__16vectorIN7android7String8ENS_9allocatorIS2_EEE6assignIPKS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void);

/* Symbol: initSpeechNetwork */
/* Demangled: initSpeechNetwork */
int initSpeechNetwork(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: gNameForEachSpeechNetwork */
/* Demangled: gNameForEachSpeechNetwork */
extern void* gNameForEachSpeechNetwork;

/* Symbol: gSpHandleInstWriteLock */
/* Demangled: gSpHandleInstWriteLock */
int gSpHandleInstWriteLock(void);

/* Symbol: getFeatureOn */
/* Demangled: getFeatureOn */
int getFeatureOn(void);

/* Symbol: getNameForEachSpeechNetwork */
/* Demangled: getNameForEachSpeechNetwork */
int getNameForEachSpeechNetwork(void);

/* Symbol: init */
/* Demangled: init */
int init(void);

/* Symbol: initAppParser */
/* Demangled: initAppParser */
int initAppParser(void);

/* Symbol: sizeByteParaData */
/* Demangled: sizeByteParaData */
int sizeByteParaData(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: gListSpeechCategory */
/* Demangled: gListSpeechCategory */
extern void* gListSpeechCategory;

/* Symbol: gSphParamSupport */
/* Demangled: gSphParamSupport */
extern void* gSphParamSupport;

/* Symbol: setDBGinfoindex10toTestMode */
/* Demangled: setDBGinfoindex10toTestMode */
int setDBGinfoindex10toTestMode(void);

/* Symbol: setKeyValuePair */
/* Demangled: setKeyValuePair */
int setKeyValuePair(void);

/* Symbol: spHandleUninit */
/* Demangled: spHandleUninit */
int spHandleUninit(void);

/* Symbol: dumpSpeechData */
/* Demangled: dumpSpeechData */
int dumpSpeechData(void);

/* Symbol: _ZNSt3__16vectorIN7android7String8ENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<android::String8, std::__1::allocator<android::String8> >::__push_back_slow_path<android::String8>(android::String8&&) */
int _ZNSt3__16vectorIN7android7String8ENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: gSpHandleInstUnlock */
/* Demangled: gSpHandleInstUnlock */
int gSpHandleInstUnlock(void);

/* Symbol: gTestMode */
/* Demangled: gTestMode */
extern void* gTestMode;

/* Symbol: getIpcLpbkProfile */
/* Demangled: getIpcLpbkProfile */
int getIpcLpbkProfile(void);

/* Symbol: PROPERTY_KEY_SP_PARSER_LOG_ON */
/* Demangled: PROPERTY_KEY_SP_PARSER_LOG_ON */
extern void* PROPERTY_KEY_SP_PARSER_LOG_ON;

/* Symbol: gListSpeechNetwork */
/* Demangled: gListSpeechNetwork */
extern void* gListSpeechNetwork;

/* Symbol: gSpeechCategorySupport */
/* Demangled: gSpeechCategorySupport */
extern void* gSpeechCategorySupport;

/* Symbol: gSpeechParamVerFirst */
/* Demangled: gSpeechParamVerFirst */
extern void* gSpeechParamVerFirst;

/* Symbol: gSpeechParamVerLast */
/* Demangled: gSpeechParamVerLast */
extern void* gSpeechParamVerLast;

/* Symbol: gCustScene */
/* Demangled: gCustScene */
extern void* gCustScene;

/* Symbol: getParamFromAppParser */
/* Demangled: getParamFromAppParser */
int getParamFromAppParser(void);

/* Symbol: gMD_version */
/* Demangled: gMD_version */
extern void* gMD_version;

/* Symbol: getKeyValuePair */
/* Demangled: getKeyValuePair */
int getKeyValuePair(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: getParamBuffer */
/* Demangled: getParamBuffer */
int getParamBuffer(void);

/* Symbol: initSpeechCategory */
/* Demangled: initSpeechCategory */
int initSpeechCategory(void);

/* Symbol: spHandleGetInstance */
/* Demangled: spHandleGetInstance */
int spHandleGetInstance(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBSPEECHPARSER_VENDOR_H */
