/*
 * Reverse-Engineered Source for: libvowp23_sid_training.vendor.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libvowp23_sid_training_vendor"

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
#include "libvowp23_sid_training_vendor.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vowCommand_recognizer_multithread */
extern "C" __attribute__((visibility("default"))) int vowCommand_recognizer_multithread(void) {
    ALOGD("vowCommand_recognizer_multithread() called");
    return 0;
}

/* Exported Object: vow_english_monorcdif_Model_name_table */
extern "C" __attribute__((visibility("default"))) void* vow_english_monorcdif_Model_name_table = NULL;

/* Demangled: Delta_Acc_ID_30Dim */
extern "C" __attribute__((visibility("default"))) int Delta_Acc_ID_30Dim(void) {
    ALOGD("Delta_Acc_ID_30Dim() called");
    return 0;
}

/* Exported Object: test_model_dir */
extern "C" __attribute__((visibility("default"))) void* test_model_dir = NULL;

/* Exported Object: DataBuffer */
extern "C" __attribute__((visibility("default"))) void* DataBuffer = NULL;

/* Demangled: TrainingInit */
extern "C" __attribute__((visibility("default"))) int TrainingInit(void) {
    ALOGD("TrainingInit() called");
    return 0;
}

/* Exported Object: align_condition_mutex */
extern "C" __attribute__((visibility("default"))) void* align_condition_mutex = NULL;

/* Demangled: wakeup_VADInit */
extern "C" __attribute__((visibility("default"))) int wakeup_VADInit(void) {
    ALOGD("wakeup_VADInit() called");
    return 0;
}

/* Exported Object: continueButtonNoiseFrameDropCount */
extern "C" __attribute__((visibility("default"))) void* continueButtonNoiseFrameDropCount = NULL;

/* Demangled: getConcatedSpeakerModelSize */
extern "C" __attribute__((visibility("default"))) int getConcatedSpeakerModelSize(void) {
    ALOGD("getConcatedSpeakerModelSize() called");
    return 0;
}

/* Demangled: SpeechSegmentSelection */
extern "C" __attribute__((visibility("default"))) int SpeechSegmentSelection(void) {
    ALOGD("SpeechSegmentSelection() called");
    return 0;
}

/* Exported Object: NoiseList */
extern "C" __attribute__((visibility("default"))) void* NoiseList = NULL;

/* Demangled: get_scoreImpact_debug */
extern "C" __attribute__((visibility("default"))) int get_scoreImpact_debug(void) {
    ALOGD("get_scoreImpact_debug() called");
    return 0;
}

/* Exported Object: trainingTQMFCCDebugMessageFullPath */
extern "C" __attribute__((visibility("default"))) void* trainingTQMFCCDebugMessageFullPath = NULL;

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: UttInit */
extern "C" __attribute__((visibility("default"))) int UttInit(void) {
    ALOGD("UttInit() called");
    return 0;
}

/* Demangled: init2DFloatArrayZero */
extern "C" __attribute__((visibility("default"))) int init2DFloatArrayZero(void) {
    ALOGD("init2DFloatArrayZero() called");
    return 0;
}

/* Demangled: initFloatArray */
extern "C" __attribute__((visibility("default"))) int initFloatArray(void) {
    ALOGD("initFloatArray() called");
    return 0;
}

/* Demangled: sumFloatArray */
extern "C" __attribute__((visibility("default"))) int sumFloatArray(void) {
    ALOGD("sumFloatArray() called");
    return 0;
}

/* Demangled: loadAndSetTrainingConfig */
extern "C" __attribute__((visibility("default"))) int loadAndSetTrainingConfig(void) {
    ALOGD("loadAndSetTrainingConfig() called");
    return 0;
}

/* Demangled: wakeup_LoadParameters */
extern "C" __attribute__((visibility("default"))) int wakeup_LoadParameters(void) {
    ALOGD("wakeup_LoadParameters() called");
    return 0;
}

/* Exported Object: vow_Transp_all_filler */
extern "C" __attribute__((visibility("default"))) void* vow_Transp_all_filler = NULL;

/* Demangled: vow_command_parser_static_short_deiformat_anti_binout */
extern "C" __attribute__((visibility("default"))) int vow_command_parser_static_short_deiformat_anti_binout(void) {
    ALOGD("vow_command_parser_static_short_deiformat_anti_binout() called");
    return 0;
}

/* Demangled: Write_GMM_Model */
extern "C" __attribute__((visibility("default"))) int Write_GMM_Model(void) {
    ALOGD("Write_GMM_Model() called");
    return 0;
}

/* Demangled: vowReadBinaryDictionary */
extern "C" __attribute__((visibility("default"))) int vowReadBinaryDictionary(void) {
    ALOGD("vowReadBinaryDictionary() called");
    return 0;
}

/* Exported Object: foolproof */
extern "C" __attribute__((visibility("default"))) void* foolproof = NULL;

/* Demangled: Estimate_Initial_Gaussian_Model */
extern "C" __attribute__((visibility("default"))) int Estimate_Initial_Gaussian_Model(void) {
    ALOGD("Estimate_Initial_Gaussian_Model() called");
    return 0;
}

/* Demangled: ApplyFIR */
extern "C" __attribute__((visibility("default"))) int ApplyFIR(void) {
    ALOGD("ApplyFIR() called");
    return 0;
}

/* Demangled: allocTimeStrechParms */
extern "C" __attribute__((visibility("default"))) int allocTimeStrechParms(void) {
    ALOGD("allocTimeStrechParms() called");
    return 0;
}

/* Demangled: vowLoadCommandMetaParameters */
extern "C" __attribute__((visibility("default"))) int vowLoadCommandMetaParameters(void) {
    ALOGD("vowLoadCommandMetaParameters() called");
    return 0;
}

/* Exported Object: global_var */
extern "C" __attribute__((visibility("default"))) void* global_var = NULL;

/* Demangled: print_GMM */
extern "C" __attribute__((visibility("default"))) int print_GMM(void) {
    ALOGD("print_GMM() called");
    return 0;
}

/* Exported Object: Kmeans_samples */
extern "C" __attribute__((visibility("default"))) void* Kmeans_samples = NULL;

/* Demangled: PCMVN */
extern "C" __attribute__((visibility("default"))) int PCMVN(void) {
    ALOGD("PCMVN() called");
    return 0;
}

/* Demangled: noiseGainCalculation */
extern "C" __attribute__((visibility("default"))) int noiseGainCalculation(void) {
    ALOGD("noiseGainCalculation() called");
    return 0;
}

