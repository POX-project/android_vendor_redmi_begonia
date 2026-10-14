/*
 * Reverse-Engineered ABI Specification for: libvowp25testing.vendor.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libvowp25testing.vendor.so
 */

#ifndef BEGONIA_RE_LIBVOWP25TESTING_VENDOR_H
#define BEGONIA_RE_LIBVOWP25TESTING_VENDOR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: TestingReset */
/* Demangled: TestingReset */
int TestingReset(void);

/* Symbol: realize_Fixed16ArrayVector */
/* Demangled: realize_Fixed16ArrayVector */
int realize_Fixed16ArrayVector(void);

/* Symbol: _MelWindow_apply */
/* Demangled: _MelWindow_apply */
int _MelWindow_apply(void);

/* Symbol: ScoreCacher_init */
/* Demangled: ScoreCacher_init */
int ScoreCacher_init(void);

/* Symbol: TestingConsole_release */
/* Demangled: TestingConsole_release */
int TestingConsole_release(void);

/* Symbol: DpHandler_extractAndConcludeScore */
/* Demangled: DpHandler_extractAndConcludeScore */
int DpHandler_extractAndConcludeScore(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: I32Tensor_memset */
/* Demangled: I32Tensor_memset */
int I32Tensor_memset(void);

/* Symbol: cmp_float_ascend */
/* Demangled: cmp_float_ascend */
int cmp_float_ascend(void);

/* Symbol: TestingGetSIDEndFrameIdx */
/* Demangled: TestingGetSIDEndFrameIdx */
int TestingGetSIDEndFrameIdx(void);

/* Symbol: RegHandler_signal_sim_start */
/* Demangled: RegHandler_signal_sim_start */
int RegHandler_signal_sim_start(void);

/* Symbol: RegFeature_init */
/* Demangled: RegFeature_init */
int RegFeature_init(void);

/* Symbol: TestingConsole_getKeywordIndex */
/* Demangled: TestingConsole_getKeywordIndex */
int TestingConsole_getKeywordIndex(void);

/* Symbol: CSyncer_lock */
/* Demangled: CSyncer_lock */
int CSyncer_lock(void);

/* Symbol: CThreadHandler_release */
/* Demangled: CThreadHandler_release */
int CThreadHandler_release(void);

/* Symbol: CSyncer_init */
/* Demangled: CSyncer_init */
int CSyncer_init(void);

/* Symbol: ModelParser_parse_int */
/* Demangled: ModelParser_parse_int */
int ModelParser_parse_int(void);

/* Symbol: NN_Activation_execute */
/* Demangled: NN_Activation_execute */
int NN_Activation_execute(void);

/* Symbol: TestingSetSIDConfidenceThresholds */
/* Demangled: TestingSetSIDConfidenceThresholds */
int TestingSetSIDConfidenceThresholds(void);

/* Symbol: NoiseLevelComputer_reset */
/* Demangled: NoiseLevelComputer_reset */
int NoiseLevelComputer_reset(void);

/* Symbol: TestingConsole_getKeywordId */
/* Demangled: TestingConsole_getKeywordId */
int TestingConsole_getKeywordId(void);

/* Symbol: RegClassifier_release */
/* Demangled: RegClassifier_release */
int RegClassifier_release(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: CodingInstance_explain */
/* Demangled: CodingInstance_explain */
int CodingInstance_explain(void);

/* Symbol: RegClassifier_apply */
/* Demangled: RegClassifier_apply */
int RegClassifier_apply(void);

/* Symbol: F32Tensor2d_new */
/* Demangled: F32Tensor2d_new */
int F32Tensor2d_new(void);

/* Symbol: cmp_float_descend */
/* Demangled: cmp_float_descend */
int cmp_float_descend(void);

/* Symbol: DelayQueue_init */
/* Demangled: DelayQueue_init */
int DelayQueue_init(void);

/* Symbol: AmplitudeComputer_init */
/* Demangled: AmplitudeComputer_init */
int AmplitudeComputer_init(void);

/* Symbol: ThreadJobPool_pop */
/* Demangled: ThreadJobPool_pop */
int ThreadJobPool_pop(void);

/* Symbol: PD_find_sk_default_int */
/* Demangled: PD_find_sk_default_int */
int PD_find_sk_default_int(void);

/* Symbol: CMutex_init */
/* Demangled: CMutex_init */
int CMutex_init(void);

/* Symbol: CMutex_lock */
/* Demangled: CMutex_lock */
int CMutex_lock(void);

/* Symbol: CodingHeader_alloc */
/* Demangled: CodingHeader_alloc */
int CodingHeader_alloc(void);

/* Symbol: NN_MaxPool_load */
/* Demangled: NN_MaxPool_load */
int NN_MaxPool_load(void);

/* Symbol: getTensorLen */
/* Demangled: getTensorLen */
int getTensorLen(void);

/* Symbol: BinCircularBuffer_lastBins */
/* Demangled: BinCircularBuffer_lastBins */
int BinCircularBuffer_lastBins(void);

/* Symbol: Printer_pid */
/* Demangled: Printer_pid */
int Printer_pid(void);

/* Symbol: Scagather_execute */
/* Demangled: Scagather_execute */
int Scagather_execute(void);

/* Symbol: ScoreCacher_release */
/* Demangled: ScoreCacher_release */
int ScoreCacher_release(void);

/* Symbol: TestingConsole_set_SIDBargeInThresholds */
/* Demangled: TestingConsole_set_SIDBargeInThresholds */
int TestingConsole_set_SIDBargeInThresholds(void);

/* Symbol: compute_tandem_FE_raw_last */
/* Demangled: compute_tandem_FE_raw_last */
int compute_tandem_FE_raw_last(void);

/* Symbol: NN_MaxPool_release */
/* Demangled: NN_MaxPool_release */
int NN_MaxPool_release(void);

/* Symbol: exec_ten_fusedAddMul */
/* Demangled: exec_ten_fusedAddMul */
int exec_ten_fusedAddMul(void);

/* Symbol: RegClassifier_apply_atlas */
/* Demangled: RegClassifier_apply_atlas */
int RegClassifier_apply_atlas(void);

/* Symbol: NnKernel_init */
/* Demangled: NnKernel_init */
int NnKernel_init(void);

/* Symbol: TestingGetPrint */
/* Demangled: TestingGetPrint */
int TestingGetPrint(void);

/* Symbol: RegKernel_init */
/* Demangled: RegKernel_init */
int RegKernel_init(void);

/* Symbol: DpHandler_updateViterbi */
/* Demangled: DpHandler_updateViterbi */
int DpHandler_updateViterbi(void);

/* Symbol: DcRemovalSigBuffer_release */
/* Demangled: DcRemovalSigBuffer_release */
int DcRemovalSigBuffer_release(void);

/* Symbol: SpeechCountComputer_apply */
/* Demangled: SpeechCountComputer_apply */
int SpeechCountComputer_apply(void);

/* Symbol: ThreadWorker_reset */
/* Demangled: ThreadWorker_reset */
int ThreadWorker_reset(void);

/* Symbol: F32Tensor_arange */
/* Demangled: F32Tensor_arange */
int F32Tensor_arange(void);

/* Symbol: CodingHeader_setCodingSwap */
/* Demangled: CodingHeader_setCodingSwap */
int CodingHeader_setCodingSwap(void);

/* Symbol: I32Tensor_del */
/* Demangled: I32Tensor_del */
int I32Tensor_del(void);

/* Symbol: TestingFeatureExtraction */
/* Demangled: TestingFeatureExtraction */
int TestingFeatureExtraction(void);

/* Symbol: Printer_close */
/* Demangled: Printer_close */
int Printer_close(void);

/* Symbol: NN_AffineTransform_execute */
/* Demangled: NN_AffineTransform_execute */
int NN_AffineTransform_execute(void);

/* Symbol: RegHandler_getSIDLastUtteranceConfidenceScores */
/* Demangled: RegHandler_getSIDLastUtteranceConfidenceScores */
int RegHandler_getSIDLastUtteranceConfidenceScores(void);

/* Symbol: MfccHamming_release */
/* Demangled: MfccHamming_release */
int MfccHamming_release(void);

/* Symbol: SnrEstimator_apply */
/* Demangled: SnrEstimator_apply */
int SnrEstimator_apply(void);

/* Symbol: CodingHeader_setCodingSwap_randomField */
/* Demangled: CodingHeader_setCodingSwap_randomField */
int CodingHeader_setCodingSwap_randomField(void);

/* Symbol: CSyncer_wait_in_lock */
/* Demangled: CSyncer_wait_in_lock */
int CSyncer_wait_in_lock(void);

/* Symbol: RegClassifierFlags_init */
/* Demangled: RegClassifierFlags_init */
int RegClassifierFlags_init(void);

/* Symbol: DcRemovalSigBuffer_reset */
/* Demangled: DcRemovalSigBuffer_reset */
int DcRemovalSigBuffer_reset(void);

/* Symbol: getNoSpeechFrameCount */
/* Demangled: getNoSpeechFrameCount */
int getNoSpeechFrameCount(void);

/* Symbol: exec_ten_linear */
/* Demangled: exec_ten_linear */
int exec_ten_linear(void);

/* Symbol: NN_Splice_load */
/* Demangled: NN_Splice_load */
int NN_Splice_load(void);

/* Symbol: F32Tensor4d_new */
/* Demangled: F32Tensor4d_new */
int F32Tensor4d_new(void);

/* Symbol: VOWE_P25_testing_reset */
/* Demangled: VOWE_P25_testing_reset */
int VOWE_P25_testing_reset(void);

/* Symbol: RegKernel_release */
/* Demangled: RegKernel_release */
int RegKernel_release(void);

/* Symbol: NoiseBuffer_init */
/* Demangled: NoiseBuffer_init */
int NoiseBuffer_init(void);

/* Symbol: VOWE_P25_testing_getKeywordId */
/* Demangled: VOWE_P25_testing_getKeywordId */
int VOWE_P25_testing_getKeywordId(void);

/* Symbol: NoiseBuffer_reset */
/* Demangled: NoiseBuffer_reset */
int NoiseBuffer_reset(void);

/* Symbol: data_init */
/* Demangled: data_init */
int data_init(void);

/* Symbol: TestingConsole_getPrint */
/* Demangled: TestingConsole_getPrint */
int TestingConsole_getPrint(void);

/* Symbol: ModelParser_parse_key */
/* Demangled: ModelParser_parse_key */
int ModelParser_parse_key(void);

/* Symbol: NN_AffineTransform_init */
/* Demangled: NN_AffineTransform_init */
int NN_AffineTransform_init(void);

/* Symbol: TestingStopRecognition */
/* Demangled: TestingStopRecognition */
int TestingStopRecognition(void);

/* Symbol: VOWE_P25_testing_version */
/* Demangled: VOWE_P25_testing_version */
int VOWE_P25_testing_version(void);

/* Symbol: NoiseBuffer_switch_partial */
/* Demangled: NoiseBuffer_switch_partial */
int NoiseBuffer_switch_partial(void);

/* Symbol: TestingConsole_recognize */
/* Demangled: TestingConsole_recognize */
int TestingConsole_recognize(void);

/* Symbol: CodingHeader_performEncodeBasedOnHeader */
/* Demangled: CodingHeader_performEncodeBasedOnHeader */
int CodingHeader_performEncodeBasedOnHeader(void);

/* Symbol: NN_Conv_execute */
/* Demangled: NN_Conv_execute */
int NN_Conv_execute(void);

/* Symbol: PCMVN_utterance_frame_by_frame */
/* Demangled: PCMVN_utterance_frame_by_frame */
int PCMVN_utterance_frame_by_frame(void);

/* Symbol: TestingInit */
/* Demangled: TestingInit */
int TestingInit(void);

/* Symbol: MelWindow_apply */
/* Demangled: MelWindow_apply */
int MelWindow_apply(void);

/* Symbol: CodingInstance_performDecode */
/* Demangled: CodingInstance_performDecode */
int CodingInstance_performDecode(void);

/* Symbol: HistoryValueWrapper_push */
/* Demangled: HistoryValueWrapper_push */
int HistoryValueWrapper_push(void);

/* Symbol: dcRemoval */
/* Demangled: dcRemoval */
int dcRemoval(void);

/* Symbol: ViterbiTable_update_first */
/* Demangled: ViterbiTable_update_first */
int ViterbiTable_update_first(void);

/* Symbol: GmmThreadManager_tail_get */
/* Demangled: GmmThreadManager_tail_get */
int GmmThreadManager_tail_get(void);

/* Symbol: RegClassifierFlags_reset */
/* Demangled: RegClassifierFlags_reset */
int RegClassifierFlags_reset(void);

/* Symbol: ViterbiTable_init */
/* Demangled: ViterbiTable_init */
int ViterbiTable_init(void);

/* Symbol: loadKaldiCMVN */
/* Demangled: loadKaldiCMVN */
int loadKaldiCMVN(void);

/* Symbol: reset_CMVN_stats */
/* Demangled: reset_CMVN_stats */
int reset_CMVN_stats(void);

/* Symbol: parseArguments */
/* Demangled: parseArguments */
int parseArguments(void);

/* Symbol: VOWE_P25_testing_getKeywordIndex */
/* Demangled: VOWE_P25_testing_getKeywordIndex */
int VOWE_P25_testing_getKeywordIndex(void);

/* Symbol: getSpeechFrameCount */
/* Demangled: getSpeechFrameCount */
int getSpeechFrameCount(void);

/* Symbol: VOWE_P25_inform_version */
/* Demangled: VOWE_P25_inform_version */
int VOWE_P25_inform_version(void);

/* Symbol: ValueArray_init */
/* Demangled: ValueArray_init */
int ValueArray_init(void);

/* Symbol: PCMVN_update_frame_based */
/* Demangled: PCMVN_update_frame_based */
int PCMVN_update_frame_based(void);

/* Symbol: Printer_init */
/* Demangled: Printer_init */
int Printer_init(void);

/* Symbol: FlowControlArguments_parse */
/* Demangled: FlowControlArguments_parse */
int FlowControlArguments_parse(void);

/* Symbol: DcRemovalSigBuffer_push */
/* Demangled: DcRemovalSigBuffer_push */
int DcRemovalSigBuffer_push(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: VOWE_P25_testing_setFloatArrayArgument */
/* Demangled: VOWE_P25_testing_setFloatArrayArgument */
int VOWE_P25_testing_setFloatArrayArgument(void);

/* Symbol: PD_ickey */
/* Demangled: PD_ickey */
int PD_ickey(void);

/* Symbol: RegClassifierThresholds_reset */
/* Demangled: RegClassifierThresholds_reset */
int RegClassifierThresholds_reset(void);

/* Symbol: AmplitudeComputer_apply */
/* Demangled: AmplitudeComputer_apply */
int AmplitudeComputer_apply(void);

/* Symbol: HistoryValueWrapper_init */
/* Demangled: HistoryValueWrapper_init */
int HistoryValueWrapper_init(void);

/* Symbol: TestingConsole_getRecognitionDetails */
/* Demangled: TestingConsole_getRecognitionDetails */
int TestingConsole_getRecognitionDetails(void);

/* Symbol: PD_find_k_default_int */
/* Demangled: PD_find_k_default_int */
int PD_find_k_default_int(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: NN_Conv_init */
/* Demangled: NN_Conv_init */
int NN_Conv_init(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: VOWE_P25_testing_getIntegerArgument */
/* Demangled: VOWE_P25_testing_getIntegerArgument */
int VOWE_P25_testing_getIntegerArgument(void);

/* Symbol: PD_find_k_default_float */
/* Demangled: PD_find_k_default_float */
int PD_find_k_default_float(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: BinCircularBuffer_release */
/* Demangled: BinCircularBuffer_release */
int BinCircularBuffer_release(void);

/* Symbol: VOWE_P25_testing_inputMic */
/* Demangled: VOWE_P25_testing_inputMic */
int VOWE_P25_testing_inputMic(void);

/* Symbol: VOWE_P25_testing_release */
/* Demangled: VOWE_P25_testing_release */
int VOWE_P25_testing_release(void);

/* Symbol: RegClassifier_put_th */
/* Demangled: RegClassifier_put_th */
int RegClassifier_put_th(void);

/* Symbol: RegMfccExtractor_release */
/* Demangled: RegMfccExtractor_release */
int RegMfccExtractor_release(void);

/* Symbol: data_reset */
/* Demangled: data_reset */
int data_reset(void);

/* Symbol: dcRemoval_reset */
/* Demangled: dcRemoval_reset */
int dcRemoval_reset(void);

/* Symbol: release_CMVN_stats */
/* Demangled: release_CMVN_stats */
int release_CMVN_stats(void);

/* Symbol: VOWE_P25_testing_getModelSize */
/* Demangled: VOWE_P25_testing_getModelSize */
int VOWE_P25_testing_getModelSize(void);

/* Symbol: DpHandler_init */
/* Demangled: DpHandler_init */
int DpHandler_init(void);

/* Symbol: ThCompensater_init */
/* Demangled: ThCompensater_init */
int ThCompensater_init(void);

/* Symbol: TestingConsole_extractFeature */
/* Demangled: TestingConsole_extractFeature */
int TestingConsole_extractFeature(void);

/* Symbol: ThreadJobPool_release */
/* Demangled: ThreadJobPool_release */
int ThreadJobPool_release(void);

/* Symbol: CThreadHandler_init */
/* Demangled: CThreadHandler_init */
int CThreadHandler_init(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: CThreadHandler_signalStop */
/* Demangled: CThreadHandler_signalStop */
int CThreadHandler_signalStop(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: FlowControlArguments_loadDefault */
/* Demangled: FlowControlArguments_loadDefault */
int FlowControlArguments_loadDefault(void);

/* Symbol: DpHandler_extractScore */
/* Demangled: DpHandler_extractScore */
int DpHandler_extractScore(void);

/* Symbol: AmplitudeComputer_release */
/* Demangled: AmplitudeComputer_release */
int AmplitudeComputer_release(void);

/* Symbol: DcRemovalSigBuffer_init */
/* Demangled: DcRemovalSigBuffer_init */
int DcRemovalSigBuffer_init(void);

/* Symbol: PD_add_raw */
/* Demangled: PD_add_raw */
int PD_add_raw(void);

/* Symbol: NN_FeatureTransform_execute */
/* Demangled: NN_FeatureTransform_execute */
int NN_FeatureTransform_execute(void);

/* Symbol: TestingConsole_get_MAX_DECODE_FRAMENUM */
/* Demangled: TestingConsole_get_MAX_DECODE_FRAMENUM */
int TestingConsole_get_MAX_DECODE_FRAMENUM(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: NN_Splice_release */
/* Demangled: NN_Splice_release */
int NN_Splice_release(void);

/* Symbol: VOWE_P25_inform_release */
/* Demangled: VOWE_P25_inform_release */
int VOWE_P25_inform_release(void);

/* Symbol: NnKernel_append */
/* Demangled: NnKernel_append */
int NnKernel_append(void);

/* Symbol: RegHistory_reset */
/* Demangled: RegHistory_reset */
int RegHistory_reset(void);

/* Symbol: RegResult_release */
/* Demangled: RegResult_release */
int RegResult_release(void);

/* Symbol: RegUtt_reset */
/* Demangled: RegUtt_reset */
int RegUtt_reset(void);

/* Symbol: VOWE_P25_testing_loadRecognizer */
/* Demangled: VOWE_P25_testing_loadRecognizer */
int VOWE_P25_testing_loadRecognizer(void);

/* Symbol: ViterbiTable_update_follows */
/* Demangled: ViterbiTable_update_follows */
int ViterbiTable_update_follows(void);

/* Symbol: PCMVN_utterance */
/* Demangled: PCMVN_utterance */
int PCMVN_utterance(void);

/* Symbol: VOWE_P25_testing_stopRecognition */
/* Demangled: VOWE_P25_testing_stopRecognition */
int VOWE_P25_testing_stopRecognition(void);

/* Symbol: RegModels_init */
/* Demangled: RegModels_init */
int RegModels_init(void);

/* Symbol: NoiseBuffer_switch_full */
/* Demangled: NoiseBuffer_switch_full */
int NoiseBuffer_switch_full(void);

/* Symbol: TestingGetModelSize */
/* Demangled: TestingGetModelSize */
int TestingGetModelSize(void);

/* Symbol: DeReverber_init */
/* Demangled: DeReverber_init */
int DeReverber_init(void);

/* Symbol: ReverbDetector_release */
/* Demangled: ReverbDetector_release */
int ReverbDetector_release(void);

/* Symbol: VOWE_P25_inform_init */
/* Demangled: VOWE_P25_inform_init */
int VOWE_P25_inform_init(void);

/* Symbol: TestingSetKWS2ConfidenceThresholds */
/* Demangled: TestingSetKWS2ConfidenceThresholds */
int TestingSetKWS2ConfidenceThresholds(void);

/* Symbol: TestingSetPrint */
/* Demangled: TestingSetPrint */
int TestingSetPrint(void);

/* Symbol: RegHandler_recognize_frameBased */
/* Demangled: RegHandler_recognize_frameBased */
int RegHandler_recognize_frameBased(void);

/* Symbol: CodingHeader_performDecodeBasedOnHeader */
/* Demangled: CodingHeader_performDecodeBasedOnHeader */
int CodingHeader_performDecodeBasedOnHeader(void);

/* Symbol: PCMVN_apply_frame_based */
/* Demangled: PCMVN_apply_frame_based */
int PCMVN_apply_frame_based(void);

/* Symbol: BinCircularBuffer_shift */
/* Demangled: BinCircularBuffer_shift */
int BinCircularBuffer_shift(void);

/* Symbol: VOWE_P25_testing_startRecognition */
/* Demangled: VOWE_P25_testing_startRecognition */
int VOWE_P25_testing_startRecognition(void);

/* Symbol: file_load */
/* Demangled: file_load */
int file_load(void);

/* Symbol: GmmThreadManager_release */
/* Demangled: GmmThreadManager_release */
int GmmThreadManager_release(void);

/* Symbol: noiseRefUpdate */
/* Demangled: noiseRefUpdate */
int noiseRefUpdate(void);

/* Symbol: PD_find_sk_int */
/* Demangled: PD_find_sk_int */
int PD_find_sk_int(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: TestingStartRecognition */
/* Demangled: TestingStartRecognition */
int TestingStartRecognition(void);

/* Symbol: CSyncer_release */
/* Demangled: CSyncer_release */
int CSyncer_release(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: RegClassifierFlags_release */
/* Demangled: RegClassifierFlags_release */
int RegClassifierFlags_release(void);

/* Symbol: NoiseBuffer_release */
/* Demangled: NoiseBuffer_release */
int NoiseBuffer_release(void);

/* Symbol: ReverbDetector_apply */
/* Demangled: ReverbDetector_apply */
int ReverbDetector_apply(void);

/* Symbol: FlowControlArguments_realize */
/* Demangled: FlowControlArguments_realize */
int FlowControlArguments_realize(void);

/* Symbol: file_getSize */
/* Demangled: file_getSize */
int file_getSize(void);

/* Symbol: RegMfccExtractor_snr */
/* Demangled: RegMfccExtractor_snr */
int RegMfccExtractor_snr(void);

/* Symbol: TestingConsole_get_MIN_DECODE_FRAMENUM */
/* Demangled: TestingConsole_get_MIN_DECODE_FRAMENUM */
int TestingConsole_get_MIN_DECODE_FRAMENUM(void);

/* Symbol: dumpParameterInstancePacket */
/* Demangled: dumpParameterInstancePacket */
int dumpParameterInstancePacket(void);

/* Symbol: ThreadJobPool_push */
/* Demangled: ThreadJobPool_push */
int ThreadJobPool_push(void);

/* Symbol: NN_FeatureTransform_init_rescale */
/* Demangled: NN_FeatureTransform_init_rescale */
int NN_FeatureTransform_init_rescale(void);

/* Symbol: ModelParser_realize */
/* Demangled: ModelParser_realize */
int ModelParser_realize(void);

/* Symbol: interpolate_CMVN_stats */
/* Demangled: interpolate_CMVN_stats */
int interpolate_CMVN_stats(void);

/* Symbol: VOWE_P25_inform_send */
/* Demangled: VOWE_P25_inform_send */
int VOWE_P25_inform_send(void);

/* Symbol: ViterbiTable_reset */
/* Demangled: ViterbiTable_reset */
int ViterbiTable_reset(void);

/* Symbol: TestingSetLastFrame */
/* Demangled: TestingSetLastFrame */
int TestingSetLastFrame(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: ReverbDetector_init */
/* Demangled: ReverbDetector_init */
int ReverbDetector_init(void);

/* Symbol: VOWE_P25_inform_reset */
/* Demangled: VOWE_P25_inform_reset */
int VOWE_P25_inform_reset(void);

/* Symbol: RegHandler_recognize_segmentBased */
/* Demangled: RegHandler_recognize_segmentBased */
int RegHandler_recognize_segmentBased(void);

/* Symbol: DpHandler_reset */
/* Demangled: DpHandler_reset */
int DpHandler_reset(void);

/* Symbol: ThCompensater_reset */
/* Demangled: ThCompensater_reset */
int ThCompensater_reset(void);

/* Symbol: Scagather_start */
/* Demangled: Scagather_start */
int Scagather_start(void);

/* Symbol: TestingConsole_setPrint */
/* Demangled: TestingConsole_setPrint */
int TestingConsole_setPrint(void);

/* Symbol: CSyncer_wait_pure */
/* Demangled: CSyncer_wait_pure */
int CSyncer_wait_pure(void);

/* Symbol: cmp_double_descend */
/* Demangled: cmp_double_descend */
int cmp_double_descend(void);

/* Symbol: NnKernel_forward */
/* Demangled: NnKernel_forward */
int NnKernel_forward(void);

/* Symbol: CodingInstance_performEncode */
/* Demangled: CodingInstance_performEncode */
int CodingInstance_performEncode(void);

/* Symbol: ThreadWorker_push */
/* Demangled: ThreadWorker_push */
int ThreadWorker_push(void);

/* Symbol: RegClassifier_put_model_nn */
/* Demangled: RegClassifier_put_model_nn */
int RegClassifier_put_model_nn(void);

/* Symbol: DeReverber_reset */
/* Demangled: DeReverber_reset */
int DeReverber_reset(void);

/* Symbol: PpbStateTable_init */
/* Demangled: PpbStateTable_init */
int PpbStateTable_init(void);

/* Symbol: PD_find_k_float */
/* Demangled: PD_find_k_float */
int PD_find_k_float(void);

/* Symbol: TestingGetRecognizerDataSize */
/* Demangled: TestingGetRecognizerDataSize */
int TestingGetRecognizerDataSize(void);

/* Symbol: TestingGetSIDStartFrameIdx */
/* Demangled: TestingGetSIDStartFrameIdx */
int TestingGetSIDStartFrameIdx(void);

/* Symbol: vad_init */
/* Demangled: vad_init */
int vad_init(void);

/* Symbol: ThreadJobPool_init */
/* Demangled: ThreadJobPool_init */
int ThreadJobPool_init(void);

/* Symbol: NN_AffineTransform_load_pca */
/* Demangled: NN_AffineTransform_load_pca */
int NN_AffineTransform_load_pca(void);

/* Symbol: I32Tensor2d_new */
/* Demangled: I32Tensor2d_new */
int I32Tensor2d_new(void);

/* Symbol: BargeinDetector_init */
/* Demangled: BargeinDetector_init */
int BargeinDetector_init(void);

/* Symbol: RegKernel_reset */
/* Demangled: RegKernel_reset */
int RegKernel_reset(void);

/* Symbol: dcRemoval_init */
/* Demangled: dcRemoval_init */
int dcRemoval_init(void);

/* Symbol: PpbStateTable_swap */
/* Demangled: PpbStateTable_swap */
int PpbStateTable_swap(void);

/* Symbol: CSyncer_unlock */
/* Demangled: CSyncer_unlock */
int CSyncer_unlock(void);

/* Symbol: writeKaldiCMVN */
/* Demangled: writeKaldiCMVN */
int writeKaldiCMVN(void);

/* Symbol: getKeywordId */
/* Demangled: getKeywordId */
int getKeywordId(void);

/* Symbol: TestingGetKWS2ConfidenceThresholds */
/* Demangled: TestingGetKWS2ConfidenceThresholds */
int TestingGetKWS2ConfidenceThresholds(void);

/* Symbol: PD_open */
/* Demangled: PD_open */
int PD_open(void);

/* Symbol: RegMfccExtractor_apply */
/* Demangled: RegMfccExtractor_apply */
int RegMfccExtractor_apply(void);

/* Symbol: SnrEstimator_init */
/* Demangled: SnrEstimator_init */
int SnrEstimator_init(void);

/* Symbol: ThreadWorker_init */
/* Demangled: ThreadWorker_init */
int ThreadWorker_init(void);

/* Symbol: NN_Activation_release */
/* Demangled: NN_Activation_release */
int NN_Activation_release(void);

/* Symbol: RegHandler_set_SIDBargeInThresholds */
/* Demangled: RegHandler_set_SIDBargeInThresholds */
int RegHandler_set_SIDBargeInThresholds(void);

/* Symbol: GmmThreadManager_set_input_feature */
/* Demangled: GmmThreadManager_set_input_feature */
int GmmThreadManager_set_input_feature(void);

/* Symbol: PD_load */
/* Demangled: PD_load */
int PD_load(void);

/* Symbol: ThreadWorker_isDone */
/* Demangled: ThreadWorker_isDone */
int ThreadWorker_isDone(void);

/* Symbol: ThreadWorker_release */
/* Demangled: ThreadWorker_release */
int ThreadWorker_release(void);

/* Symbol: NN_MaxPool_execute */
/* Demangled: NN_MaxPool_execute */
int NN_MaxPool_execute(void);

/* Symbol: TestingConsole_reset */
/* Demangled: TestingConsole_reset */
int TestingConsole_reset(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: NN_FeatureTransform_load */
/* Demangled: NN_FeatureTransform_load */
int NN_FeatureTransform_load(void);

/* Symbol: RegHandler_init */
/* Demangled: RegHandler_init */
int RegHandler_init(void);

/* Symbol: RegFeature_reset */
/* Demangled: RegFeature_reset */
int RegFeature_reset(void);

/* Symbol: BargeinDetector_reset */
/* Demangled: BargeinDetector_reset */
int BargeinDetector_reset(void);

/* Symbol: sim_testing_process */
/* Demangled: sim_testing_process */
int sim_testing_process(void);

/* Symbol: RegUtt_release */
/* Demangled: RegUtt_release */
int RegUtt_release(void);

/* Symbol: NnModel_forward */
/* Demangled: NnModel_forward */
int NnModel_forward(void);

/* Symbol: VOWE_P25_inform_poll */
/* Demangled: VOWE_P25_inform_poll */
int VOWE_P25_inform_poll(void);

/* Symbol: TestingUnloadRecognizer */
/* Demangled: TestingUnloadRecognizer */
int TestingUnloadRecognizer(void);

/* Symbol: GmmThreadManager_update_size */
/* Demangled: GmmThreadManager_update_size */
int GmmThreadManager_update_size(void);

/* Symbol: NoiseLevelComputer_release */
/* Demangled: NoiseLevelComputer_release */
int NoiseLevelComputer_release(void);

/* Symbol: noiseRefMinimumTracking */
/* Demangled: noiseRefMinimumTracking */
int noiseRefMinimumTracking(void);

/* Symbol: ThreadWorker_stop */
/* Demangled: ThreadWorker_stop */
int ThreadWorker_stop(void);

/* Symbol: I32Tensor4d_new */
/* Demangled: I32Tensor4d_new */
int I32Tensor4d_new(void);

/* Symbol: BinCircularBuffer_curBins */
/* Demangled: BinCircularBuffer_curBins */
int BinCircularBuffer_curBins(void);

/* Symbol: obtainSimFuncs_testing */
/* Demangled: obtainSimFuncs_testing */
int obtainSimFuncs_testing(void);

/* Symbol: Scagather_release */
/* Demangled: Scagather_release */
int Scagather_release(void);

/* Symbol: F32Tensor_memset */
/* Demangled: F32Tensor_memset */
int F32Tensor_memset(void);

/* Symbol: memAlloc */
/* Demangled: memAlloc */
int memAlloc(void);

/* Symbol: VOWE_P25_inform_setIntegerArgument */
/* Demangled: VOWE_P25_inform_setIntegerArgument */
int VOWE_P25_inform_setIntegerArgument(void);

/* Symbol: RegClassifier_put_model_hmm */
/* Demangled: RegClassifier_put_model_hmm */
int RegClassifier_put_model_hmm(void);

/* Symbol: SpeechCountComputer_init */
/* Demangled: SpeechCountComputer_init */
int SpeechCountComputer_init(void);

/* Symbol: NoiseLevelComputer_apply */
/* Demangled: NoiseLevelComputer_apply */
int NoiseLevelComputer_apply(void);

/* Symbol: RawModelFile_parse */
/* Demangled: RawModelFile_parse */
int RawModelFile_parse(void);

/* Symbol: CodingHeader_setCodingSwap_randomField_randomByte */
/* Demangled: CodingHeader_setCodingSwap_randomField_randomByte */
int CodingHeader_setCodingSwap_randomField_randomByte(void);

/* Symbol: headPtr_Fixed16ArrayVector */
/* Demangled: headPtr_Fixed16ArrayVector */
int headPtr_Fixed16ArrayVector(void);

/* Symbol: exec_ten_fusedMulAdd */
/* Demangled: exec_ten_fusedMulAdd */
int exec_ten_fusedMulAdd(void);

/* Symbol: VOWE_P25_testing_parseModel */
/* Demangled: VOWE_P25_testing_parseModel */
int VOWE_P25_testing_parseModel(void);

/* Symbol: TestingGetRecognitionDetails */
/* Demangled: TestingGetRecognitionDetails */
int TestingGetRecognitionDetails(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: DpHandler_startNewTable */
/* Demangled: DpHandler_startNewTable */
int DpHandler_startNewTable(void);

/* Symbol: Scagather_push */
/* Demangled: Scagather_push */
int Scagather_push(void);

/* Symbol: PpbStateTable_ground */
/* Demangled: PpbStateTable_ground */
int PpbStateTable_ground(void);

/* Symbol: NN_Activation_init */
/* Demangled: NN_Activation_init */
int NN_Activation_init(void);

/* Symbol: informSceneDetectionSend */
/* Demangled: informSceneDetectionSend */
int informSceneDetectionSend(void);

/* Symbol: GmmThreadManager_reset */
/* Demangled: GmmThreadManager_reset */
int GmmThreadManager_reset(void);

/* Symbol: NN_AffineTransform_release */
/* Demangled: NN_AffineTransform_release */
int NN_AffineTransform_release(void);

/* Symbol: RegHandler_getKWS2LastUtteranceConfidenceScores */
/* Demangled: RegHandler_getKWS2LastUtteranceConfidenceScores */
int RegHandler_getKWS2LastUtteranceConfidenceScores(void);

/* Symbol: RegResult_init */
/* Demangled: RegResult_init */
int RegResult_init(void);

/* Symbol: RegClassifierThresholds_release */
/* Demangled: RegClassifierThresholds_release */
int RegClassifierThresholds_release(void);

/* Symbol: RegModels_release */
/* Demangled: RegModels_release */
int RegModels_release(void);

/* Symbol: PpbStateTable_reset */
/* Demangled: PpbStateTable_reset */
int PpbStateTable_reset(void);

/* Symbol: NnKernel_release */
/* Demangled: NnKernel_release */
int NnKernel_release(void);

/* Symbol: F32Tensor_print4d */
/* Demangled: F32Tensor_print4d */
int F32Tensor_print4d(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: ModelParser_parse_double */
/* Demangled: ModelParser_parse_double */
int ModelParser_parse_double(void);

/* Symbol: cmp_double_ascend */
/* Demangled: cmp_double_ascend */
int cmp_double_ascend(void);

/* Symbol: Printer_open */
/* Demangled: Printer_open */
int Printer_open(void);

/* Symbol: DcRemovalSigBuffer_ptr */
/* Demangled: DcRemovalSigBuffer_ptr */
int DcRemovalSigBuffer_ptr(void);

/* Symbol: MelWindow_release */
/* Demangled: MelWindow_release */
int MelWindow_release(void);

/* Symbol: copyDataToBuffer */
/* Demangled: copyDataToBuffer */
int copyDataToBuffer(void);

/* Symbol: thread_worker_looper */
/* Demangled: thread_worker_looper */
int thread_worker_looper(void);

/* Symbol: RegClassifier_reset */
/* Demangled: RegClassifier_reset */
int RegClassifier_reset(void);

/* Symbol: GmmThreadManager_go */
/* Demangled: GmmThreadManager_go */
int GmmThreadManager_go(void);

/* Symbol: MfccHamming_apply */
/* Demangled: MfccHamming_apply */
int MfccHamming_apply(void);

/* Symbol: MfccHamming_init */
/* Demangled: MfccHamming_init */
int MfccHamming_init(void);

/* Symbol: TestingConsole_init */
/* Demangled: TestingConsole_init */
int TestingConsole_init(void);

/* Symbol: NnKernel_init_from_text_file */
/* Demangled: NnKernel_init_from_text_file */
int NnKernel_init_from_text_file(void);

/* Symbol: ModelParser_parse_skip */
/* Demangled: ModelParser_parse_skip */
int ModelParser_parse_skip(void);

/* Symbol: CMutex_unlock */
/* Demangled: CMutex_unlock */
int CMutex_unlock(void);

/* Symbol: Scagather_init */
/* Demangled: Scagather_init */
int Scagather_init(void);

/* Symbol: NnKernel_reset */
/* Demangled: NnKernel_reset */
int NnKernel_reset(void);

/* Symbol: CSyncer_create */
/* Demangled: CSyncer_create */
int CSyncer_create(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: PCMVN_apply_frame_based_last */
/* Demangled: PCMVN_apply_frame_based_last */
int PCMVN_apply_frame_based_last(void);

/* Symbol: BinCircularBuffer_reset */
/* Demangled: BinCircularBuffer_reset */
int BinCircularBuffer_reset(void);

/* Symbol: VOWE_P25_testing_init */
/* Demangled: VOWE_P25_testing_init */
int VOWE_P25_testing_init(void);

/* Symbol: memDealloc */
/* Demangled: memDealloc */
int memDealloc(void);

/* Symbol: NN_Conv_load */
/* Demangled: NN_Conv_load */
int NN_Conv_load(void);

/* Symbol: exec_ten_conv2d */
/* Demangled: exec_ten_conv2d */
int exec_ten_conv2d(void);

/* Symbol: assign_CMVN_stats */
/* Demangled: assign_CMVN_stats */
int assign_CMVN_stats(void);

/* Symbol: ThreadWorker_start */
/* Demangled: ThreadWorker_start */
int ThreadWorker_start(void);

/* Symbol: NN_Conv_setup */
/* Demangled: NN_Conv_setup */
int NN_Conv_setup(void);

/* Symbol: RegKernel_signal_sim_end */
/* Demangled: RegKernel_signal_sim_end */
int RegKernel_signal_sim_end(void);

/* Symbol: DelayQueue_reset */
/* Demangled: DelayQueue_reset */
int DelayQueue_reset(void);

/* Symbol: TestingConsole_stop */
/* Demangled: TestingConsole_stop */
int TestingConsole_stop(void);

/* Symbol: CThreadHandler_create */
/* Demangled: CThreadHandler_create */
int CThreadHandler_create(void);

/* Symbol: Scagather_stop */
/* Demangled: Scagather_stop */
int Scagather_stop(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: CMVN_apply_frame_based */
/* Demangled: CMVN_apply_frame_based */
int CMVN_apply_frame_based(void);

/* Symbol: compute_tandem_FE_pcmvn */
/* Demangled: compute_tandem_FE_pcmvn */
int compute_tandem_FE_pcmvn(void);

/* Symbol: CSyncer_signal_in_lock */
/* Demangled: CSyncer_signal_in_lock */
int CSyncer_signal_in_lock(void);

/* Symbol: NN_Activation_setup */
/* Demangled: NN_Activation_setup */
int NN_Activation_setup(void);

/* Symbol: NN_FeatureTransform_setup */
/* Demangled: NN_FeatureTransform_setup */
int NN_FeatureTransform_setup(void);

/* Symbol: VOWE_P25_testing_getFloatArrayArgument */
/* Demangled: VOWE_P25_testing_getFloatArrayArgument */
int VOWE_P25_testing_getFloatArrayArgument(void);

/* Symbol: RegUtt_init */
/* Demangled: RegUtt_init */
int RegUtt_init(void);

/* Symbol: SnrEstimator_reset */
/* Demangled: SnrEstimator_reset */
int SnrEstimator_reset(void);

/* Symbol: sim_testing_init */
/* Demangled: sim_testing_init */
int sim_testing_init(void);

/* Symbol: RegHandler_set_SIDConfidenceThresholds */
/* Demangled: RegHandler_set_SIDConfidenceThresholds */
int RegHandler_set_SIDConfidenceThresholds(void);

/* Symbol: CThreadHandler_join */
/* Demangled: CThreadHandler_join */
int CThreadHandler_join(void);

/* Symbol: RegHandler_signal_sim_end */
/* Demangled: RegHandler_signal_sim_end */
int RegHandler_signal_sim_end(void);

/* Symbol: RegClassifier_init */
/* Demangled: RegClassifier_init */
int RegClassifier_init(void);

/* Symbol: TestingConsole_get_START_DECODE_FRAMENUM_AUXILIARY */
/* Demangled: TestingConsole_get_START_DECODE_FRAMENUM_AUXILIARY */
int TestingConsole_get_START_DECODE_FRAMENUM_AUXILIARY(void);

/* Symbol: CodingHeader_genContent */
/* Demangled: CodingHeader_genContent */
int CodingHeader_genContent(void);

/* Symbol: VOWE_P25_testing_inputRef */
/* Demangled: VOWE_P25_testing_inputRef */
int VOWE_P25_testing_inputRef(void);

/* Symbol: VOWE_P25_testing_unloadRecognizer */
/* Demangled: VOWE_P25_testing_unloadRecognizer */
int VOWE_P25_testing_unloadRecognizer(void);

/* Symbol: TestingGetRecognizedId */
/* Demangled: TestingGetRecognizedId */
int TestingGetRecognizedId(void);

/* Symbol: RegHandler_get_MAX_DECODE_FRAMENUM */
/* Demangled: RegHandler_get_MAX_DECODE_FRAMENUM */
int RegHandler_get_MAX_DECODE_FRAMENUM(void);

/* Symbol: RegHandler_reset */
/* Demangled: RegHandler_reset */
int RegHandler_reset(void);

/* Symbol: GmmThreadManager_init */
/* Demangled: GmmThreadManager_init */
int GmmThreadManager_init(void);

/* Symbol: RegTandem_reset */
/* Demangled: RegTandem_reset */
int RegTandem_reset(void);

/* Symbol: RegMfccExtractor_isFirstWorkingApply */
/* Demangled: RegMfccExtractor_isFirstWorkingApply */
int RegMfccExtractor_isFirstWorkingApply(void);

/* Symbol: PD_find_sk_float */
/* Demangled: PD_find_sk_float */
int PD_find_sk_float(void);

/* Symbol: NN_AffineTransform_init_pca */
/* Demangled: NN_AffineTransform_init_pca */
int NN_AffineTransform_init_pca(void);

/* Symbol: file_namecat */
/* Demangled: file_namecat */
int file_namecat(void);

/* Symbol: RegTandem_release */
/* Demangled: RegTandem_release */
int RegTandem_release(void);

/* Symbol: exec_ten_maxPooling2d */
/* Demangled: exec_ten_maxPooling2d */
int exec_ten_maxPooling2d(void);

/* Symbol: RegMfccExtractor_noiseLevel */
/* Demangled: RegMfccExtractor_noiseLevel */
int RegMfccExtractor_noiseLevel(void);

/* Symbol: NN_FeatureTransform_release */
/* Demangled: NN_FeatureTransform_release */
int NN_FeatureTransform_release(void);

/* Symbol: NN_MaxPool_init */
/* Demangled: NN_MaxPool_init */
int NN_MaxPool_init(void);

/* Symbol: CMVN_update_frame_based_no_history */
/* Demangled: CMVN_update_frame_based_no_history */
int CMVN_update_frame_based_no_history(void);

/* Symbol: TestingGetSIDConfidenceThresholds */
/* Demangled: TestingGetSIDConfidenceThresholds */
int TestingGetSIDConfidenceThresholds(void);

/* Symbol: _MelWindow_release */
/* Demangled: _MelWindow_release */
int _MelWindow_release(void);

/* Symbol: Printer_release */
/* Demangled: Printer_release */
int Printer_release(void);

/* Symbol: alloc_Fixed16ArrayVector */
/* Demangled: alloc_Fixed16ArrayVector */
int alloc_Fixed16ArrayVector(void);

/* Symbol: RegMfccExtractor_speechCount */
/* Demangled: RegMfccExtractor_speechCount */
int RegMfccExtractor_speechCount(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: ThreadJobPool_isDepleted */
/* Demangled: ThreadJobPool_isDepleted */
int ThreadJobPool_isDepleted(void);

/* Symbol: RegHandler_release */
/* Demangled: RegHandler_release */
int RegHandler_release(void);

/* Symbol: SampleChannelBuffer_push */
/* Demangled: SampleChannelBuffer_push */
int SampleChannelBuffer_push(void);

/* Symbol: RegKernel_isLastFrame */
/* Demangled: RegKernel_isLastFrame */
int RegKernel_isLastFrame(void);

/* Symbol: AmplitudeComputer_reset */
/* Demangled: AmplitudeComputer_reset */
int AmplitudeComputer_reset(void);

/* Symbol: CMutex_create */
/* Demangled: CMutex_create */
int CMutex_create(void);

/* Symbol: CodingHeader_explain */
/* Demangled: CodingHeader_explain */
int CodingHeader_explain(void);

/* Symbol: NN_Conv_reset */
/* Demangled: NN_Conv_reset */
int NN_Conv_reset(void);

/* Symbol: sim_testing_release */
/* Demangled: sim_testing_release */
int sim_testing_release(void);

/* Symbol: dealloc_Fixed16Array */
/* Demangled: dealloc_Fixed16Array */
int dealloc_Fixed16Array(void);

/* Symbol: RegClassifier_apply_vesta */
/* Demangled: RegClassifier_apply_vesta */
int RegClassifier_apply_vesta(void);

/* Symbol: NN_Splice_init */
/* Demangled: NN_Splice_init */
int NN_Splice_init(void);

/* Symbol: TestingSetSIDBargeInThresholds */
/* Demangled: TestingSetSIDBargeInThresholds */
int TestingSetSIDBargeInThresholds(void);

/* Symbol: RegHandler_get_SIDConfidenceThresholds */
/* Demangled: RegHandler_get_SIDConfidenceThresholds */
int RegHandler_get_SIDConfidenceThresholds(void);

/* Symbol: TestingConsole_set_SIDConfidenceThresholds */
/* Demangled: TestingConsole_set_SIDConfidenceThresholds */
int TestingConsole_set_SIDConfidenceThresholds(void);

/* Symbol: RegFeature_release */
/* Demangled: RegFeature_release */
int RegFeature_release(void);

/* Symbol: ScoreCacher_reset */
/* Demangled: ScoreCacher_reset */
int ScoreCacher_reset(void);

/* Symbol: NN_Activation_reset */
/* Demangled: NN_Activation_reset */
int NN_Activation_reset(void);

/* Symbol: NN_Conv_release */
/* Demangled: NN_Conv_release */
int NN_Conv_release(void);

/* Symbol: NN_FeatureTransform_reset */
/* Demangled: NN_FeatureTransform_reset */
int NN_FeatureTransform_reset(void);

/* Symbol: informAecFlagSend */
/* Demangled: informAecFlagSend */
int informAecFlagSend(void);

/* Symbol: TestingRecognize */
/* Demangled: TestingRecognize */
int TestingRecognize(void);

/* Symbol: VOWE_P25_testing_setIntegerArgument */
/* Demangled: VOWE_P25_testing_setIntegerArgument */
int VOWE_P25_testing_setIntegerArgument(void);

/* Symbol: PD_find_sk_default_float */
/* Demangled: PD_find_sk_default_float */
int PD_find_sk_default_float(void);

/* Symbol: NnModel_init */
/* Demangled: NnModel_init */
int NnModel_init(void);

/* Symbol: ____parser */
/* Demangled: ____parser */
extern void* ____parser;

/* Symbol: ModelParser_open */
/* Demangled: ModelParser_open */
int ModelParser_open(void);

/* Symbol: RegHandler_get_START_DECODE_FRAMENUM_AUXILIARY */
/* Demangled: RegHandler_get_START_DECODE_FRAMENUM_AUXILIARY */
int RegHandler_get_START_DECODE_FRAMENUM_AUXILIARY(void);

/* Symbol: compute_tandem_FE_raw */
/* Demangled: compute_tandem_FE_raw */
int compute_tandem_FE_raw(void);

/* Symbol: NN_Splice_setup */
/* Demangled: NN_Splice_setup */
int NN_Splice_setup(void);

/* Symbol: I32Tensor_arange */
/* Demangled: I32Tensor_arange */
int I32Tensor_arange(void);

/* Symbol: getKeywordIndex */
/* Demangled: getKeywordIndex */
int getKeywordIndex(void);

/* Symbol: frameBasedVAD */
/* Demangled: frameBasedVAD */
int frameBasedVAD(void);

/* Symbol: TestingGetKWS2LastUtteranceConfidenceScores */
/* Demangled: TestingGetKWS2LastUtteranceConfidenceScores */
int TestingGetKWS2LastUtteranceConfidenceScores(void);

/* Symbol: DeReverber_release */
/* Demangled: DeReverber_release */
int DeReverber_release(void);

/* Symbol: NoiseBuffer_size */
/* Demangled: NoiseBuffer_size */
int NoiseBuffer_size(void);

/* Symbol: CMutex_release */
/* Demangled: CMutex_release */
int CMutex_release(void);

/* Symbol: NN_AffineTransform_setup */
/* Demangled: NN_AffineTransform_setup */
int NN_AffineTransform_setup(void);

/* Symbol: NN_MaxPool_setup */
/* Demangled: NN_MaxPool_setup */
int NN_MaxPool_setup(void);

/* Symbol: VOWE_P25_testing_getRecognizerDataSize */
/* Demangled: VOWE_P25_testing_getRecognizerDataSize */
int VOWE_P25_testing_getRecognizerDataSize(void);

/* Symbol: TestingGetSIDLastUtteranceConfidenceScores */
/* Demangled: TestingGetSIDLastUtteranceConfidenceScores */
int TestingGetSIDLastUtteranceConfidenceScores(void);

/* Symbol: TestingLoadModel */
/* Demangled: TestingLoadModel */
int TestingLoadModel(void);

/* Symbol: DelayQueue_release */
/* Demangled: DelayQueue_release */
int DelayQueue_release(void);

/* Symbol: NnModel_release */
/* Demangled: NnModel_release */
int NnModel_release(void);

/* Symbol: RegKernel_getKWS2ConfidenceThresholds */
/* Demangled: RegKernel_getKWS2ConfidenceThresholds */
int RegKernel_getKWS2ConfidenceThresholds(void);

/* Symbol: TestingUnsetLastFrame */
/* Demangled: TestingUnsetLastFrame */
int TestingUnsetLastFrame(void);

/* Symbol: CSyncer_signal_no_lock */
/* Demangled: CSyncer_signal_no_lock */
int CSyncer_signal_no_lock(void);

/* Symbol: VOWE_P25_testing_getRecognizedId */
/* Demangled: VOWE_P25_testing_getRecognizedId */
int VOWE_P25_testing_getRecognizedId(void);

/* Symbol: TestingRelease */
/* Demangled: TestingRelease */
int TestingRelease(void);

/* Symbol: headPtr_Fixed16Array */
/* Demangled: headPtr_Fixed16Array */
int headPtr_Fixed16Array(void);

/* Symbol: PD_realize */
/* Demangled: PD_realize */
int PD_realize(void);

/* Symbol: ValueArray_release */
/* Demangled: ValueArray_release */
int ValueArray_release(void);

/* Symbol: ThCompensater_release */
/* Demangled: ThCompensater_release */
int ThCompensater_release(void);

/* Symbol: SnrEstimator_release */
/* Demangled: SnrEstimator_release */
int SnrEstimator_release(void);

/* Symbol: ThreadJobPool_reset */
/* Demangled: ThreadJobPool_reset */
int ThreadJobPool_reset(void);

/* Symbol: DpHandler_release */
/* Demangled: DpHandler_release */
int DpHandler_release(void);

/* Symbol: NoiseBuffer_ptr */
/* Demangled: NoiseBuffer_ptr */
int NoiseBuffer_ptr(void);

/* Symbol: PpbStateTable_release */
/* Demangled: PpbStateTable_release */
int PpbStateTable_release(void);

/* Symbol: NN_Splice_execute */
/* Demangled: NN_Splice_execute */
int NN_Splice_execute(void);

/* Symbol: CMVN_utterance */
/* Demangled: CMVN_utterance */
int CMVN_utterance(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: init_CMVN_stats */
/* Demangled: init_CMVN_stats */
int init_CMVN_stats(void);

/* Symbol: TestingParseModel */
/* Demangled: TestingParseModel */
int TestingParseModel(void);

/* Symbol: ThCompensater_apply */
/* Demangled: ThCompensater_apply */
int ThCompensater_apply(void);

/* Symbol: MelWindow_init */
/* Demangled: MelWindow_init */
int MelWindow_init(void);

/* Symbol: RawModelFile_getParsingSize */
/* Demangled: RawModelFile_getParsingSize */
int RawModelFile_getParsingSize(void);

/* Symbol: Scagather_reset */
/* Demangled: Scagather_reset */
int Scagather_reset(void);

/* Symbol: TestingConsole_get_SIDConfidenceThresholds */
/* Demangled: TestingConsole_get_SIDConfidenceThresholds */
int TestingConsole_get_SIDConfidenceThresholds(void);

/* Symbol: init_CMVN_stats_no_history */
/* Demangled: init_CMVN_stats_no_history */
int init_CMVN_stats_no_history(void);

/* Symbol: realize_Fixed16Array */
/* Demangled: realize_Fixed16Array */
int realize_Fixed16Array(void);

/* Symbol: RegResult_reset */
/* Demangled: RegResult_reset */
int RegResult_reset(void);

/* Symbol: ReverbDetector_reset */
/* Demangled: ReverbDetector_reset */
int ReverbDetector_reset(void);

/* Symbol: DeReverber_apply */
/* Demangled: DeReverber_apply */
int DeReverber_apply(void);

/* Symbol: NN_AffineTransform_load_general */
/* Demangled: NN_AffineTransform_load_general */
int NN_AffineTransform_load_general(void);

/* Symbol: ViterbiTable_release */
/* Demangled: ViterbiTable_release */
int ViterbiTable_release(void);

/* Symbol: ThreadWorker_trigger */
/* Demangled: ThreadWorker_trigger */
int ThreadWorker_trigger(void);

/* Symbol: PCMVN_apply_all_history */
/* Demangled: PCMVN_apply_all_history */
int PCMVN_apply_all_history(void);

/* Symbol: GmmThreadManager_tail_settle */
/* Demangled: GmmThreadManager_tail_settle */
int GmmThreadManager_tail_settle(void);

/* Symbol: RegClassifierThresholds_init */
/* Demangled: RegClassifierThresholds_init */
int RegClassifierThresholds_init(void);

/* Symbol: RegKernel_setKWS2ConfidenceThresholds */
/* Demangled: RegKernel_setKWS2ConfidenceThresholds */
int RegKernel_setKWS2ConfidenceThresholds(void);

/* Symbol: Printer_print */
/* Demangled: Printer_print */
int Printer_print(void);

/* Symbol: RegMfccExtractor_init */
/* Demangled: RegMfccExtractor_init */
int RegMfccExtractor_init(void);

/* Symbol: NN_Activation_load */
/* Demangled: NN_Activation_load */
int NN_Activation_load(void);

/* Symbol: F32Tensor_del */
/* Demangled: F32Tensor_del */
int F32Tensor_del(void);

/* Symbol: SampleChannelBuffer_drop */
/* Demangled: SampleChannelBuffer_drop */
int SampleChannelBuffer_drop(void);

/* Symbol: alloc_Fixed16Array */
/* Demangled: alloc_Fixed16Array */
int alloc_Fixed16Array(void);

/* Symbol: HistoryValueWrapper_release */
/* Demangled: HistoryValueWrapper_release */
int HistoryValueWrapper_release(void);

/* Symbol: ModelParser_parse_float */
/* Demangled: ModelParser_parse_float */
int ModelParser_parse_float(void);

/* Symbol: NoiseLevelComputer_init */
/* Demangled: NoiseLevelComputer_init */
int NoiseLevelComputer_init(void);

/* Symbol: PD_find_k_int */
/* Demangled: PD_find_k_int */
int PD_find_k_int(void);

/* Symbol: CThreadHandler_invoke */
/* Demangled: CThreadHandler_invoke */
int CThreadHandler_invoke(void);

/* Symbol: NN_FeatureTransform_init_shift */
/* Demangled: NN_FeatureTransform_init_shift */
int NN_FeatureTransform_init_shift(void);

/* Symbol: NN_Splice_reset */
/* Demangled: NN_Splice_reset */
int NN_Splice_reset(void);

/* Symbol: ModelParser_close */
/* Demangled: ModelParser_close */
int ModelParser_close(void);

/* Symbol: copy_CMVN_stats */
/* Demangled: copy_CMVN_stats */
int copy_CMVN_stats(void);

/* Symbol: version */
/* Demangled: version */
int version(void);

/* Symbol: VOWE_P25_testing_getRecognitionDetails */
/* Demangled: VOWE_P25_testing_getRecognitionDetails */
int VOWE_P25_testing_getRecognitionDetails(void);

/* Symbol: RegKernel_signal_sim_start */
/* Demangled: RegKernel_signal_sim_start */
int RegKernel_signal_sim_start(void);

/* Symbol: ValueArray_reset */
/* Demangled: ValueArray_reset */
int ValueArray_reset(void);

/* Symbol: BinCircularBuffer_init */
/* Demangled: BinCircularBuffer_init */
int BinCircularBuffer_init(void);

/* Symbol: evaluateLglhood */
/* Demangled: evaluateLglhood */
int evaluateLglhood(void);

/* Symbol: HistoryValueWrapper_sum */
/* Demangled: HistoryValueWrapper_sum */
int HistoryValueWrapper_sum(void);

/* Symbol: NN_AffineTransform_reset */
/* Demangled: NN_AffineTransform_reset */
int NN_AffineTransform_reset(void);

/* Symbol: NN_MaxPool_reset */
/* Demangled: NN_MaxPool_reset */
int NN_MaxPool_reset(void);

/* Symbol: VOWE_P25_testing_recognize */
/* Demangled: VOWE_P25_testing_recognize */
int VOWE_P25_testing_recognize(void);

/* Symbol: RegHandler_get_MIN_DECODE_FRAMENUM */
/* Demangled: RegHandler_get_MIN_DECODE_FRAMENUM */
int RegHandler_get_MIN_DECODE_FRAMENUM(void);

/* Symbol: vad_reset */
/* Demangled: vad_reset */
int vad_reset(void);

/* Symbol: BargeinDetector_apply */
/* Demangled: BargeinDetector_apply */
int BargeinDetector_apply(void);

/* Symbol: BargeinDetector_release */
/* Demangled: BargeinDetector_release */
int BargeinDetector_release(void);

/* Symbol: VOWE_P25_inform_getIntegerArgument */
/* Demangled: VOWE_P25_inform_getIntegerArgument */
int VOWE_P25_inform_getIntegerArgument(void);

/* Symbol: RegMfccExtractor_reset */
/* Demangled: RegMfccExtractor_reset */
int RegMfccExtractor_reset(void);

/* Symbol: HistoryValueWrapper_reset */
/* Demangled: HistoryValueWrapper_reset */
int HistoryValueWrapper_reset(void);

/* Symbol: CodingHeader_realize */
/* Demangled: CodingHeader_realize */
int CodingHeader_realize(void);

/* Symbol: BinCircularBuffer_nxtBins */
/* Demangled: BinCircularBuffer_nxtBins */
int BinCircularBuffer_nxtBins(void);

/* Symbol: sim_testing_inputSignals */
/* Demangled: sim_testing_inputSignals */
int sim_testing_inputSignals(void);

/* Symbol: TestingConsole_start */
/* Demangled: TestingConsole_start */
int TestingConsole_start(void);

/* Symbol: F32Tensor_print2d */
/* Demangled: F32Tensor_print2d */
int F32Tensor_print2d(void);

/* Symbol: RegTandem_init */
/* Demangled: RegTandem_init */
int RegTandem_init(void);

/* Symbol: PD_sckey */
/* Demangled: PD_sckey */
int PD_sckey(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBVOWP25TESTING_VENDOR_H */
