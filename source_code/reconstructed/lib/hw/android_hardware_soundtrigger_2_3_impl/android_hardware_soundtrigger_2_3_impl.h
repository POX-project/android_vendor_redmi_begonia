/*
 * Reverse-Engineered ABI Specification for: android.hardware.soundtrigger@2.3-impl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: android.hardware.soundtrigger@2.3-impl.so
 */

#ifndef BEGONIA_RE_ANDROID_HARDWARE_SOUNDTRIGGER_2_3_IMPL_H
#define BEGONIA_RE_ANDROID_HARDWARE_SOUNDTRIGGER_2_3_IMPL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw14queryParameterEiNS2_14ModelParameterENSt3__18functionIFviRKNS2_27OptionalModelParameterRangeEEEE */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::queryParameter(int, android::hardware::soundtrigger::V2_3::ModelParameter, std::__1::function<void (int, android::hardware::soundtrigger::V2_3::OptionalModelParameterRange const&)>) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw14queryParameterEiNS2_14ModelParameterENSt3__18functionIFviRKNS2_27OptionalModelParameterRangeEEEE(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw25convertTriggerPhraseToHalEP20sound_trigger_phrasePKNS1_4V2_015ISoundTriggerHw6PhraseE */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertTriggerPhraseToHal(sound_trigger_phrase*, android::hardware::soundtrigger::V2_0::ISoundTriggerHw::Phrase const*) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw25convertTriggerPhraseToHalEP20sound_trigger_phrasePKNS1_4V2_015ISoundTriggerHw6PhraseE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient> > >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient> > >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZTCN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwE0_NS2_15ISoundTriggerHwE */
/* Demangled: construction vtable for android::hardware::soundtrigger::V2_3::ISoundTriggerHw-in-android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw */
extern void* _ZTCN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwE0_NS2_15ISoundTriggerHwE;

