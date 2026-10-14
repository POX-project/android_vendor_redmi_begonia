/*
 * Reverse-Engineered ABI Specification for: libvow_ap_testing.vendor.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libvow_ap_testing.vendor.so
 */

#ifndef BEGONIA_RE_LIBVOW_AP_TESTING_VENDOR_H
#define BEGONIA_RE_LIBVOW_AP_TESTING_VENDOR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: VOWE_AP_testing_parseModel */
/* Demangled: VOWE_AP_testing_parseModel */
int VOWE_AP_testing_parseModel(void);

/* Symbol: loadApRecognizer */
/* Demangled: loadApRecognizer */
int loadApRecognizer(void);

/* Symbol: parseApModel */
/* Demangled: parseApModel */
int parseApModel(void);

/* Symbol: VOWE_AP_testing_getRecognizedId */
/* Demangled: VOWE_AP_testing_getRecognizedId */
int VOWE_AP_testing_getRecognizedId(void);

/* Symbol: VOWE_AP_testing_reset */
/* Demangled: VOWE_AP_testing_reset */
int VOWE_AP_testing_reset(void);

/* Symbol: getEnrollmentFileDataInfo_BeforeInit */
/* Demangled: getEnrollmentFileDataInfo_BeforeInit */
int getEnrollmentFileDataInfo_BeforeInit(void);

/* Symbol: VOWE_AP_testing_version */
/* Demangled: VOWE_AP_testing_version */
int VOWE_AP_testing_version(void);

/* Symbol: VOWE_AP_inform_getIntegerArgument */
/* Demangled: VOWE_AP_inform_getIntegerArgument */
int VOWE_AP_inform_getIntegerArgument(void);

/* Symbol: VOWE_AP_testing_getRecognitionDetails */
/* Demangled: VOWE_AP_testing_getRecognitionDetails */
int VOWE_AP_testing_getRecognitionDetails(void);

/* Symbol: VOWE_AP_testing_inputRef */
/* Demangled: VOWE_AP_testing_inputRef */
int VOWE_AP_testing_inputRef(void);

/* Symbol: VOWE_AP_testing_setIntegerArgument */
/* Demangled: VOWE_AP_testing_setIntegerArgument */
int VOWE_AP_testing_setIntegerArgument(void);

/* Symbol: VOWE_AP_testing_stopRecognition */
/* Demangled: VOWE_AP_testing_stopRecognition */
int VOWE_AP_testing_stopRecognition(void);

/* Symbol: getParsedModelDataInfo_BeforeInit */
/* Demangled: getParsedModelDataInfo_BeforeInit */
int getParsedModelDataInfo_BeforeInit(void);

/* Symbol: VOWE_AP_inform_version */
/* Demangled: VOWE_AP_inform_version */
int VOWE_AP_inform_version(void);

/* Symbol: VOWE_AP_testing_recognize */
/* Demangled: VOWE_AP_testing_recognize */
int VOWE_AP_testing_recognize(void);

/* Symbol: VOWE_Mgr_version */
/* Demangled: VOWE_Mgr_version */
int VOWE_Mgr_version(void);

/* Symbol: logName */
/* Demangled: logName */
extern void* logName;

/* Symbol: VOWE_AP_inform_setIntegerArgument */
/* Demangled: VOWE_AP_inform_setIntegerArgument */
int VOWE_AP_inform_setIntegerArgument(void);

/* Symbol: VOWE_AP_testing_getIntegerArgument */
/* Demangled: VOWE_AP_testing_getIntegerArgument */
int VOWE_AP_testing_getIntegerArgument(void);

/* Symbol: VOWE_AP_testing_setArgument */
/* Demangled: VOWE_AP_testing_setArgument */
int VOWE_AP_testing_setArgument(void);

/* Symbol: VOWE_AP_testing_startRecognition */
/* Demangled: VOWE_AP_testing_startRecognition */
int VOWE_AP_testing_startRecognition(void);

/* Symbol: VOWE_AP_inform_send */
/* Demangled: VOWE_AP_inform_send */
int VOWE_AP_inform_send(void);

/* Symbol: VOWE_AP_testing_init */
/* Demangled: VOWE_AP_testing_init */
int VOWE_AP_testing_init(void);

/* Symbol: getApRecognizerStateDataInfo_AfterInit */
/* Demangled: getApRecognizerStateDataInfo_AfterInit */
int getApRecognizerStateDataInfo_AfterInit(void);

/* Symbol: parseDspModel */
/* Demangled: parseDspModel */
int parseDspModel(void);

/* Symbol: VOWE_AP_inform_poll */
/* Demangled: VOWE_AP_inform_poll */
int VOWE_AP_inform_poll(void);

/* Symbol: VOWE_AP_inform_release */
/* Demangled: VOWE_AP_inform_release */
int VOWE_AP_inform_release(void);

/* Symbol: VOWE_AP_testing_inputMic */
/* Demangled: VOWE_AP_testing_inputMic */
int VOWE_AP_testing_inputMic(void);

/* Symbol: VOWE_AP_testing_unloadRecognizer */
/* Demangled: VOWE_AP_testing_unloadRecognizer */
int VOWE_AP_testing_unloadRecognizer(void);

/* Symbol: getApParsedModelDataInfo_AfterInit */
/* Demangled: getApParsedModelDataInfo_AfterInit */
int getApParsedModelDataInfo_AfterInit(void);

/* Symbol: getApRecognizerStateDataInfo_BeforeInit */
/* Demangled: getApRecognizerStateDataInfo_BeforeInit */
int getApRecognizerStateDataInfo_BeforeInit(void);

/* Symbol: VOWE_AP_inform_init */
/* Demangled: VOWE_AP_inform_init */
int VOWE_AP_inform_init(void);

/* Symbol: VOWE_AP_testing_getFloatArrayArgument */
/* Demangled: VOWE_AP_testing_getFloatArrayArgument */
int VOWE_AP_testing_getFloatArrayArgument(void);

/* Symbol: VOWE_AP_testing_getModelSize */
/* Demangled: VOWE_AP_testing_getModelSize */
int VOWE_AP_testing_getModelSize(void);

/* Symbol: VOWE_AP_testing_loadRecognizer */
/* Demangled: VOWE_AP_testing_loadRecognizer */
int VOWE_AP_testing_loadRecognizer(void);

/* Symbol: VOWE_AP_testing_setFloatArrayArgument */
/* Demangled: VOWE_AP_testing_setFloatArrayArgument */
int VOWE_AP_testing_setFloatArrayArgument(void);

/* Symbol: getApRecognizerStateHeader_BeforeInit */
/* Demangled: getApRecognizerStateHeader_BeforeInit */
int getApRecognizerStateHeader_BeforeInit(void);

/* Symbol: VOWE_AP_inform_reset */
/* Demangled: VOWE_AP_inform_reset */
int VOWE_AP_inform_reset(void);

/* Symbol: VOWE_AP_testing_getRecognizerDataSize */
/* Demangled: VOWE_AP_testing_getRecognizerDataSize */
int VOWE_AP_testing_getRecognizerDataSize(void);

/* Symbol: VOWE_AP_testing_release */
/* Demangled: VOWE_AP_testing_release */
int VOWE_AP_testing_release(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBVOW_AP_TESTING_VENDOR_H */
