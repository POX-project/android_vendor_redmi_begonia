/*
 * Reverse-Engineered ABI Specification for: librgbwlightsensor.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: librgbwlightsensor.so
 */

#ifndef BEGONIA_RE_LIBRGBWLIGHTSENSOR_H
#define BEGONIA_RE_LIBRGBWLIGHTSENSOR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android21rgbwLightSensorEnableEi */
/* Demangled: android::rgbwLightSensorEnable(int) */
int _ZN7android21rgbwLightSensorEnableEi(void);

/* Symbol: _ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEEaSEPS4_ */
/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::IEventQueue>::operator=(android::frameworks::sensorservice::V1_0::IEventQueue*) */
int _ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEEaSEPS4_(void);

/* Symbol: gPQSensorDiedUser */
/* Demangled: gPQSensorDiedUser */
extern void* gPQSensorDiedUser;

/* Symbol: gPQSensorNotify */
/* Demangled: gPQSensorNotify */
extern void* gPQSensorNotify;

/* Symbol: pqLightSensorInit */
/* Demangled: pqLightSensorInit */
int pqLightSensorInit(void);

/* Symbol: pqSetListener */
/* Demangled: pqSetListener */
int pqSetListener(void);

/* Symbol: _ZN7android19rgbwLightSensorInitEv */
/* Demangled: android::rgbwLightSensorInit() */
int _ZN7android19rgbwLightSensorInitEv(void);

/* Symbol: _ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEEaSEPS4_ */
/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::ISensorManager>::operator=(android::frameworks::sensorservice::V1_0::ISensorManager*) */
int _ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEEaSEPS4_(void);

/* Symbol: gPQSensorDied */
/* Demangled: gPQSensorDied */
extern void* gPQSensorDied;

/* Symbol: pqLightSensorDeInit */
/* Demangled: pqLightSensorDeInit */
int pqLightSensorDeInit(void);

/* Symbol: _ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEED2Ev */
/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::IEventQueue>::~sp() */
int _ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEED2Ev(void);

/* Symbol: _ZN7android2spINS_12RGBWCallbackEEaSEPS1_ */
/* Demangled: android::sp<android::RGBWCallback>::operator=(android::RGBWCallback*) */
int _ZN7android2spINS_12RGBWCallbackEEaSEPS1_(void);

/* Symbol: _ZN7android2spINS_20SensorDeathRecipientEED2Ev */
/* Demangled: android::sp<android::SensorDeathRecipient>::~sp() */
int _ZN7android2spINS_20SensorDeathRecipientEED2Ev(void);

/* Symbol: gPQSensorUser */
/* Demangled: gPQSensorUser */
extern void* gPQSensorUser;

/* Symbol: pqSetDiedListener */
/* Demangled: pqSetDiedListener */
int pqSetDiedListener(void);

/* Symbol: _ZN7android21rgbwLightSensorDeInitEv */
/* Demangled: android::rgbwLightSensorDeInit() */
int _ZN7android21rgbwLightSensorDeInitEv(void);

/* Symbol: _ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEED2Ev */
/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::ISensorManager>::~sp() */
int _ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEED2Ev(void);

/* Symbol: _ZN7android2spINS_12RGBWCallbackEED2Ev */
/* Demangled: android::sp<android::RGBWCallback>::~sp() */
int _ZN7android2spINS_12RGBWCallbackEED2Ev(void);

/* Symbol: pqLightSensorEnable */
/* Demangled: pqLightSensorEnable */
int pqLightSensorEnable(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBRGBWLIGHTSENSOR_H */
