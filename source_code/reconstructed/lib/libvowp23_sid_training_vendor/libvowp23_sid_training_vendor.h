/*
 * Reverse-Engineered ABI Specification for: libvowp23_sid_training.vendor.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libvowp23_sid_training.vendor.so
 */

#ifndef BEGONIA_RE_LIBVOWP23_SID_TRAINING_VENDOR_H
#define BEGONIA_RE_LIBVOWP23_SID_TRAINING_VENDOR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: vowCommand_recognizer_multithread */
/* Demangled: vowCommand_recognizer_multithread */
int vowCommand_recognizer_multithread(void);

/* Symbol: vow_english_monorcdif_Model_name_table */
/* Demangled: vow_english_monorcdif_Model_name_table */
extern void* vow_english_monorcdif_Model_name_table;

/* Symbol: Delta_Acc_ID_30Dim */
/* Demangled: Delta_Acc_ID_30Dim */
int Delta_Acc_ID_30Dim(void);

/* Symbol: test_model_dir */
/* Demangled: test_model_dir */
extern void* test_model_dir;

/* Symbol: DataBuffer */
/* Demangled: DataBuffer */
extern void* DataBuffer;

/* Symbol: TrainingInit */
/* Demangled: TrainingInit */
int TrainingInit(void);

/* Symbol: align_condition_mutex */
/* Demangled: align_condition_mutex */
extern void* align_condition_mutex;

/* Symbol: wakeup_VADInit */
/* Demangled: wakeup_VADInit */
int wakeup_VADInit(void);

/* Symbol: continueButtonNoiseFrameDropCount */
/* Demangled: continueButtonNoiseFrameDropCount */
extern void* continueButtonNoiseFrameDropCount;

/* Symbol: getConcatedSpeakerModelSize */
/* Demangled: getConcatedSpeakerModelSize */
int getConcatedSpeakerModelSize(void);

/* Symbol: SpeechSegmentSelection */
/* Demangled: SpeechSegmentSelection */
int SpeechSegmentSelection(void);

/* Symbol: NoiseList */
/* Demangled: NoiseList */
extern void* NoiseList;

/* Symbol: get_scoreImpact_debug */
/* Demangled: get_scoreImpact_debug */
int get_scoreImpact_debug(void);

/* Symbol: trainingTQMFCCDebugMessageFullPath */
/* Demangled: trainingTQMFCCDebugMessageFullPath */
extern void* trainingTQMFCCDebugMessageFullPath;

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: UttInit */
/* Demangled: UttInit */
int UttInit(void);

/* Symbol: init2DFloatArrayZero */
/* Demangled: init2DFloatArrayZero */
int init2DFloatArrayZero(void);

/* Symbol: initFloatArray */
/* Demangled: initFloatArray */
int initFloatArray(void);

/* Symbol: sumFloatArray */
/* Demangled: sumFloatArray */
int sumFloatArray(void);

/* Symbol: loadAndSetTrainingConfig */
/* Demangled: loadAndSetTrainingConfig */
int loadAndSetTrainingConfig(void);

/* Symbol: wakeup_LoadParameters */
/* Demangled: wakeup_LoadParameters */
int wakeup_LoadParameters(void);

/* Symbol: vow_Transp_all_filler */
/* Demangled: vow_Transp_all_filler */
extern void* vow_Transp_all_filler;

/* Symbol: vow_command_parser_static_short_deiformat_anti_binout */
/* Demangled: vow_command_parser_static_short_deiformat_anti_binout */
int vow_command_parser_static_short_deiformat_anti_binout(void);

/* Symbol: Write_GMM_Model */
/* Demangled: Write_GMM_Model */
int Write_GMM_Model(void);

/* Symbol: vowReadBinaryDictionary */
/* Demangled: vowReadBinaryDictionary */
int vowReadBinaryDictionary(void);

/* Symbol: foolproof */
/* Demangled: foolproof */
extern void* foolproof;

/* Symbol: Estimate_Initial_Gaussian_Model */
/* Demangled: Estimate_Initial_Gaussian_Model */
int Estimate_Initial_Gaussian_Model(void);

/* Symbol: ApplyFIR */
/* Demangled: ApplyFIR */
int ApplyFIR(void);

/* Symbol: allocTimeStrechParms */
/* Demangled: allocTimeStrechParms */
int allocTimeStrechParms(void);

/* Symbol: vowLoadCommandMetaParameters */
/* Demangled: vowLoadCommandMetaParameters */
int vowLoadCommandMetaParameters(void);

/* Symbol: global_var */
/* Demangled: global_var */
extern void* global_var;

/* Symbol: print_GMM */
/* Demangled: print_GMM */
int print_GMM(void);

/* Symbol: Kmeans_samples */
/* Demangled: Kmeans_samples */
extern void* Kmeans_samples;

/* Symbol: PCMVN */
/* Demangled: PCMVN */
int PCMVN(void);

/* Symbol: noiseGainCalculation */
/* Demangled: noiseGainCalculation */
int noiseGainCalculation(void);

