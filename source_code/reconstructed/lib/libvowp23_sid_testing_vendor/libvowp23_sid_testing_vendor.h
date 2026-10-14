/*
 * Reverse-Engineered ABI Specification for: libvowp23_sid_testing.vendor.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libvowp23_sid_testing.vendor.so
 */

#ifndef BEGONIA_RE_LIBVOWP23_SID_TESTING_VENDOR_H
#define BEGONIA_RE_LIBVOWP23_SID_TESTING_VENDOR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: InitSpeakerModel_AdaptedPart_IMPL */
/* Demangled: InitSpeakerModel_AdaptedPart_IMPL */
int InitSpeakerModel_AdaptedPart_IMPL(void);

/* Symbol: InitLogLikeTables */
/* Demangled: InitLogLikeTables */
int InitLogLikeTables(void);

/* Symbol: Recognize_FrameBased_IMPL */
/* Demangled: Recognize_FrameBased_IMPL */
int Recognize_FrameBased_IMPL(void);

/* Symbol: getSpectrumEnergy2 */
/* Demangled: getSpectrumEnergy2 */
int getSpectrumEnergy2(void);

/* Symbol: copyShortArr */
/* Demangled: copyShortArr */
int copyShortArr(void);

/* Symbol: LAdd_Fixed */
/* Demangled: LAdd_Fixed */
int LAdd_Fixed(void);

/* Symbol: InitTestingStates */
/* Demangled: InitTestingStates */
int InitTestingStates(void);

/* Symbol: threadpool_destroy */
/* Demangled: threadpool_destroy */
int threadpool_destroy(void);

/* Symbol: Testing_reset_after_recognized */
/* Demangled: Testing_reset_after_recognized */
int Testing_reset_after_recognized(void);

/* Symbol: allocStftParms */
/* Demangled: allocStftParms */
int allocStftParms(void);

/* Symbol: updateDPtableFixed */
/* Demangled: updateDPtableFixed */
int updateDPtableFixed(void);

/* Symbol: ResetTestingStates */
/* Demangled: ResetTestingStates */
int ResetTestingStates(void);

/* Symbol: rightShiftShortArray */
/* Demangled: rightShiftShortArray */
int rightShiftShortArray(void);

/* Symbol: threadpool_free */
/* Demangled: threadpool_free */
int threadpool_free(void);

/* Symbol: allocNoiseSuppressionParms */
/* Demangled: allocNoiseSuppressionParms */
int allocNoiseSuppressionParms(void);

/* Symbol: free2DFloatArray */
/* Demangled: free2DFloatArray */
int free2DFloatArray(void);

/* Symbol: Testing_getRecognitionDetails */
/* Demangled: Testing_getRecognitionDetails */
int Testing_getRecognitionDetails(void);

/* Symbol: shiftLeft */
/* Demangled: shiftLeft */
int shiftLeft(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: findFloatArrayMax */
/* Demangled: findFloatArrayMax */
int findFloatArrayMax(void);

/* Symbol: Testing_getRecognitionDetailsByKeywordIndex */
/* Demangled: Testing_getRecognitionDetailsByKeywordIndex */
int Testing_getRecognitionDetailsByKeywordIndex(void);

/* Symbol: VOWE_P23_testing_getKeywordId */
/* Demangled: VOWE_P23_testing_getKeywordId */
int VOWE_P23_testing_getKeywordId(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: stftSynthesis */
/* Demangled: stftSynthesis */
int stftSynthesis(void);

/* Symbol: evalLogLike_calOnlyMovedMix_keywordFloat */
/* Demangled: evalLogLike_calOnlyMovedMix_keywordFloat */
int evalLogLike_calOnlyMovedMix_keywordFloat(void);

/* Symbol: InitTh */
/* Demangled: InitTh */
int InitTh(void);

/* Symbol: dot_product */
/* Demangled: dot_product */
int dot_product(void);

/* Symbol: noiseSuppress2 */
/* Demangled: noiseSuppress2 */
int noiseSuppress2(void);

/* Symbol: fft_real */
/* Demangled: fft_real */
int fft_real(void);

/* Symbol: ReleaseRecognizer */
/* Demangled: ReleaseRecognizer */
int ReleaseRecognizer(void);

/* Symbol: Testing_inputMic */
/* Demangled: Testing_inputMic */
int Testing_inputMic(void);

/* Symbol: noiseSuppress */
/* Demangled: noiseSuppress */
int noiseSuppress(void);

/* Symbol: VOWE_P23_testing_release */
/* Demangled: VOWE_P23_testing_release */
int VOWE_P23_testing_release(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: DIF_FFT_INV */
/* Demangled: DIF_FFT_INV */
int DIF_FFT_INV(void);

/* Symbol: arrayTransform_short2float */
/* Demangled: arrayTransform_short2float */
int arrayTransform_short2float(void);

/* Symbol: findFloatArrayMin_nbest */
/* Demangled: findFloatArrayMin_nbest */
int findFloatArrayMin_nbest(void);

/* Symbol: initFloatArray */
/* Demangled: initFloatArray */
int initFloatArray(void);

/* Symbol: Testing_stopRecognition */
/* Demangled: Testing_stopRecognition */
int Testing_stopRecognition(void);

/* Symbol: VOWE_P23_testing_getRecognitionDetails */
/* Demangled: VOWE_P23_testing_getRecognitionDetails */
int VOWE_P23_testing_getRecognitionDetails(void);

/* Symbol: ExtractFeature */
/* Demangled: ExtractFeature */
int ExtractFeature(void);

/* Symbol: InitSpeakerModel_BasePart_IMPL */
/* Demangled: InitSpeakerModel_BasePart_IMPL */
int InitSpeakerModel_BasePart_IMPL(void);

/* Symbol: dynamicNoiseFloor */
/* Demangled: dynamicNoiseFloor */
int dynamicNoiseFloor(void);

/* Symbol: dot_product_periodic */
/* Demangled: dot_product_periodic */
int dot_product_periodic(void);

/* Symbol: VOWE_P23_testing_version */
/* Demangled: VOWE_P23_testing_version */
int VOWE_P23_testing_version(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: setFloatArray_LowerBound */
/* Demangled: setFloatArray_LowerBound */
int setFloatArray_LowerBound(void);

/* Symbol: sumSquareFloatArray */
/* Demangled: sumSquareFloatArray */
int sumSquareFloatArray(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: ResetFE */
/* Demangled: ResetFE */
int ResetFE(void);

/* Symbol: smoothEnergy */
/* Demangled: smoothEnergy */
int smoothEnergy(void);

/* Symbol: findFloatArrayMax_nbest */
/* Demangled: findFloatArrayMax_nbest */
int findFloatArrayMax_nbest(void);

/* Symbol: version */
/* Demangled: version */
int version(void);

/* Symbol: InitRecognizer */
/* Demangled: InitRecognizer */
int InitRecognizer(void);

/* Symbol: initShortArray */
/* Demangled: initShortArray */
int initShortArray(void);

/* Symbol: VOWE_P23_testing_reset */
/* Demangled: VOWE_P23_testing_reset */
int VOWE_P23_testing_reset(void);

/* Symbol: getSpectrumEnergy */
/* Demangled: getSpectrumEnergy */
int getSpectrumEnergy(void);

/* Symbol: compute_MFCC_FE */
/* Demangled: compute_MFCC_FE */
int compute_MFCC_FE(void);

/* Symbol: SetPrint */
/* Demangled: SetPrint */
int SetPrint(void);

/* Symbol: insertFloatArrayRightShift */
/* Demangled: insertFloatArrayRightShift */
int insertFloatArrayRightShift(void);

/* Symbol: VOWE_P23_testing_getRecognitionDetailsByKeywordIndex */
/* Demangled: VOWE_P23_testing_getRecognitionDetailsByKeywordIndex */
int VOWE_P23_testing_getRecognitionDetailsByKeywordIndex(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: fiLog2 */
/* Demangled: fiLog2 */
int fiLog2(void);

/* Symbol: ReleaseFE */
/* Demangled: ReleaseFE */
int ReleaseFE(void);

/* Symbol: Testing_setArgument */
/* Demangled: Testing_setArgument */
int Testing_setArgument(void);

/* Symbol: VOWE_P23_testing_startRecognition */
/* Demangled: VOWE_P23_testing_startRecognition */
int VOWE_P23_testing_startRecognition(void);

/* Symbol: Testing_getRecognizerDataSize */
/* Demangled: Testing_getRecognizerDataSize */
int Testing_getRecognizerDataSize(void);

/* Symbol: Testing_startRecognition */
/* Demangled: Testing_startRecognition */
int Testing_startRecognition(void);

/* Symbol: reset_MFCC_FE */
/* Demangled: reset_MFCC_FE */
int reset_MFCC_FE(void);

/* Symbol: arrayTransform_float2short */
/* Demangled: arrayTransform_float2short */
int arrayTransform_float2short(void);

/* Symbol: DIF_FFT_INV_C_code */
/* Demangled: DIF_FFT_INV_C_code */
int DIF_FFT_INV_C_code(void);

/* Symbol: getSpectrumEnergy_sd */
/* Demangled: getSpectrumEnergy_sd */
int getSpectrumEnergy_sd(void);

/* Symbol: init2DFloatArrayZero */
/* Demangled: init2DFloatArrayZero */
int init2DFloatArrayZero(void);

/* Symbol: VOWE_P23_testing_loadRecognizer */
/* Demangled: VOWE_P23_testing_loadRecognizer */
int VOWE_P23_testing_loadRecognizer(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: VOWE_P23_testing_getRecognizedId */
/* Demangled: VOWE_P23_testing_getRecognizedId */
int VOWE_P23_testing_getRecognizedId(void);

/* Symbol: getKeywordId */
/* Demangled: getKeywordId */
int getKeywordId(void);

/* Symbol: getKeywordIndex */
/* Demangled: getKeywordIndex */
int getKeywordIndex(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: mirrorBand */
/* Demangled: mirrorBand */
int mirrorBand(void);

/* Symbol: multiplyFloatArray */
/* Demangled: multiplyFloatArray */
int multiplyFloatArray(void);

/* Symbol: VOWE_P23_testing_init */
/* Demangled: VOWE_P23_testing_init */
int VOWE_P23_testing_init(void);

/* Symbol: init_MFCC_FE */
/* Demangled: init_MFCC_FE */
int init_MFCC_FE(void);

/* Symbol: UpdateTestingStates_StopReconition */
/* Demangled: UpdateTestingStates_StopReconition */
int UpdateTestingStates_StopReconition(void);

/* Symbol: noisyEstimationMCRA */
/* Demangled: noisyEstimationMCRA */
int noisyEstimationMCRA(void);

/* Symbol: normArray */
/* Demangled: normArray */
int normArray(void);

/* Symbol: exp_Fixed */
/* Demangled: exp_Fixed */
int exp_Fixed(void);

/* Symbol: insertLeftShiftFloatArray */
/* Demangled: insertLeftShiftFloatArray */
int insertLeftShiftFloatArray(void);

/* Symbol: VOWE_P23_testing_getKeywordIndex */
/* Demangled: VOWE_P23_testing_getKeywordIndex */
int VOWE_P23_testing_getKeywordIndex(void);

/* Symbol: InitDpTables */
/* Demangled: InitDpTables */
int InitDpTables(void);

/* Symbol: getCriticalBandEnergy */
/* Demangled: getCriticalBandEnergy */
int getCriticalBandEnergy(void);

/* Symbol: initLinearFloatArray */
/* Demangled: initLinearFloatArray */
int initLinearFloatArray(void);

/* Symbol: sumFloatArray */
/* Demangled: sumFloatArray */
int sumFloatArray(void);

/* Symbol: SceneDetection_forVoW */
/* Demangled: SceneDetection_forVoW */
int SceneDetection_forVoW(void);

/* Symbol: Testing_init */
/* Demangled: Testing_init */
int Testing_init(void);

/* Symbol: Testing_reset */
/* Demangled: Testing_reset */
int Testing_reset(void);

/* Symbol: VOWE_P23_testing_setArgument */
/* Demangled: VOWE_P23_testing_setArgument */
int VOWE_P23_testing_setArgument(void);

/* Symbol: VOWE_P23_testing_stopRecognition */
/* Demangled: VOWE_P23_testing_stopRecognition */
int VOWE_P23_testing_stopRecognition(void);

/* Symbol: stftAnalysis */
/* Demangled: stftAnalysis */
int stftAnalysis(void);

/* Symbol: DIF_FFT */
/* Demangled: DIF_FFT */
int DIF_FFT(void);

/* Symbol: resetDPtableFixed */
/* Demangled: resetDPtableFixed */
int resetDPtableFixed(void);

/* Symbol: InitFE */
/* Demangled: InitFE */
int InitFE(void);

/* Symbol: updateSpeechPresenceProbability */
/* Demangled: updateSpeechPresenceProbability */
int updateSpeechPresenceProbability(void);

/* Symbol: getShortArrayHistogram */
/* Demangled: getShortArrayHistogram */
int getShortArrayHistogram(void);

/* Symbol: findShortArrayMax */
/* Demangled: findShortArrayMax */
int findShortArrayMax(void);

/* Symbol: insertRightShiftFloatArray */
/* Demangled: insertRightShiftFloatArray */
int insertRightShiftFloatArray(void);

/* Symbol: Testing_release */
/* Demangled: Testing_release */
int Testing_release(void);

/* Symbol: deallocStftParms */
/* Demangled: deallocStftParms */
int deallocStftParms(void);

/* Symbol: copyFloatArr */
/* Demangled: copyFloatArr */
int copyFloatArr(void);

/* Symbol: dotArray */
/* Demangled: dotArray */
int dotArray(void);

/* Symbol: VOWE_P23_testing_recognize */
/* Demangled: VOWE_P23_testing_recognize */
int VOWE_P23_testing_recognize(void);

/* Symbol: VOWE_P23_testing_unloadRecognizer */
/* Demangled: VOWE_P23_testing_unloadRecognizer */
int VOWE_P23_testing_unloadRecognizer(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: fiSqrt */
/* Demangled: fiSqrt */
int fiSqrt(void);

/* Symbol: deallocNoiseSuppressionParms */
/* Demangled: deallocNoiseSuppressionParms */
int deallocNoiseSuppressionParms(void);

/* Symbol: allocSceneDetectionParms */
/* Demangled: allocSceneDetectionParms */
int allocSceneDetectionParms(void);

/* Symbol: setFloatArrayValue */
/* Demangled: setFloatArrayValue */
int setFloatArrayValue(void);

/* Symbol: Testing_recognize */
/* Demangled: Testing_recognize */
int Testing_recognize(void);

/* Symbol: Testing_unloadRecognizer */
/* Demangled: Testing_unloadRecognizer */
int Testing_unloadRecognizer(void);

/* Symbol: Testing_version */
/* Demangled: Testing_version */
int Testing_version(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: InitGSM_IMPL */
/* Demangled: InitGSM_IMPL */
int InitGSM_IMPL(void);

/* Symbol: trackMinLocalEnergy */
/* Demangled: trackMinLocalEnergy */
int trackMinLocalEnergy(void);

/* Symbol: setShortArrayValue */
/* Demangled: setShortArrayValue */
int setShortArrayValue(void);

/* Symbol: VOWE_P23_testing_getRecognizerDataSize */
/* Demangled: VOWE_P23_testing_getRecognizerDataSize */
int VOWE_P23_testing_getRecognizerDataSize(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: DIF_FFT_normalize */
/* Demangled: DIF_FFT_normalize */
int DIF_FFT_normalize(void);

/* Symbol: UpdateTestingStates_StartReconition */
/* Demangled: UpdateTestingStates_StartReconition */
int UpdateTestingStates_StartReconition(void);

/* Symbol: array1NormDistance */
/* Demangled: array1NormDistance */
int array1NormDistance(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: log_of_1PlusX_Fixed */
/* Demangled: log_of_1PlusX_Fixed */
int log_of_1PlusX_Fixed(void);

/* Symbol: Recognize */
/* Demangled: Recognize */
int Recognize(void);

/* Symbol: ReleaseTestingStates */
/* Demangled: ReleaseTestingStates */
int ReleaseTestingStates(void);

/* Symbol: threadpool_create */
/* Demangled: threadpool_create */
int threadpool_create(void);

/* Symbol: txpSqrt */
/* Demangled: txpSqrt */
int txpSqrt(void);

/* Symbol: threadpool_add */
/* Demangled: threadpool_add */
int threadpool_add(void);

/* Symbol: VOWE_P23_testing_inputMic */
/* Demangled: VOWE_P23_testing_inputMic */
int VOWE_P23_testing_inputMic(void);

/* Symbol: DIF_FFT_C_code */
/* Demangled: DIF_FFT_C_code */
int DIF_FFT_C_code(void);

/* Symbol: exp4LAdd_Fixed */
/* Demangled: exp4LAdd_Fixed */
int exp4LAdd_Fixed(void);

/* Symbol: Testing_getRecognizedId */
/* Demangled: Testing_getRecognizedId */
int Testing_getRecognizedId(void);

/* Symbol: Testing_loadRecognizer */
/* Demangled: Testing_loadRecognizer */
int Testing_loadRecognizer(void);

/* Symbol: fft_cmplx */
/* Demangled: fft_cmplx */
int fft_cmplx(void);

/* Symbol: ResetRecognizer */
/* Demangled: ResetRecognizer */
int ResetRecognizer(void);

/* Symbol: sumShortArray */
/* Demangled: sumShortArray */
int sumShortArray(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBVOWP23_SID_TESTING_VENDOR_H */
