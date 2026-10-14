/*
 * Reverse-Engineered Source for: libem_audio_jni.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libem_audio_jni"

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
#include "libem_audio_jni.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_cancleCopyAudioHalDumpFile */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_audio_AudioTuningJni_cancleCopyAudioHalDumpFile(void) {
    ALOGD("Java_com_mediatek_engineermode_audio_AudioTuningJni_cancleCopyAudioHalDumpFile() called");
    return 0;
}

/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_getCategory */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_audio_AudioTuningJni_getCategory(void) {
    ALOGD("Java_com_mediatek_engineermode_audio_AudioTuningJni_getCategory() called");
    return 0;
}

/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_getChecklist */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_audio_AudioTuningJni_getChecklist(void) {
    ALOGD("Java_com_mediatek_engineermode_audio_AudioTuningJni_getChecklist() called");
    return 0;
}

/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_registerXmlChangedCallback */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_audio_AudioTuningJni_registerXmlChangedCallback(void) {
    ALOGD("Java_com_mediatek_engineermode_audio_AudioTuningJni_registerXmlChangedCallback() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<int, android::String8>, std::__1::__tree_node<std::__1::__value_type<int, android::String8>, void*>*, long> std::__1::__tree<std::__1::__value_type<int, android::String8>, std::__1::__map_value_compare<int, std::__1::__value_type<int, android::String8>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, android::String8> > >::__emplace_hint_unique_key_args<int, std::__1::pair<int const, android::String8> const&>(std::__1::__tree_const_iterator<std::__1::__value_type<int, android::String8>, std::__1::__tree_node<std::__1::__value_type<int, android::String8>, void*>*, long>, int const&, std::__1::pair<int const, android::String8> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN7android7String8EEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE30__emplace_hint_unique_key_argsIiJRKNS_4pairIKiS3_EEEEENS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEElEENS_21__tree_const_iteratorIS4_SM_lEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN7android7String8EEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE30__emplace_hint_unique_key_argsIiJRKNS_4pairIKiS3_EEEEENS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEElEENS_21__tree_const_iteratorIS4_SM_lEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<int, android::String8>, std::__1::__map_value_compare<int, std::__1::__value_type<int, android::String8>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, android::String8> > >::__find_equal<int>(std::__1::__tree_const_iterator<std::__1::__value_type<int, android::String8>, std::__1::__tree_node<std::__1::__value_type<int, android::String8>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN7android7String8EEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_SE_EElEERPNS_15__tree_end_nodeISG_EESH_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN7android7String8EEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_SE_EElEERPNS_15__tree_end_nodeISG_EESH_RKT_() called");
    return 0;
}

/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_copyAudioHalDumpFilesToSdcard */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_audio_AudioTuningJni_copyAudioHalDumpFilesToSdcard(void) {
    ALOGD("Java_com_mediatek_engineermode_audio_AudioTuningJni_copyAudioHalDumpFilesToSdcard() called");
    return 0;
}

/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_setAudioCommand */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_audio_AudioTuningJni_setAudioCommand(void) {
    ALOGD("Java_com_mediatek_engineermode_audio_AudioTuningJni_setAudioCommand() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, android::String8>, std::__1::__tree_node<std::__1::__value_type<int, android::String8>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<int, android::String8>, std::__1::__map_value_compare<int, std::__1::__value_type<int, android::String8>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, android::String8> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN7android7String8EEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN7android7String8EEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, android::String8>, std::__1::__map_value_compare<int, std::__1::__value_type<int, android::String8>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, android::String8> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, android::String8>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN7android7String8EEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN7android7String8EEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_getAudioData */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_audio_AudioTuningJni_getAudioData(void) {
    ALOGD("Java_com_mediatek_engineermode_audio_AudioTuningJni_getAudioData() called");
    return 0;
}

/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_getParams */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_audio_AudioTuningJni_getParams(void) {
    ALOGD("Java_com_mediatek_engineermode_audio_AudioTuningJni_getParams() called");
    return 0;
}

/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_isFeatureSupported */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_audio_AudioTuningJni_isFeatureSupported(void) {
    ALOGD("Java_com_mediatek_engineermode_audio_AudioTuningJni_isFeatureSupported() called");
    return 0;
}

/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_setAudioData */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_audio_AudioTuningJni_setAudioData(void) {
    ALOGD("Java_com_mediatek_engineermode_audio_AudioTuningJni_setAudioData() called");
    return 0;
}

/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_setParams */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_audio_AudioTuningJni_setParams(void) {
    ALOGD("Java_com_mediatek_engineermode_audio_AudioTuningJni_setParams() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: g_VM */
extern "C" __attribute__((visibility("default"))) void* g_VM = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* obj___bss_start __asm__("__bss_start") = NULL;

/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_CustXmlEnableChanged */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_audio_AudioTuningJni_CustXmlEnableChanged(void) {
    ALOGD("Java_com_mediatek_engineermode_audio_AudioTuningJni_CustXmlEnableChanged() called");
    return 0;
}

/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_delAudioHalDumpFiles */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_audio_AudioTuningJni_delAudioHalDumpFiles(void) {
    ALOGD("Java_com_mediatek_engineermode_audio_AudioTuningJni_delAudioHalDumpFiles() called");
    return 0;
}

/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_getAudioCommand */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_audio_AudioTuningJni_getAudioCommand(void) {
    ALOGD("Java_com_mediatek_engineermode_audio_AudioTuningJni_getAudioCommand() called");
    return 0;
}

/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_getEmParameter */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_audio_AudioTuningJni_getEmParameter(void) {
    ALOGD("Java_com_mediatek_engineermode_audio_AudioTuningJni_getEmParameter() called");
    return 0;
}

/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_saveToWork */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_audio_AudioTuningJni_saveToWork(void) {
    ALOGD("Java_com_mediatek_engineermode_audio_AudioTuningJni_saveToWork() called");
    return 0;
}

/* Demangled: Java_com_mediatek_engineermode_audio_AudioTuningJni_setEmParameter */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_audio_AudioTuningJni_setEmParameter(void) {
    ALOGD("Java_com_mediatek_engineermode_audio_AudioTuningJni_setEmParameter() called");
    return 0;
}
