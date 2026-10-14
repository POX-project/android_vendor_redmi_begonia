/*
 * Reverse-Engineered Source for: android.hardware.soundtrigger@2.3-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "android_hardware_soundtrigger_2_3_impl"

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
#include "android_hardware_soundtrigger_2_3_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::queryParameter(int, android::hardware::soundtrigger::V2_3::ModelParameter, std::__1::function<void (int, android::hardware::soundtrigger::V2_3::OptionalModelParameterRange const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw14queryParameterEiNS2_14ModelParameterENSt3__18functionIFviRKNS2_27OptionalModelParameterRangeEEEE(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw14queryParameterEiNS2_14ModelParameterENSt3__18functionIFviRKNS2_27OptionalModelParameterRangeEEEE() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertTriggerPhraseToHal(sound_trigger_phrase*, android::hardware::soundtrigger::V2_0::ISoundTriggerHw::Phrase const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw25convertTriggerPhraseToHalEP20sound_trigger_phrasePKNS1_4V2_015ISoundTriggerHw6PhraseE(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw25convertTriggerPhraseToHalEP20sound_trigger_phrasePKNS1_4V2_015ISoundTriggerHw6PhraseE() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::~SoundTriggerHw() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::soundtrigger::V2_3::ISoundTriggerHw-in-android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwE0_NS2_15ISoundTriggerHwE = NULL;

/* Exported Object: VTT for android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwE = NULL;

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::onFirstRef() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw10onFirstRefEv(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw10onFirstRefEv() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::doLoadSoundModel(android::hardware::soundtrigger::V2_0::ISoundTriggerHw::SoundModel const&, android::sp<android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16doLoadSoundModelERKNS1_4V2_015ISoundTriggerHw10SoundModelENS_2spINS4_16SoundModelClientEEE(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16doLoadSoundModelERKNS1_4V2_015ISoundTriggerHw10SoundModelENS_2spINS4_16SoundModelClientEEE() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertSoundModelToHal(android::hardware::soundtrigger::V2_0::ISoundTriggerHw::SoundModel const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw22convertSoundModelToHalEPKNS1_4V2_015ISoundTriggerHw10SoundModelE(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw22convertSoundModelToHalEPKNS1_4V2_015ISoundTriggerHw10SoundModelE() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::soundModelCallback_(sound_trigger_model_event*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation19soundModelCallback_EP25sound_trigger_model_eventPv(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation19soundModelCallback_EP25sound_trigger_model_eventPv() called");
    return 0;
}

/* Demangled: HIDL_FETCH_ISoundTriggerHw */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_ISoundTriggerHw(void) {
    ALOGD("HIDL_FETCH_ISoundTriggerHw() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::getProperties(std::__1::function<void (int, android::hardware::soundtrigger::V2_0::ISoundTriggerHw::Properties const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw13getPropertiesENSt3__18functionIFviRKNS1_4V2_015ISoundTriggerHw10PropertiesEEEE(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw13getPropertiesENSt3__18functionIFviRKNS1_4V2_015ISoundTriggerHw10PropertiesEEEE() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundTriggerHw() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwC1Ev(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwC1Ev() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::~SoundTriggerHw() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwD0Ev(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwE = NULL;

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundTriggerHw() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwC2Ev(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwC2Ev() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::~SoundTriggerHw() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwD1Ev(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::getProperties_2_3(std::__1::function<void (int, android::hardware::soundtrigger::V2_3::Properties const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw17getProperties_2_3ENSt3__18functionIFviRKNS2_10PropertiesEEEE(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw17getProperties_2_3ENSt3__18functionIFviRKNS2_10PropertiesEEEE() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::loadPhraseSoundModel_2_1(android::hardware::soundtrigger::V2_1::ISoundTriggerHw::PhraseSoundModel const&, android::sp<android::hardware::soundtrigger::V2_1::ISoundTriggerHwCallback> const&, int, std::__1::function<void (int, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw24loadPhraseSoundModel_2_1ERKNS1_4V2_115ISoundTriggerHw16PhraseSoundModelERKNS_2spINS5_23ISoundTriggerHwCallbackEEEiNSt3__18functionIFviiEEE(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw24loadPhraseSoundModel_2_1ERKNS1_4V2_115ISoundTriggerHw16PhraseSoundModelERKNS_2spINS5_23ISoundTriggerHwCallbackEEEiNSt3__18functionIFviiEEE() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertSoundModelEventFromHal(android::hardware::soundtrigger::V2_0::ISoundTriggerHwCallback::ModelEvent*, sound_trigger_model_event const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw29convertSoundModelEventFromHalEPNS1_4V2_023ISoundTriggerHwCallback10ModelEventEPK25sound_trigger_model_event(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw29convertSoundModelEventFromHalEPNS1_4V2_023ISoundTriggerHwCallback10ModelEventEPK25sound_trigger_model_event() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertPhraseRecognitionExtraToHal(sound_trigger_phrase_recognition_extra*, android::hardware::soundtrigger::V2_0::PhraseRecognitionExtra const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw34convertPhraseRecognitionExtraToHalEP38sound_trigger_phrase_recognition_extraPKNS1_4V2_022PhraseRecognitionExtraE(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw34convertPhraseRecognitionExtraToHalEP38sound_trigger_phrase_recognition_extraPKNS1_4V2_022PhraseRecognitionExtraE() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::~SoundTriggerHw() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwD2Ev(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::loadSoundModel(android::hardware::soundtrigger::V2_0::ISoundTriggerHw::SoundModel const&, android::sp<android::hardware::soundtrigger::V2_0::ISoundTriggerHwCallback> const&, int, std::__1::function<void (int, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw14loadSoundModelERKNS1_4V2_015ISoundTriggerHw10SoundModelERKNS_2spINS5_23ISoundTriggerHwCallbackEEEiNSt3__18functionIFviiEEE(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw14loadSoundModelERKNS1_4V2_015ISoundTriggerHw10SoundModelERKNS_2spINS5_23ISoundTriggerHwCallbackEEEiNSt3__18functionIFviiEEE() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::unloadSoundModel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16unloadSoundModelEi(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16unloadSoundModelEi() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertPhaseRecognitionEventFromHal(android::hardware::soundtrigger::V2_0::ISoundTriggerHwCallback::PhraseRecognitionEvent*, sound_trigger_phrase_recognition_event const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw35convertPhaseRecognitionEventFromHalEPNS1_4V2_023ISoundTriggerHwCallback22PhraseRecognitionEventEPK38sound_trigger_phrase_recognition_event(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw35convertPhaseRecognitionEventFromHalEPNS1_4V2_023ISoundTriggerHwCallback22PhraseRecognitionEventEPK38sound_trigger_phrase_recognition_event() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertRecognitionEventFromHal(android::hardware::soundtrigger::V2_0::ISoundTriggerHwCallback::RecognitionEvent*, sound_trigger_recognition_event const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw30convertRecognitionEventFromHalEPNS1_4V2_023ISoundTriggerHwCallback16RecognitionEventEPK31sound_trigger_recognition_event(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw30convertRecognitionEventFromHalEPNS1_4V2_023ISoundTriggerHwCallback16RecognitionEventEPK31sound_trigger_recognition_event() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::getModelState(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw13getModelStateEi(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw13getModelStateEi() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient_2_0::soundModelCallback(sound_trigger_model_event*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20SoundModelClient_2_018soundModelCallbackEP25sound_trigger_model_event(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20SoundModelClient_2_018soundModelCallbackEP25sound_trigger_model_event() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertPhraseRecognitionExtraFromHal(android::hardware::soundtrigger::V2_0::PhraseRecognitionExtra*, sound_trigger_phrase_recognition_extra const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw36convertPhraseRecognitionExtraFromHalEPNS1_4V2_022PhraseRecognitionExtraEPK38sound_trigger_phrase_recognition_extra(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw36convertPhraseRecognitionExtraFromHalEPNS1_4V2_022PhraseRecognitionExtraEPK38sound_trigger_phrase_recognition_extra() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::setParameter(int, android::hardware::soundtrigger::V2_3::ModelParameter, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw12setParameterEiNS2_14ModelParameterEi(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw12setParameterEiNS2_14ModelParameterEi() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertUuidToHal(audio_uuid_s*, android::hardware::audio::common::V2_0::Uuid const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16convertUuidToHalEP12audio_uuid_sPKNS0_5audio6common4V2_04UuidE(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16convertUuidToHalEP12audio_uuid_sPKNS0_5audio6common4V2_04UuidE() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient_2_1::soundModelCallback(sound_trigger_model_event*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20SoundModelClient_2_118soundModelCallbackEP25sound_trigger_model_event(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20SoundModelClient_2_118soundModelCallbackEP25sound_trigger_model_event() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::startRecognition_2_3(int, android::hardware::soundtrigger::V2_3::RecognitionConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20startRecognition_2_3EiRKNS2_17RecognitionConfigE(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20startRecognition_2_3EiRKNS2_17RecognitionConfigE() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertPropertiesFromHal(android::hardware::soundtrigger::V2_0::ISoundTriggerHw::Properties*, sound_trigger_properties const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw24convertPropertiesFromHalEPNS1_4V2_015ISoundTriggerHw10PropertiesEPK24sound_trigger_properties(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw24convertPropertiesFromHalEPNS1_4V2_015ISoundTriggerHw10PropertiesEPK24sound_trigger_properties() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertPropertiesFromHal(android::hardware::soundtrigger::V2_3::Properties*, sound_trigger_properties_header const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw24convertPropertiesFromHalEPNS2_10PropertiesEPK31sound_trigger_properties_header(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw24convertPropertiesFromHalEPNS2_10PropertiesEPK31sound_trigger_properties_header() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertModelParameterToHal(android::hardware::soundtrigger::V2_3::ModelParameter) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw26convertModelParameterToHalENS2_14ModelParameterE(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw26convertModelParameterToHalENS2_14ModelParameterE() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertRecognitionConfigToHal(android::hardware::soundtrigger::V2_0::ISoundTriggerHw::RecognitionConfig const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw29convertRecognitionConfigToHalEPKNS1_4V2_015ISoundTriggerHw17RecognitionConfigE(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw29convertRecognitionConfigToHalEPKNS1_4V2_015ISoundTriggerHw17RecognitionConfigE() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::nextUniqueModelId() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw17nextUniqueModelIdEv(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw17nextUniqueModelIdEv() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertRecognitionConfigToHalHeader(android::hardware::soundtrigger::V2_3::RecognitionConfig const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw35convertRecognitionConfigToHalHeaderEPKNS2_17RecognitionConfigE(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw35convertRecognitionConfigToHalHeaderEPKNS2_17RecognitionConfigE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::soundtrigger::V2_0::ISoundTriggerHw-in-android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwE0_NS1_4V2_015ISoundTriggerHwE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEEE = NULL;

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertUuidFromHal(android::hardware::audio::common::V2_0::Uuid*, audio_uuid_s const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw18convertUuidFromHalEPNS0_5audio6common4V2_04UuidEPK12audio_uuid_s(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw18convertUuidFromHalEPNS0_5audio6common4V2_04UuidEPK12audio_uuid_s() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::loadSoundModel_2_1(android::hardware::soundtrigger::V2_1::ISoundTriggerHw::SoundModel const&, android::sp<android::hardware::soundtrigger::V2_1::ISoundTriggerHwCallback> const&, int, std::__1::function<void (int, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw18loadSoundModel_2_1ERKNS1_4V2_115ISoundTriggerHw10SoundModelERKNS_2spINS5_23ISoundTriggerHwCallbackEEEiNSt3__18functionIFviiEEE(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw18loadSoundModel_2_1ERKNS1_4V2_115ISoundTriggerHw10SoundModelERKNS_2spINS5_23ISoundTriggerHwCallbackEEEiNSt3__18functionIFviiEEE() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::stopAllRecognitions() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw19stopAllRecognitionsEv(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw19stopAllRecognitionsEv() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::startRecognition_2_1(int, android::hardware::soundtrigger::V2_1::ISoundTriggerHw::RecognitionConfig const&, android::sp<android::hardware::soundtrigger::V2_1::ISoundTriggerHwCallback> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20startRecognition_2_1EiRKNS1_4V2_115ISoundTriggerHw17RecognitionConfigERKNS_2spINS5_23ISoundTriggerHwCallbackEEEi(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20startRecognition_2_1EiRKNS1_4V2_115ISoundTriggerHw17RecognitionConfigERKNS_2spINS5_23ISoundTriggerHwCallbackEEEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::soundtrigger::V2_1::ISoundTriggerHw-in-android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwE0_NS1_4V2_115ISoundTriggerHwE = NULL;

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient_2_0::recognitionCallback(sound_trigger_recognition_event*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20SoundModelClient_2_019recognitionCallbackEP31sound_trigger_recognition_event(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20SoundModelClient_2_019recognitionCallbackEP31sound_trigger_recognition_event() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE10do_compareEPKvSD_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE10do_compareEPKvSD_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::soundtrigger::V2_2::ISoundTriggerHw-in-android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwE0_NS1_4V2_215ISoundTriggerHwE = NULL;

/* Demangled: virtual thunk to android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::onFirstRef() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw10onFirstRefEv(void) {
    ALOGD("_ZTv0_n32_N7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw10onFirstRefEv() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient_2_1::recognitionCallback(sound_trigger_recognition_event*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20SoundModelClient_2_119recognitionCallbackEP31sound_trigger_recognition_event(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20SoundModelClient_2_119recognitionCallbackEP31sound_trigger_recognition_event() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::recognitionCallback_(sound_trigger_recognition_event*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation20recognitionCallback_EP31sound_trigger_recognition_eventPv(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation20recognitionCallback_EP31sound_trigger_recognition_eventPv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient_2_0 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20SoundModelClient_2_0E = NULL;

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::getParameter(int, android::hardware::soundtrigger::V2_3::ModelParameter, std::__1::function<void (int, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw12getParameterEiNS2_14ModelParameterENSt3__18functionIFviiEEE(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw12getParameterEiNS2_14ModelParameterENSt3__18functionIFviiEEE() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::stopRecognition(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw15stopRecognitionEi(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw15stopRecognitionEi() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::startRecognition(int, android::hardware::soundtrigger::V2_0::ISoundTriggerHw::RecognitionConfig const&, android::sp<android::hardware::soundtrigger::V2_0::ISoundTriggerHwCallback> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16startRecognitionEiRKNS1_4V2_015ISoundTriggerHw17RecognitionConfigERKNS_2spINS5_23ISoundTriggerHwCallbackEEEi(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16startRecognitionEiRKNS1_4V2_015ISoundTriggerHw17RecognitionConfigERKNS_2spINS5_23ISoundTriggerHwCallbackEEEi() called");
    return 0;
}

/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::loadPhraseSoundModel(android::hardware::soundtrigger::V2_0::ISoundTriggerHw::PhraseSoundModel const&, android::sp<android::hardware::soundtrigger::V2_0::ISoundTriggerHwCallback> const&, int, std::__1::function<void (int, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20loadPhraseSoundModelERKNS1_4V2_015ISoundTriggerHw16PhraseSoundModelERKNS_2spINS5_23ISoundTriggerHwCallbackEEEiNSt3__18functionIFviiEEE(void) {
    ALOGD("_ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20loadPhraseSoundModelERKNS1_4V2_015ISoundTriggerHw16PhraseSoundModelERKNS_2spINS5_23ISoundTriggerHwCallbackEEEiNSt3__18functionIFviiEEE() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient_2_1 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20SoundModelClient_2_1E = NULL;

/* Demangled: virtual thunk to android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::~SoundTriggerHw() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwD0Ev() called");
    return 0;
}