/* Symbol: _ZTTN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwE */
/* Demangled: VTT for android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw */
extern void* _ZTTN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwE;

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw10onFirstRefEv */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::onFirstRef() */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw10onFirstRefEv(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16doLoadSoundModelERKNS1_4V2_015ISoundTriggerHw10SoundModelENS_2spINS4_16SoundModelClientEEE */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::doLoadSoundModel(android::hardware::soundtrigger::V2_0::ISoundTriggerHw::SoundModel const&, android::sp<android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient>) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16doLoadSoundModelERKNS1_4V2_015ISoundTriggerHw10SoundModelENS_2spINS4_16SoundModelClientEEE(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw22convertSoundModelToHalEPKNS1_4V2_015ISoundTriggerHw10SoundModelE */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertSoundModelToHal(android::hardware::soundtrigger::V2_0::ISoundTriggerHw::SoundModel const*) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw22convertSoundModelToHalEPKNS1_4V2_015ISoundTriggerHw10SoundModelE(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation19soundModelCallback_EP25sound_trigger_model_eventPv */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::soundModelCallback_(sound_trigger_model_event*, void*) */
int _ZN7android8hardware12soundtrigger4V2_314implementation19soundModelCallback_EP25sound_trigger_model_eventPv(void);

/* Symbol: HIDL_FETCH_ISoundTriggerHw */
/* Demangled: HIDL_FETCH_ISoundTriggerHw */
int HIDL_FETCH_ISoundTriggerHw(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw13getPropertiesENSt3__18functionIFviRKNS1_4V2_015ISoundTriggerHw10PropertiesEEEE */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::getProperties(std::__1::function<void (int, android::hardware::soundtrigger::V2_0::ISoundTriggerHw::Properties const&)>) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw13getPropertiesENSt3__18functionIFviRKNS1_4V2_015ISoundTriggerHw10PropertiesEEEE(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwC1Ev */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundTriggerHw() */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwC1Ev(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwD0Ev */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::~SoundTriggerHw() */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwD0Ev(void);

/* Symbol: _ZTVN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwE */
/* Demangled: vtable for android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw */
extern void* _ZTVN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwE;

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwC2Ev */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundTriggerHw() */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwC2Ev(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwD1Ev */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::~SoundTriggerHw() */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwD1Ev(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw17getProperties_2_3ENSt3__18functionIFviRKNS2_10PropertiesEEEE */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::getProperties_2_3(std::__1::function<void (int, android::hardware::soundtrigger::V2_3::Properties const&)>) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw17getProperties_2_3ENSt3__18functionIFviRKNS2_10PropertiesEEEE(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw24loadPhraseSoundModel_2_1ERKNS1_4V2_115ISoundTriggerHw16PhraseSoundModelERKNS_2spINS5_23ISoundTriggerHwCallbackEEEiNSt3__18functionIFviiEEE */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::loadPhraseSoundModel_2_1(android::hardware::soundtrigger::V2_1::ISoundTriggerHw::PhraseSoundModel const&, android::sp<android::hardware::soundtrigger::V2_1::ISoundTriggerHwCallback> const&, int, std::__1::function<void (int, int)>) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw24loadPhraseSoundModel_2_1ERKNS1_4V2_115ISoundTriggerHw16PhraseSoundModelERKNS_2spINS5_23ISoundTriggerHwCallbackEEEiNSt3__18functionIFviiEEE(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw29convertSoundModelEventFromHalEPNS1_4V2_023ISoundTriggerHwCallback10ModelEventEPK25sound_trigger_model_event */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertSoundModelEventFromHal(android::hardware::soundtrigger::V2_0::ISoundTriggerHwCallback::ModelEvent*, sound_trigger_model_event const*) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw29convertSoundModelEventFromHalEPNS1_4V2_023ISoundTriggerHwCallback10ModelEventEPK25sound_trigger_model_event(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw34convertPhraseRecognitionExtraToHalEP38sound_trigger_phrase_recognition_extraPKNS1_4V2_022PhraseRecognitionExtraE */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertPhraseRecognitionExtraToHal(sound_trigger_phrase_recognition_extra*, android::hardware::soundtrigger::V2_0::PhraseRecognitionExtra const*) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw34convertPhraseRecognitionExtraToHalEP38sound_trigger_phrase_recognition_extraPKNS1_4V2_022PhraseRecognitionExtraE(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwD2Ev */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::~SoundTriggerHw() */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwD2Ev(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw14loadSoundModelERKNS1_4V2_015ISoundTriggerHw10SoundModelERKNS_2spINS5_23ISoundTriggerHwCallbackEEEiNSt3__18functionIFviiEEE */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::loadSoundModel(android::hardware::soundtrigger::V2_0::ISoundTriggerHw::SoundModel const&, android::sp<android::hardware::soundtrigger::V2_0::ISoundTriggerHwCallback> const&, int, std::__1::function<void (int, int)>) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw14loadSoundModelERKNS1_4V2_015ISoundTriggerHw10SoundModelERKNS_2spINS5_23ISoundTriggerHwCallbackEEEiNSt3__18functionIFviiEEE(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16unloadSoundModelEi */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::unloadSoundModel(int) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16unloadSoundModelEi(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw35convertPhaseRecognitionEventFromHalEPNS1_4V2_023ISoundTriggerHwCallback22PhraseRecognitionEventEPK38sound_trigger_phrase_recognition_event */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertPhaseRecognitionEventFromHal(android::hardware::soundtrigger::V2_0::ISoundTriggerHwCallback::PhraseRecognitionEvent*, sound_trigger_phrase_recognition_event const*) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw35convertPhaseRecognitionEventFromHalEPNS1_4V2_023ISoundTriggerHwCallback22PhraseRecognitionEventEPK38sound_trigger_phrase_recognition_event(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient> > >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE12do_constructEPvj(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw30convertRecognitionEventFromHalEPNS1_4V2_023ISoundTriggerHwCallback16RecognitionEventEPK31sound_trigger_recognition_event */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertRecognitionEventFromHal(android::hardware::soundtrigger::V2_0::ISoundTriggerHwCallback::RecognitionEvent*, sound_trigger_recognition_event const*) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw30convertRecognitionEventFromHalEPNS1_4V2_023ISoundTriggerHwCallback16RecognitionEventEPK31sound_trigger_recognition_event(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw13getModelStateEi */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::getModelState(int) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw13getModelStateEi(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20SoundModelClient_2_018soundModelCallbackEP25sound_trigger_model_event */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient_2_0::soundModelCallback(sound_trigger_model_event*) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20SoundModelClient_2_018soundModelCallbackEP25sound_trigger_model_event(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw36convertPhraseRecognitionExtraFromHalEPNS1_4V2_022PhraseRecognitionExtraEPK38sound_trigger_phrase_recognition_extra */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertPhraseRecognitionExtraFromHal(android::hardware::soundtrigger::V2_0::PhraseRecognitionExtra*, sound_trigger_phrase_recognition_extra const*) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw36convertPhraseRecognitionExtraFromHalEPNS1_4V2_022PhraseRecognitionExtraEPK38sound_trigger_phrase_recognition_extra(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw12setParameterEiNS2_14ModelParameterEi */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::setParameter(int, android::hardware::soundtrigger::V2_3::ModelParameter, int) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw12setParameterEiNS2_14ModelParameterEi(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16convertUuidToHalEP12audio_uuid_sPKNS0_5audio6common4V2_04UuidE */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertUuidToHal(audio_uuid_s*, android::hardware::audio::common::V2_0::Uuid const*) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16convertUuidToHalEP12audio_uuid_sPKNS0_5audio6common4V2_04UuidE(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20SoundModelClient_2_118soundModelCallbackEP25sound_trigger_model_event */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient_2_1::soundModelCallback(sound_trigger_model_event*) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20SoundModelClient_2_118soundModelCallbackEP25sound_trigger_model_event(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20startRecognition_2_3EiRKNS2_17RecognitionConfigE */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::startRecognition_2_3(int, android::hardware::soundtrigger::V2_3::RecognitionConfig const&) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20startRecognition_2_3EiRKNS2_17RecognitionConfigE(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw24convertPropertiesFromHalEPNS1_4V2_015ISoundTriggerHw10PropertiesEPK24sound_trigger_properties */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertPropertiesFromHal(android::hardware::soundtrigger::V2_0::ISoundTriggerHw::Properties*, sound_trigger_properties const*) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw24convertPropertiesFromHalEPNS1_4V2_015ISoundTriggerHw10PropertiesEPK24sound_trigger_properties(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient> > >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE10do_destroyEPvj(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw24convertPropertiesFromHalEPNS2_10PropertiesEPK31sound_trigger_properties_header */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertPropertiesFromHal(android::hardware::soundtrigger::V2_3::Properties*, sound_trigger_properties_header const*) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw24convertPropertiesFromHalEPNS2_10PropertiesEPK31sound_trigger_properties_header(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw26convertModelParameterToHalENS2_14ModelParameterE */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertModelParameterToHal(android::hardware::soundtrigger::V2_3::ModelParameter) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw26convertModelParameterToHalENS2_14ModelParameterE(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw29convertRecognitionConfigToHalEPKNS1_4V2_015ISoundTriggerHw17RecognitionConfigE */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertRecognitionConfigToHal(android::hardware::soundtrigger::V2_0::ISoundTriggerHw::RecognitionConfig const*) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw29convertRecognitionConfigToHalEPKNS1_4V2_015ISoundTriggerHw17RecognitionConfigE(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw17nextUniqueModelIdEv */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::nextUniqueModelId() */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw17nextUniqueModelIdEv(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw35convertRecognitionConfigToHalHeaderEPKNS2_17RecognitionConfigE */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertRecognitionConfigToHalHeader(android::hardware::soundtrigger::V2_3::RecognitionConfig const*) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw35convertRecognitionConfigToHalHeaderEPKNS2_17RecognitionConfigE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient> > >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient> > >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZTCN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwE0_NS1_4V2_015ISoundTriggerHwE */
/* Demangled: construction vtable for android::hardware::soundtrigger::V2_0::ISoundTriggerHw-in-android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw */
extern void* _ZTCN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwE0_NS1_4V2_015ISoundTriggerHwE;

/* Symbol: _ZTCN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw */
extern void* _ZTCN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEEE;

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw18convertUuidFromHalEPNS0_5audio6common4V2_04UuidEPK12audio_uuid_s */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::convertUuidFromHal(android::hardware::audio::common::V2_0::Uuid*, audio_uuid_s const*) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw18convertUuidFromHalEPNS0_5audio6common4V2_04UuidEPK12audio_uuid_s(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw18loadSoundModel_2_1ERKNS1_4V2_115ISoundTriggerHw10SoundModelERKNS_2spINS5_23ISoundTriggerHwCallbackEEEiNSt3__18functionIFviiEEE */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::loadSoundModel_2_1(android::hardware::soundtrigger::V2_1::ISoundTriggerHw::SoundModel const&, android::sp<android::hardware::soundtrigger::V2_1::ISoundTriggerHwCallback> const&, int, std::__1::function<void (int, int)>) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw18loadSoundModel_2_1ERKNS1_4V2_115ISoundTriggerHw10SoundModelERKNS_2spINS5_23ISoundTriggerHwCallbackEEEiNSt3__18functionIFviiEEE(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw19stopAllRecognitionsEv */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::stopAllRecognitions() */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw19stopAllRecognitionsEv(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20startRecognition_2_1EiRKNS1_4V2_115ISoundTriggerHw17RecognitionConfigERKNS_2spINS5_23ISoundTriggerHwCallbackEEEi */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::startRecognition_2_1(int, android::hardware::soundtrigger::V2_1::ISoundTriggerHw::RecognitionConfig const&, android::sp<android::hardware::soundtrigger::V2_1::ISoundTriggerHwCallback> const&, int) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20startRecognition_2_1EiRKNS1_4V2_115ISoundTriggerHw17RecognitionConfigERKNS_2spINS5_23ISoundTriggerHwCallbackEEEi(void);

/* Symbol: _ZTCN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwE0_NS1_4V2_115ISoundTriggerHwE */
/* Demangled: construction vtable for android::hardware::soundtrigger::V2_1::ISoundTriggerHw-in-android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw */
extern void* _ZTCN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwE0_NS1_4V2_115ISoundTriggerHwE;

/* Symbol: _ZTv0_n12_N7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwD0Ev */
/* Demangled: virtual thunk to android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::~SoundTriggerHw() */
int _ZTv0_n12_N7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwD0Ev(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20SoundModelClient_2_019recognitionCallbackEP31sound_trigger_recognition_event */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient_2_0::recognitionCallback(sound_trigger_recognition_event*) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20SoundModelClient_2_019recognitionCallbackEP31sound_trigger_recognition_event(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE10do_compareEPKvSD_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spINS_8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16SoundModelClientEEEEEE10do_compareEPKvSD_(void);

/* Symbol: _ZTCN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwE0_NS1_4V2_215ISoundTriggerHwE */
/* Demangled: construction vtable for android::hardware::soundtrigger::V2_2::ISoundTriggerHw-in-android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw */
extern void* _ZTCN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwE0_NS1_4V2_215ISoundTriggerHwE;

/* Symbol: _ZTv0_n12_N7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwD1Ev */
/* Demangled: virtual thunk to android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::~SoundTriggerHw() */
int _ZTv0_n12_N7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHwD1Ev(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20SoundModelClient_2_119recognitionCallbackEP31sound_trigger_recognition_event */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient_2_1::recognitionCallback(sound_trigger_recognition_event*) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20SoundModelClient_2_119recognitionCallbackEP31sound_trigger_recognition_event(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation20recognitionCallback_EP31sound_trigger_recognition_eventPv */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::recognitionCallback_(sound_trigger_recognition_event*, void*) */
int _ZN7android8hardware12soundtrigger4V2_314implementation20recognitionCallback_EP31sound_trigger_recognition_eventPv(void);

/* Symbol: _ZTVN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20SoundModelClient_2_0E */
/* Demangled: vtable for android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient_2_0 */
extern void* _ZTVN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20SoundModelClient_2_0E;

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw12getParameterEiNS2_14ModelParameterENSt3__18functionIFviiEEE */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::getParameter(int, android::hardware::soundtrigger::V2_3::ModelParameter, std::__1::function<void (int, int)>) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw12getParameterEiNS2_14ModelParameterENSt3__18functionIFviiEEE(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw15stopRecognitionEi */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::stopRecognition(int) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw15stopRecognitionEi(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16startRecognitionEiRKNS1_4V2_015ISoundTriggerHw17RecognitionConfigERKNS_2spINS5_23ISoundTriggerHwCallbackEEEi */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::startRecognition(int, android::hardware::soundtrigger::V2_0::ISoundTriggerHw::RecognitionConfig const&, android::sp<android::hardware::soundtrigger::V2_0::ISoundTriggerHwCallback> const&, int) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw16startRecognitionEiRKNS1_4V2_015ISoundTriggerHw17RecognitionConfigERKNS_2spINS5_23ISoundTriggerHwCallbackEEEi(void);

/* Symbol: _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20loadPhraseSoundModelERKNS1_4V2_015ISoundTriggerHw16PhraseSoundModelERKNS_2spINS5_23ISoundTriggerHwCallbackEEEiNSt3__18functionIFviiEEE */
/* Demangled: android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::loadPhraseSoundModel(android::hardware::soundtrigger::V2_0::ISoundTriggerHw::PhraseSoundModel const&, android::sp<android::hardware::soundtrigger::V2_0::ISoundTriggerHwCallback> const&, int, std::__1::function<void (int, int)>) */
int _ZN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20loadPhraseSoundModelERKNS1_4V2_015ISoundTriggerHw16PhraseSoundModelERKNS_2spINS5_23ISoundTriggerHwCallbackEEEiNSt3__18functionIFviiEEE(void);

/* Symbol: _ZTVN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20SoundModelClient_2_1E */
/* Demangled: vtable for android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::SoundModelClient_2_1 */
extern void* _ZTVN7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw20SoundModelClient_2_1E;

/* Symbol: _ZTv0_n16_N7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw10onFirstRefEv */
/* Demangled: virtual thunk to android::hardware::soundtrigger::V2_3::implementation::SoundTriggerHw::onFirstRef() */
int _ZTv0_n16_N7android8hardware12soundtrigger4V2_314implementation14SoundTriggerHw10onFirstRefEv(void);

__END_DECLS

#endif /* BEGONIA_RE_ANDROID_HARDWARE_SOUNDTRIGGER_2_3_IMPL_H */
