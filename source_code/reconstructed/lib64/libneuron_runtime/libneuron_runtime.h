/*
 * Reverse-Engineered ABI Specification for: libneuron_runtime.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libneuron_runtime.so
 */

#ifndef BEGONIA_RE_LIBNEURON_RUNTIME_H
#define BEGONIA_RE_LIBNEURON_RUNTIME_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: NeuronRuntime_getInputPaddedSize */
/* Demangled: NeuronRuntime_getInputPaddedSize */
int NeuronRuntime_getInputPaddedSize(void);

/* Symbol: NeuronRuntime_setSingleOutput */
/* Demangled: NeuronRuntime_setSingleOutput */
int NeuronRuntime_setSingleOutput(void);

/* Symbol: NeuronRuntime_getOutputPaddedSize */
/* Demangled: NeuronRuntime_getOutputPaddedSize */
int NeuronRuntime_getOutputPaddedSize(void);

/* Symbol: NeuronRuntime_getProfiledQoSData */
/* Demangled: NeuronRuntime_getProfiledQoSData */
int NeuronRuntime_getProfiledQoSData(void);

/* Symbol: NeuronRuntime_getSingleOutputSize */
/* Demangled: NeuronRuntime_getSingleOutputSize */
int NeuronRuntime_getSingleOutputSize(void);

/* Symbol: NeuronRuntime_loadNetworkFromFile */
/* Demangled: NeuronRuntime_loadNetworkFromFile */
int NeuronRuntime_loadNetworkFromFile(void);

/* Symbol: NeuronRuntime_setQoSOption */
/* Demangled: NeuronRuntime_setQoSOption */
int NeuronRuntime_setQoSOption(void);

/* Symbol: NeuronRuntime_getInputPaddedDimensions */
/* Demangled: NeuronRuntime_getInputPaddedDimensions */
int NeuronRuntime_getInputPaddedDimensions(void);

/* Symbol: NeuronRuntime_getInputSize */
/* Demangled: NeuronRuntime_getInputSize */
int NeuronRuntime_getInputSize(void);

/* Symbol: NeuronRuntime_getSingleInputSize */
/* Demangled: NeuronRuntime_getSingleInputSize */
int NeuronRuntime_getSingleInputSize(void);

/* Symbol: NeuronRuntime_inference */
/* Demangled: NeuronRuntime_inference */
int NeuronRuntime_inference(void);

/* Symbol: NeuronRuntime_isFenceSupported */
/* Demangled: NeuronRuntime_isFenceSupported */
int NeuronRuntime_isFenceSupported(void);

/* Symbol: NeuronRuntime_release */
/* Demangled: NeuronRuntime_release */
int NeuronRuntime_release(void);

/* Symbol: NeuronRuntime_setOutput */
/* Demangled: NeuronRuntime_setOutput */
int NeuronRuntime_setOutput(void);

/* Symbol: NeuronRuntime_getOutputPaddedDimensions */
/* Demangled: NeuronRuntime_getOutputPaddedDimensions */
int NeuronRuntime_getOutputPaddedDimensions(void);

/* Symbol: NeuronRuntime_getOutputSize */
/* Demangled: NeuronRuntime_getOutputSize */
int NeuronRuntime_getOutputSize(void);

/* Symbol: NeuronRuntime_getSingleOutputPaddedDimensions */
/* Demangled: NeuronRuntime_getSingleOutputPaddedDimensions */
int NeuronRuntime_getSingleOutputPaddedDimensions(void);

/* Symbol: NeuronRuntime_inferenceFenced */
/* Demangled: NeuronRuntime_inferenceFenced */
int NeuronRuntime_inferenceFenced(void);

/* Symbol: NeuronRuntime_setInput */
/* Demangled: NeuronRuntime_setInput */
int NeuronRuntime_setInput(void);

/* Symbol: NeuronRuntime_setSingleInput */
/* Demangled: NeuronRuntime_setSingleInput */
int NeuronRuntime_setSingleInput(void);

/* Symbol: NeuronRuntime_getSingleInputPaddedDimensions */
/* Demangled: NeuronRuntime_getSingleInputPaddedDimensions */
int NeuronRuntime_getSingleInputPaddedDimensions(void);

/* Symbol: NeuronRuntime_getSingleInputPaddedSize */
/* Demangled: NeuronRuntime_getSingleInputPaddedSize */
int NeuronRuntime_getSingleInputPaddedSize(void);

/* Symbol: NeuronRuntime_create */
/* Demangled: NeuronRuntime_create */
int NeuronRuntime_create(void);

/* Symbol: NeuronRuntime_getSingleOutputPaddedSize */
/* Demangled: NeuronRuntime_getSingleOutputPaddedSize */
int NeuronRuntime_getSingleOutputPaddedSize(void);

/* Symbol: NeuronRuntime_getVersion */
/* Demangled: NeuronRuntime_getVersion */
int NeuronRuntime_getVersion(void);

/* Symbol: NeuronRuntime_loadNetworkFromBuffer */
/* Demangled: NeuronRuntime_loadNetworkFromBuffer */
int NeuronRuntime_loadNetworkFromBuffer(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBNEURON_RUNTIME_H */
