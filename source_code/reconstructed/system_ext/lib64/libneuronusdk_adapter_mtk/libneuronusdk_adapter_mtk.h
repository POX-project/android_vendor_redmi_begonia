/*
 * Reverse-Engineered ABI Specification for: libneuronusdk_adapter.mtk.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libneuronusdk_adapter.mtk.so
 */

#ifndef BEGONIA_RE_LIBNEURONUSDK_ADAPTER_MTK_H
#define BEGONIA_RE_LIBNEURONUSDK_ADAPTER_MTK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: NeuronCompilation_setOptimizationHint */
/* Demangled: NeuronCompilation_setOptimizationHint */
int NeuronCompilation_setOptimizationHint(void);

/* Symbol: NeuronModel_free */
/* Demangled: NeuronModel_free */
int NeuronModel_free(void);

/* Symbol: NeuronModel_suppressOutputConversion */
/* Demangled: NeuronModel_suppressOutputConversion */
int NeuronModel_suppressOutputConversion(void);

/* Symbol: NeuronMemory_createFromFd */
/* Demangled: NeuronMemory_createFromFd */
int NeuronMemory_createFromFd(void);

/* Symbol: NeuronModel_create */
/* Demangled: NeuronModel_create */
int NeuronModel_create(void);

/* Symbol: NeuronModel_relaxComputationFloat32toFloat16 */
/* Demangled: NeuronModel_relaxComputationFloat32toFloat16 */
int NeuronModel_relaxComputationFloat32toFloat16(void);

/* Symbol: NeuronCompilation_finish */
/* Demangled: NeuronCompilation_finish */
int NeuronCompilation_finish(void);

/* Symbol: NeuronExecution_setInputFromMemory */
/* Demangled: NeuronExecution_setInputFromMemory */
int NeuronExecution_setInputFromMemory(void);

/* Symbol: NeuronModel_getSupportedOperations */
/* Demangled: NeuronModel_getSupportedOperations */
int NeuronModel_getSupportedOperations(void);

/* Symbol: NeuronModel_setOperandValue */
/* Demangled: NeuronModel_setOperandValue */
int NeuronModel_setOperandValue(void);

/* Symbol: Neuron_getDeviceCount */
/* Demangled: Neuron_getDeviceCount */
int Neuron_getDeviceCount(void);

/* Symbol: NeuronCompilation_getInputPaddedDimensions */
/* Demangled: NeuronCompilation_getInputPaddedDimensions */
int NeuronCompilation_getInputPaddedDimensions(void);

/* Symbol: NeuronCompilation_getOutputPaddedSize */
/* Demangled: NeuronCompilation_getOutputPaddedSize */
int NeuronCompilation_getOutputPaddedSize(void);

/* Symbol: NeuronCompilation_setPreference */
/* Demangled: NeuronCompilation_setPreference */
int NeuronCompilation_setPreference(void);

/* Symbol: NeuronCompilation_setPriority */
/* Demangled: NeuronCompilation_setPriority */
int NeuronCompilation_setPriority(void);

/* Symbol: NeuronExecution_free */
/* Demangled: NeuronExecution_free */
int NeuronExecution_free(void);

/* Symbol: NeuronModel_addOperand */
/* Demangled: NeuronModel_addOperand */
int NeuronModel_addOperand(void);

/* Symbol: NeuronModel_restoreFromCompiledNetwork */
/* Demangled: NeuronModel_restoreFromCompiledNetwork */
int NeuronModel_restoreFromCompiledNetwork(void);

/* Symbol: NeuronCompilation_setCaching */
/* Demangled: NeuronCompilation_setCaching */
int NeuronCompilation_setCaching(void);

/* Symbol: NeuronCompilation_storeCompiledNetwork */
/* Demangled: NeuronCompilation_storeCompiledNetwork */
int NeuronCompilation_storeCompiledNetwork(void);

/* Symbol: NeuronExecution_compute */
/* Demangled: NeuronExecution_compute */
int NeuronExecution_compute(void);

/* Symbol: NeuronExecution_setOutput */
/* Demangled: NeuronExecution_setOutput */
int NeuronExecution_setOutput(void);