/* Demangled: countTQ */
extern "C" __attribute__((visibility("default"))) int countTQ(void) {
    ALOGD("countTQ() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: onTesting_impl */
extern "C" __attribute__((visibility("default"))) int onTesting_impl(void) {
    ALOGD("onTesting_impl() called");
    return 0;
}

/* Exported Object: writeWavFile */
extern "C" __attribute__((visibility("default"))) void* writeWavFile = NULL;

/* Demangled: vowWriteBinaryDictionary */
extern "C" __attribute__((visibility("default"))) int vowWriteBinaryDictionary(void) {
    ALOGD("vowWriteBinaryDictionary() called");
    return 0;
}

/* Demangled: buildTransTable */
extern "C" __attribute__((visibility("default"))) int buildTransTable(void) {
    ALOGD("buildTransTable() called");
    return 0;
}

/* Demangled: vowInitForScoreCommands */
extern "C" __attribute__((visibility("default"))) int vowInitForScoreCommands(void) {
    ALOGD("vowInitForScoreCommands() called");
    return 0;
}

/* Exported Object: Tj_mult_feature */
extern "C" __attribute__((visibility("default"))) void* Tj_mult_feature = NULL;

/* Demangled: ApplyDGgain */
extern "C" __attribute__((visibility("default"))) int ApplyDGgain(void) {
    ALOGD("ApplyDGgain() called");
    return 0;
}

/* Demangled: addNoiseApplyVad */
extern "C" __attribute__((visibility("default"))) int addNoiseApplyVad(void) {
    ALOGD("addNoiseApplyVad() called");
    return 0;
}

/* Exported Object: rir_coef_1 */
extern "C" __attribute__((visibility("default"))) void* rir_coef_1 = NULL;

/* Exported Object: em_count_mutex */
extern "C" __attribute__((visibility("default"))) void* em_count_mutex = NULL;

/* Demangled: sumSquareFloatArray */
extern "C" __attribute__((visibility("default"))) int sumSquareFloatArray(void) {
    ALOGD("sumSquareFloatArray() called");
    return 0;
}

/* Exported Object: MCUttNum */
extern "C" __attribute__((visibility("default"))) void* MCUttNum = NULL;

/* Exported Object: spkRateList */
extern "C" __attribute__((visibility("default"))) void* spkRateList = NULL;

/* Exported Object: rir_coef_2 */
extern "C" __attribute__((visibility("default"))) void* rir_coef_2 = NULL;

/* Exported Object: trainingTQEnergyDebugMessageFullPath */
extern "C" __attribute__((visibility("default"))) void* trainingTQEnergyDebugMessageFullPath = NULL;

/* Demangled: training_setIntegerArgument */
extern "C" __attribute__((visibility("default"))) int training_setIntegerArgument(void) {
    ALOGD("training_setIntegerArgument() called");
    return 0;
}

/* Exported Object: ID_Mean */
extern "C" __attribute__((visibility("default"))) void* ID_Mean = NULL;

/* Demangled: mapGMM */
extern "C" __attribute__((visibility("default"))) int mapGMM(void) {
    ALOGD("mapGMM() called");
    return 0;
}

/* Demangled: MelWindow_Init */
extern "C" __attribute__((visibility("default"))) int MelWindow_Init(void) {
    ALOGD("MelWindow_Init() called");
    return 0;
}

/* Demangled: mfccDCT */
extern "C" __attribute__((visibility("default"))) int mfccDCT(void) {
    ALOGD("mfccDCT() called");
    return 0;
}

/* Exported Object: rir_coef_3 */
extern "C" __attribute__((visibility("default"))) void* rir_coef_3 = NULL;

/* Exported Object: em_done */
extern "C" __attribute__((visibility("default"))) void* em_done = NULL;

/* Demangled: addNoiseReadPCM_Utt_idx */
extern "C" __attribute__((visibility("default"))) int addNoiseReadPCM_Utt_idx(void) {
    ALOGD("addNoiseReadPCM_Utt_idx() called");
    return 0;
}

/* Demangled: _CPLOGGER_getLogFileName */
extern "C" __attribute__((visibility("default"))) int _CPLOGGER_getLogFileName(void) {
    ALOGD("_CPLOGGER_getLogFileName() called");
    return 0;
}

/* Demangled: vow_command_recognizer_parallel_fixed_static_short_freephnboundary */
extern "C" __attribute__((visibility("default"))) int vow_command_recognizer_parallel_fixed_static_short_freephnboundary(void) {
    ALOGD("vow_command_recognizer_parallel_fixed_static_short_freephnboundary() called");
    return 0;
}

/* Exported Object: WakeupFeaSet */
extern "C" __attribute__((visibility("default"))) void* WakeupFeaSet = NULL;

/* Exported Object: cleanUttSpeechIdxArrayList */
extern "C" __attribute__((visibility("default"))) void* cleanUttSpeechIdxArrayList = NULL;

/* Demangled: wakeup_TQ_TotalV */
extern "C" __attribute__((visibility("default"))) int wakeup_TQ_TotalV(void) {
    ALOGD("wakeup_TQ_TotalV() called");
    return 0;
}

/* Exported Object: rir_coef_4 */
extern "C" __attribute__((visibility("default"))) void* rir_coef_4 = NULL;

/* Exported Object: trainingPcmFullPath */
extern "C" __attribute__((visibility("default"))) void* trainingPcmFullPath = NULL;

/* Exported Object: Speaker_ID_State */
extern "C" __attribute__((visibility("default"))) void* Speaker_ID_State = NULL;

/* Demangled: normArray */
extern "C" __attribute__((visibility("default"))) int normArray(void) {
    ALOGD("normArray() called");
    return 0;
}

/* Demangled: wakeupDTW */
extern "C" __attribute__((visibility("default"))) int wakeupDTW(void) {
    ALOGD("wakeupDTW() called");
    return 0;
}

/* Demangled: setMultiConditionFrameIdxOffset */
extern "C" __attribute__((visibility("default"))) int setMultiConditionFrameIdxOffset(void) {
    ALOGD("setMultiConditionFrameIdxOffset() called");
    return 0;
}

/* Exported Object: MIN_WAKEUP_FRAME_NUMBER */
extern "C" __attribute__((visibility("default"))) void* MIN_WAKEUP_FRAME_NUMBER = NULL;

/* Demangled: training_setFloatArgument */
extern "C" __attribute__((visibility("default"))) int training_setFloatArgument(void) {
    ALOGD("training_setFloatArgument() called");
    return 0;
}

/* Demangled: threadpool_add */
extern "C" __attribute__((visibility("default"))) int threadpool_add(void) {
    ALOGD("threadpool_add() called");
    return 0;
}

/* Demangled: setShortArrayValue */
extern "C" __attribute__((visibility("default"))) int setShortArrayValue(void) {
    ALOGD("setShortArrayValue() called");
    return 0;
}

/* Exported Object: foolproofTestingParam */
extern "C" __attribute__((visibility("default"))) void* foolproofTestingParam = NULL;

/* Demangled: wakeup_onTraining */
extern "C" __attribute__((visibility("default"))) int wakeup_onTraining(void) {
    ALOGD("wakeup_onTraining() called");
    return 0;
}

/* Exported Object: CUT_VAD_END_FRAME */
extern "C" __attribute__((visibility("default"))) void* CUT_VAD_END_FRAME = NULL;

/* Demangled: vowDecideRecognitionResult */
extern "C" __attribute__((visibility("default"))) int vowDecideRecognitionResult(void) {
    ALOGD("vowDecideRecognitionResult() called");
    return 0;
}

/* Demangled: calculateNoiseAvgMag */
extern "C" __attribute__((visibility("default"))) int calculateNoiseAvgMag(void) {
    ALOGD("calculateNoiseAvgMag() called");
    return 0;
}

/* Exported Object: globalCommandID */
extern "C" __attribute__((visibility("default"))) void* globalCommandID = NULL;

/* Exported Object: trainingTQDebugMessageFullPath */
extern "C" __attribute__((visibility("default"))) void* trainingTQDebugMessageFullPath = NULL;

/* Demangled: readRawUbmSize */
extern "C" __attribute__((visibility("default"))) int readRawUbmSize(void) {
    ALOGD("readRawUbmSize() called");
    return 0;
}

/* Demangled: DCTCoef_Init */
extern "C" __attribute__((visibility("default"))) int DCTCoef_Init(void) {
    ALOGD("DCTCoef_Init() called");
    return 0;
}

/* Demangled: wakeupTrainEndpointDetection */
extern "C" __attribute__((visibility("default"))) int wakeupTrainEndpointDetection(void) {
    ALOGD("wakeupTrainEndpointDetection() called");
    return 0;
}

/* Exported Object: testingscoreDebugMessageFullPath */
extern "C" __attribute__((visibility("default"))) void* testingscoreDebugMessageFullPath = NULL;

/* Demangled: bubbleSortAscend */
extern "C" __attribute__((visibility("default"))) int bubbleSortAscend(void) {
    ALOGD("bubbleSortAscend() called");
    return 0;
}

/* Demangled: Csub */
extern "C" __attribute__((visibility("default"))) int Csub(void) {
    ALOGD("Csub() called");
    return 0;
}

/* Demangled: addNoiseReadPCM_Utt */
extern "C" __attribute__((visibility("default"))) int addNoiseReadPCM_Utt(void) {
    ALOGD("addNoiseReadPCM_Utt() called");
    return 0;
}

/* Demangled: wakeupCMVNLastFrame */
extern "C" __attribute__((visibility("default"))) int wakeupCMVNLastFrame(void) {
    ALOGD("wakeupCMVNLastFrame() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Exported Object: adptTrainParam */
extern "C" __attribute__((visibility("default"))) void* adptTrainParam = NULL;

/* Demangled: dumpPcmLinear */
extern "C" __attribute__((visibility("default"))) int dumpPcmLinear(void) {
    ALOGD("dumpPcmLinear() called");
    return 0;
}

/* Exported Object: speakerModelTestingParam */
extern "C" __attribute__((visibility("default"))) void* speakerModelTestingParam = NULL;

/* Demangled: wakeupMultiConditionTrainEndpointDetection */
extern "C" __attribute__((visibility("default"))) int wakeupMultiConditionTrainEndpointDetection(void) {
    ALOGD("wakeupMultiConditionTrainEndpointDetection() called");
    return 0;
}

/* Demangled: get_vad_array_debug */
extern "C" __attribute__((visibility("default"))) int get_vad_array_debug(void) {
    ALOGD("get_vad_array_debug() called");
    return 0;
}

/* Demangled: setTrainingPassSnr */
extern "C" __attribute__((visibility("default"))) int setTrainingPassSnr(void) {
    ALOGD("setTrainingPassSnr() called");
    return 0;
}

/* Demangled: findFloatArrayMaxIdx */
extern "C" __attribute__((visibility("default"))) int findFloatArrayMaxIdx(void) {
    ALOGD("findFloatArrayMaxIdx() called");
    return 0;
}

/* Demangled: stateCopyfromKWSModels2AdptModels */
extern "C" __attribute__((visibility("default"))) int stateCopyfromKWSModels2AdptModels(void) {
    ALOGD("stateCopyfromKWSModels2AdptModels() called");
    return 0;
}

/* Demangled: arrayTransform_float2short */
extern "C" __attribute__((visibility("default"))) int arrayTransform_float2short(void) {
    ALOGD("arrayTransform_float2short() called");
    return 0;
}

/* Demangled: VOWE_P23_training_Sim */
extern "C" __attribute__((visibility("default"))) int VOWE_P23_training_Sim(void) {
    ALOGD("VOWE_P23_training_Sim() called");
    return 0;
}

/* Demangled: addNoiseRecordingInit */
extern "C" __attribute__((visibility("default"))) int addNoiseRecordingInit(void) {
    ALOGD("addNoiseRecordingInit() called");
    return 0;
}

/* Demangled: AndrewReadPCM */
extern "C" __attribute__((visibility("default"))) int AndrewReadPCM(void) {
    ALOGD("AndrewReadPCM() called");
    return 0;
}

/* Exported Object: vow_Mean_all_filler */
extern "C" __attribute__((visibility("default"))) void* vow_Mean_all_filler = NULL;

/* Demangled: wakeupGmmModelFree */
extern "C" __attribute__((visibility("default"))) int wakeupGmmModelFree(void) {
    ALOGD("wakeupGmmModelFree() called");
    return 0;
}

/* Demangled: vowMixLogWeight */
extern "C" __attribute__((visibility("default"))) int vowMixLogWeight(void) {
    ALOGD("vowMixLogWeight() called");
    return 0;
}

/* Demangled: addNoiseInitVad */
extern "C" __attribute__((visibility("default"))) int addNoiseInitVad(void) {
    ALOGD("addNoiseInitVad() called");
    return 0;
}

/* Exported Object: rawUbmModel */
extern "C" __attribute__((visibility("default"))) void* rawUbmModel = NULL;

/* Demangled: get_noiseLevel_debug */
extern "C" __attribute__((visibility("default"))) int get_noiseLevel_debug(void) {
    ALOGD("get_noiseLevel_debug() called");
    return 0;
}

/* Demangled: addNoiseFE_thread */
extern "C" __attribute__((visibility("default"))) int addNoiseFE_thread(void) {
    ALOGD("addNoiseFE_thread() called");
    return 0;
}

/* Demangled: CMVN */
extern "C" __attribute__((visibility("default"))) int CMVN(void) {
    ALOGD("CMVN() called");
    return 0;
}

/* Demangled: MelCoef_Init */
extern "C" __attribute__((visibility("default"))) int MelCoef_Init(void) {
    ALOGD("MelCoef_Init() called");
    return 0;
}

/* Demangled: mfcParser */
extern "C" __attribute__((visibility("default"))) int mfcParser(void) {
    ALOGD("mfcParser() called");
    return 0;
}

/* Demangled: adptHMM_writer */
extern "C" __attribute__((visibility("default"))) int adptHMM_writer(void) {
    ALOGD("adptHMM_writer() called");
    return 0;
}

/* Exported Object: align_done */
extern "C" __attribute__((visibility("default"))) void* align_done = NULL;

/* Exported Object: sigma_vector_sum */
extern "C" __attribute__((visibility("default"))) void* sigma_vector_sum = NULL;

/* Exported Object: TrainingFeature */
extern "C" __attribute__((visibility("default"))) void* TrainingFeature = NULL;

/* Exported Object: WakeupMultiConditionUttInfo */
extern "C" __attribute__((visibility("default"))) void* WakeupMultiConditionUttInfo = NULL;

/* Demangled: gen_rir */
extern "C" __attribute__((visibility("default"))) int gen_rir(void) {
    ALOGD("gen_rir() called");
    return 0;
}

/* Demangled: frameBasedMVN_20140424 */
extern "C" __attribute__((visibility("default"))) int frameBasedMVN_20140424(void) {
    ALOGD("frameBasedMVN_20140424() called");
    return 0;
}

/* Demangled: getSfcp_doDumpPcmSet */
extern "C" __attribute__((visibility("default"))) int getSfcp_doDumpPcmSet(void) {
    ALOGD("getSfcp_doDumpPcmSet() called");
    return 0;
}

/* Exported Object: vow_english_monorcdif232_model_name_table */
extern "C" __attribute__((visibility("default"))) void* vow_english_monorcdif232_model_name_table = NULL;

/* Demangled: GMM_Training */
extern "C" __attribute__((visibility("default"))) int GMM_Training(void) {
    ALOGD("GMM_Training() called");
    return 0;
}

/* Exported Object: align_done_criteria */
extern "C" __attribute__((visibility("default"))) void* align_done_criteria = NULL;

/* Demangled: VOWE_P23_training_getFloatArgument */
extern "C" __attribute__((visibility("default"))) int VOWE_P23_training_getFloatArgument(void) {
    ALOGD("VOWE_P23_training_getFloatArgument() called");
    return 0;
}

/* Demangled: Feature_Write */
extern "C" __attribute__((visibility("default"))) int Feature_Write(void) {
    ALOGD("Feature_Write() called");
    return 0;
}

/* Exported Object: MultiConditionSNRs */
extern "C" __attribute__((visibility("default"))) void* MultiConditionSNRs = NULL;

/* Demangled: endPointDetection */
extern "C" __attribute__((visibility("default"))) int endPointDetection(void) {
    ALOGD("endPointDetection() called");
    return 0;
}

/* Exported Object: vow_rcdif_Model_name_table */
extern "C" __attribute__((visibility("default"))) void* vow_rcdif_Model_name_table = NULL;

/* Demangled: wakeup_arrayTableInit */
extern "C" __attribute__((visibility("default"))) int wakeup_arrayTableInit(void) {
    ALOGD("wakeup_arrayTableInit() called");
    return 0;
}

/* Demangled: mapHMMbyGMM */
extern "C" __attribute__((visibility("default"))) int mapHMMbyGMM(void) {
    ALOGD("mapHMMbyGMM() called");
    return 0;
}

/* Demangled: addNoiseVadInit */
extern "C" __attribute__((visibility("default"))) int addNoiseVadInit(void) {
    ALOGD("addNoiseVadInit() called");
    return 0;
}

/* Demangled: getVadUttPcm */
extern "C" __attribute__((visibility("default"))) int getVadUttPcm(void) {
    ALOGD("getVadUttPcm() called");
    return 0;
}

/* Exported Object: savingSpeakerModelFile */
extern "C" __attribute__((visibility("default"))) void* savingSpeakerModelFile = NULL;

/* Demangled: getWarmUpFrameNum */
extern "C" __attribute__((visibility("default"))) int getWarmUpFrameNum(void) {
    ALOGD("getWarmUpFrameNum() called");
    return 0;
}

/* Demangled: initHMMModelConfig */
extern "C" __attribute__((visibility("default"))) int initHMMModelConfig(void) {
    ALOGD("initHMMModelConfig() called");
    return 0;
}

/* Exported Object: numNoiseSegment_forExhaustedSelection */
extern "C" __attribute__((visibility("default"))) void* numNoiseSegment_forExhaustedSelection = NULL;

/* Demangled: updateDPtable */
extern "C" __attribute__((visibility("default"))) int updateDPtable(void) {
    ALOGD("updateDPtable() called");
    return 0;
}

/* Demangled: wakeup_arrayTableRelease */
extern "C" __attribute__((visibility("default"))) int wakeup_arrayTableRelease(void) {
    ALOGD("wakeup_arrayTableRelease() called");
    return 0;
}

/* Demangled: getAdjustableTrainingParamPtr */
extern "C" __attribute__((visibility("default"))) int getAdjustableTrainingParamPtr(void) {
    ALOGD("getAdjustableTrainingParamPtr() called");
    return 0;
}

/* Demangled: wakeup_MultiConditionFETrainingRelease */
extern "C" __attribute__((visibility("default"))) int wakeup_MultiConditionFETrainingRelease(void) {
    ALOGD("wakeup_MultiConditionFETrainingRelease() called");
    return 0;
}

/* Exported Object: BROWN_NOISE_TH_FIX */
extern "C" __attribute__((visibility("default"))) void* BROWN_NOISE_TH_FIX = NULL;

/* Demangled: setTrainingStop */
extern "C" __attribute__((visibility("default"))) int setTrainingStop(void) {
    ALOGD("setTrainingStop() called");
    return 0;
}

/* Demangled: Write_GMM_Model_Binary */
extern "C" __attribute__((visibility("default"))) int Write_GMM_Model_Binary(void) {
    ALOGD("Write_GMM_Model_Binary() called");
    return 0;
}

/* Exported Object: pattern_checking_model_name */
extern "C" __attribute__((visibility("default"))) void* pattern_checking_model_name = NULL;

/* Demangled: bubbleSortDescend */
extern "C" __attribute__((visibility("default"))) int bubbleSortDescend(void) {
    ALOGD("bubbleSortDescend() called");
    return 0;
}

/* Demangled: VOWE_P23_training_setFloatArrayArgument */
extern "C" __attribute__((visibility("default"))) int VOWE_P23_training_setFloatArrayArgument(void) {
    ALOGD("VOWE_P23_training_setFloatArrayArgument() called");
    return 0;
}

/* Demangled: wakeupSpectrum */
extern "C" __attribute__((visibility("default"))) int wakeupSpectrum(void) {
    ALOGD("wakeupSpectrum() called");
    return 0;
}

/* Demangled: vow_command_recognizer_parallel_fixed2_specifycommands_static_short */
extern "C" __attribute__((visibility("default"))) int vow_command_recognizer_parallel_fixed2_specifycommands_static_short(void) {
    ALOGD("vow_command_recognizer_parallel_fixed2_specifycommands_static_short() called");
    return 0;
}

/* Demangled: DIF_FFT_INV_C_code */
extern "C" __attribute__((visibility("default"))) int DIF_FFT_INV_C_code(void) {
    ALOGD("DIF_FFT_INV_C_code() called");
    return 0;
}

/* Demangled: Evaluate_logGaussian */
extern "C" __attribute__((visibility("default"))) int Evaluate_logGaussian(void) {
    ALOGD("Evaluate_logGaussian() called");
    return 0;
}

/* Demangled: VAD */
extern "C" __attribute__((visibility("default"))) int VAD(void) {
    ALOGD("VAD() called");
    return 0;
}

/* Exported Object: unlockTargetType */
extern "C" __attribute__((visibility("default"))) void* unlockTargetType = NULL;

/* Demangled: _CPLOGGER_setLogFileName */
extern "C" __attribute__((visibility("default"))) int _CPLOGGER_setLogFileName(void) {
    ALOGD("_CPLOGGER_setLogFileName() called");
    return 0;
}

/* Exported Object: wakeupTQ_frameIdx */
extern "C" __attribute__((visibility("default"))) void* wakeupTQ_frameIdx = NULL;

/* Demangled: get_score_debug */
extern "C" __attribute__((visibility("default"))) int get_score_debug(void) {
    ALOGD("get_score_debug() called");
    return 0;
}

/* Exported Object: trainingDebugMessageFullPath */
extern "C" __attribute__((visibility("default"))) void* trainingDebugMessageFullPath = NULL;

/* Demangled: TrainingRelease_impl */
extern "C" __attribute__((visibility("default"))) int TrainingRelease_impl(void) {
    ALOGD("TrainingRelease_impl() called");
    return 0;
}

/* Demangled: vow_HMM_model_loader_binary_short */
extern "C" __attribute__((visibility("default"))) int vow_HMM_model_loader_binary_short(void) {
    ALOGD("vow_HMM_model_loader_binary_short() called");
    return 0;
}

/* Demangled: addNoiseToSpectrum */
extern "C" __attribute__((visibility("default"))) int addNoiseToSpectrum(void) {
    ALOGD("addNoiseToSpectrum() called");
    return 0;
}

/* Demangled: ReadPCM */
extern "C" __attribute__((visibility("default"))) int ReadPCM(void) {
    ALOGD("ReadPCM() called");
    return 0;
}

/* Exported Object: DEFAULT_WARM_UP_FRAME_NUM */
extern "C" __attribute__((visibility("default"))) void* DEFAULT_WARM_UP_FRAME_NUM = NULL;

/* Demangled: copyShortArr */
extern "C" __attribute__((visibility("default"))) int copyShortArr(void) {
    ALOGD("copyShortArr() called");
    return 0;
}

/* Exported Object: BrownFeaSet */
extern "C" __attribute__((visibility("default"))) void* BrownFeaSet = NULL;

/* Exported Object: ANTI_CMD_LOWER_TH */
extern "C" __attribute__((visibility("default"))) void* ANTI_CMD_LOWER_TH = NULL;

/* Demangled: DIF_FFT_INV */
extern "C" __attribute__((visibility("default"))) int DIF_FFT_INV(void) {
    ALOGD("DIF_FFT_INV() called");
    return 0;
}

/* Demangled: VOWE_P23_training_constructEnrollData */
extern "C" __attribute__((visibility("default"))) int VOWE_P23_training_constructEnrollData(void) {
    ALOGD("VOWE_P23_training_constructEnrollData() called");
    return 0;
}

/* Demangled: VOWE_P23_training_getFloatArrayArgument */
extern "C" __attribute__((visibility("default"))) int VOWE_P23_training_getFloatArrayArgument(void) {
    ALOGD("VOWE_P23_training_getFloatArrayArgument() called");
    return 0;
}

/* Demangled: addNoiseProgressiveVAD */
extern "C" __attribute__((visibility("default"))) int addNoiseProgressiveVAD(void) {
    ALOGD("addNoiseProgressiveVAD() called");
    return 0;
}

/* Demangled: _CPLOGGER_openLogTarget */
extern "C" __attribute__((visibility("default"))) int _CPLOGGER_openLogTarget(void) {
    ALOGD("_CPLOGGER_openLogTarget() called");
    return 0;
}

/* Exported Object: MCFeaSet */
extern "C" __attribute__((visibility("default"))) void* MCFeaSet = NULL;

/* Exported Object: McSpkRateTrainingNumWoRepeat */
extern "C" __attribute__((visibility("default"))) void* McSpkRateTrainingNumWoRepeat = NULL;

/* Demangled: wakeup_MultiConditionInit */
extern "C" __attribute__((visibility("default"))) int wakeup_MultiConditionInit(void) {
    ALOGD("wakeup_MultiConditionInit() called");
    return 0;
}

/* Exported Object: vow_monophone_Model_name_table */
extern "C" __attribute__((visibility("default"))) void* vow_monophone_Model_name_table = NULL;

/* Exported Object: align_count_mutex */
extern "C" __attribute__((visibility("default"))) void* align_count_mutex = NULL;

/* Demangled: wakeupMultiConditionFETrainingInit */
extern "C" __attribute__((visibility("default"))) int wakeupMultiConditionFETrainingInit(void) {
    ALOGD("wakeupMultiConditionFETrainingInit() called");
    return 0;
}

/* Demangled: adptHMM_copy */
extern "C" __attribute__((visibility("default"))) int adptHMM_copy(void) {
    ALOGD("adptHMM_copy() called");
    return 0;
}

/* Exported Object: foolproofUbmTestingParam */
extern "C" __attribute__((visibility("default"))) void* foolproofUbmTestingParam = NULL;

/* Demangled: wakeupDeltaAcc39DimFrameBased */
extern "C" __attribute__((visibility("default"))) int wakeupDeltaAcc39DimFrameBased(void) {
    ALOGD("wakeupDeltaAcc39DimFrameBased() called");
    return 0;
}

/* Exported Object: SNR_LOWER_TH */
extern "C" __attribute__((visibility("default"))) void* SNR_LOWER_TH = NULL;

/* Exported Object: SHARED_COMMAND */
extern "C" __attribute__((visibility("default"))) void* SHARED_COMMAND = NULL;

/* Demangled: noiseGainCalculationWithSnr */
extern "C" __attribute__((visibility("default"))) int noiseGainCalculationWithSnr(void) {
    ALOGD("noiseGainCalculationWithSnr() called");
    return 0;
}

/* Demangled: speakerPoolSelectionBinaryUnifiedModel */
extern "C" __attribute__((visibility("default"))) int speakerPoolSelectionBinaryUnifiedModel(void) {
    ALOGD("speakerPoolSelectionBinaryUnifiedModel() called");
    return 0;
}

/* Demangled: setTrainingPassNoiseLevel */
extern "C" __attribute__((visibility("default"))) int setTrainingPassNoiseLevel(void) {
    ALOGD("setTrainingPassNoiseLevel() called");
    return 0;
}

/* Demangled: setVoiceWakeUpMode */
extern "C" __attribute__((visibility("default"))) int setVoiceWakeUpMode(void) {
    ALOGD("setVoiceWakeUpMode() called");
    return 0;
}

/* Demangled: wakeup_PCMDiagnosis */
extern "C" __attribute__((visibility("default"))) int wakeup_PCMDiagnosis(void) {
    ALOGD("wakeup_PCMDiagnosis() called");
    return 0;
}

/* Demangled: vowCheckValidFrameLength */
extern "C" __attribute__((visibility("default"))) int vowCheckValidFrameLength(void) {
    ALOGD("vowCheckValidFrameLength() called");
    return 0;
}

/* Demangled: loadAndConcate2OneHMM */
extern "C" __attribute__((visibility("default"))) int loadAndConcate2OneHMM(void) {
    ALOGD("loadAndConcate2OneHMM() called");
    return 0;
}

/* Exported Object: align_condition_cond */
extern "C" __attribute__((visibility("default"))) void* align_condition_cond = NULL;

/* Exported Object: Hamming */
extern "C" __attribute__((visibility("default"))) void* Hamming = NULL;

/* Demangled: setTrainingTimeout */
extern "C" __attribute__((visibility("default"))) int setTrainingTimeout(void) {
    ALOGD("setTrainingTimeout() called");
    return 0;
}

/* Demangled: initBinaryHMMModelFile */
extern "C" __attribute__((visibility("default"))) int initBinaryHMMModelFile(void) {
    ALOGD("initBinaryHMMModelFile() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: align_threadpool_func */
extern "C" __attribute__((visibility("default"))) int align_threadpool_func(void) {
    ALOGD("align_threadpool_func() called");
    return 0;
}

/* Demangled: featureInit */
extern "C" __attribute__((visibility("default"))) int featureInit(void) {
    ALOGD("featureInit() called");
    return 0;
}

/* Exported Object: pre_model_name */
extern "C" __attribute__((visibility("default"))) void* pre_model_name = NULL;

/* Demangled: _CPLOGGER_print */
extern "C" __attribute__((visibility("default"))) int _CPLOGGER_print(void) {
    ALOGD("_CPLOGGER_print() called");
    return 0;
}

/* Demangled: getXcorrelationDelaySample4TimeStrech */
extern "C" __attribute__((visibility("default"))) int getXcorrelationDelaySample4TimeStrech(void) {
    ALOGD("getXcorrelationDelaySample4TimeStrech() called");
    return 0;
}

/* Exported Object: vow_mandarin_rcdif_english_monorcdif_merged_model_name_table */
extern "C" __attribute__((visibility("default"))) void* vow_mandarin_rcdif_english_monorcdif_merged_model_name_table = NULL;

/* Demangled: GMM_decoder */
extern "C" __attribute__((visibility("default"))) int GMM_decoder(void) {
    ALOGD("GMM_decoder() called");
    return 0;
}

/* Demangled: VADInit */
extern "C" __attribute__((visibility("default"))) int VADInit(void) {
    ALOGD("VADInit() called");
    return 0;
}

/* Demangled: wakeupDelta_Acc_39dim */
extern "C" __attribute__((visibility("default"))) int wakeupDelta_Acc_39dim(void) {
    ALOGD("wakeupDelta_Acc_39dim() called");
    return 0;
}

/* Demangled: wakeup_TQ_refine_mfcc */
extern "C" __attribute__((visibility("default"))) int wakeup_TQ_refine_mfcc(void) {
    ALOGD("wakeup_TQ_refine_mfcc() called");
    return 0;
}

/* Exported Object: sprintf_buf */
extern "C" __attribute__((visibility("default"))) void* sprintf_buf = NULL;

/* Demangled: TestingRelease_impl */
extern "C" __attribute__((visibility("default"))) int TestingRelease_impl(void) {
    ALOGD("TestingRelease_impl() called");
    return 0;
}

/* Exported Object: UttInfo */
extern "C" __attribute__((visibility("default"))) void* UttInfo = NULL;

/* Exported Object: vow_Pre_all_filler */
extern "C" __attribute__((visibility("default"))) void* vow_Pre_all_filler = NULL;

/* Exported Object: noiseStartIdx_exhaustedSelect */
extern "C" __attribute__((visibility("default"))) void* noiseStartIdx_exhaustedSelect = NULL;

/* Exported Object: wakeupWriteWAV */
extern "C" __attribute__((visibility("default"))) void* wakeupWriteWAV = NULL;

/* Demangled: wakeup_TQ_Energy */
extern "C" __attribute__((visibility("default"))) int wakeup_TQ_Energy(void) {
    ALOGD("wakeup_TQ_Energy() called");
    return 0;
}

/* Demangled: wakeup_dynamicThInit */
extern "C" __attribute__((visibility("default"))) int wakeup_dynamicThInit(void) {
    ALOGD("wakeup_dynamicThInit() called");
    return 0;
}

/* Exported Object: Speaker_ID_Mixture */
extern "C" __attribute__((visibility("default"))) void* Speaker_ID_Mixture = NULL;

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: VOWE_P23_training_version */
extern "C" __attribute__((visibility("default"))) int VOWE_P23_training_version(void) {
    ALOGD("VOWE_P23_training_version() called");
    return 0;
}

/* Demangled: createHammingWindow */
extern "C" __attribute__((visibility("default"))) int createHammingWindow(void) {
    ALOGD("createHammingWindow() called");
    return 0;
}

/* Demangled: wakeup_constructEnrollData */
extern "C" __attribute__((visibility("default"))) int wakeup_constructEnrollData(void) {
    ALOGD("wakeup_constructEnrollData() called");
    return 0;
}

/* Exported Object: vow_rcdif_merged_model_name_table */
extern "C" __attribute__((visibility("default"))) void* vow_rcdif_merged_model_name_table = NULL;

/* Demangled: findFloatArrayMax_nbest */
extern "C" __attribute__((visibility("default"))) int findFloatArrayMax_nbest(void) {
    ALOGD("findFloatArrayMax_nbest() called");
    return 0;
}

/* Exported Object: rawUbmModelSize */
extern "C" __attribute__((visibility("default"))) void* rawUbmModelSize = NULL;

/* Demangled: getVoiceUnlockVersion */
extern "C" __attribute__((visibility("default"))) int getVoiceUnlockVersion(void) {
    ALOGD("getVoiceUnlockVersion() called");
    return 0;
}

/* Demangled: Min */
extern "C" __attribute__((visibility("default"))) int Min(void) {
    ALOGD("Min() called");
    return 0;
}

/* Exported Object: noiseShift_exhaustedSelect */
extern "C" __attribute__((visibility("default"))) void* noiseShift_exhaustedSelect = NULL;

/* Demangled: cmdRecDecode */
extern "C" __attribute__((visibility("default"))) int cmdRecDecode(void) {
    ALOGD("cmdRecDecode() called");
    return 0;
}

/* Demangled: vow_command_parser_static_short_filler */
extern "C" __attribute__((visibility("default"))) int vow_command_parser_static_short_filler(void) {
    ALOGD("vow_command_parser_static_short_filler() called");
    return 0;
}

/* Exported Object: ID_Precision */
extern "C" __attribute__((visibility("default"))) void* ID_Precision = NULL;

/* Demangled: countVadSnr */
extern "C" __attribute__((visibility("default"))) int countVadSnr(void) {
    ALOGD("countVadSnr() called");
    return 0;
}

/* Demangled: wakeupSNRCalculation */
extern "C" __attribute__((visibility("default"))) int wakeupSNRCalculation(void) {
    ALOGD("wakeupSNRCalculation() called");
    return 0;
}

/* Demangled: wakeup_SNR_Detection_sample_based */
extern "C" __attribute__((visibility("default"))) int wakeup_SNR_Detection_sample_based(void) {
    ALOGD("wakeup_SNR_Detection_sample_based() called");
    return 0;
}

/* Exported Object: ANTI_CMD_UPPER_TH */
extern "C" __attribute__((visibility("default"))) void* ANTI_CMD_UPPER_TH = NULL;

/* Exported Object: DEFAULT_TIMEOUT */
extern "C" __attribute__((visibility("default"))) void* DEFAULT_TIMEOUT = NULL;

/* Demangled: vowMergeMandarinEnglishHMMModel_binary_short */
extern "C" __attribute__((visibility("default"))) int vowMergeMandarinEnglishHMMModel_binary_short(void) {
    ALOGD("vowMergeMandarinEnglishHMMModel_binary_short() called");
    return 0;
}

/* Demangled: Write_GMM_Model_Simple */
extern "C" __attribute__((visibility("default"))) int Write_GMM_Model_Simple(void) {
    ALOGD("Write_GMM_Model_Simple() called");
    return 0;
}

/* Exported Object: TempFeature */
extern "C" __attribute__((visibility("default"))) void* TempFeature = NULL;

/* Demangled: RCmul */
extern "C" __attribute__((visibility("default"))) int RCmul(void) {
    ALOGD("RCmul() called");
    return 0;
}

/* Demangled: mfccFft */
extern "C" __attribute__((visibility("default"))) int mfccFft(void) {
    ALOGD("mfccFft() called");
    return 0;
}

/* Demangled: wakeupDCT */
extern "C" __attribute__((visibility("default"))) int wakeupDCT(void) {
    ALOGD("wakeupDCT() called");
    return 0;
}

/* Demangled: wakeupMultiConditionFE_spkRate */
extern "C" __attribute__((visibility("default"))) int wakeupMultiConditionFE_spkRate(void) {
    ALOGD("wakeupMultiConditionFE_spkRate() called");
    return 0;
}

/* Demangled: get_SNR_debug */
extern "C" __attribute__((visibility("default"))) int get_SNR_debug(void) {
    ALOGD("get_SNR_debug() called");
    return 0;
}

/* Exported Object: wakeupTrainingPhase */
extern "C" __attribute__((visibility("default"))) void* wakeupTrainingPhase = NULL;

/* Demangled: wakeup_TrainingRelease */
extern "C" __attribute__((visibility("default"))) int wakeup_TrainingRelease(void) {
    ALOGD("wakeup_TrainingRelease() called");
    return 0;
}

/* Demangled: getTrainingGlobalConfidenceThresholds */
extern "C" __attribute__((visibility("default"))) int getTrainingGlobalConfidenceThresholds(void) {
    ALOGD("getTrainingGlobalConfidenceThresholds() called");
    return 0;
}

/* Exported Object: Tj_temp */
extern "C" __attribute__((visibility("default"))) void* Tj_temp = NULL;

/* Demangled: DLInit_impl */
extern "C" __attribute__((visibility("default"))) int DLInit_impl(void) {
    ALOGD("DLInit_impl() called");
    return 0;
}

/* Exported Object: FD1 */
extern "C" __attribute__((visibility("default"))) void* FD1 = NULL;

/* Exported Object: noiseNum_exhaustedSelect */
extern "C" __attribute__((visibility("default"))) void* noiseNum_exhaustedSelect = NULL;

/* Demangled: wakeupMultiConditionFE2 */
extern "C" __attribute__((visibility("default"))) int wakeupMultiConditionFE2(void) {
    ALOGD("wakeupMultiConditionFE2() called");
    return 0;
}

/* Demangled: getNewPhase1Para */
extern "C" __attribute__((visibility("default"))) int getNewPhase1Para(void) {
    ALOGD("getNewPhase1Para() called");
    return 0;
}

/* Demangled: adptHMM_writer_fileID */
extern "C" __attribute__((visibility("default"))) int adptHMM_writer_fileID(void) {
    ALOGD("adptHMM_writer_fileID() called");
    return 0;
}

/* Exported Object: FD2 */
extern "C" __attribute__((visibility("default"))) void* FD2 = NULL;

/* Exported Object: MAX_WAKEUP_FRAME_NUMBER */
extern "C" __attribute__((visibility("default"))) void* MAX_WAKEUP_FRAME_NUMBER = NULL;

/* Exported Object: SNR_UPPER_TH */
extern "C" __attribute__((visibility("default"))) void* SNR_UPPER_TH = NULL;

/* Demangled: findShortArrayMax */
extern "C" __attribute__((visibility("default"))) int findShortArrayMax(void) {
    ALOGD("findShortArrayMax() called");
    return 0;
}

/* Demangled: VOWE_P23_training_getIntegerArgument */
extern "C" __attribute__((visibility("default"))) int VOWE_P23_training_getIntegerArgument(void) {
    ALOGD("VOWE_P23_training_getIntegerArgument() called");
    return 0;
}

/* Demangled: wakeupDC_Removal */
extern "C" __attribute__((visibility("default"))) int wakeupDC_Removal(void) {
    ALOGD("wakeupDC_Removal() called");
    return 0;
}

/* Exported Object: Tj */
extern "C" __attribute__((visibility("default"))) void* Tj = NULL;

/* Demangled: addNoiseReleaseVad */
extern "C" __attribute__((visibility("default"))) int addNoiseReleaseVad(void) {
    ALOGD("addNoiseReleaseVad() called");
    return 0;
}

/* Exported Object: vow_Mix_gconst_all_filler */
extern "C" __attribute__((visibility("default"))) void* vow_Mix_gconst_all_filler = NULL;

/* Demangled: enroll */
extern "C" __attribute__((visibility("default"))) int enroll(void) {
    ALOGD("enroll() called");
    return 0;
}

/* Demangled: wakeupMelWindow_Release */
extern "C" __attribute__((visibility("default"))) int wakeupMelWindow_Release(void) {
    ALOGD("wakeupMelWindow_Release() called");
    return 0;
}

/* Exported Object: vowFModel_name_table */
extern "C" __attribute__((visibility("default"))) void* vowFModel_name_table = NULL;

/* Demangled: Read_GMM_Model_Binary */
extern "C" __attribute__((visibility("default"))) int Read_GMM_Model_Binary(void) {
    ALOGD("Read_GMM_Model_Binary() called");
    return 0;
}

/* Demangled: adptHMM_loader_v8float_varMix */
extern "C" __attribute__((visibility("default"))) int adptHMM_loader_v8float_varMix(void) {
    ALOGD("adptHMM_loader_v8float_varMix() called");
    return 0;
}

/* Exported Object: isTrainingStopped */
extern "C" __attribute__((visibility("default"))) void* isTrainingStopped = NULL;

/* Demangled: DIF_FFT_normalize */
extern "C" __attribute__((visibility("default"))) int DIF_FFT_normalize(void) {
    ALOGD("DIF_FFT_normalize() called");
    return 0;
}

/* Demangled: Read_GMM_Model */
extern "C" __attribute__((visibility("default"))) int Read_GMM_Model(void) {
    ALOGD("Read_GMM_Model() called");
    return 0;
}

/* Demangled: addNoise_origin */
extern "C" __attribute__((visibility("default"))) int addNoise_origin(void) {
    ALOGD("addNoise_origin() called");
    return 0;
}

/* Demangled: threadpool_free */
extern "C" __attribute__((visibility("default"))) int threadpool_free(void) {
    ALOGD("threadpool_free() called");
    return 0;
}

/* Demangled: mfccFE */
extern "C" __attribute__((visibility("default"))) int mfccFE(void) {
    ALOGD("mfccFE() called");
    return 0;
}

/* Demangled: wakeupSpeechSegmentSelection_MatchedMVN */
extern "C" __attribute__((visibility("default"))) int wakeupSpeechSegmentSelection_MatchedMVN(void) {
    ALOGD("wakeupSpeechSegmentSelection_MatchedMVN() called");
    return 0;
}

/* Exported Object: wakeupTQ_lhRatio */
extern "C" __attribute__((visibility("default"))) void* wakeupTQ_lhRatio = NULL;

/* Exported Object: VAD_SNR_THRESHOLD */
extern "C" __attribute__((visibility("default"))) void* VAD_SNR_THRESHOLD = NULL;

/* Demangled: vowScoreCommandsUi */
extern "C" __attribute__((visibility("default"))) int vowScoreCommandsUi(void) {
    ALOGD("vowScoreCommandsUi() called");
    return 0;
}

/* Demangled: Write_Header */
extern "C" __attribute__((visibility("default"))) int Write_Header(void) {
    ALOGD("Write_Header() called");
    return 0;
}

/* Exported Object: Wake_DCT_coef */
extern "C" __attribute__((visibility("default"))) void* Wake_DCT_coef = NULL;

/* Demangled: copyRedundantParam */
extern "C" __attribute__((visibility("default"))) int copyRedundantParam(void) {
    ALOGD("copyRedundantParam() called");
    return 0;
}

/* Exported Object: pushToTalk */
extern "C" __attribute__((visibility("default"))) void* pushToTalk = NULL;

/* Demangled: cmdRecInit */
extern "C" __attribute__((visibility("default"))) int cmdRecInit(void) {
    ALOGD("cmdRecInit() called");
    return 0;
}

/* Demangled: fft_real */
extern "C" __attribute__((visibility("default"))) int fft_real(void) {
    ALOGD("fft_real() called");
    return 0;
}

/* Demangled: AdptHMM_model_parser2 */
extern "C" __attribute__((visibility("default"))) int AdptHMM_model_parser2(void) {
    ALOGD("AdptHMM_model_parser2() called");
    return 0;
}

/* Demangled: mapGMM_threadpool_func */
extern "C" __attribute__((visibility("default"))) int mapGMM_threadpool_func(void) {
    ALOGD("mapGMM_threadpool_func() called");
    return 0;
}

/* Exported Object: trainingTQFftDebugMessageFullPath */
extern "C" __attribute__((visibility("default"))) void* trainingTQFftDebugMessageFullPath = NULL;

/* Demangled: GMM_model_parser */
extern "C" __attribute__((visibility("default"))) int GMM_model_parser(void) {
    ALOGD("GMM_model_parser() called");
    return 0;
}

/* Demangled: free2DFloatArray */
extern "C" __attribute__((visibility("default"))) int free2DFloatArray(void) {
    ALOGD("free2DFloatArray() called");
    return 0;
}

/* Demangled: wakeupGmmModelParser */
extern "C" __attribute__((visibility("default"))) int wakeupGmmModelParser(void) {
    ALOGD("wakeupGmmModelParser() called");
    return 0;
}

/* Exported Object: RIR_RATIO */
extern "C" __attribute__((visibility("default"))) void* RIR_RATIO = NULL;

/* Exported Object: mu_vector_sum */
extern "C" __attribute__((visibility("default"))) void* mu_vector_sum = NULL;

/* Exported Object: em_done_criteria */
extern "C" __attribute__((visibility("default"))) void* em_done_criteria = NULL;

/* Demangled: wakeup_onTraining_MC_DIS */
extern "C" __attribute__((visibility("default"))) int wakeup_onTraining_MC_DIS(void) {
    ALOGD("wakeup_onTraining_MC_DIS() called");
    return 0;
}

/* Exported Object: UttPcmList */
extern "C" __attribute__((visibility("default"))) void* UttPcmList = NULL;

/* Demangled: setTrainingUttNumber */
extern "C" __attribute__((visibility("default"))) int setTrainingUttNumber(void) {
    ALOGD("setTrainingUttNumber() called");
    return 0;
}

/* Exported Object: TempFrameNum */
extern "C" __attribute__((visibility("default"))) void* TempFrameNum = NULL;

/* Demangled: initShortArray */
extern "C" __attribute__((visibility("default"))) int initShortArray(void) {
    ALOGD("initShortArray() called");
    return 0;
}

/* Exported Object: McNoisyTrainingNum */
extern "C" __attribute__((visibility("default"))) void* McNoisyTrainingNum = NULL;

/* Exported Object: VAD_LOW_BAND */
extern "C" __attribute__((visibility("default"))) void* VAD_LOW_BAND = NULL;

/* Exported Object: vow_english_monorcdif376_model_name_table */
extern "C" __attribute__((visibility("default"))) void* vow_english_monorcdif376_model_name_table = NULL;

/* Demangled: array1NormDistance */
extern "C" __attribute__((visibility("default"))) int array1NormDistance(void) {
    ALOGD("array1NormDistance() called");
    return 0;
}

/* Demangled: speakerPoolSelection */
extern "C" __attribute__((visibility("default"))) int speakerPoolSelection(void) {
    ALOGD("speakerPoolSelection() called");
    return 0;
}

/* Demangled: getTrainingUttNumber */
extern "C" __attribute__((visibility("default"))) int getTrainingUttNumber(void) {
    ALOGD("getTrainingUttNumber() called");
    return 0;
}

/* Demangled: evalLogLike_calOnlyMovedMix_SV */
extern "C" __attribute__((visibility("default"))) int evalLogLike_calOnlyMovedMix_SV(void) {
    ALOGD("evalLogLike_calOnlyMovedMix_SV() called");
    return 0;
}

/* Demangled: VoiceUnlockCustomization_impl */
extern "C" __attribute__((visibility("default"))) int VoiceUnlockCustomization_impl(void) {
    ALOGD("VoiceUnlockCustomization_impl() called");
    return 0;
}

/* Demangled: wakeupSpeechSegmentSelection */
extern "C" __attribute__((visibility("default"))) int wakeupSpeechSegmentSelection(void) {
    ALOGD("wakeupSpeechSegmentSelection() called");
    return 0;
}

/* Exported Object: trainingNlDebugMessageFullPath */
extern "C" __attribute__((visibility("default"))) void* trainingNlDebugMessageFullPath = NULL;

/* Demangled: adptHMM_writer_filePath */
extern "C" __attribute__((visibility("default"))) int adptHMM_writer_filePath(void) {
    ALOGD("adptHMM_writer_filePath() called");
    return 0;
}

/* Demangled: magn_c */
extern "C" __attribute__((visibility("default"))) int magn_c(void) {
    ALOGD("magn_c() called");
    return 0;
}

/* Exported Object: WakeupMultiConditionVADInfo */
extern "C" __attribute__((visibility("default"))) void* WakeupMultiConditionVADInfo = NULL;

/* Exported Object: wakeupTQ_TotalV */
extern "C" __attribute__((visibility("default"))) void* wakeupTQ_TotalV = NULL;

/* Exported Object: vow_mandarin_rcdif_english_monorcdif232_merged_model_name_table */
extern "C" __attribute__((visibility("default"))) void* vow_mandarin_rcdif_english_monorcdif232_merged_model_name_table = NULL;

/* Demangled: ExpSafe */
extern "C" __attribute__((visibility("default"))) int ExpSafe(void) {
    ALOGD("ExpSafe() called");
    return 0;
}

/* Demangled: model_appender_v7float */
extern "C" __attribute__((visibility("default"))) int model_appender_v7float(void) {
    ALOGD("model_appender_v7float() called");
    return 0;
}

/* Demangled: sumShortArray */
extern "C" __attribute__((visibility("default"))) int sumShortArray(void) {
    ALOGD("sumShortArray() called");
    return 0;
}

/* Demangled: addNoiseDataBufferInit */
extern "C" __attribute__((visibility("default"))) int addNoiseDataBufferInit(void) {
    ALOGD("addNoiseDataBufferInit() called");
    return 0;
}

/* Exported Object: ubmModel4Train */
extern "C" __attribute__((visibility("default"))) void* ubmModel4Train = NULL;

/* Demangled: getCommonConfigParameters */
extern "C" __attribute__((visibility("default"))) int getCommonConfigParameters(void) {
    ALOGD("getCommonConfigParameters() called");
    return 0;
}

/* Demangled: MelWindow_Release */
extern "C" __attribute__((visibility("default"))) int MelWindow_Release(void) {
    ALOGD("MelWindow_Release() called");
    return 0;
}

/* Demangled: wakeup_RecordingInit */
extern "C" __attribute__((visibility("default"))) int wakeup_RecordingInit(void) {
    ALOGD("wakeup_RecordingInit() called");
    return 0;
}

/* Exported Object: pi */
extern "C" __attribute__((visibility("default"))) void* pi = NULL;

/* Demangled: model_appender_v8float_varMix */
extern "C" __attribute__((visibility("default"))) int model_appender_v8float_varMix(void) {
    ALOGD("model_appender_v8float_varMix() called");
    return 0;
}

/* Demangled: featureRelease */
extern "C" __attribute__((visibility("default"))) int featureRelease(void) {
    ALOGD("featureRelease() called");
    return 0;
}

/* Demangled: VOWE_P23_training_setFloatArgument */
extern "C" __attribute__((visibility("default"))) int VOWE_P23_training_setFloatArgument(void) {
    ALOGD("VOWE_P23_training_setFloatArgument() called");
    return 0;
}

/* Demangled: feaRead */
extern "C" __attribute__((visibility("default"))) int feaRead(void) {
    ALOGD("feaRead() called");
    return 0;
}

/* Demangled: MCAddNoiseFEFlow */
extern "C" __attribute__((visibility("default"))) int MCAddNoiseFEFlow(void) {
    ALOGD("MCAddNoiseFEFlow() called");
    return 0;
}

/* Demangled: DIF_FFT_C_code */
extern "C" __attribute__((visibility("default"))) int DIF_FFT_C_code(void) {
    ALOGD("DIF_FFT_C_code() called");
    return 0;
}

/* Exported Object: out_File */
extern "C" __attribute__((visibility("default"))) void* out_File = NULL;

/* Demangled: getRawUbmSize */
extern "C" __attribute__((visibility("default"))) int getRawUbmSize(void) {
    ALOGD("getRawUbmSize() called");
    return 0;
}

/* Demangled: globalMemoryAllocate */
extern "C" __attribute__((visibility("default"))) int globalMemoryAllocate(void) {
    ALOGD("globalMemoryAllocate() called");
    return 0;
}

/* Demangled: allocRIR */
extern "C" __attribute__((visibility("default"))) int allocRIR(void) {
    ALOGD("allocRIR() called");
    return 0;
}

/* Exported Object: foolproofUbm */
extern "C" __attribute__((visibility("default"))) void* foolproofUbm = NULL;

/* Demangled: version */
extern "C" __attribute__((visibility("default"))) int version(void) {
    ALOGD("version() called");
    return 0;
}

/* Exported Object: _Speaker_ID_model */
extern "C" __attribute__((visibility("default"))) void* _Speaker_ID_model = NULL;

/* Demangled: threadpool_destroy */
extern "C" __attribute__((visibility("default"))) int threadpool_destroy(void) {
    ALOGD("threadpool_destroy() called");
    return 0;
}

/* Demangled: RecordingInit */
extern "C" __attribute__((visibility("default"))) int RecordingInit(void) {
    ALOGD("RecordingInit() called");
    return 0;
}

/* Demangled: addNoise */
extern "C" __attribute__((visibility("default"))) int addNoise(void) {
    ALOGD("addNoise() called");
    return 0;
}

/* Exported Object: MCCleanUtt4TrainingNum */
extern "C" __attribute__((visibility("default"))) void* MCCleanUtt4TrainingNum = NULL;

/* Exported Object: monophone_HMM_model1 */
extern "C" __attribute__((visibility("default"))) void* monophone_HMM_model1 = NULL;

/* Demangled: copyFloatArr */
extern "C" __attribute__((visibility("default"))) int copyFloatArr(void) {
    ALOGD("copyFloatArr() called");
    return 0;
}

/* Demangled: NoiseAdd */
extern "C" __attribute__((visibility("default"))) int NoiseAdd(void) {
    ALOGD("NoiseAdd() called");
    return 0;
}

/* Exported Object: monophone_HMM_model2 */
extern "C" __attribute__((visibility("default"))) void* monophone_HMM_model2 = NULL;

/* Demangled: vowNewUiShell */
extern "C" __attribute__((visibility("default"))) int vowNewUiShell(void) {
    ALOGD("vowNewUiShell() called");
    return 0;
}

/* Demangled: TestingInit_impl */
extern "C" __attribute__((visibility("default"))) int TestingInit_impl(void) {
    ALOGD("TestingInit_impl() called");
    return 0;
}

/* Exported Object: monophone_HMM_model3 */
extern "C" __attribute__((visibility("default"))) void* monophone_HMM_model3 = NULL;

/* Demangled: GMM_model_free */
extern "C" __attribute__((visibility("default"))) int GMM_model_free(void) {
    ALOGD("GMM_model_free() called");
    return 0;
}

/* Exported Object: FeaturePara */
extern "C" __attribute__((visibility("default"))) void* FeaturePara = NULL;

/* Exported Object: testingSNRDebugMessageFullPath */
extern "C" __attribute__((visibility("default"))) void* testingSNRDebugMessageFullPath = NULL;

/* Exported Object: monophone_HMM_model4 */
extern "C" __attribute__((visibility("default"))) void* monophone_HMM_model4 = NULL;

/* Exported Object: out_Model */
extern "C" __attribute__((visibility("default"))) void* out_Model = NULL;

/* Exported Object: Wake_Begin_Window */
extern "C" __attribute__((visibility("default"))) void* Wake_Begin_Window = NULL;

/* Exported Object: WakeupTestDP */
extern "C" __attribute__((visibility("default"))) void* WakeupTestDP = NULL;

/* Demangled: wakeupDoApplyFIR */
extern "C" __attribute__((visibility("default"))) int wakeupDoApplyFIR(void) {
    ALOGD("wakeupDoApplyFIR() called");
    return 0;
}

/* Exported Object: monophone_HMM_model5 */
extern "C" __attribute__((visibility("default"))) void* monophone_HMM_model5 = NULL;

/* Demangled: concate2OneHMMfromPhoneModels */
extern "C" __attribute__((visibility("default"))) int concate2OneHMMfromPhoneModels(void) {
    ALOGD("concate2OneHMMfromPhoneModels() called");
    return 0;
}

/* Demangled: DC_Removal */
extern "C" __attribute__((visibility("default"))) int DC_Removal(void) {
    ALOGD("DC_Removal() called");
    return 0;
}

/* Demangled: arrayTransform_short2float */
extern "C" __attribute__((visibility("default"))) int arrayTransform_short2float(void) {
    ALOGD("arrayTransform_short2float() called");
    return 0;
}

/* Demangled: deallocRIR */
extern "C" __attribute__((visibility("default"))) int deallocRIR(void) {
    ALOGD("deallocRIR() called");
    return 0;
}

/* Demangled: wakeupApplyFIR */
extern "C" __attribute__((visibility("default"))) int wakeupApplyFIR(void) {
    ALOGD("wakeupApplyFIR() called");
    return 0;
}

/* Demangled: wakeupGmmParserBinary */
extern "C" __attribute__((visibility("default"))) int wakeupGmmParserBinary(void) {
    ALOGD("wakeupGmmParserBinary() called");
    return 0;
}

/* Demangled: wakeupProgressiveVAD */
extern "C" __attribute__((visibility("default"))) int wakeupProgressiveVAD(void) {
    ALOGD("wakeupProgressiveVAD() called");
    return 0;
}

/* Demangled: wakeup_onTraining_DIS_MCfromSpkr */
extern "C" __attribute__((visibility("default"))) int wakeup_onTraining_DIS_MCfromSpkr(void) {
    ALOGD("wakeup_onTraining_DIS_MCfromSpkr() called");
    return 0;
}

/* Demangled: get_TQ_MFCC_debug */
extern "C" __attribute__((visibility("default"))) int get_TQ_MFCC_debug(void) {
    ALOGD("get_TQ_MFCC_debug() called");
    return 0;
}

/* Exported Object: unlockWakeupMode */
extern "C" __attribute__((visibility("default"))) void* unlockWakeupMode = NULL;

/* Demangled: getTrainingPassNoiseLevel */
extern "C" __attribute__((visibility("default"))) int getTrainingPassNoiseLevel(void) {
    ALOGD("getTrainingPassNoiseLevel() called");
    return 0;
}

/* Demangled: constructEnrollData_impl */
extern "C" __attribute__((visibility("default"))) int constructEnrollData_impl(void) {
    ALOGD("constructEnrollData_impl() called");
    return 0;
}

/* Demangled: getEnrollmentModelSize */
extern "C" __attribute__((visibility("default"))) int getEnrollmentModelSize(void) {
    ALOGD("getEnrollmentModelSize() called");
    return 0;
}

/* Demangled: wakeupTransTable_builder4OneHMM */
extern "C" __attribute__((visibility("default"))) int wakeupTransTable_builder4OneHMM(void) {
    ALOGD("wakeupTransTable_builder4OneHMM() called");
    return 0;
}

/* Exported Object: WriteWAV_LinearBuf */
extern "C" __attribute__((visibility("default"))) void* WriteWAV_LinearBuf = NULL;

/* Demangled: setFloatArray_LowerBound */
extern "C" __attribute__((visibility("default"))) int setFloatArray_LowerBound(void) {
    ALOGD("setFloatArray_LowerBound() called");
    return 0;
}

/* Demangled: getConcatedModelSizes_p23 */
extern "C" __attribute__((visibility("default"))) int getConcatedModelSizes_p23(void) {
    ALOGD("getConcatedModelSizes_p23() called");
    return 0;
}

/* Demangled: gettrainLastUtteranceSnr */
extern "C" __attribute__((visibility("default"))) int gettrainLastUtteranceSnr(void) {
    ALOGD("gettrainLastUtteranceSnr() called");
    return 0;
}

/* Demangled: GMM_Posterior */
extern "C" __attribute__((visibility("default"))) int GMM_Posterior(void) {
    ALOGD("GMM_Posterior() called");
    return 0;
}

/* Demangled: rightShiftShortArray */
extern "C" __attribute__((visibility("default"))) int rightShiftShortArray(void) {
    ALOGD("rightShiftShortArray() called");
    return 0;
}

/* Demangled: wakeupMultiConditionFE */
extern "C" __attribute__((visibility("default"))) int wakeupMultiConditionFE(void) {
    ALOGD("wakeupMultiConditionFE() called");
    return 0;
}

/* Exported Object: returnMe */
extern "C" __attribute__((visibility("default"))) void* returnMe = NULL;

/* Demangled: _CPLOGGER_closeLogTarget */
extern "C" __attribute__((visibility("default"))) int _CPLOGGER_closeLogTarget(void) {
    ALOGD("_CPLOGGER_closeLogTarget() called");
    return 0;
}

/* Exported Object: BrownNoise */
extern "C" __attribute__((visibility("default"))) void* BrownNoise = NULL;

/* Exported Object: savingSpeakerModelFullPath */
extern "C" __attribute__((visibility("default"))) void* savingSpeakerModelFullPath = NULL;

/* Demangled: wakeupTrainingInit */
extern "C" __attribute__((visibility("default"))) int wakeupTrainingInit(void) {
    ALOGD("wakeupTrainingInit() called");
    return 0;
}

/* Exported Object: settings */
extern "C" __attribute__((visibility("default"))) void* settings = NULL;

/* Exported Object: BROWN_NOISE_SCORE */
extern "C" __attribute__((visibility("default"))) void* BROWN_NOISE_SCORE = NULL;

/* Demangled: vowLoadMultilingualHmmModelsForMergeFromFile */
extern "C" __attribute__((visibility("default"))) int vowLoadMultilingualHmmModelsForMergeFromFile(void) {
    ALOGD("vowLoadMultilingualHmmModelsForMergeFromFile() called");
    return 0;
}

/* Exported Object: ubmModelTestingParam */
extern "C" __attribute__((visibility("default"))) void* ubmModelTestingParam = NULL;

/* Demangled: initSuperParam */
extern "C" __attribute__((visibility("default"))) int initSuperParam(void) {
    ALOGD("initSuperParam() called");
    return 0;
}

/* Exported Object: TrainingConfidence */
extern "C" __attribute__((visibility("default"))) void* TrainingConfidence = NULL;

/* Demangled: parameterModifyForTab */
extern "C" __attribute__((visibility("default"))) int parameterModifyForTab(void) {
    ALOGD("parameterModifyForTab() called");
    return 0;
}

/* Demangled: Cadd */
extern "C" __attribute__((visibility("default"))) int Cadd(void) {
    ALOGD("Cadd() called");
    return 0;
}

/* Demangled: wakeupDelta_Acc_39dim2 */
extern "C" __attribute__((visibility("default"))) int wakeupDelta_Acc_39dim2(void) {
    ALOGD("wakeupDelta_Acc_39dim2() called");
    return 0;
}

/* Demangled: vowLAdd */
extern "C" __attribute__((visibility("default"))) int vowLAdd(void) {
    ALOGD("vowLAdd() called");
    return 0;
}

/* Exported Object: Kmeans_samp_mean */
extern "C" __attribute__((visibility("default"))) void* Kmeans_samp_mean = NULL;

/* Demangled: getModelSize */
extern "C" __attribute__((visibility("default"))) int getModelSize(void) {
    ALOGD("getModelSize() called");
    return 0;
}

/* Demangled: wakeupRegression */
extern "C" __attribute__((visibility("default"))) int wakeupRegression(void) {
    ALOGD("wakeupRegression() called");
    return 0;
}

/* Demangled: wakeup_SNR_Detection_frame_based */
extern "C" __attribute__((visibility("default"))) int wakeup_SNR_Detection_frame_based(void) {
    ALOGD("wakeup_SNR_Detection_frame_based() called");
    return 0;
}

/* Demangled: training_getIntegerArgument */
extern "C" __attribute__((visibility("default"))) int training_getIntegerArgument(void) {
    ALOGD("training_getIntegerArgument() called");
    return 0;
}

/* Exported Object: trainingORTesting */
extern "C" __attribute__((visibility("default"))) void* trainingORTesting = NULL;

/* Demangled: modifyRawUbmModel */
extern "C" __attribute__((visibility("default"))) int modifyRawUbmModel(void) {
    ALOGD("modifyRawUbmModel() called");
    return 0;
}

/* Demangled: write16bitPcm */
extern "C" __attribute__((visibility("default"))) int write16bitPcm(void) {
    ALOGD("write16bitPcm() called");
    return 0;
}

/* Exported Object: VADInfo */
extern "C" __attribute__((visibility("default"))) void* VADInfo = NULL;

/* Demangled: registCurrentTime */
extern "C" __attribute__((visibility("default"))) int registCurrentTime(void) {
    ALOGD("registCurrentTime() called");
    return 0;
}

/* Exported Object: test_UBM_dir */
extern "C" __attribute__((visibility("default"))) void* test_UBM_dir = NULL;

/* Demangled: vow_Filler_model_loader_binary_short */
extern "C" __attribute__((visibility("default"))) int vow_Filler_model_loader_binary_short(void) {
    ALOGD("vow_Filler_model_loader_binary_short() called");
    return 0;
}

/* Exported Object: wakeupFeature */
extern "C" __attribute__((visibility("default"))) void* wakeupFeature = NULL;

/* Demangled: threadpool_create */
extern "C" __attribute__((visibility("default"))) int threadpool_create(void) {
    ALOGD("threadpool_create() called");
    return 0;
}

/* Demangled: addNoiseFeatureInit */
extern "C" __attribute__((visibility("default"))) int addNoiseFeatureInit(void) {
    ALOGD("addNoiseFeatureInit() called");
    return 0;
}

/* Exported Object: trainingParam */
extern "C" __attribute__((visibility("default"))) void* trainingParam = NULL;

/* Exported Object: DEFAULT_UTTERANCE_NUM */
extern "C" __attribute__((visibility("default"))) void* DEFAULT_UTTERANCE_NUM = NULL;

/* Demangled: deallocSpkRate */
extern "C" __attribute__((visibility("default"))) int deallocSpkRate(void) {
    ALOGD("deallocSpkRate() called");
    return 0;
}

/* Demangled: onTraining_impl */
extern "C" __attribute__((visibility("default"))) int onTraining_impl(void) {
    ALOGD("onTraining_impl() called");
    return 0;
}

/* Demangled: TrainingInit_impl */
extern "C" __attribute__((visibility("default"))) int TrainingInit_impl(void) {
    ALOGD("TrainingInit_impl() called");
    return 0;
}

/* Demangled: freeAdptHMM_Model_fixed */
extern "C" __attribute__((visibility("default"))) int freeAdptHMM_Model_fixed(void) {
    ALOGD("freeAdptHMM_Model_fixed() called");
    return 0;
}

/* Demangled: wakeupCMVNLastFrameWithMemory */
extern "C" __attribute__((visibility("default"))) int wakeupCMVNLastFrameWithMemory(void) {
    ALOGD("wakeupCMVNLastFrameWithMemory() called");
    return 0;
}

/* Demangled: vowInitKWSMulti_impl */
extern "C" __attribute__((visibility("default"))) int vowInitKWSMulti_impl(void) {
    ALOGD("vowInitKWSMulti_impl() called");
    return 0;
}

/* Demangled: freeSuperParam */
extern "C" __attribute__((visibility("default"))) int freeSuperParam(void) {
    ALOGD("freeSuperParam() called");
    return 0;
}

/* Demangled: VOWE_P23_training_setArgument */
extern "C" __attribute__((visibility("default"))) int VOWE_P23_training_setArgument(void) {
    ALOGD("VOWE_P23_training_setArgument() called");
    return 0;
}

/* Demangled: wakeupKeywordTrainSim_P23 */
extern "C" __attribute__((visibility("default"))) int wakeupKeywordTrainSim_P23(void) {
    ALOGD("wakeupKeywordTrainSim_P23() called");
    return 0;
}

/* Demangled: vow_command_recognizer_parallel_fixed_static_short_phnboundary */
extern "C" __attribute__((visibility("default"))) int vow_command_recognizer_parallel_fixed_static_short_phnboundary(void) {
    ALOGD("vow_command_recognizer_parallel_fixed_static_short_phnboundary() called");
    return 0;
}

/* Exported Object: diagnosisParam */
extern "C" __attribute__((visibility("default"))) void* diagnosisParam = NULL;

/* Demangled: rtnWavMemoryAllocate */
extern "C" __attribute__((visibility("default"))) int rtnWavMemoryAllocate(void) {
    ALOGD("rtnWavMemoryAllocate() called");
    return 0;
}

/* Demangled: get_TQ_fft_debug */
extern "C" __attribute__((visibility("default"))) int get_TQ_fft_debug(void) {
    ALOGD("get_TQ_fft_debug() called");
    return 0;
}

/* Exported Object: Model_Training */
extern "C" __attribute__((visibility("default"))) void* Model_Training = NULL;

/* Demangled: addNoiseUttInit */
extern "C" __attribute__((visibility("default"))) int addNoiseUttInit(void) {
    ALOGD("addNoiseUttInit() called");
    return 0;
}

/* Demangled: frameBasedMVN */
extern "C" __attribute__((visibility("default"))) int frameBasedMVN(void) {
    ALOGD("frameBasedMVN() called");
    return 0;
}

/* Demangled: cmdRecRelease */
extern "C" __attribute__((visibility("default"))) int cmdRecRelease(void) {
    ALOGD("cmdRecRelease() called");
    return 0;
}

/* Demangled: VOWE_P23_testing_parseModel */
extern "C" __attribute__((visibility("default"))) int VOWE_P23_testing_parseModel(void) {
    ALOGD("VOWE_P23_testing_parseModel() called");
    return 0;
}

/* Exported Object: spkRateRepeatTimes */
extern "C" __attribute__((visibility("default"))) void* spkRateRepeatTimes = NULL;

/* Demangled: wakeupDCTCoef_Init */
extern "C" __attribute__((visibility("default"))) int wakeupDCTCoef_Init(void) {
    ALOGD("wakeupDCTCoef_Init() called");
    return 0;
}

/* Demangled: wakeupMel_Filter */
extern "C" __attribute__((visibility("default"))) int wakeupMel_Filter(void) {
    ALOGD("wakeupMel_Filter() called");
    return 0;
}

/* Exported Object: EN_WARMUP */
extern "C" __attribute__((visibility("default"))) void* EN_WARMUP = NULL;

/* Demangled: getTrainingPassSnr */
extern "C" __attribute__((visibility("default"))) int getTrainingPassSnr(void) {
    ALOGD("getTrainingPassSnr() called");
    return 0;
}

/* Demangled: vowLoadBinaryCommandFile */
extern "C" __attribute__((visibility("default"))) int vowLoadBinaryCommandFile(void) {
    ALOGD("vowLoadBinaryCommandFile() called");
    return 0;
}

/* Exported Object: ID_MixWeight */
extern "C" __attribute__((visibility("default"))) void* ID_MixWeight = NULL;

/* Exported Object: RIRTrainingNum */
extern "C" __attribute__((visibility("default"))) void* RIRTrainingNum = NULL;

/* Exported Object: wakeupWriteWavFile */
extern "C" __attribute__((visibility("default"))) void* wakeupWriteWavFile = NULL;

/* Demangled: getCommendConfidenceThreshold */
extern "C" __attribute__((visibility("default"))) int getCommendConfidenceThreshold(void) {
    ALOGD("getCommendConfidenceThreshold() called");
    return 0;
}

/* Demangled: wakeup_UttInit */
extern "C" __attribute__((visibility("default"))) int wakeup_UttInit(void) {
    ALOGD("wakeup_UttInit() called");
    return 0;
}

/* Exported Object: LNE_LOWER_TH */
extern "C" __attribute__((visibility("default"))) void* LNE_LOWER_TH = NULL;

/* Demangled: training_setFloatArrayArgument */
extern "C" __attribute__((visibility("default"))) int training_setFloatArrayArgument(void) {
    ALOGD("training_setFloatArrayArgument() called");
    return 0;
}

/* Exported Object: OutP2 */
extern "C" __attribute__((visibility("default"))) void* OutP2 = NULL;

/* Demangled: MixLogWeight */
extern "C" __attribute__((visibility("default"))) int MixLogWeight(void) {
    ALOGD("MixLogWeight() called");
    return 0;
}

/* Demangled: allocateState */
extern "C" __attribute__((visibility("default"))) int allocateState(void) {
    ALOGD("allocateState() called");
    return 0;
}

/* Demangled: Spectrum */
extern "C" __attribute__((visibility("default"))) int Spectrum(void) {
    ALOGD("Spectrum() called");
    return 0;
}

/* Demangled: globalMemoryRelease */
extern "C" __attribute__((visibility("default"))) int globalMemoryRelease(void) {
    ALOGD("globalMemoryRelease() called");
    return 0;
}

/* Demangled: saveUttPcm */
extern "C" __attribute__((visibility("default"))) int saveUttPcm(void) {
    ALOGD("saveUttPcm() called");
    return 0;
}

/* Demangled: wakeup_refine_alignment */
extern "C" __attribute__((visibility("default"))) int wakeup_refine_alignment(void) {
    ALOGD("wakeup_refine_alignment() called");
    return 0;
}

/* Demangled: initLinearFloatArray */
extern "C" __attribute__((visibility("default"))) int initLinearFloatArray(void) {
    ALOGD("initLinearFloatArray() called");
    return 0;
}

/* Demangled: CutWave */
extern "C" __attribute__((visibility("default"))) int CutWave(void) {
    ALOGD("CutWave() called");
    return 0;
}

/* Exported Object: cmdRecParas */
extern "C" __attribute__((visibility("default"))) void* cmdRecParas = NULL;

/* Demangled: updateNoiseLevel */
extern "C" __attribute__((visibility("default"))) int updateNoiseLevel(void) {
    ALOGD("updateNoiseLevel() called");
    return 0;
}

/* Demangled: wakeup_getEnrollmentNumMovedMixtures */
extern "C" __attribute__((visibility("default"))) int wakeup_getEnrollmentNumMovedMixtures(void) {
    ALOGD("wakeup_getEnrollmentNumMovedMixtures() called");
    return 0;
}

/* Exported Object: vow_monophone_merged_model_name_table */
extern "C" __attribute__((visibility("default"))) void* vow_monophone_merged_model_name_table = NULL;

/* Demangled: DIF_FFT */
extern "C" __attribute__((visibility("default"))) int DIF_FFT(void) {
    ALOGD("DIF_FFT() called");
    return 0;
}

/* Exported Object: exist_model_dir */
extern "C" __attribute__((visibility("default"))) void* exist_model_dir = NULL;

/* Exported Object: signalBuffer */
extern "C" __attribute__((visibility("default"))) void* signalBuffer = NULL;

/* Demangled: addNoiseReadPCM_Noise */
extern "C" __attribute__((visibility("default"))) int addNoiseReadPCM_Noise(void) {
    ALOGD("addNoiseReadPCM_Noise() called");
    return 0;
}

/* Exported Object: McSpkRateTrainingNum */
extern "C" __attribute__((visibility("default"))) void* McSpkRateTrainingNum = NULL;

/* Demangled: dumpUttPcm */
extern "C" __attribute__((visibility("default"))) int dumpUttPcm(void) {
    ALOGD("dumpUttPcm() called");
    return 0;
}

/* Exported Object: VAD_MODE_1 */
extern "C" __attribute__((visibility("default"))) void* VAD_MODE_1 = NULL;

/* Demangled: createRecognitionParameters */
extern "C" __attribute__((visibility("default"))) int createRecognitionParameters(void) {
    ALOGD("createRecognitionParameters() called");
    return 0;
}

/* Demangled: evalStatisticsWithSimpleDis */
extern "C" __attribute__((visibility("default"))) int evalStatisticsWithSimpleDis(void) {
    ALOGD("evalStatisticsWithSimpleDis() called");
    return 0;
}

/* Demangled: spkrFeatureConcate */
extern "C" __attribute__((visibility("default"))) int spkrFeatureConcate(void) {
    ALOGD("spkrFeatureConcate() called");
    return 0;
}

/* Exported Object: wakeupTQ_Energy */
extern "C" __attribute__((visibility("default"))) void* wakeupTQ_Energy = NULL;

/* Demangled: gettrainLastUtteranceConfidenceScores */
extern "C" __attribute__((visibility("default"))) int gettrainLastUtteranceConfidenceScores(void) {
    ALOGD("gettrainLastUtteranceConfidenceScores() called");
    return 0;
}

/* Demangled: fft_cmplx */
extern "C" __attribute__((visibility("default"))) int fft_cmplx(void) {
    ALOGD("fft_cmplx() called");
    return 0;
}

/* Demangled: parseConcatedModels_p23 */
extern "C" __attribute__((visibility("default"))) int parseConcatedModels_p23(void) {
    ALOGD("parseConcatedModels_p23() called");
    return 0;
}

/* Demangled: wakeupMelCoef_Init */
extern "C" __attribute__((visibility("default"))) int wakeupMelCoef_Init(void) {
    ALOGD("wakeupMelCoef_Init() called");
    return 0;
}

/* Demangled: wakeup_DPLLSRelease */
extern "C" __attribute__((visibility("default"))) int wakeup_DPLLSRelease(void) {
    ALOGD("wakeup_DPLLSRelease() called");
    return 0;
}

/* Demangled: constructEnrollData */
extern "C" __attribute__((visibility("default"))) int constructEnrollData(void) {
    ALOGD("constructEnrollData() called");
    return 0;
}

/* Demangled: GMMEval */
extern "C" __attribute__((visibility("default"))) int GMMEval(void) {
    ALOGD("GMMEval() called");
    return 0;
}

/* Exported Object: ID */
extern "C" __attribute__((visibility("default"))) void* ID = NULL;

/* Demangled: DoApplyFIR */
extern "C" __attribute__((visibility("default"))) int DoApplyFIR(void) {
    ALOGD("DoApplyFIR() called");
    return 0;
}

/* Exported Object: WakeupModels */
extern "C" __attribute__((visibility("default"))) void* WakeupModels = NULL;

/* Exported Object: forDTWFeaSet_Utt0 */
extern "C" __attribute__((visibility("default"))) void* forDTWFeaSet_Utt0 = NULL;

/* Exported Object: wakeupFeature_fixed */
extern "C" __attribute__((visibility("default"))) void* wakeupFeature_fixed = NULL;

/* Demangled: HMMEval */
extern "C" __attribute__((visibility("default"))) int HMMEval(void) {
    ALOGD("HMMEval() called");
    return 0;
}

/* Demangled: redistributeFeature */
extern "C" __attribute__((visibility("default"))) int redistributeFeature(void) {
    ALOGD("redistributeFeature() called");
    return 0;
}

/* Demangled: VOWE_P23_training_diagnose */
extern "C" __attribute__((visibility("default"))) int VOWE_P23_training_diagnose(void) {
    ALOGD("VOWE_P23_training_diagnose() called");
    return 0;
}

/* Demangled: resetDPtable */
extern "C" __attribute__((visibility("default"))) int resetDPtable(void) {
    ALOGD("resetDPtable() called");
    return 0;
}

/* Exported Object: DEFAULT_CONFIDENCE_TH */
extern "C" __attribute__((visibility("default"))) void* DEFAULT_CONFIDENCE_TH = NULL;

/* Exported Object: WakeupSpkrInfo */
extern "C" __attribute__((visibility("default"))) void* WakeupSpkrInfo = NULL;

/* Demangled: wakeup_onTraining_DIS_MCfromUBM */
extern "C" __attribute__((visibility("default"))) int wakeup_onTraining_DIS_MCfromUBM(void) {
    ALOGD("wakeup_onTraining_DIS_MCfromUBM() called");
    return 0;
}

/* Demangled: Conjugate */
extern "C" __attribute__((visibility("default"))) int Conjugate(void) {
    ALOGD("Conjugate() called");
    return 0;
}

/* Exported Object: trainingDLPcmFullPath */
extern "C" __attribute__((visibility("default"))) void* trainingDLPcmFullPath = NULL;

/* Demangled: Init_GMM_Model */
extern "C" __attribute__((visibility("default"))) int Init_GMM_Model(void) {
    ALOGD("Init_GMM_Model() called");
    return 0;
}

/* Exported Object: global_std_dev */
extern "C" __attribute__((visibility("default"))) void* global_std_dev = NULL;

/* Demangled: UttPcm2Linear */
extern "C" __attribute__((visibility("default"))) int UttPcm2Linear(void) {
    ALOGD("UttPcm2Linear() called");
    return 0;
}

/* Exported Object: siModelSizeInDSP */
extern "C" __attribute__((visibility("default"))) void* siModelSizeInDSP = NULL;

/* Demangled: wakeupMelWindow_Init */
extern "C" __attribute__((visibility("default"))) int wakeupMelWindow_Init(void) {
    ALOGD("wakeupMelWindow_Init() called");
    return 0;
}

/* Demangled: PCMDiagonosis_impl */
extern "C" __attribute__((visibility("default"))) int PCMDiagonosis_impl(void) {
    ALOGD("PCMDiagonosis_impl() called");
    return 0;
}

/* Demangled: training_getFloatArrayArgument */
extern "C" __attribute__((visibility("default"))) int training_getFloatArrayArgument(void) {
    ALOGD("training_getFloatArrayArgument() called");
    return 0;
}

/* Demangled: vowReleaseForScoreCommands */
extern "C" __attribute__((visibility("default"))) int vowReleaseForScoreCommands(void) {
    ALOGD("vowReleaseForScoreCommands() called");
    return 0;
}

/* Demangled: LAdd */
extern "C" __attribute__((visibility("default"))) int LAdd(void) {
    ALOGD("LAdd() called");
    return 0;
}

/* Demangled: printf_wrap */
extern "C" __attribute__((visibility("default"))) int printf_wrap(void) {
    ALOGD("printf_wrap() called");
    return 0;
}

/* Exported Object: LNE_UPPER_TH */
extern "C" __attribute__((visibility("default"))) void* LNE_UPPER_TH = NULL;

/* Exported Object: vow_english_rcdif_Model_name_table */
extern "C" __attribute__((visibility("default"))) void* vow_english_rcdif_Model_name_table = NULL;

/* Demangled: wakeupHMM_model_loader_binary_short */
extern "C" __attribute__((visibility("default"))) int wakeupHMM_model_loader_binary_short(void) {
    ALOGD("wakeupHMM_model_loader_binary_short() called");
    return 0;
}

/* Demangled: VOWE_P23_training_init */
extern "C" __attribute__((visibility("default"))) int VOWE_P23_training_init(void) {
    ALOGD("VOWE_P23_training_init() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: ar1_filter_1_16 */
extern "C" __attribute__((visibility("default"))) int ar1_filter_1_16(void) {
    ALOGD("ar1_filter_1_16() called");
    return 0;
}

/* Demangled: onTraining */
extern "C" __attribute__((visibility("default"))) int onTraining(void) {
    ALOGD("onTraining() called");
    return 0;
}

/* Demangled: HMMEval_fixed */
extern "C" __attribute__((visibility("default"))) int HMMEval_fixed(void) {
    ALOGD("HMMEval_fixed() called");
    return 0;
}

/* Demangled: getShortArrayHistogram */
extern "C" __attribute__((visibility("default"))) int getShortArrayHistogram(void) {
    ALOGD("getShortArrayHistogram() called");
    return 0;
}

/* Demangled: magnitude_c */
extern "C" __attribute__((visibility("default"))) int magnitude_c(void) {
    ALOGD("magnitude_c() called");
    return 0;
}

/* Demangled: setTrainingGlobalConfidenceThresholds */
extern "C" __attribute__((visibility("default"))) int setTrainingGlobalConfidenceThresholds(void) {
    ALOGD("setTrainingGlobalConfidenceThresholds() called");
    return 0;
}

/* Demangled: multiplyFloatArray */
extern "C" __attribute__((visibility("default"))) int multiplyFloatArray(void) {
    ALOGD("multiplyFloatArray() called");
    return 0;
}

/* Exported Object: trainingVadDebugMessageFullPath */
extern "C" __attribute__((visibility("default"))) void* trainingVadDebugMessageFullPath = NULL;

/* Exported Object: em_condition_mutex */
extern "C" __attribute__((visibility("default"))) void* em_condition_mutex = NULL;

/* Exported Object: WriteWAV */
extern "C" __attribute__((visibility("default"))) void* WriteWAV = NULL;

/* Demangled: insertRightShiftFloatArray */
extern "C" __attribute__((visibility("default"))) int insertRightShiftFloatArray(void) {
    ALOGD("insertRightShiftFloatArray() called");
    return 0;
}

/* Exported Object: WakeupLLS */
extern "C" __attribute__((visibility("default"))) void* WakeupLLS = NULL;

/* Demangled: speakerPoolSelectionBinary */
extern "C" __attribute__((visibility("default"))) int speakerPoolSelectionBinary(void) {
    ALOGD("speakerPoolSelectionBinary() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Exported Object: em_condition_cond */
extern "C" __attribute__((visibility("default"))) void* em_condition_cond = NULL;

/* Demangled: Regression */
extern "C" __attribute__((visibility("default"))) int Regression(void) {
    ALOGD("Regression() called");
    return 0;
}

/* Demangled: VOWE_P23_testing_getModelSize */
extern "C" __attribute__((visibility("default"))) int VOWE_P23_testing_getModelSize(void) {
    ALOGD("VOWE_P23_testing_getModelSize() called");
    return 0;
}

/* Demangled: addNoiseDcRemove */
extern "C" __attribute__((visibility("default"))) int addNoiseDcRemove(void) {
    ALOGD("addNoiseDcRemove() called");
    return 0;
}

/* Exported Object: frameIdxOffset4MultiCondition */
extern "C" __attribute__((visibility("default"))) void* frameIdxOffset4MultiCondition = NULL;

/* Demangled: rtnWavMemoryRelease */
extern "C" __attribute__((visibility("default"))) int rtnWavMemoryRelease(void) {
    ALOGD("rtnWavMemoryRelease() called");
    return 0;
}

/* Exported Object: testingPcmFullPath */
extern "C" __attribute__((visibility("default"))) void* testingPcmFullPath = NULL;

/* Demangled: setFloatArrayValue */
extern "C" __attribute__((visibility("default"))) int setFloatArrayValue(void) {
    ALOGD("setFloatArrayValue() called");
    return 0;
}

/* Demangled: _CPLOGGER_clearLogFile */
extern "C" __attribute__((visibility("default"))) int _CPLOGGER_clearLogFile(void) {
    ALOGD("_CPLOGGER_clearLogFile() called");
    return 0;
}

/* Demangled: training_getFloatArgument */
extern "C" __attribute__((visibility("default"))) int training_getFloatArgument(void) {
    ALOGD("training_getFloatArgument() called");
    return 0;
}

/* Exported Object: vow_english_monophone_Model_name_table */
extern "C" __attribute__((visibility("default"))) void* vow_english_monophone_Model_name_table = NULL;

/* Demangled: TrainingRelease */
extern "C" __attribute__((visibility("default"))) int TrainingRelease(void) {
    ALOGD("TrainingRelease() called");
    return 0;
}

/* Exported Object: DCT_coef */
extern "C" __attribute__((visibility("default"))) void* DCT_coef = NULL;

/* Exported Object: NoisyUttPcm */
extern "C" __attribute__((visibility("default"))) void* NoisyUttPcm = NULL;

/* Demangled: endPointDetection_impl */
extern "C" __attribute__((visibility("default"))) int endPointDetection_impl(void) {
    ALOGD("endPointDetection_impl() called");
    return 0;
}

/* Exported Object: Begin_Window */
extern "C" __attribute__((visibility("default"))) void* Begin_Window = NULL;

/* Demangled: insertFloatArrayRightShift */
extern "C" __attribute__((visibility("default"))) int insertFloatArrayRightShift(void) {
    ALOGD("insertFloatArrayRightShift() called");
    return 0;
}

/* Demangled: VOWE_P23_training_inputMic */
extern "C" __attribute__((visibility("default"))) int VOWE_P23_training_inputMic(void) {
    ALOGD("VOWE_P23_training_inputMic() called");
    return 0;
}

/* Demangled: timeStreching */
extern "C" __attribute__((visibility("default"))) int timeStreching(void) {
    ALOGD("timeStreching() called");
    return 0;
}

/* Exported Object: vow_Mix_weight_all_filler */
extern "C" __attribute__((visibility("default"))) void* vow_Mix_weight_all_filler = NULL;

/* Demangled: wakeup_getEnrollmentModelSize */
extern "C" __attribute__((visibility("default"))) int wakeup_getEnrollmentModelSize(void) {
    ALOGD("wakeup_getEnrollmentModelSize() called");
    return 0;
}

/* Demangled: VOWE_P23_training_setIntegerArgument */
extern "C" __attribute__((visibility("default"))) int VOWE_P23_training_setIntegerArgument(void) {
    ALOGD("VOWE_P23_training_setIntegerArgument() called");
    return 0;
}

/* Demangled: get_TQ_debug */
extern "C" __attribute__((visibility("default"))) int get_TQ_debug(void) {
    ALOGD("get_TQ_debug() called");
    return 0;
}

/* Demangled: PCMDiagonosis */
extern "C" __attribute__((visibility("default"))) int PCMDiagonosis(void) {
    ALOGD("PCMDiagonosis() called");
    return 0;
}

/* Demangled: getTrainingTimeout */
extern "C" __attribute__((visibility("default"))) int getTrainingTimeout(void) {
    ALOGD("getTrainingTimeout() called");
    return 0;
}

/* Demangled: evalLogLike_calOnlyMovedMix_keyword */
extern "C" __attribute__((visibility("default"))) int evalLogLike_calOnlyMovedMix_keyword(void) {
    ALOGD("evalLogLike_calOnlyMovedMix_keyword() called");
    return 0;
}

/* Exported Object: vow_mandarin_rcdif_english_monorcdif376_merged_model_name_table */
extern "C" __attribute__((visibility("default"))) void* vow_mandarin_rcdif_english_monorcdif376_merged_model_name_table = NULL;

/* Demangled: In_the_range */
extern "C" __attribute__((visibility("default"))) int In_the_range(void) {
    ALOGD("In_the_range() called");
    return 0;
}

/* Demangled: VOWE_P23_training_release */
extern "C" __attribute__((visibility("default"))) int VOWE_P23_training_release(void) {
    ALOGD("VOWE_P23_training_release() called");
    return 0;
}

/* Exported Object: VadInfo */
extern "C" __attribute__((visibility("default"))) void* VadInfo = NULL;

/* Exported Object: rcdif_HMM_model1 */
extern "C" __attribute__((visibility("default"))) void* rcdif_HMM_model1 = NULL;

/* Demangled: addNoiseReadPCM_Noise_idx */
extern "C" __attribute__((visibility("default"))) int addNoiseReadPCM_Noise_idx(void) {
    ALOGD("addNoiseReadPCM_Noise_idx() called");
    return 0;
}

/* Demangled: wakeupApplyDGgain */
extern "C" __attribute__((visibility("default"))) int wakeupApplyDGgain(void) {
    ALOGD("wakeupApplyDGgain() called");
    return 0;
}

/* Exported Object: rcdif_HMM_model2 */
extern "C" __attribute__((visibility("default"))) void* rcdif_HMM_model2 = NULL;

/* Exported Object: TrainingFrameNum */
extern "C" __attribute__((visibility("default"))) void* TrainingFrameNum = NULL;

/* Demangled: wakeupGmmDecoder */
extern "C" __attribute__((visibility("default"))) int wakeupGmmDecoder(void) {
    ALOGD("wakeupGmmDecoder() called");
    return 0;
}

/* Exported Object: rcdif_HMM_model3 */
extern "C" __attribute__((visibility("default"))) void* rcdif_HMM_model3 = NULL;

/* Demangled: Mel_Filter */
extern "C" __attribute__((visibility("default"))) int Mel_Filter(void) {
    ALOGD("Mel_Filter() called");
    return 0;
}

/* Demangled: ProgressiveVAD */
extern "C" __attribute__((visibility("default"))) int ProgressiveVAD(void) {
    ALOGD("ProgressiveVAD() called");
    return 0;
}

/* Demangled: vow_command_parser_static_short_deiformat_anti_binin */
extern "C" __attribute__((visibility("default"))) int vow_command_parser_static_short_deiformat_anti_binin(void) {
    ALOGD("vow_command_parser_static_short_deiformat_anti_binin() called");
    return 0;
}

/* Exported Object: recordFrameIdx */
extern "C" __attribute__((visibility("default"))) void* recordFrameIdx = NULL;

/* Exported Object: rcdif_HMM_model4 */
extern "C" __attribute__((visibility("default"))) void* rcdif_HMM_model4 = NULL;

/* Demangled: VOWE_P23_training_enroll */
extern "C" __attribute__((visibility("default"))) int VOWE_P23_training_enroll(void) {
    ALOGD("VOWE_P23_training_enroll() called");
    return 0;
}

/* Exported Object: rcdif_HMM_model5 */
extern "C" __attribute__((visibility("default"))) void* rcdif_HMM_model5 = NULL;

/* Demangled: HMMEval_fixed_calOnlyMovedMix */
extern "C" __attribute__((visibility("default"))) int HMMEval_fixed_calOnlyMovedMix(void) {
    ALOGD("HMMEval_fixed_calOnlyMovedMix() called");
    return 0;
}

/* Demangled: allocateSuperParam */
extern "C" __attribute__((visibility("default"))) int allocateSuperParam(void) {
    ALOGD("allocateSuperParam() called");
    return 0;
}

/* Demangled: wakeupCMVN */
extern "C" __attribute__((visibility("default"))) int wakeupCMVN(void) {
    ALOGD("wakeupCMVN() called");
    return 0;
}

/* Demangled: wakeup_testingModelRelease */
extern "C" __attribute__((visibility("default"))) int wakeup_testingModelRelease(void) {
    ALOGD("wakeup_testingModelRelease() called");
    return 0;
}

/* Demangled: loadLastTime */
extern "C" __attribute__((visibility("default"))) int loadLastTime(void) {
    ALOGD("loadLastTime() called");
    return 0;
}

/* Demangled: findFloatArrayMax */
extern "C" __attribute__((visibility("default"))) int findFloatArrayMax(void) {
    ALOGD("findFloatArrayMax() called");
    return 0;
}

/* Demangled: addNoiseEndPointDetection */
extern "C" __attribute__((visibility("default"))) int addNoiseEndPointDetection(void) {
    ALOGD("addNoiseEndPointDetection() called");
    return 0;
}

/* Demangled: get_fout_debug */
extern "C" __attribute__((visibility("default"))) int get_fout_debug(void) {
    ALOGD("get_fout_debug() called");
    return 0;
}

/* Demangled: getContinueButtonState */
extern "C" __attribute__((visibility("default"))) int getContinueButtonState(void) {
    ALOGD("getContinueButtonState() called");
    return 0;
}

/* Demangled: setContinueButtonState */
extern "C" __attribute__((visibility("default"))) int setContinueButtonState(void) {
    ALOGD("setContinueButtonState() called");
    return 0;
}

/* Exported Object: Kmeans_mean */
extern "C" __attribute__((visibility("default"))) void* Kmeans_mean = NULL;

/* Demangled: dotArray */
extern "C" __attribute__((visibility("default"))) int dotArray(void) {
    ALOGD("dotArray() called");
    return 0;
}

/* Demangled: getTimeStrechParmsPtr */
extern "C" __attribute__((visibility("default"))) int getTimeStrechParmsPtr(void) {
    ALOGD("getTimeStrechParmsPtr() called");
    return 0;
}

/* Demangled: GMM_model_parser_binary_dynamic */
extern "C" __attribute__((visibility("default"))) int GMM_model_parser_binary_dynamic(void) {
    ALOGD("GMM_model_parser_binary_dynamic() called");
    return 0;
}

/* Demangled: VOWE_P23_training_getEnrollmentModelSize */
extern "C" __attribute__((visibility("default"))) int VOWE_P23_training_getEnrollmentModelSize(void) {
    ALOGD("VOWE_P23_training_getEnrollmentModelSize() called");
    return 0;
}

/* Demangled: vowGetBinCmdName */
extern "C" __attribute__((visibility("default"))) int vowGetBinCmdName(void) {
    ALOGD("vowGetBinCmdName() called");
    return 0;
}

/* Exported Object: speakerModel4Train */
extern "C" __attribute__((visibility("default"))) void* speakerModel4Train = NULL;

/* Demangled: wakeup_onTraining_DIS */
extern "C" __attribute__((visibility("default"))) int wakeup_onTraining_DIS(void) {
    ALOGD("wakeup_onTraining_DIS() called");
    return 0;
}

/* Exported Object: wakeupFrameNum */
extern "C" __attribute__((visibility("default"))) void* wakeupFrameNum = NULL;

/* Demangled: Cmul */
extern "C" __attribute__((visibility("default"))) int Cmul(void) {
    ALOGD("Cmul() called");
    return 0;
}

/* Demangled: wakeupPCMVN */
extern "C" __attribute__((visibility("default"))) int wakeupPCMVN(void) {
    ALOGD("wakeupPCMVN() called");
    return 0;
}

/* Exported Object: rawDataFrameIdx */
extern "C" __attribute__((visibility("default"))) void* rawDataFrameIdx = NULL;

/* Demangled: wakeupTrainEndpointDetectionWrap */
extern "C" __attribute__((visibility("default"))) int wakeupTrainEndpointDetectionWrap(void) {
    ALOGD("wakeupTrainEndpointDetectionWrap() called");
    return 0;
}

/* Exported Object: VAD_HIGH_BAND */
extern "C" __attribute__((visibility("default"))) void* VAD_HIGH_BAND = NULL;

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: Release_GMM_Model */
extern "C" __attribute__((visibility("default"))) int Release_GMM_Model(void) {
    ALOGD("Release_GMM_Model() called");
    return 0;
}

/* Demangled: assignGMMModel */
extern "C" __attribute__((visibility("default"))) int assignGMMModel(void) {
    ALOGD("assignGMMModel() called");
    return 0;
}

/* Demangled: norm_c */
extern "C" __attribute__((visibility("default"))) int norm_c(void) {
    ALOGD("norm_c() called");
    return 0;
}

/* Demangled: evalStatistics */
extern "C" __attribute__((visibility("default"))) int evalStatistics(void) {
    ALOGD("evalStatistics() called");
    return 0;
}

/* Demangled: vow_command_parser_static_short_deiformat_anti */
extern "C" __attribute__((visibility("default"))) int vow_command_parser_static_short_deiformat_anti(void) {
    ALOGD("vow_command_parser_static_short_deiformat_anti() called");
    return 0;
}

/* Demangled: adptHMM_loader_v7float */
extern "C" __attribute__((visibility("default"))) int adptHMM_loader_v7float(void) {
    ALOGD("adptHMM_loader_v7float() called");
    return 0;
}

/* Demangled: insertLeftShiftFloatArray */
extern "C" __attribute__((visibility("default"))) int insertLeftShiftFloatArray(void) {
    ALOGD("insertLeftShiftFloatArray() called");
    return 0;
}

/* Exported Object: noiseNum_randomSelect */
extern "C" __attribute__((visibility("default"))) void* noiseNum_randomSelect = NULL;

/* Demangled: wakeup_TQ_lhRatio */
extern "C" __attribute__((visibility("default"))) int wakeup_TQ_lhRatio(void) {
    ALOGD("wakeup_TQ_lhRatio() called");
    return 0;
}

/* Demangled: mixtureCopyfromKWSModels2AdptModels */
extern "C" __attribute__((visibility("default"))) int mixtureCopyfromKWSModels2AdptModels(void) {
    ALOGD("mixtureCopyfromKWSModels2AdptModels() called");
    return 0;
}

/* Demangled: backup_pcm */
extern "C" __attribute__((visibility("default"))) int backup_pcm(void) {
    ALOGD("backup_pcm() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Exported Object: wakeupWriteWAV_LinearBuf */
extern "C" __attribute__((visibility("default"))) void* wakeupWriteWAV_LinearBuf = NULL;

/* Demangled: wakeup_DPLLSInit */
extern "C" __attribute__((visibility("default"))) int wakeup_DPLLSInit(void) {
    ALOGD("wakeup_DPLLSInit() called");
    return 0;
}

/* Demangled: get_TQ_energy_debug */
extern "C" __attribute__((visibility("default"))) int get_TQ_energy_debug(void) {
    ALOGD("get_TQ_energy_debug() called");
    return 0;
}

/* Demangled: releaseBinaryHMMModelFile */
extern "C" __attribute__((visibility("default"))) int releaseBinaryHMMModelFile(void) {
    ALOGD("releaseBinaryHMMModelFile() called");
    return 0;
}

/* Demangled: DCT */
extern "C" __attribute__((visibility("default"))) int DCT(void) {
    ALOGD("DCT() called");
    return 0;
}

/* Demangled: allocSpkRate */
extern "C" __attribute__((visibility("default"))) int allocSpkRate(void) {
    ALOGD("allocSpkRate() called");
    return 0;
}

/* Demangled: setCommandConfidenceThreshold */
extern "C" __attribute__((visibility("default"))) int setCommandConfidenceThreshold(void) {
    ALOGD("setCommandConfidenceThreshold() called");
    return 0;
}

/* Exported Object: Kmeans_var */
extern "C" __attribute__((visibility("default"))) void* Kmeans_var = NULL;

/* Exported Object: global_mean */
extern "C" __attribute__((visibility("default"))) void* global_mean = NULL;

/* Demangled: freeAdptHMM_Model */
extern "C" __attribute__((visibility("default"))) int freeAdptHMM_Model(void) {
    ALOGD("freeAdptHMM_Model() called");
    return 0;
}

/* Demangled: getModelSizeInDSP */
extern "C" __attribute__((visibility("default"))) int getModelSizeInDSP(void) {
    ALOGD("getModelSizeInDSP() called");
    return 0;
}

/* Demangled: applyVOWCompensation */
extern "C" __attribute__((visibility("default"))) int applyVOWCompensation(void) {
    ALOGD("applyVOWCompensation() called");
    return 0;
}

/* Demangled: setTargetType */
extern "C" __attribute__((visibility("default"))) int setTargetType(void) {
    ALOGD("setTargetType() called");
    return 0;
}

/* Demangled: getWakeupInfoPtr */
extern "C" __attribute__((visibility("default"))) int getWakeupInfoPtr(void) {
    ALOGD("getWakeupInfoPtr() called");
    return 0;
}

/* Demangled: setWarmUpFrameNum */
extern "C" __attribute__((visibility("default"))) int setWarmUpFrameNum(void) {
    ALOGD("setWarmUpFrameNum() called");
    return 0;
}

/* Demangled: findFloatArrayMin_nbest */
extern "C" __attribute__((visibility("default"))) int findFloatArrayMin_nbest(void) {
    ALOGD("findFloatArrayMin_nbest() called");
    return 0;
}

/* Demangled: deallocTimeStrechParms */
extern "C" __attribute__((visibility("default"))) int deallocTimeStrechParms(void) {
    ALOGD("deallocTimeStrechParms() called");
    return 0;
}

/* Exported Object: testingDebugMessageFullPath */
extern "C" __attribute__((visibility("default"))) void* testingDebugMessageFullPath = NULL;
