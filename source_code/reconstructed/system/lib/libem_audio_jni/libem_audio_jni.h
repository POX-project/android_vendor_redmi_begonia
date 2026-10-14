/*
 * Reverse-Engineered ABI Specification for: libem_audio_jni.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libem_audio_jni.so
 */

#ifndef BEGONIA_RE_LIBEM_AUDIO_JNI_H
#define BEGONIA_RE_LIBEM_AUDIO_JNI_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: Java_com_mediatek_engineermode_audio_AudioTuningJni_getChecklist */
/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_getChecklist */
int Java_com_mediatek_engineermode_audio_AudioTuningJni_getChecklist(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN7android7String8EEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISG_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<int, android::String8>, std::__1::__map_value_compare<int, std::__1::__value_type<int, android::String8>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, android::String8> > >::__find_equal<int>(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, int const&) */
int _ZNSt3__16__treeINS_12__value_typeIiN7android7String8EEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISG_EERKT_(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int fn___aeabi_memclr8(void) __asm__("__aeabi_memclr8");

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int fn___aeabi_memcpy(void) __asm__("__aeabi_memcpy");

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN7android7String8EEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_SE_EEiEERPNS_15__tree_end_nodeISG_EESH_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<int, android::String8>, std::__1::__map_value_compare<int, std::__1::__value_type<int, android::String8>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, android::String8> > >::__find_equal<int>(std::__1::__tree_const_iterator<std::__1::__value_type<int, android::String8>, std::__1::__tree_node<std::__1::__value_type<int, android::String8>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, int const&) */
int _ZNSt3__16__treeINS_12__value_typeIiN7android7String8EEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_SE_EEiEERPNS_15__tree_end_nodeISG_EESH_RKT_(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int fn___aeabi_memset(void) __asm__("__aeabi_memset");

/* Symbol: Java_com_mediatek_engineermode_audio_AudioTuningJni_getAudioCommand */
/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_getAudioCommand */
int Java_com_mediatek_engineermode_audio_AudioTuningJni_getAudioCommand(void);

/* Symbol: Java_com_mediatek_engineermode_audio_AudioTuningJni_getEmParameter */
/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_getEmParameter */
int Java_com_mediatek_engineermode_audio_AudioTuningJni_getEmParameter(void);

/* Symbol: Java_com_mediatek_engineermode_audio_AudioTuningJni_saveToWork */
/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_saveToWork */
int Java_com_mediatek_engineermode_audio_AudioTuningJni_saveToWork(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN7android7String8EEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE30__emplace_hint_unique_key_argsIiJRKNS_4pairIKiS3_EEEEENS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEENS_21__tree_const_iteratorIS4_SM_iEERKT_DpOT0_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<int, android::String8>, std::__1::__tree_node<std::__1::__value_type<int, android::String8>, void*>*, int> std::__1::__tree<std::__1::__value_type<int, android::String8>, std::__1::__map_value_compare<int, std::__1::__value_type<int, android::String8>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, android::String8> > >::__emplace_hint_unique_key_args<int, std::__1::pair<int const, android::String8> const&>(std::__1::__tree_const_iterator<std::__1::__value_type<int, android::String8>, std::__1::__tree_node<std::__1::__value_type<int, android::String8>, void*>*, int>, int const&, std::__1::pair<int const, android::String8> const&) */
int _ZNSt3__16__treeINS_12__value_typeIiN7android7String8EEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE30__emplace_hint_unique_key_argsIiJRKNS_4pairIKiS3_EEEEENS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEENS_21__tree_const_iteratorIS4_SM_iEERKT_DpOT0_(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int fn___aeabi_memcpy4(void) __asm__("__aeabi_memcpy4");

/* Symbol: Java_com_mediatek_engineermode_audio_AudioTuningJni_cancleCopyAudioHalDumpFile */
/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_cancleCopyAudioHalDumpFile */
int Java_com_mediatek_engineermode_audio_AudioTuningJni_cancleCopyAudioHalDumpFile(void);

/* Symbol: Java_com_mediatek_engineermode_audio_AudioTuningJni_copyAudioHalDumpFilesToSdcard */
/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_copyAudioHalDumpFilesToSdcard */
int Java_com_mediatek_engineermode_audio_AudioTuningJni_copyAudioHalDumpFilesToSdcard(void);

/* Symbol: Java_com_mediatek_engineermode_audio_AudioTuningJni_setAudioCommand */
/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_setAudioCommand */
int Java_com_mediatek_engineermode_audio_AudioTuningJni_setAudioCommand(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN7android7String8EEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, android::String8>, std::__1::__map_value_compare<int, std::__1::__value_type<int, android::String8>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, android::String8> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, android::String8>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiN7android7String8EEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int fn___aeabi_memset8(void) __asm__("__aeabi_memset8");

/* Symbol: Java_com_mediatek_engineermode_audio_AudioTuningJni_getParams */
/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_getParams */
int Java_com_mediatek_engineermode_audio_AudioTuningJni_getParams(void);

/* Symbol: g_VM */
/* Demangled: g_VM */
extern void* g_VM;

/* Symbol: Java_com_mediatek_engineermode_audio_AudioTuningJni_delAudioHalDumpFiles */
/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_delAudioHalDumpFiles */
int Java_com_mediatek_engineermode_audio_AudioTuningJni_delAudioHalDumpFiles(void);

/* Symbol: Java_com_mediatek_engineermode_audio_AudioTuningJni_setEmParameter */
/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_setEmParameter */
int Java_com_mediatek_engineermode_audio_AudioTuningJni_setEmParameter(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int fn___aeabi_memclr(void) __asm__("__aeabi_memclr");

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int fn___aeabi_memclr4(void) __asm__("__aeabi_memclr4");

/* Symbol: Java_com_mediatek_engineermode_audio_AudioTuningJni_getCategory */
/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_getCategory */
int Java_com_mediatek_engineermode_audio_AudioTuningJni_getCategory(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN7android7String8EEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, android::String8>, std::__1::__map_value_compare<int, std::__1::__value_type<int, android::String8>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, android::String8> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiN7android7String8EEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN7android7String8EEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, android::String8>, std::__1::__tree_node<std::__1::__value_type<int, android::String8>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, android::String8>, std::__1::__map_value_compare<int, std::__1::__value_type<int, android::String8>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, android::String8> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIiN7android7String8EEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int fn___aeabi_memcpy8(void) __asm__("__aeabi_memcpy8");

/* Symbol: Java_com_mediatek_engineermode_audio_AudioTuningJni_getAudioData */
/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_getAudioData */
int Java_com_mediatek_engineermode_audio_AudioTuningJni_getAudioData(void);

/* Symbol: Java_com_mediatek_engineermode_audio_AudioTuningJni_isFeatureSupported */
/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_isFeatureSupported */
int Java_com_mediatek_engineermode_audio_AudioTuningJni_isFeatureSupported(void);

/* Symbol: Java_com_mediatek_engineermode_audio_AudioTuningJni_registerXmlChangedCallback */
/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_registerXmlChangedCallback */
int Java_com_mediatek_engineermode_audio_AudioTuningJni_registerXmlChangedCallback(void);

/* Symbol: Java_com_mediatek_engineermode_audio_AudioTuningJni_setAudioData */
/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_setAudioData */
int Java_com_mediatek_engineermode_audio_AudioTuningJni_setAudioData(void);

/* Symbol: Java_com_mediatek_engineermode_audio_AudioTuningJni_setParams */
/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_setParams */
int Java_com_mediatek_engineermode_audio_AudioTuningJni_setParams(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* obj___bss_start __asm__("__bss_start");

/* Symbol: Java_com_mediatek_engineermode_audio_AudioTuningJni_CustXmlEnableChanged */
/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_CustXmlEnableChanged */
int Java_com_mediatek_engineermode_audio_AudioTuningJni_CustXmlEnableChanged(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int fn___aeabi_memset4(void) __asm__("__aeabi_memset4");

__END_DECLS

#endif /* BEGONIA_RE_LIBEM_AUDIO_JNI_H */
