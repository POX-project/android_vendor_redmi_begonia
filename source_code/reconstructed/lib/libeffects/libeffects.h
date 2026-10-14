/*
 * Reverse-Engineered ABI Specification for: libeffects.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libeffects.so
 */

#ifndef BEGONIA_RE_LIBEFFECTS_H
#define BEGONIA_RE_LIBEFFECTS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: EffectCreate */
/* Demangled: EffectCreate */
int EffectCreate(void);

/* Symbol: EffectDumpEffects */
/* Demangled: EffectDumpEffects */
int EffectDumpEffects(void);

/* Symbol: EffectGetSubEffects */
/* Demangled: EffectGetSubEffects */
int EffectGetSubEffects(void);

/* Symbol: EffectIsNullUuid */
/* Demangled: EffectIsNullUuid */
int EffectIsNullUuid(void);

/* Symbol: EffectLoadXmlEffectConfig */
/* Demangled: EffectLoadXmlEffectConfig */
int EffectLoadXmlEffectConfig(void);

/* Symbol: EffectCreateOnDevice */
/* Demangled: EffectCreateOnDevice */
int EffectCreateOnDevice(void);

/* Symbol: EffectGetDescriptor */
/* Demangled: EffectGetDescriptor */
int EffectGetDescriptor(void);

/* Symbol: EffectLoadEffectConfig */
/* Demangled: EffectLoadEffectConfig */
int EffectLoadEffectConfig(void);

/* Symbol: EffectQueryEffect */
/* Demangled: EffectQueryEffect */
int EffectQueryEffect(void);

/* Symbol: EffectQueryNumberEffects */
/* Demangled: EffectQueryNumberEffects */
int EffectQueryNumberEffects(void);

/* Symbol: EffectRelease */
/* Demangled: EffectRelease */
int EffectRelease(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBEFFECTS_H */