/* Symbol: countTQ */
/* Demangled: countTQ */
int countTQ(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: onTesting_impl */
/* Demangled: onTesting_impl */
int onTesting_impl(void);

/* Symbol: writeWavFile */
/* Demangled: writeWavFile */
extern void* writeWavFile;

/* Symbol: vowWriteBinaryDictionary */
/* Demangled: vowWriteBinaryDictionary */
int vowWriteBinaryDictionary(void);

/* Symbol: buildTransTable */
/* Demangled: buildTransTable */
int buildTransTable(void);

/* Symbol: vowInitForScoreCommands */
/* Demangled: vowInitForScoreCommands */
int vowInitForScoreCommands(void);

/* Symbol: Tj_mult_feature */
/* Demangled: Tj_mult_feature */
extern void* Tj_mult_feature;

/* Symbol: ApplyDGgain */
/* Demangled: ApplyDGgain */
int ApplyDGgain(void);

/* Symbol: addNoiseApplyVad */
/* Demangled: addNoiseApplyVad */
int addNoiseApplyVad(void);

/* Symbol: rir_coef_1 */
/* Demangled: rir_coef_1 */
extern void* rir_coef_1;

/* Symbol: em_count_mutex */
/* Demangled: em_count_mutex */
extern void* em_count_mutex;

/* Symbol: sumSquareFloatArray */
/* Demangled: sumSquareFloatArray */
int sumSquareFloatArray(void);

/* Symbol: MCUttNum */
/* Demangled: MCUttNum */
extern void* MCUttNum;

/* Symbol: spkRateList */
/* Demangled: spkRateList */
extern void* spkRateList;

/* Symbol: rir_coef_2 */
/* Demangled: rir_coef_2 */
extern void* rir_coef_2;

/* Symbol: trainingTQEnergyDebugMessageFullPath */
/* Demangled: trainingTQEnergyDebugMessageFullPath */
extern void* trainingTQEnergyDebugMessageFullPath;

/* Symbol: training_setIntegerArgument */
/* Demangled: training_setIntegerArgument */
int training_setIntegerArgument(void);

/* Symbol: ID_Mean */
/* Demangled: ID_Mean */
extern void* ID_Mean;

/* Symbol: mapGMM */
/* Demangled: mapGMM */
int mapGMM(void);

/* Symbol: MelWindow_Init */
/* Demangled: MelWindow_Init */
int MelWindow_Init(void);

/* Symbol: mfccDCT */
/* Demangled: mfccDCT */
int mfccDCT(void);

/* Symbol: rir_coef_3 */
/* Demangled: rir_coef_3 */
extern void* rir_coef_3;

/* Symbol: em_done */
/* Demangled: em_done */
extern void* em_done;

/* Symbol: addNoiseReadPCM_Utt_idx */
/* Demangled: addNoiseReadPCM_Utt_idx */
int addNoiseReadPCM_Utt_idx(void);

/* Symbol: _CPLOGGER_getLogFileName */
/* Demangled: _CPLOGGER_getLogFileName */
int _CPLOGGER_getLogFileName(void);

/* Symbol: vow_command_recognizer_parallel_fixed_static_short_freephnboundary */
/* Demangled: vow_command_recognizer_parallel_fixed_static_short_freephnboundary */
int vow_command_recognizer_parallel_fixed_static_short_freephnboundary(void);

/* Symbol: WakeupFeaSet */
/* Demangled: WakeupFeaSet */
extern void* WakeupFeaSet;

/* Symbol: cleanUttSpeechIdxArrayList */
/* Demangled: cleanUttSpeechIdxArrayList */
extern void* cleanUttSpeechIdxArrayList;

/* Symbol: wakeup_TQ_TotalV */
/* Demangled: wakeup_TQ_TotalV */
int wakeup_TQ_TotalV(void);

/* Symbol: rir_coef_4 */
/* Demangled: rir_coef_4 */
extern void* rir_coef_4;

/* Symbol: trainingPcmFullPath */
/* Demangled: trainingPcmFullPath */
extern void* trainingPcmFullPath;

/* Symbol: Speaker_ID_State */
/* Demangled: Speaker_ID_State */
extern void* Speaker_ID_State;

/* Symbol: normArray */
/* Demangled: normArray */
int normArray(void);

/* Symbol: wakeupDTW */
/* Demangled: wakeupDTW */
int wakeupDTW(void);

/* Symbol: setMultiConditionFrameIdxOffset */
/* Demangled: setMultiConditionFrameIdxOffset */
int setMultiConditionFrameIdxOffset(void);

/* Symbol: MIN_WAKEUP_FRAME_NUMBER */
/* Demangled: MIN_WAKEUP_FRAME_NUMBER */
extern void* MIN_WAKEUP_FRAME_NUMBER;

/* Symbol: training_setFloatArgument */
/* Demangled: training_setFloatArgument */
int training_setFloatArgument(void);

/* Symbol: threadpool_add */
/* Demangled: threadpool_add */
int threadpool_add(void);

/* Symbol: setShortArrayValue */
/* Demangled: setShortArrayValue */
int setShortArrayValue(void);

/* Symbol: foolproofTestingParam */
/* Demangled: foolproofTestingParam */
extern void* foolproofTestingParam;

/* Symbol: wakeup_onTraining */
/* Demangled: wakeup_onTraining */
int wakeup_onTraining(void);

/* Symbol: CUT_VAD_END_FRAME */
/* Demangled: CUT_VAD_END_FRAME */
extern void* CUT_VAD_END_FRAME;

/* Symbol: vowDecideRecognitionResult */
/* Demangled: vowDecideRecognitionResult */
int vowDecideRecognitionResult(void);

/* Symbol: calculateNoiseAvgMag */
/* Demangled: calculateNoiseAvgMag */
int calculateNoiseAvgMag(void);

/* Symbol: globalCommandID */
/* Demangled: globalCommandID */
extern void* globalCommandID;

/* Symbol: trainingTQDebugMessageFullPath */
/* Demangled: trainingTQDebugMessageFullPath */
extern void* trainingTQDebugMessageFullPath;

/* Symbol: readRawUbmSize */
/* Demangled: readRawUbmSize */
int readRawUbmSize(void);

/* Symbol: DCTCoef_Init */
/* Demangled: DCTCoef_Init */
int DCTCoef_Init(void);

/* Symbol: wakeupTrainEndpointDetection */
/* Demangled: wakeupTrainEndpointDetection */
int wakeupTrainEndpointDetection(void);

/* Symbol: testingscoreDebugMessageFullPath */
/* Demangled: testingscoreDebugMessageFullPath */
extern void* testingscoreDebugMessageFullPath;

/* Symbol: bubbleSortAscend */
/* Demangled: bubbleSortAscend */
int bubbleSortAscend(void);

/* Symbol: Csub */
/* Demangled: Csub */
int Csub(void);

/* Symbol: addNoiseReadPCM_Utt */
/* Demangled: addNoiseReadPCM_Utt */
int addNoiseReadPCM_Utt(void);

/* Symbol: wakeupCMVNLastFrame */
/* Demangled: wakeupCMVNLastFrame */
int wakeupCMVNLastFrame(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: adptTrainParam */
/* Demangled: adptTrainParam */
extern void* adptTrainParam;

/* Symbol: dumpPcmLinear */
/* Demangled: dumpPcmLinear */
int dumpPcmLinear(void);

/* Symbol: speakerModelTestingParam */
/* Demangled: speakerModelTestingParam */
extern void* speakerModelTestingParam;

/* Symbol: wakeupMultiConditionTrainEndpointDetection */
/* Demangled: wakeupMultiConditionTrainEndpointDetection */
int wakeupMultiConditionTrainEndpointDetection(void);

/* Symbol: get_vad_array_debug */
/* Demangled: get_vad_array_debug */
int get_vad_array_debug(void);

/* Symbol: setTrainingPassSnr */
/* Demangled: setTrainingPassSnr */
int setTrainingPassSnr(void);

/* Symbol: findFloatArrayMaxIdx */
/* Demangled: findFloatArrayMaxIdx */
int findFloatArrayMaxIdx(void);

/* Symbol: stateCopyfromKWSModels2AdptModels */
/* Demangled: stateCopyfromKWSModels2AdptModels */
int stateCopyfromKWSModels2AdptModels(void);

/* Symbol: arrayTransform_float2short */
/* Demangled: arrayTransform_float2short */
int arrayTransform_float2short(void);

/* Symbol: VOWE_P23_training_Sim */
/* Demangled: VOWE_P23_training_Sim */
int VOWE_P23_training_Sim(void);

/* Symbol: addNoiseRecordingInit */
/* Demangled: addNoiseRecordingInit */
int addNoiseRecordingInit(void);

/* Symbol: AndrewReadPCM */
/* Demangled: AndrewReadPCM */
int AndrewReadPCM(void);

/* Symbol: vow_Mean_all_filler */
/* Demangled: vow_Mean_all_filler */
extern void* vow_Mean_all_filler;

/* Symbol: wakeupGmmModelFree */
/* Demangled: wakeupGmmModelFree */
int wakeupGmmModelFree(void);

/* Symbol: vowMixLogWeight */
/* Demangled: vowMixLogWeight */
int vowMixLogWeight(void);

/* Symbol: addNoiseInitVad */
/* Demangled: addNoiseInitVad */
int addNoiseInitVad(void);

/* Symbol: rawUbmModel */
/* Demangled: rawUbmModel */
extern void* rawUbmModel;

/* Symbol: get_noiseLevel_debug */
/* Demangled: get_noiseLevel_debug */
int get_noiseLevel_debug(void);

/* Symbol: addNoiseFE_thread */
/* Demangled: addNoiseFE_thread */
int addNoiseFE_thread(void);

/* Symbol: CMVN */
/* Demangled: CMVN */
int CMVN(void);

/* Symbol: MelCoef_Init */
/* Demangled: MelCoef_Init */
int MelCoef_Init(void);

/* Symbol: mfcParser */
/* Demangled: mfcParser */
int mfcParser(void);

/* Symbol: adptHMM_writer */
/* Demangled: adptHMM_writer */
int adptHMM_writer(void);

/* Symbol: align_done */
/* Demangled: align_done */
extern void* align_done;

/* Symbol: sigma_vector_sum */
/* Demangled: sigma_vector_sum */
extern void* sigma_vector_sum;

/* Symbol: TrainingFeature */
/* Demangled: TrainingFeature */
extern void* TrainingFeature;

/* Symbol: WakeupMultiConditionUttInfo */
/* Demangled: WakeupMultiConditionUttInfo */
extern void* WakeupMultiConditionUttInfo;

/* Symbol: gen_rir */
/* Demangled: gen_rir */
int gen_rir(void);

/* Symbol: frameBasedMVN_20140424 */
/* Demangled: frameBasedMVN_20140424 */
int frameBasedMVN_20140424(void);

/* Symbol: getSfcp_doDumpPcmSet */
/* Demangled: getSfcp_doDumpPcmSet */
int getSfcp_doDumpPcmSet(void);

/* Symbol: vow_english_monorcdif232_model_name_table */
/* Demangled: vow_english_monorcdif232_model_name_table */
extern void* vow_english_monorcdif232_model_name_table;

/* Symbol: GMM_Training */
/* Demangled: GMM_Training */
int GMM_Training(void);

/* Symbol: align_done_criteria */
/* Demangled: align_done_criteria */
extern void* align_done_criteria;

/* Symbol: VOWE_P23_training_getFloatArgument */
/* Demangled: VOWE_P23_training_getFloatArgument */
int VOWE_P23_training_getFloatArgument(void);

/* Symbol: Feature_Write */
/* Demangled: Feature_Write */
int Feature_Write(void);

/* Symbol: MultiConditionSNRs */
/* Demangled: MultiConditionSNRs */
extern void* MultiConditionSNRs;

/* Symbol: endPointDetection */
/* Demangled: endPointDetection */
int endPointDetection(void);

/* Symbol: vow_rcdif_Model_name_table */
/* Demangled: vow_rcdif_Model_name_table */
extern void* vow_rcdif_Model_name_table;

/* Symbol: wakeup_arrayTableInit */
/* Demangled: wakeup_arrayTableInit */
int wakeup_arrayTableInit(void);

/* Symbol: mapHMMbyGMM */
/* Demangled: mapHMMbyGMM */
int mapHMMbyGMM(void);

/* Symbol: addNoiseVadInit */
/* Demangled: addNoiseVadInit */
int addNoiseVadInit(void);

/* Symbol: getVadUttPcm */
/* Demangled: getVadUttPcm */
int getVadUttPcm(void);

/* Symbol: savingSpeakerModelFile */
/* Demangled: savingSpeakerModelFile */
extern void* savingSpeakerModelFile;

/* Symbol: getWarmUpFrameNum */
/* Demangled: getWarmUpFrameNum */
int getWarmUpFrameNum(void);

/* Symbol: initHMMModelConfig */
/* Demangled: initHMMModelConfig */
int initHMMModelConfig(void);

/* Symbol: numNoiseSegment_forExhaustedSelection */
/* Demangled: numNoiseSegment_forExhaustedSelection */
extern void* numNoiseSegment_forExhaustedSelection;

/* Symbol: updateDPtable */
/* Demangled: updateDPtable */
int updateDPtable(void);

/* Symbol: wakeup_arrayTableRelease */
/* Demangled: wakeup_arrayTableRelease */
int wakeup_arrayTableRelease(void);

/* Symbol: getAdjustableTrainingParamPtr */
/* Demangled: getAdjustableTrainingParamPtr */
int getAdjustableTrainingParamPtr(void);

/* Symbol: wakeup_MultiConditionFETrainingRelease */
/* Demangled: wakeup_MultiConditionFETrainingRelease */
int wakeup_MultiConditionFETrainingRelease(void);

/* Symbol: BROWN_NOISE_TH_FIX */
/* Demangled: BROWN_NOISE_TH_FIX */
extern void* BROWN_NOISE_TH_FIX;

/* Symbol: setTrainingStop */
/* Demangled: setTrainingStop */
int setTrainingStop(void);

/* Symbol: Write_GMM_Model_Binary */
/* Demangled: Write_GMM_Model_Binary */
int Write_GMM_Model_Binary(void);

/* Symbol: pattern_checking_model_name */
/* Demangled: pattern_checking_model_name */
extern void* pattern_checking_model_name;

/* Symbol: bubbleSortDescend */
/* Demangled: bubbleSortDescend */
int bubbleSortDescend(void);

/* Symbol: VOWE_P23_training_setFloatArrayArgument */
/* Demangled: VOWE_P23_training_setFloatArrayArgument */
int VOWE_P23_training_setFloatArrayArgument(void);

/* Symbol: wakeupSpectrum */
/* Demangled: wakeupSpectrum */
int wakeupSpectrum(void);

/* Symbol: vow_command_recognizer_parallel_fixed2_specifycommands_static_short */
/* Demangled: vow_command_recognizer_parallel_fixed2_specifycommands_static_short */
int vow_command_recognizer_parallel_fixed2_specifycommands_static_short(void);

/* Symbol: DIF_FFT_INV_C_code */
/* Demangled: DIF_FFT_INV_C_code */
int DIF_FFT_INV_C_code(void);

/* Symbol: Evaluate_logGaussian */
/* Demangled: Evaluate_logGaussian */
int Evaluate_logGaussian(void);

/* Symbol: VAD */
/* Demangled: VAD */
int VAD(void);

/* Symbol: unlockTargetType */
/* Demangled: unlockTargetType */
extern void* unlockTargetType;

/* Symbol: _CPLOGGER_setLogFileName */
/* Demangled: _CPLOGGER_setLogFileName */
int _CPLOGGER_setLogFileName(void);

/* Symbol: wakeupTQ_frameIdx */
/* Demangled: wakeupTQ_frameIdx */
extern void* wakeupTQ_frameIdx;

/* Symbol: get_score_debug */
/* Demangled: get_score_debug */
int get_score_debug(void);

/* Symbol: trainingDebugMessageFullPath */
/* Demangled: trainingDebugMessageFullPath */
extern void* trainingDebugMessageFullPath;

/* Symbol: TrainingRelease_impl */
/* Demangled: TrainingRelease_impl */
int TrainingRelease_impl(void);

/* Symbol: vow_HMM_model_loader_binary_short */
/* Demangled: vow_HMM_model_loader_binary_short */
int vow_HMM_model_loader_binary_short(void);

/* Symbol: addNoiseToSpectrum */
/* Demangled: addNoiseToSpectrum */
int addNoiseToSpectrum(void);

/* Symbol: ReadPCM */
/* Demangled: ReadPCM */
int ReadPCM(void);

/* Symbol: DEFAULT_WARM_UP_FRAME_NUM */
/* Demangled: DEFAULT_WARM_UP_FRAME_NUM */
extern void* DEFAULT_WARM_UP_FRAME_NUM;

/* Symbol: copyShortArr */
/* Demangled: copyShortArr */
int copyShortArr(void);

/* Symbol: BrownFeaSet */
/* Demangled: BrownFeaSet */
extern void* BrownFeaSet;

/* Symbol: ANTI_CMD_LOWER_TH */
/* Demangled: ANTI_CMD_LOWER_TH */
extern void* ANTI_CMD_LOWER_TH;

/* Symbol: DIF_FFT_INV */
/* Demangled: DIF_FFT_INV */
int DIF_FFT_INV(void);

/* Symbol: VOWE_P23_training_constructEnrollData */
/* Demangled: VOWE_P23_training_constructEnrollData */
int VOWE_P23_training_constructEnrollData(void);

/* Symbol: VOWE_P23_training_getFloatArrayArgument */
/* Demangled: VOWE_P23_training_getFloatArrayArgument */
int VOWE_P23_training_getFloatArrayArgument(void);

/* Symbol: addNoiseProgressiveVAD */
/* Demangled: addNoiseProgressiveVAD */
int addNoiseProgressiveVAD(void);

/* Symbol: _CPLOGGER_openLogTarget */
/* Demangled: _CPLOGGER_openLogTarget */
int _CPLOGGER_openLogTarget(void);

/* Symbol: MCFeaSet */
/* Demangled: MCFeaSet */
extern void* MCFeaSet;

/* Symbol: McSpkRateTrainingNumWoRepeat */
/* Demangled: McSpkRateTrainingNumWoRepeat */
extern void* McSpkRateTrainingNumWoRepeat;

/* Symbol: wakeup_MultiConditionInit */
/* Demangled: wakeup_MultiConditionInit */
int wakeup_MultiConditionInit(void);

/* Symbol: vow_monophone_Model_name_table */
/* Demangled: vow_monophone_Model_name_table */
extern void* vow_monophone_Model_name_table;

/* Symbol: align_count_mutex */
/* Demangled: align_count_mutex */
extern void* align_count_mutex;

/* Symbol: wakeupMultiConditionFETrainingInit */
/* Demangled: wakeupMultiConditionFETrainingInit */
int wakeupMultiConditionFETrainingInit(void);

/* Symbol: adptHMM_copy */
/* Demangled: adptHMM_copy */
int adptHMM_copy(void);

/* Symbol: foolproofUbmTestingParam */
/* Demangled: foolproofUbmTestingParam */
extern void* foolproofUbmTestingParam;

/* Symbol: wakeupDeltaAcc39DimFrameBased */
/* Demangled: wakeupDeltaAcc39DimFrameBased */
int wakeupDeltaAcc39DimFrameBased(void);

/* Symbol: SNR_LOWER_TH */
/* Demangled: SNR_LOWER_TH */
extern void* SNR_LOWER_TH;

/* Symbol: SHARED_COMMAND */
/* Demangled: SHARED_COMMAND */
extern void* SHARED_COMMAND;

/* Symbol: noiseGainCalculationWithSnr */
/* Demangled: noiseGainCalculationWithSnr */
int noiseGainCalculationWithSnr(void);

/* Symbol: speakerPoolSelectionBinaryUnifiedModel */
/* Demangled: speakerPoolSelectionBinaryUnifiedModel */
int speakerPoolSelectionBinaryUnifiedModel(void);

/* Symbol: setTrainingPassNoiseLevel */
/* Demangled: setTrainingPassNoiseLevel */
int setTrainingPassNoiseLevel(void);

/* Symbol: setVoiceWakeUpMode */
/* Demangled: setVoiceWakeUpMode */
int setVoiceWakeUpMode(void);

/* Symbol: wakeup_PCMDiagnosis */
/* Demangled: wakeup_PCMDiagnosis */
int wakeup_PCMDiagnosis(void);

/* Symbol: vowCheckValidFrameLength */
/* Demangled: vowCheckValidFrameLength */
int vowCheckValidFrameLength(void);

/* Symbol: loadAndConcate2OneHMM */
/* Demangled: loadAndConcate2OneHMM */
int loadAndConcate2OneHMM(void);

/* Symbol: align_condition_cond */
/* Demangled: align_condition_cond */
extern void* align_condition_cond;

/* Symbol: Hamming */
/* Demangled: Hamming */
extern void* Hamming;

/* Symbol: setTrainingTimeout */
/* Demangled: setTrainingTimeout */
int setTrainingTimeout(void);

/* Symbol: initBinaryHMMModelFile */
/* Demangled: initBinaryHMMModelFile */
int initBinaryHMMModelFile(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: align_threadpool_func */
/* Demangled: align_threadpool_func */
int align_threadpool_func(void);

/* Symbol: featureInit */
/* Demangled: featureInit */
int featureInit(void);

/* Symbol: pre_model_name */
/* Demangled: pre_model_name */
extern void* pre_model_name;

/* Symbol: _CPLOGGER_print */
/* Demangled: _CPLOGGER_print */
int _CPLOGGER_print(void);

/* Symbol: getXcorrelationDelaySample4TimeStrech */
/* Demangled: getXcorrelationDelaySample4TimeStrech */
int getXcorrelationDelaySample4TimeStrech(void);

/* Symbol: vow_mandarin_rcdif_english_monorcdif_merged_model_name_table */
/* Demangled: vow_mandarin_rcdif_english_monorcdif_merged_model_name_table */
extern void* vow_mandarin_rcdif_english_monorcdif_merged_model_name_table;

/* Symbol: GMM_decoder */
/* Demangled: GMM_decoder */
int GMM_decoder(void);

/* Symbol: VADInit */
/* Demangled: VADInit */
int VADInit(void);

/* Symbol: wakeupDelta_Acc_39dim */
/* Demangled: wakeupDelta_Acc_39dim */
int wakeupDelta_Acc_39dim(void);

/* Symbol: wakeup_TQ_refine_mfcc */
/* Demangled: wakeup_TQ_refine_mfcc */
int wakeup_TQ_refine_mfcc(void);

/* Symbol: sprintf_buf */
/* Demangled: sprintf_buf */
extern void* sprintf_buf;

/* Symbol: TestingRelease_impl */
/* Demangled: TestingRelease_impl */
int TestingRelease_impl(void);

/* Symbol: UttInfo */
/* Demangled: UttInfo */
extern void* UttInfo;

/* Symbol: vow_Pre_all_filler */
/* Demangled: vow_Pre_all_filler */
extern void* vow_Pre_all_filler;

/* Symbol: noiseStartIdx_exhaustedSelect */
/* Demangled: noiseStartIdx_exhaustedSelect */
extern void* noiseStartIdx_exhaustedSelect;

/* Symbol: wakeupWriteWAV */
/* Demangled: wakeupWriteWAV */
extern void* wakeupWriteWAV;

/* Symbol: wakeup_TQ_Energy */
/* Demangled: wakeup_TQ_Energy */
int wakeup_TQ_Energy(void);

/* Symbol: wakeup_dynamicThInit */
/* Demangled: wakeup_dynamicThInit */
int wakeup_dynamicThInit(void);

/* Symbol: Speaker_ID_Mixture */
/* Demangled: Speaker_ID_Mixture */
extern void* Speaker_ID_Mixture;

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: VOWE_P23_training_version */
/* Demangled: VOWE_P23_training_version */
int VOWE_P23_training_version(void);

/* Symbol: createHammingWindow */
/* Demangled: createHammingWindow */
int createHammingWindow(void);

/* Symbol: wakeup_constructEnrollData */
/* Demangled: wakeup_constructEnrollData */
int wakeup_constructEnrollData(void);

/* Symbol: vow_rcdif_merged_model_name_table */
/* Demangled: vow_rcdif_merged_model_name_table */
extern void* vow_rcdif_merged_model_name_table;

/* Symbol: findFloatArrayMax_nbest */
/* Demangled: findFloatArrayMax_nbest */
int findFloatArrayMax_nbest(void);

/* Symbol: rawUbmModelSize */
/* Demangled: rawUbmModelSize */
extern void* rawUbmModelSize;

/* Symbol: getVoiceUnlockVersion */
/* Demangled: getVoiceUnlockVersion */
int getVoiceUnlockVersion(void);

/* Symbol: Min */
/* Demangled: Min */
int Min(void);

/* Symbol: noiseShift_exhaustedSelect */
/* Demangled: noiseShift_exhaustedSelect */
extern void* noiseShift_exhaustedSelect;

/* Symbol: cmdRecDecode */
/* Demangled: cmdRecDecode */
int cmdRecDecode(void);

/* Symbol: vow_command_parser_static_short_filler */
/* Demangled: vow_command_parser_static_short_filler */
int vow_command_parser_static_short_filler(void);

/* Symbol: ID_Precision */
/* Demangled: ID_Precision */
extern void* ID_Precision;

/* Symbol: countVadSnr */
/* Demangled: countVadSnr */
int countVadSnr(void);

/* Symbol: wakeupSNRCalculation */
/* Demangled: wakeupSNRCalculation */
int wakeupSNRCalculation(void);

/* Symbol: wakeup_SNR_Detection_sample_based */
/* Demangled: wakeup_SNR_Detection_sample_based */
int wakeup_SNR_Detection_sample_based(void);

/* Symbol: ANTI_CMD_UPPER_TH */
/* Demangled: ANTI_CMD_UPPER_TH */
extern void* ANTI_CMD_UPPER_TH;

/* Symbol: DEFAULT_TIMEOUT */
/* Demangled: DEFAULT_TIMEOUT */
extern void* DEFAULT_TIMEOUT;

/* Symbol: vowMergeMandarinEnglishHMMModel_binary_short */
/* Demangled: vowMergeMandarinEnglishHMMModel_binary_short */
int vowMergeMandarinEnglishHMMModel_binary_short(void);

/* Symbol: Write_GMM_Model_Simple */
/* Demangled: Write_GMM_Model_Simple */
int Write_GMM_Model_Simple(void);

/* Symbol: TempFeature */
/* Demangled: TempFeature */
extern void* TempFeature;

/* Symbol: RCmul */
/* Demangled: RCmul */
int RCmul(void);

/* Symbol: mfccFft */
/* Demangled: mfccFft */
int mfccFft(void);

/* Symbol: wakeupDCT */
/* Demangled: wakeupDCT */
int wakeupDCT(void);

/* Symbol: wakeupMultiConditionFE_spkRate */
/* Demangled: wakeupMultiConditionFE_spkRate */
int wakeupMultiConditionFE_spkRate(void);

/* Symbol: get_SNR_debug */
/* Demangled: get_SNR_debug */
int get_SNR_debug(void);

/* Symbol: wakeupTrainingPhase */
/* Demangled: wakeupTrainingPhase */
extern void* wakeupTrainingPhase;

/* Symbol: wakeup_TrainingRelease */
/* Demangled: wakeup_TrainingRelease */
int wakeup_TrainingRelease(void);

/* Symbol: getTrainingGlobalConfidenceThresholds */
/* Demangled: getTrainingGlobalConfidenceThresholds */
int getTrainingGlobalConfidenceThresholds(void);

/* Symbol: Tj_temp */
/* Demangled: Tj_temp */
extern void* Tj_temp;

/* Symbol: DLInit_impl */
/* Demangled: DLInit_impl */
int DLInit_impl(void);

/* Symbol: FD1 */
/* Demangled: FD1 */
extern void* FD1;

/* Symbol: noiseNum_exhaustedSelect */
/* Demangled: noiseNum_exhaustedSelect */
extern void* noiseNum_exhaustedSelect;

/* Symbol: wakeupMultiConditionFE2 */
/* Demangled: wakeupMultiConditionFE2 */
int wakeupMultiConditionFE2(void);

/* Symbol: getNewPhase1Para */
/* Demangled: getNewPhase1Para */
int getNewPhase1Para(void);

/* Symbol: adptHMM_writer_fileID */
/* Demangled: adptHMM_writer_fileID */
int adptHMM_writer_fileID(void);

/* Symbol: FD2 */
/* Demangled: FD2 */
extern void* FD2;

/* Symbol: MAX_WAKEUP_FRAME_NUMBER */
/* Demangled: MAX_WAKEUP_FRAME_NUMBER */
extern void* MAX_WAKEUP_FRAME_NUMBER;

/* Symbol: SNR_UPPER_TH */
/* Demangled: SNR_UPPER_TH */
extern void* SNR_UPPER_TH;

/* Symbol: findShortArrayMax */
/* Demangled: findShortArrayMax */
int findShortArrayMax(void);

/* Symbol: VOWE_P23_training_getIntegerArgument */
/* Demangled: VOWE_P23_training_getIntegerArgument */
int VOWE_P23_training_getIntegerArgument(void);

/* Symbol: wakeupDC_Removal */
/* Demangled: wakeupDC_Removal */
int wakeupDC_Removal(void);

/* Symbol: Tj */
/* Demangled: Tj */
extern void* Tj;

/* Symbol: addNoiseReleaseVad */
/* Demangled: addNoiseReleaseVad */
int addNoiseReleaseVad(void);

/* Symbol: vow_Mix_gconst_all_filler */
/* Demangled: vow_Mix_gconst_all_filler */
extern void* vow_Mix_gconst_all_filler;

/* Symbol: enroll */
/* Demangled: enroll */
int enroll(void);

/* Symbol: wakeupMelWindow_Release */
/* Demangled: wakeupMelWindow_Release */
int wakeupMelWindow_Release(void);

/* Symbol: vowFModel_name_table */
/* Demangled: vowFModel_name_table */
extern void* vowFModel_name_table;

/* Symbol: Read_GMM_Model_Binary */
/* Demangled: Read_GMM_Model_Binary */
int Read_GMM_Model_Binary(void);

/* Symbol: adptHMM_loader_v8float_varMix */
/* Demangled: adptHMM_loader_v8float_varMix */
int adptHMM_loader_v8float_varMix(void);

/* Symbol: isTrainingStopped */
/* Demangled: isTrainingStopped */
extern void* isTrainingStopped;

/* Symbol: DIF_FFT_normalize */
/* Demangled: DIF_FFT_normalize */
int DIF_FFT_normalize(void);

/* Symbol: Read_GMM_Model */
/* Demangled: Read_GMM_Model */
int Read_GMM_Model(void);

/* Symbol: addNoise_origin */
/* Demangled: addNoise_origin */
int addNoise_origin(void);

/* Symbol: threadpool_free */
/* Demangled: threadpool_free */
int threadpool_free(void);

/* Symbol: mfccFE */
/* Demangled: mfccFE */
int mfccFE(void);

/* Symbol: wakeupSpeechSegmentSelection_MatchedMVN */
/* Demangled: wakeupSpeechSegmentSelection_MatchedMVN */
int wakeupSpeechSegmentSelection_MatchedMVN(void);

/* Symbol: wakeupTQ_lhRatio */
/* Demangled: wakeupTQ_lhRatio */
extern void* wakeupTQ_lhRatio;

/* Symbol: VAD_SNR_THRESHOLD */
/* Demangled: VAD_SNR_THRESHOLD */
extern void* VAD_SNR_THRESHOLD;

/* Symbol: vowScoreCommandsUi */
/* Demangled: vowScoreCommandsUi */
int vowScoreCommandsUi(void);

/* Symbol: Write_Header */
/* Demangled: Write_Header */
int Write_Header(void);

/* Symbol: Wake_DCT_coef */
/* Demangled: Wake_DCT_coef */
extern void* Wake_DCT_coef;

/* Symbol: copyRedundantParam */
/* Demangled: copyRedundantParam */
int copyRedundantParam(void);

/* Symbol: pushToTalk */
/* Demangled: pushToTalk */
extern void* pushToTalk;

/* Symbol: cmdRecInit */
/* Demangled: cmdRecInit */
int cmdRecInit(void);

/* Symbol: fft_real */
/* Demangled: fft_real */
int fft_real(void);

/* Symbol: AdptHMM_model_parser2 */
/* Demangled: AdptHMM_model_parser2 */
int AdptHMM_model_parser2(void);

/* Symbol: mapGMM_threadpool_func */
/* Demangled: mapGMM_threadpool_func */
int mapGMM_threadpool_func(void);

/* Symbol: trainingTQFftDebugMessageFullPath */
/* Demangled: trainingTQFftDebugMessageFullPath */
extern void* trainingTQFftDebugMessageFullPath;

/* Symbol: GMM_model_parser */
/* Demangled: GMM_model_parser */
int GMM_model_parser(void);

/* Symbol: free2DFloatArray */
/* Demangled: free2DFloatArray */
int free2DFloatArray(void);

/* Symbol: wakeupGmmModelParser */
/* Demangled: wakeupGmmModelParser */
int wakeupGmmModelParser(void);

/* Symbol: RIR_RATIO */
/* Demangled: RIR_RATIO */
extern void* RIR_RATIO;

/* Symbol: mu_vector_sum */
/* Demangled: mu_vector_sum */
extern void* mu_vector_sum;

/* Symbol: em_done_criteria */
/* Demangled: em_done_criteria */
extern void* em_done_criteria;

/* Symbol: wakeup_onTraining_MC_DIS */
/* Demangled: wakeup_onTraining_MC_DIS */
int wakeup_onTraining_MC_DIS(void);

/* Symbol: UttPcmList */
/* Demangled: UttPcmList */
extern void* UttPcmList;

/* Symbol: setTrainingUttNumber */
/* Demangled: setTrainingUttNumber */
int setTrainingUttNumber(void);

/* Symbol: TempFrameNum */
/* Demangled: TempFrameNum */
extern void* TempFrameNum;

/* Symbol: initShortArray */
/* Demangled: initShortArray */
int initShortArray(void);

/* Symbol: McNoisyTrainingNum */
/* Demangled: McNoisyTrainingNum */
extern void* McNoisyTrainingNum;

/* Symbol: VAD_LOW_BAND */
/* Demangled: VAD_LOW_BAND */
extern void* VAD_LOW_BAND;

/* Symbol: vow_english_monorcdif376_model_name_table */
/* Demangled: vow_english_monorcdif376_model_name_table */
extern void* vow_english_monorcdif376_model_name_table;

/* Symbol: array1NormDistance */
/* Demangled: array1NormDistance */
int array1NormDistance(void);

/* Symbol: speakerPoolSelection */
/* Demangled: speakerPoolSelection */
int speakerPoolSelection(void);

/* Symbol: getTrainingUttNumber */
/* Demangled: getTrainingUttNumber */
int getTrainingUttNumber(void);

/* Symbol: evalLogLike_calOnlyMovedMix_SV */
/* Demangled: evalLogLike_calOnlyMovedMix_SV */
int evalLogLike_calOnlyMovedMix_SV(void);

/* Symbol: VoiceUnlockCustomization_impl */
/* Demangled: VoiceUnlockCustomization_impl */
int VoiceUnlockCustomization_impl(void);

/* Symbol: wakeupSpeechSegmentSelection */
/* Demangled: wakeupSpeechSegmentSelection */
int wakeupSpeechSegmentSelection(void);

/* Symbol: trainingNlDebugMessageFullPath */
/* Demangled: trainingNlDebugMessageFullPath */
extern void* trainingNlDebugMessageFullPath;

/* Symbol: adptHMM_writer_filePath */
/* Demangled: adptHMM_writer_filePath */
int adptHMM_writer_filePath(void);

/* Symbol: magn_c */
/* Demangled: magn_c */
int magn_c(void);

/* Symbol: WakeupMultiConditionVADInfo */
/* Demangled: WakeupMultiConditionVADInfo */
extern void* WakeupMultiConditionVADInfo;

/* Symbol: wakeupTQ_TotalV */
/* Demangled: wakeupTQ_TotalV */
extern void* wakeupTQ_TotalV;

/* Symbol: vow_mandarin_rcdif_english_monorcdif232_merged_model_name_table */
/* Demangled: vow_mandarin_rcdif_english_monorcdif232_merged_model_name_table */
extern void* vow_mandarin_rcdif_english_monorcdif232_merged_model_name_table;

/* Symbol: ExpSafe */
/* Demangled: ExpSafe */
int ExpSafe(void);

/* Symbol: model_appender_v7float */
/* Demangled: model_appender_v7float */
int model_appender_v7float(void);

/* Symbol: sumShortArray */
/* Demangled: sumShortArray */
int sumShortArray(void);

/* Symbol: addNoiseDataBufferInit */
/* Demangled: addNoiseDataBufferInit */
int addNoiseDataBufferInit(void);

/* Symbol: ubmModel4Train */
/* Demangled: ubmModel4Train */
extern void* ubmModel4Train;

/* Symbol: getCommonConfigParameters */
/* Demangled: getCommonConfigParameters */
int getCommonConfigParameters(void);

/* Symbol: MelWindow_Release */
/* Demangled: MelWindow_Release */
int MelWindow_Release(void);

/* Symbol: wakeup_RecordingInit */
/* Demangled: wakeup_RecordingInit */
int wakeup_RecordingInit(void);

/* Symbol: pi */
/* Demangled: pi */
extern void* pi;

/* Symbol: model_appender_v8float_varMix */
/* Demangled: model_appender_v8float_varMix */
int model_appender_v8float_varMix(void);

/* Symbol: featureRelease */
/* Demangled: featureRelease */
int featureRelease(void);

/* Symbol: VOWE_P23_training_setFloatArgument */
/* Demangled: VOWE_P23_training_setFloatArgument */
int VOWE_P23_training_setFloatArgument(void);

/* Symbol: feaRead */
/* Demangled: feaRead */
int feaRead(void);

/* Symbol: MCAddNoiseFEFlow */
/* Demangled: MCAddNoiseFEFlow */
int MCAddNoiseFEFlow(void);

/* Symbol: DIF_FFT_C_code */
/* Demangled: DIF_FFT_C_code */
int DIF_FFT_C_code(void);

/* Symbol: out_File */
/* Demangled: out_File */
extern void* out_File;

/* Symbol: getRawUbmSize */
/* Demangled: getRawUbmSize */
int getRawUbmSize(void);

/* Symbol: globalMemoryAllocate */
/* Demangled: globalMemoryAllocate */
int globalMemoryAllocate(void);

/* Symbol: allocRIR */
/* Demangled: allocRIR */
int allocRIR(void);

/* Symbol: foolproofUbm */
/* Demangled: foolproofUbm */
extern void* foolproofUbm;

/* Symbol: version */
/* Demangled: version */
int version(void);

/* Symbol: _Speaker_ID_model */
/* Demangled: _Speaker_ID_model */
extern void* _Speaker_ID_model;

/* Symbol: threadpool_destroy */
/* Demangled: threadpool_destroy */
int threadpool_destroy(void);

/* Symbol: RecordingInit */
/* Demangled: RecordingInit */
int RecordingInit(void);

/* Symbol: addNoise */
/* Demangled: addNoise */
int addNoise(void);

/* Symbol: MCCleanUtt4TrainingNum */
/* Demangled: MCCleanUtt4TrainingNum */
extern void* MCCleanUtt4TrainingNum;

/* Symbol: monophone_HMM_model1 */
/* Demangled: monophone_HMM_model1 */
extern void* monophone_HMM_model1;

/* Symbol: copyFloatArr */
/* Demangled: copyFloatArr */
int copyFloatArr(void);

/* Symbol: NoiseAdd */
/* Demangled: NoiseAdd */
int NoiseAdd(void);

/* Symbol: monophone_HMM_model2 */
/* Demangled: monophone_HMM_model2 */
extern void* monophone_HMM_model2;

/* Symbol: vowNewUiShell */
/* Demangled: vowNewUiShell */
int vowNewUiShell(void);

/* Symbol: TestingInit_impl */
/* Demangled: TestingInit_impl */
int TestingInit_impl(void);

/* Symbol: monophone_HMM_model3 */
/* Demangled: monophone_HMM_model3 */
extern void* monophone_HMM_model3;

/* Symbol: GMM_model_free */
/* Demangled: GMM_model_free */
int GMM_model_free(void);

/* Symbol: FeaturePara */
/* Demangled: FeaturePara */
extern void* FeaturePara;

/* Symbol: testingSNRDebugMessageFullPath */
/* Demangled: testingSNRDebugMessageFullPath */
extern void* testingSNRDebugMessageFullPath;

/* Symbol: monophone_HMM_model4 */
/* Demangled: monophone_HMM_model4 */
extern void* monophone_HMM_model4;

/* Symbol: out_Model */
/* Demangled: out_Model */
extern void* out_Model;

/* Symbol: Wake_Begin_Window */
/* Demangled: Wake_Begin_Window */
extern void* Wake_Begin_Window;

/* Symbol: WakeupTestDP */
/* Demangled: WakeupTestDP */
extern void* WakeupTestDP;

/* Symbol: wakeupDoApplyFIR */
/* Demangled: wakeupDoApplyFIR */
int wakeupDoApplyFIR(void);

/* Symbol: monophone_HMM_model5 */
/* Demangled: monophone_HMM_model5 */
extern void* monophone_HMM_model5;

/* Symbol: concate2OneHMMfromPhoneModels */
/* Demangled: concate2OneHMMfromPhoneModels */
int concate2OneHMMfromPhoneModels(void);

/* Symbol: DC_Removal */
/* Demangled: DC_Removal */
int DC_Removal(void);

/* Symbol: arrayTransform_short2float */
/* Demangled: arrayTransform_short2float */
int arrayTransform_short2float(void);

/* Symbol: deallocRIR */
/* Demangled: deallocRIR */
int deallocRIR(void);

/* Symbol: wakeupApplyFIR */
/* Demangled: wakeupApplyFIR */
int wakeupApplyFIR(void);

/* Symbol: wakeupGmmParserBinary */
/* Demangled: wakeupGmmParserBinary */
int wakeupGmmParserBinary(void);

/* Symbol: wakeupProgressiveVAD */
/* Demangled: wakeupProgressiveVAD */
int wakeupProgressiveVAD(void);

/* Symbol: wakeup_onTraining_DIS_MCfromSpkr */
/* Demangled: wakeup_onTraining_DIS_MCfromSpkr */
int wakeup_onTraining_DIS_MCfromSpkr(void);

/* Symbol: get_TQ_MFCC_debug */
/* Demangled: get_TQ_MFCC_debug */
int get_TQ_MFCC_debug(void);

/* Symbol: unlockWakeupMode */
/* Demangled: unlockWakeupMode */
extern void* unlockWakeupMode;

/* Symbol: getTrainingPassNoiseLevel */
/* Demangled: getTrainingPassNoiseLevel */
int getTrainingPassNoiseLevel(void);

/* Symbol: constructEnrollData_impl */
/* Demangled: constructEnrollData_impl */
int constructEnrollData_impl(void);

/* Symbol: getEnrollmentModelSize */
/* Demangled: getEnrollmentModelSize */
int getEnrollmentModelSize(void);

/* Symbol: wakeupTransTable_builder4OneHMM */
/* Demangled: wakeupTransTable_builder4OneHMM */
int wakeupTransTable_builder4OneHMM(void);

/* Symbol: WriteWAV_LinearBuf */
/* Demangled: WriteWAV_LinearBuf */
extern void* WriteWAV_LinearBuf;

/* Symbol: setFloatArray_LowerBound */
/* Demangled: setFloatArray_LowerBound */
int setFloatArray_LowerBound(void);

/* Symbol: getConcatedModelSizes_p23 */
/* Demangled: getConcatedModelSizes_p23 */
int getConcatedModelSizes_p23(void);

/* Symbol: gettrainLastUtteranceSnr */
/* Demangled: gettrainLastUtteranceSnr */
int gettrainLastUtteranceSnr(void);

/* Symbol: GMM_Posterior */
/* Demangled: GMM_Posterior */
int GMM_Posterior(void);

/* Symbol: rightShiftShortArray */
/* Demangled: rightShiftShortArray */
int rightShiftShortArray(void);

/* Symbol: wakeupMultiConditionFE */
/* Demangled: wakeupMultiConditionFE */
int wakeupMultiConditionFE(void);

/* Symbol: returnMe */
/* Demangled: returnMe */
extern void* returnMe;

/* Symbol: _CPLOGGER_closeLogTarget */
/* Demangled: _CPLOGGER_closeLogTarget */
int _CPLOGGER_closeLogTarget(void);

/* Symbol: BrownNoise */
/* Demangled: BrownNoise */
extern void* BrownNoise;

/* Symbol: savingSpeakerModelFullPath */
/* Demangled: savingSpeakerModelFullPath */
extern void* savingSpeakerModelFullPath;

/* Symbol: wakeupTrainingInit */
/* Demangled: wakeupTrainingInit */
int wakeupTrainingInit(void);

/* Symbol: settings */
/* Demangled: settings */
extern void* settings;

/* Symbol: BROWN_NOISE_SCORE */
/* Demangled: BROWN_NOISE_SCORE */
extern void* BROWN_NOISE_SCORE;

/* Symbol: vowLoadMultilingualHmmModelsForMergeFromFile */
/* Demangled: vowLoadMultilingualHmmModelsForMergeFromFile */
int vowLoadMultilingualHmmModelsForMergeFromFile(void);

/* Symbol: ubmModelTestingParam */
/* Demangled: ubmModelTestingParam */
extern void* ubmModelTestingParam;

/* Symbol: initSuperParam */
/* Demangled: initSuperParam */
int initSuperParam(void);

/* Symbol: TrainingConfidence */
/* Demangled: TrainingConfidence */
extern void* TrainingConfidence;

/* Symbol: parameterModifyForTab */
/* Demangled: parameterModifyForTab */
int parameterModifyForTab(void);

/* Symbol: Cadd */
/* Demangled: Cadd */
int Cadd(void);

/* Symbol: wakeupDelta_Acc_39dim2 */
/* Demangled: wakeupDelta_Acc_39dim2 */
int wakeupDelta_Acc_39dim2(void);

/* Symbol: vowLAdd */
/* Demangled: vowLAdd */
int vowLAdd(void);

/* Symbol: Kmeans_samp_mean */
/* Demangled: Kmeans_samp_mean */
extern void* Kmeans_samp_mean;

/* Symbol: getModelSize */
/* Demangled: getModelSize */
int getModelSize(void);

/* Symbol: wakeupRegression */
/* Demangled: wakeupRegression */
int wakeupRegression(void);

/* Symbol: wakeup_SNR_Detection_frame_based */
/* Demangled: wakeup_SNR_Detection_frame_based */
int wakeup_SNR_Detection_frame_based(void);

/* Symbol: training_getIntegerArgument */
/* Demangled: training_getIntegerArgument */
int training_getIntegerArgument(void);

/* Symbol: trainingORTesting */
/* Demangled: trainingORTesting */
extern void* trainingORTesting;

/* Symbol: modifyRawUbmModel */
/* Demangled: modifyRawUbmModel */
int modifyRawUbmModel(void);

/* Symbol: write16bitPcm */
/* Demangled: write16bitPcm */
int write16bitPcm(void);

/* Symbol: VADInfo */
/* Demangled: VADInfo */
extern void* VADInfo;

/* Symbol: registCurrentTime */
/* Demangled: registCurrentTime */
int registCurrentTime(void);

/* Symbol: test_UBM_dir */
/* Demangled: test_UBM_dir */
extern void* test_UBM_dir;

/* Symbol: vow_Filler_model_loader_binary_short */
/* Demangled: vow_Filler_model_loader_binary_short */
int vow_Filler_model_loader_binary_short(void);

/* Symbol: wakeupFeature */
/* Demangled: wakeupFeature */
extern void* wakeupFeature;

/* Symbol: threadpool_create */
/* Demangled: threadpool_create */
int threadpool_create(void);

/* Symbol: addNoiseFeatureInit */
/* Demangled: addNoiseFeatureInit */
int addNoiseFeatureInit(void);

/* Symbol: trainingParam */
/* Demangled: trainingParam */
extern void* trainingParam;

/* Symbol: DEFAULT_UTTERANCE_NUM */
/* Demangled: DEFAULT_UTTERANCE_NUM */
extern void* DEFAULT_UTTERANCE_NUM;

/* Symbol: deallocSpkRate */
/* Demangled: deallocSpkRate */
int deallocSpkRate(void);

/* Symbol: onTraining_impl */
/* Demangled: onTraining_impl */
int onTraining_impl(void);

/* Symbol: TrainingInit_impl */
/* Demangled: TrainingInit_impl */
int TrainingInit_impl(void);

/* Symbol: freeAdptHMM_Model_fixed */
/* Demangled: freeAdptHMM_Model_fixed */
int freeAdptHMM_Model_fixed(void);

/* Symbol: wakeupCMVNLastFrameWithMemory */
/* Demangled: wakeupCMVNLastFrameWithMemory */
int wakeupCMVNLastFrameWithMemory(void);

/* Symbol: vowInitKWSMulti_impl */
/* Demangled: vowInitKWSMulti_impl */
int vowInitKWSMulti_impl(void);

/* Symbol: freeSuperParam */
/* Demangled: freeSuperParam */
int freeSuperParam(void);

/* Symbol: VOWE_P23_training_setArgument */
/* Demangled: VOWE_P23_training_setArgument */
int VOWE_P23_training_setArgument(void);

/* Symbol: wakeupKeywordTrainSim_P23 */
/* Demangled: wakeupKeywordTrainSim_P23 */
int wakeupKeywordTrainSim_P23(void);

/* Symbol: vow_command_recognizer_parallel_fixed_static_short_phnboundary */
/* Demangled: vow_command_recognizer_parallel_fixed_static_short_phnboundary */
int vow_command_recognizer_parallel_fixed_static_short_phnboundary(void);

/* Symbol: diagnosisParam */
/* Demangled: diagnosisParam */
extern void* diagnosisParam;

/* Symbol: rtnWavMemoryAllocate */
/* Demangled: rtnWavMemoryAllocate */
int rtnWavMemoryAllocate(void);

/* Symbol: get_TQ_fft_debug */
/* Demangled: get_TQ_fft_debug */
int get_TQ_fft_debug(void);

/* Symbol: Model_Training */
/* Demangled: Model_Training */
extern void* Model_Training;

/* Symbol: addNoiseUttInit */
/* Demangled: addNoiseUttInit */
int addNoiseUttInit(void);

/* Symbol: frameBasedMVN */
/* Demangled: frameBasedMVN */
int frameBasedMVN(void);

/* Symbol: cmdRecRelease */
/* Demangled: cmdRecRelease */
int cmdRecRelease(void);

/* Symbol: VOWE_P23_testing_parseModel */
/* Demangled: VOWE_P23_testing_parseModel */
int VOWE_P23_testing_parseModel(void);

/* Symbol: spkRateRepeatTimes */
/* Demangled: spkRateRepeatTimes */
extern void* spkRateRepeatTimes;

/* Symbol: wakeupDCTCoef_Init */
/* Demangled: wakeupDCTCoef_Init */
int wakeupDCTCoef_Init(void);

/* Symbol: wakeupMel_Filter */
/* Demangled: wakeupMel_Filter */
int wakeupMel_Filter(void);

/* Symbol: EN_WARMUP */
/* Demangled: EN_WARMUP */
extern void* EN_WARMUP;

/* Symbol: getTrainingPassSnr */
/* Demangled: getTrainingPassSnr */
int getTrainingPassSnr(void);

/* Symbol: vowLoadBinaryCommandFile */
/* Demangled: vowLoadBinaryCommandFile */
int vowLoadBinaryCommandFile(void);

/* Symbol: ID_MixWeight */
/* Demangled: ID_MixWeight */
extern void* ID_MixWeight;

/* Symbol: RIRTrainingNum */
/* Demangled: RIRTrainingNum */
extern void* RIRTrainingNum;

/* Symbol: wakeupWriteWavFile */
/* Demangled: wakeupWriteWavFile */
extern void* wakeupWriteWavFile;

/* Symbol: getCommendConfidenceThreshold */
/* Demangled: getCommendConfidenceThreshold */
int getCommendConfidenceThreshold(void);

/* Symbol: wakeup_UttInit */
/* Demangled: wakeup_UttInit */
int wakeup_UttInit(void);

/* Symbol: LNE_LOWER_TH */
/* Demangled: LNE_LOWER_TH */
extern void* LNE_LOWER_TH;

/* Symbol: training_setFloatArrayArgument */
/* Demangled: training_setFloatArrayArgument */
int training_setFloatArrayArgument(void);

/* Symbol: OutP2 */
/* Demangled: OutP2 */
extern void* OutP2;

/* Symbol: MixLogWeight */
/* Demangled: MixLogWeight */
int MixLogWeight(void);

/* Symbol: allocateState */
/* Demangled: allocateState */
int allocateState(void);

/* Symbol: Spectrum */
/* Demangled: Spectrum */
int Spectrum(void);

/* Symbol: globalMemoryRelease */
/* Demangled: globalMemoryRelease */
int globalMemoryRelease(void);

/* Symbol: saveUttPcm */
/* Demangled: saveUttPcm */
int saveUttPcm(void);

/* Symbol: wakeup_refine_alignment */
/* Demangled: wakeup_refine_alignment */
int wakeup_refine_alignment(void);

/* Symbol: initLinearFloatArray */
/* Demangled: initLinearFloatArray */
int initLinearFloatArray(void);

/* Symbol: CutWave */
/* Demangled: CutWave */
int CutWave(void);

/* Symbol: cmdRecParas */
/* Demangled: cmdRecParas */
extern void* cmdRecParas;

/* Symbol: updateNoiseLevel */
/* Demangled: updateNoiseLevel */
int updateNoiseLevel(void);

/* Symbol: wakeup_getEnrollmentNumMovedMixtures */
/* Demangled: wakeup_getEnrollmentNumMovedMixtures */
int wakeup_getEnrollmentNumMovedMixtures(void);

/* Symbol: vow_monophone_merged_model_name_table */
/* Demangled: vow_monophone_merged_model_name_table */
extern void* vow_monophone_merged_model_name_table;

/* Symbol: DIF_FFT */
/* Demangled: DIF_FFT */
int DIF_FFT(void);

/* Symbol: exist_model_dir */
/* Demangled: exist_model_dir */
extern void* exist_model_dir;

/* Symbol: signalBuffer */
/* Demangled: signalBuffer */
extern void* signalBuffer;

/* Symbol: addNoiseReadPCM_Noise */
/* Demangled: addNoiseReadPCM_Noise */
int addNoiseReadPCM_Noise(void);

/* Symbol: McSpkRateTrainingNum */
/* Demangled: McSpkRateTrainingNum */
extern void* McSpkRateTrainingNum;

/* Symbol: dumpUttPcm */
/* Demangled: dumpUttPcm */
int dumpUttPcm(void);

/* Symbol: VAD_MODE_1 */
/* Demangled: VAD_MODE_1 */
extern void* VAD_MODE_1;

/* Symbol: createRecognitionParameters */
/* Demangled: createRecognitionParameters */
int createRecognitionParameters(void);

/* Symbol: evalStatisticsWithSimpleDis */
/* Demangled: evalStatisticsWithSimpleDis */
int evalStatisticsWithSimpleDis(void);

/* Symbol: spkrFeatureConcate */
/* Demangled: spkrFeatureConcate */
int spkrFeatureConcate(void);

/* Symbol: wakeupTQ_Energy */
/* Demangled: wakeupTQ_Energy */
extern void* wakeupTQ_Energy;

/* Symbol: gettrainLastUtteranceConfidenceScores */
/* Demangled: gettrainLastUtteranceConfidenceScores */
int gettrainLastUtteranceConfidenceScores(void);

/* Symbol: fft_cmplx */
/* Demangled: fft_cmplx */
int fft_cmplx(void);

/* Symbol: parseConcatedModels_p23 */
/* Demangled: parseConcatedModels_p23 */
int parseConcatedModels_p23(void);

/* Symbol: wakeupMelCoef_Init */
/* Demangled: wakeupMelCoef_Init */
int wakeupMelCoef_Init(void);

/* Symbol: wakeup_DPLLSRelease */
/* Demangled: wakeup_DPLLSRelease */
int wakeup_DPLLSRelease(void);

/* Symbol: constructEnrollData */
/* Demangled: constructEnrollData */
int constructEnrollData(void);

/* Symbol: GMMEval */
/* Demangled: GMMEval */
int GMMEval(void);

/* Symbol: ID */
/* Demangled: ID */
extern void* ID;

/* Symbol: DoApplyFIR */
/* Demangled: DoApplyFIR */
int DoApplyFIR(void);

/* Symbol: WakeupModels */
/* Demangled: WakeupModels */
extern void* WakeupModels;

/* Symbol: forDTWFeaSet_Utt0 */
/* Demangled: forDTWFeaSet_Utt0 */
extern void* forDTWFeaSet_Utt0;

/* Symbol: wakeupFeature_fixed */
/* Demangled: wakeupFeature_fixed */
extern void* wakeupFeature_fixed;

/* Symbol: HMMEval */
/* Demangled: HMMEval */
int HMMEval(void);

/* Symbol: redistributeFeature */
/* Demangled: redistributeFeature */
int redistributeFeature(void);

/* Symbol: VOWE_P23_training_diagnose */
/* Demangled: VOWE_P23_training_diagnose */
int VOWE_P23_training_diagnose(void);

/* Symbol: resetDPtable */
/* Demangled: resetDPtable */
int resetDPtable(void);

/* Symbol: DEFAULT_CONFIDENCE_TH */
/* Demangled: DEFAULT_CONFIDENCE_TH */
extern void* DEFAULT_CONFIDENCE_TH;

/* Symbol: WakeupSpkrInfo */
/* Demangled: WakeupSpkrInfo */
extern void* WakeupSpkrInfo;

/* Symbol: wakeup_onTraining_DIS_MCfromUBM */
/* Demangled: wakeup_onTraining_DIS_MCfromUBM */
int wakeup_onTraining_DIS_MCfromUBM(void);

/* Symbol: Conjugate */
/* Demangled: Conjugate */
int Conjugate(void);

/* Symbol: trainingDLPcmFullPath */
/* Demangled: trainingDLPcmFullPath */
extern void* trainingDLPcmFullPath;

/* Symbol: Init_GMM_Model */
/* Demangled: Init_GMM_Model */
int Init_GMM_Model(void);

/* Symbol: global_std_dev */
/* Demangled: global_std_dev */
extern void* global_std_dev;

/* Symbol: UttPcm2Linear */
/* Demangled: UttPcm2Linear */
int UttPcm2Linear(void);

/* Symbol: siModelSizeInDSP */
/* Demangled: siModelSizeInDSP */
extern void* siModelSizeInDSP;

/* Symbol: wakeupMelWindow_Init */
/* Demangled: wakeupMelWindow_Init */
int wakeupMelWindow_Init(void);

/* Symbol: PCMDiagonosis_impl */
/* Demangled: PCMDiagonosis_impl */
int PCMDiagonosis_impl(void);

/* Symbol: training_getFloatArrayArgument */
/* Demangled: training_getFloatArrayArgument */
int training_getFloatArrayArgument(void);

/* Symbol: vowReleaseForScoreCommands */
/* Demangled: vowReleaseForScoreCommands */
int vowReleaseForScoreCommands(void);

/* Symbol: LAdd */
/* Demangled: LAdd */
int LAdd(void);

/* Symbol: printf_wrap */
/* Demangled: printf_wrap */
int printf_wrap(void);

/* Symbol: LNE_UPPER_TH */
/* Demangled: LNE_UPPER_TH */
extern void* LNE_UPPER_TH;

/* Symbol: vow_english_rcdif_Model_name_table */
/* Demangled: vow_english_rcdif_Model_name_table */
extern void* vow_english_rcdif_Model_name_table;

/* Symbol: wakeupHMM_model_loader_binary_short */
/* Demangled: wakeupHMM_model_loader_binary_short */
int wakeupHMM_model_loader_binary_short(void);

/* Symbol: VOWE_P23_training_init */
/* Demangled: VOWE_P23_training_init */
int VOWE_P23_training_init(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: ar1_filter_1_16 */
/* Demangled: ar1_filter_1_16 */
int ar1_filter_1_16(void);

/* Symbol: onTraining */
/* Demangled: onTraining */
int onTraining(void);

/* Symbol: HMMEval_fixed */
/* Demangled: HMMEval_fixed */
int HMMEval_fixed(void);

/* Symbol: getShortArrayHistogram */
/* Demangled: getShortArrayHistogram */
int getShortArrayHistogram(void);

/* Symbol: magnitude_c */
/* Demangled: magnitude_c */
int magnitude_c(void);

/* Symbol: setTrainingGlobalConfidenceThresholds */
/* Demangled: setTrainingGlobalConfidenceThresholds */
int setTrainingGlobalConfidenceThresholds(void);

/* Symbol: multiplyFloatArray */
/* Demangled: multiplyFloatArray */
int multiplyFloatArray(void);

/* Symbol: trainingVadDebugMessageFullPath */
/* Demangled: trainingVadDebugMessageFullPath */
extern void* trainingVadDebugMessageFullPath;

/* Symbol: em_condition_mutex */
/* Demangled: em_condition_mutex */
extern void* em_condition_mutex;

/* Symbol: WriteWAV */
/* Demangled: WriteWAV */
extern void* WriteWAV;

/* Symbol: insertRightShiftFloatArray */
/* Demangled: insertRightShiftFloatArray */
int insertRightShiftFloatArray(void);

/* Symbol: WakeupLLS */
/* Demangled: WakeupLLS */
extern void* WakeupLLS;

/* Symbol: speakerPoolSelectionBinary */
/* Demangled: speakerPoolSelectionBinary */
int speakerPoolSelectionBinary(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: em_condition_cond */
/* Demangled: em_condition_cond */
extern void* em_condition_cond;

/* Symbol: Regression */
/* Demangled: Regression */
int Regression(void);

/* Symbol: VOWE_P23_testing_getModelSize */
/* Demangled: VOWE_P23_testing_getModelSize */
int VOWE_P23_testing_getModelSize(void);

/* Symbol: addNoiseDcRemove */
/* Demangled: addNoiseDcRemove */
int addNoiseDcRemove(void);

/* Symbol: frameIdxOffset4MultiCondition */
/* Demangled: frameIdxOffset4MultiCondition */
extern void* frameIdxOffset4MultiCondition;

/* Symbol: rtnWavMemoryRelease */
/* Demangled: rtnWavMemoryRelease */
int rtnWavMemoryRelease(void);

/* Symbol: testingPcmFullPath */
/* Demangled: testingPcmFullPath */
extern void* testingPcmFullPath;

/* Symbol: setFloatArrayValue */
/* Demangled: setFloatArrayValue */
int setFloatArrayValue(void);

/* Symbol: _CPLOGGER_clearLogFile */
/* Demangled: _CPLOGGER_clearLogFile */
int _CPLOGGER_clearLogFile(void);

/* Symbol: training_getFloatArgument */
/* Demangled: training_getFloatArgument */
int training_getFloatArgument(void);

/* Symbol: vow_english_monophone_Model_name_table */
/* Demangled: vow_english_monophone_Model_name_table */
extern void* vow_english_monophone_Model_name_table;

/* Symbol: TrainingRelease */
/* Demangled: TrainingRelease */
int TrainingRelease(void);

/* Symbol: DCT_coef */
/* Demangled: DCT_coef */
extern void* DCT_coef;

/* Symbol: NoisyUttPcm */
/* Demangled: NoisyUttPcm */
extern void* NoisyUttPcm;

/* Symbol: endPointDetection_impl */
/* Demangled: endPointDetection_impl */
int endPointDetection_impl(void);

/* Symbol: Begin_Window */
/* Demangled: Begin_Window */
extern void* Begin_Window;

/* Symbol: insertFloatArrayRightShift */
/* Demangled: insertFloatArrayRightShift */
int insertFloatArrayRightShift(void);

/* Symbol: VOWE_P23_training_inputMic */
/* Demangled: VOWE_P23_training_inputMic */
int VOWE_P23_training_inputMic(void);

/* Symbol: timeStreching */
/* Demangled: timeStreching */
int timeStreching(void);

/* Symbol: vow_Mix_weight_all_filler */
/* Demangled: vow_Mix_weight_all_filler */
extern void* vow_Mix_weight_all_filler;

/* Symbol: wakeup_getEnrollmentModelSize */
/* Demangled: wakeup_getEnrollmentModelSize */
int wakeup_getEnrollmentModelSize(void);

/* Symbol: VOWE_P23_training_setIntegerArgument */
/* Demangled: VOWE_P23_training_setIntegerArgument */
int VOWE_P23_training_setIntegerArgument(void);

/* Symbol: get_TQ_debug */
/* Demangled: get_TQ_debug */
int get_TQ_debug(void);

/* Symbol: PCMDiagonosis */
/* Demangled: PCMDiagonosis */
int PCMDiagonosis(void);

/* Symbol: getTrainingTimeout */
/* Demangled: getTrainingTimeout */
int getTrainingTimeout(void);

/* Symbol: evalLogLike_calOnlyMovedMix_keyword */
/* Demangled: evalLogLike_calOnlyMovedMix_keyword */
int evalLogLike_calOnlyMovedMix_keyword(void);

/* Symbol: vow_mandarin_rcdif_english_monorcdif376_merged_model_name_table */
/* Demangled: vow_mandarin_rcdif_english_monorcdif376_merged_model_name_table */
extern void* vow_mandarin_rcdif_english_monorcdif376_merged_model_name_table;

/* Symbol: In_the_range */
/* Demangled: In_the_range */
int In_the_range(void);

/* Symbol: VOWE_P23_training_release */
/* Demangled: VOWE_P23_training_release */
int VOWE_P23_training_release(void);

/* Symbol: VadInfo */
/* Demangled: VadInfo */
extern void* VadInfo;

/* Symbol: rcdif_HMM_model1 */
/* Demangled: rcdif_HMM_model1 */
extern void* rcdif_HMM_model1;

/* Symbol: addNoiseReadPCM_Noise_idx */
/* Demangled: addNoiseReadPCM_Noise_idx */
int addNoiseReadPCM_Noise_idx(void);

/* Symbol: wakeupApplyDGgain */
/* Demangled: wakeupApplyDGgain */
int wakeupApplyDGgain(void);

/* Symbol: rcdif_HMM_model2 */
/* Demangled: rcdif_HMM_model2 */
extern void* rcdif_HMM_model2;

/* Symbol: TrainingFrameNum */
/* Demangled: TrainingFrameNum */
extern void* TrainingFrameNum;

/* Symbol: wakeupGmmDecoder */
/* Demangled: wakeupGmmDecoder */
int wakeupGmmDecoder(void);

/* Symbol: rcdif_HMM_model3 */
/* Demangled: rcdif_HMM_model3 */
extern void* rcdif_HMM_model3;

/* Symbol: Mel_Filter */
/* Demangled: Mel_Filter */
int Mel_Filter(void);

/* Symbol: ProgressiveVAD */
/* Demangled: ProgressiveVAD */
int ProgressiveVAD(void);

/* Symbol: vow_command_parser_static_short_deiformat_anti_binin */
/* Demangled: vow_command_parser_static_short_deiformat_anti_binin */
int vow_command_parser_static_short_deiformat_anti_binin(void);

/* Symbol: recordFrameIdx */
/* Demangled: recordFrameIdx */
extern void* recordFrameIdx;

/* Symbol: rcdif_HMM_model4 */
/* Demangled: rcdif_HMM_model4 */
extern void* rcdif_HMM_model4;

/* Symbol: VOWE_P23_training_enroll */
/* Demangled: VOWE_P23_training_enroll */
int VOWE_P23_training_enroll(void);

/* Symbol: rcdif_HMM_model5 */
/* Demangled: rcdif_HMM_model5 */
extern void* rcdif_HMM_model5;

/* Symbol: HMMEval_fixed_calOnlyMovedMix */
/* Demangled: HMMEval_fixed_calOnlyMovedMix */
int HMMEval_fixed_calOnlyMovedMix(void);

/* Symbol: allocateSuperParam */
/* Demangled: allocateSuperParam */
int allocateSuperParam(void);

/* Symbol: wakeupCMVN */
/* Demangled: wakeupCMVN */
int wakeupCMVN(void);

/* Symbol: wakeup_testingModelRelease */
/* Demangled: wakeup_testingModelRelease */
int wakeup_testingModelRelease(void);

/* Symbol: loadLastTime */
/* Demangled: loadLastTime */
int loadLastTime(void);

/* Symbol: findFloatArrayMax */
/* Demangled: findFloatArrayMax */
int findFloatArrayMax(void);

/* Symbol: addNoiseEndPointDetection */
/* Demangled: addNoiseEndPointDetection */
int addNoiseEndPointDetection(void);

/* Symbol: get_fout_debug */
/* Demangled: get_fout_debug */
int get_fout_debug(void);

/* Symbol: getContinueButtonState */
/* Demangled: getContinueButtonState */
int getContinueButtonState(void);

/* Symbol: setContinueButtonState */
/* Demangled: setContinueButtonState */
int setContinueButtonState(void);

/* Symbol: Kmeans_mean */
/* Demangled: Kmeans_mean */
extern void* Kmeans_mean;

/* Symbol: dotArray */
/* Demangled: dotArray */
int dotArray(void);

/* Symbol: getTimeStrechParmsPtr */
/* Demangled: getTimeStrechParmsPtr */
int getTimeStrechParmsPtr(void);

/* Symbol: GMM_model_parser_binary_dynamic */
/* Demangled: GMM_model_parser_binary_dynamic */
int GMM_model_parser_binary_dynamic(void);

/* Symbol: VOWE_P23_training_getEnrollmentModelSize */
/* Demangled: VOWE_P23_training_getEnrollmentModelSize */
int VOWE_P23_training_getEnrollmentModelSize(void);

/* Symbol: vowGetBinCmdName */
/* Demangled: vowGetBinCmdName */
int vowGetBinCmdName(void);

/* Symbol: speakerModel4Train */
/* Demangled: speakerModel4Train */
extern void* speakerModel4Train;

/* Symbol: wakeup_onTraining_DIS */
/* Demangled: wakeup_onTraining_DIS */
int wakeup_onTraining_DIS(void);

/* Symbol: wakeupFrameNum */
/* Demangled: wakeupFrameNum */
extern void* wakeupFrameNum;

/* Symbol: Cmul */
/* Demangled: Cmul */
int Cmul(void);

/* Symbol: wakeupPCMVN */
/* Demangled: wakeupPCMVN */
int wakeupPCMVN(void);

/* Symbol: rawDataFrameIdx */
/* Demangled: rawDataFrameIdx */
extern void* rawDataFrameIdx;

/* Symbol: wakeupTrainEndpointDetectionWrap */
/* Demangled: wakeupTrainEndpointDetectionWrap */
int wakeupTrainEndpointDetectionWrap(void);

/* Symbol: VAD_HIGH_BAND */
/* Demangled: VAD_HIGH_BAND */
extern void* VAD_HIGH_BAND;

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: Release_GMM_Model */
/* Demangled: Release_GMM_Model */
int Release_GMM_Model(void);

/* Symbol: assignGMMModel */
/* Demangled: assignGMMModel */
int assignGMMModel(void);

/* Symbol: norm_c */
/* Demangled: norm_c */
int norm_c(void);

/* Symbol: evalStatistics */
/* Demangled: evalStatistics */
int evalStatistics(void);

/* Symbol: vow_command_parser_static_short_deiformat_anti */
/* Demangled: vow_command_parser_static_short_deiformat_anti */
int vow_command_parser_static_short_deiformat_anti(void);

/* Symbol: adptHMM_loader_v7float */
/* Demangled: adptHMM_loader_v7float */
int adptHMM_loader_v7float(void);

/* Symbol: insertLeftShiftFloatArray */
/* Demangled: insertLeftShiftFloatArray */
int insertLeftShiftFloatArray(void);

/* Symbol: noiseNum_randomSelect */
/* Demangled: noiseNum_randomSelect */
extern void* noiseNum_randomSelect;

/* Symbol: wakeup_TQ_lhRatio */
/* Demangled: wakeup_TQ_lhRatio */
int wakeup_TQ_lhRatio(void);

/* Symbol: mixtureCopyfromKWSModels2AdptModels */
/* Demangled: mixtureCopyfromKWSModels2AdptModels */
int mixtureCopyfromKWSModels2AdptModels(void);

/* Symbol: backup_pcm */
/* Demangled: backup_pcm */
int backup_pcm(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: wakeupWriteWAV_LinearBuf */
/* Demangled: wakeupWriteWAV_LinearBuf */
extern void* wakeupWriteWAV_LinearBuf;

/* Symbol: wakeup_DPLLSInit */
/* Demangled: wakeup_DPLLSInit */
int wakeup_DPLLSInit(void);

/* Symbol: get_TQ_energy_debug */
/* Demangled: get_TQ_energy_debug */
int get_TQ_energy_debug(void);

/* Symbol: releaseBinaryHMMModelFile */
/* Demangled: releaseBinaryHMMModelFile */
int releaseBinaryHMMModelFile(void);

/* Symbol: DCT */
/* Demangled: DCT */
int DCT(void);

/* Symbol: allocSpkRate */
/* Demangled: allocSpkRate */
int allocSpkRate(void);

/* Symbol: setCommandConfidenceThreshold */
/* Demangled: setCommandConfidenceThreshold */
int setCommandConfidenceThreshold(void);

/* Symbol: Kmeans_var */
/* Demangled: Kmeans_var */
extern void* Kmeans_var;

/* Symbol: global_mean */
/* Demangled: global_mean */
extern void* global_mean;

/* Symbol: freeAdptHMM_Model */
/* Demangled: freeAdptHMM_Model */
int freeAdptHMM_Model(void);

/* Symbol: getModelSizeInDSP */
/* Demangled: getModelSizeInDSP */
int getModelSizeInDSP(void);

/* Symbol: applyVOWCompensation */
/* Demangled: applyVOWCompensation */
int applyVOWCompensation(void);

/* Symbol: setTargetType */
/* Demangled: setTargetType */
int setTargetType(void);

/* Symbol: getWakeupInfoPtr */
/* Demangled: getWakeupInfoPtr */
int getWakeupInfoPtr(void);

/* Symbol: setWarmUpFrameNum */
/* Demangled: setWarmUpFrameNum */
int setWarmUpFrameNum(void);

/* Symbol: findFloatArrayMin_nbest */
/* Demangled: findFloatArrayMin_nbest */
int findFloatArrayMin_nbest(void);

/* Symbol: deallocTimeStrechParms */
/* Demangled: deallocTimeStrechParms */
int deallocTimeStrechParms(void);

/* Symbol: testingDebugMessageFullPath */
/* Demangled: testingDebugMessageFullPath */
extern void* testingDebugMessageFullPath;

__END_DECLS

#endif /* BEGONIA_RE_LIBVOWP23_SID_TRAINING_VENDOR_H */