/* Symbol: NeuronModel_finish */
/* Demangled: NeuronModel_finish */
int NeuronModel_finish(void);

/* Symbol: NeuronModel_setOperandSymmPerChannelQuantParams */
/* Demangled: NeuronModel_setOperandSymmPerChannelQuantParams */
int NeuronModel_setOperandSymmPerChannelQuantParams(void);

/* Symbol: Neuron_getDevice */
/* Demangled: Neuron_getDevice */
int Neuron_getDevice(void);

/* Symbol: Neuron_getL1MemorySizeKb */
/* Demangled: Neuron_getL1MemorySizeKb */
int Neuron_getL1MemorySizeKb(void);

/* Symbol: NeuronExecution_setBoostHint */
/* Demangled: NeuronExecution_setBoostHint */
int NeuronExecution_setBoostHint(void);

/* Symbol: NeuronModel_addOperation */
/* Demangled: NeuronModel_addOperation */
int NeuronModel_addOperation(void);

/* Symbol: NeuronCompilation_free */
/* Demangled: NeuronCompilation_free */
int NeuronCompilation_free(void);

/* Symbol: NeuronExecution_setOutputFromMemory */
/* Demangled: NeuronExecution_setOutputFromMemory */
int NeuronExecution_setOutputFromMemory(void);

/* Symbol: NeuronModel_addOperationExtension */
/* Demangled: NeuronModel_addOperationExtension */
int NeuronModel_addOperationExtension(void);

/* Symbol: NeuronCompilation_getCompiledNetworkSize */
/* Demangled: NeuronCompilation_getCompiledNetworkSize */
int NeuronCompilation_getCompiledNetworkSize(void);

/* Symbol: NeuronCompilation_getInputPaddedSize */
/* Demangled: NeuronCompilation_getInputPaddedSize */
int NeuronCompilation_getInputPaddedSize(void);

/* Symbol: NeuronDevice_getName */
/* Demangled: NeuronDevice_getName */
int NeuronDevice_getName(void);

/* Symbol: NeuronExecution_setInput */
/* Demangled: NeuronExecution_setInput */
int NeuronExecution_setInput(void);

/* Symbol: NeuronModel_setOperandValueFromModel */
/* Demangled: NeuronModel_setOperandValueFromModel */
int NeuronModel_setOperandValueFromModel(void);

/* Symbol: NeuronCompilation_createForDevices */
/* Demangled: NeuronCompilation_createForDevices */
int NeuronCompilation_createForDevices(void);

/* Symbol: NeuronCompilation_setL1MemorySizeKb */
/* Demangled: NeuronCompilation_setL1MemorySizeKb */
int NeuronCompilation_setL1MemorySizeKb(void);

/* Symbol: NeuronExecution_create */
/* Demangled: NeuronExecution_create */
int NeuronExecution_create(void);

/* Symbol: NeuronMemory_free */
/* Demangled: NeuronMemory_free */
int NeuronMemory_free(void);

/* Symbol: NeuronModel_identifyInputsAndOutputs */
/* Demangled: NeuronModel_identifyInputsAndOutputs */
int NeuronModel_identifyInputsAndOutputs(void);

/* Symbol: NeuronModel_suppressInputConversion */
/* Demangled: NeuronModel_suppressInputConversion */
int NeuronModel_suppressInputConversion(void);

/* Symbol: NeuronCompilation_create */
/* Demangled: NeuronCompilation_create */
int NeuronCompilation_create(void);

/* Symbol: NeuronCompilation_getOutputPaddedDimensions */
/* Demangled: NeuronCompilation_getOutputPaddedDimensions */
int NeuronCompilation_getOutputPaddedDimensions(void);

/* Symbol: NeuronModel_getSupportedOperationsForDevices */
/* Demangled: NeuronModel_getSupportedOperationsForDevices */
int NeuronModel_getSupportedOperationsForDevices(void);

/* Symbol: Neuron_getVersion */
/* Demangled: Neuron_getVersion */
int Neuron_getVersion(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBNEURONUSDK_ADAPTER_MTK_H */
