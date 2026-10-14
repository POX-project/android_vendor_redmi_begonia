/*
 * Reverse-Engineered ABI Specification for: libaudiocompensationfilter_vendor.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libaudiocompensationfilter_vendor.so
 */

#ifndef BEGONIA_RE_LIBAUDIOCOMPENSATIONFILTER_VENDOR_H
#define BEGONIA_RE_LIBAUDIOCOMPENSATIONFILTER_VENDOR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android16kFltCategoryNameE */
/* Demangled: android::kFltCategoryName */
extern void* _ZN7android16kFltCategoryNameE;

/* Symbol: _ZN7android24audioComFltCustParamInitEv */
/* Demangled: android::audioComFltCustParamInit() */
int _ZN7android24audioComFltCustParamInitEv(void);

/* Symbol: _ZN7android27getDefaultAudioCompFltParamENS_18AudioCompFltType_tEP30_AUDIO_ACF_CUSTOM_PARAM_STRUCT */
/* Demangled: android::getDefaultAudioCompFltParam(android::AudioCompFltType_t, _AUDIO_ACF_CUSTOM_PARAM_STRUCT*) */
int _ZN7android27getDefaultAudioCompFltParamENS_18AudioCompFltType_tEP30_AUDIO_ACF_CUSTOM_PARAM_STRUCT(void);

/* Symbol: _ZN7android28audioHierarchicalParamStringE */
/* Demangled: android::audioHierarchicalParamString */
extern void* _ZN7android28audioHierarchicalParamStringE;

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: setAudioCompFltCustParamToStorage */
/* Demangled: setAudioCompFltCustParamToStorage */
int setAudioCompFltCustParamToStorage(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN7android38getPlaybackPostProcessParameterFromXMLENS_18AudioCompFltType_tEP30_AUDIO_ACF_CUSTOM_PARAM_STRUCTPKc */
/* Demangled: android::getPlaybackPostProcessParameterFromXML(android::AudioCompFltType_t, _AUDIO_ACF_CUSTOM_PARAM_STRUCT*, char const*) */
int _ZN7android38getPlaybackPostProcessParameterFromXMLENS_18AudioCompFltType_tEP30_AUDIO_ACF_CUSTOM_PARAM_STRUCTPKc(void);

/* Symbol: getAudioCompFltCustParamFromStorage */
/* Demangled: getAudioCompFltCustParamFromStorage */
int getAudioCompFltCustParamFromStorage(void);

/* Symbol: _ZN7android21kFltAudioTypeFileNameE */
/* Demangled: android::kFltAudioTypeFileName */
extern void* _ZN7android21kFltAudioTypeFileNameE;

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBAUDIOCOMPENSATIONFILTER_VENDOR_H */
