/*
 * Reverse-Engineered ABI Specification for: libneuron_adapter.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libneuron_adapter.so
 */

#ifndef BEGONIA_RE_LIBNEURON_ADAPTER_H
#define BEGONIA_RE_LIBNEURON_ADAPTER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: NeuronCompilation_setPriority */
/* Demangled: NeuronCompilation_setPriority */
int NeuronCompilation_setPriority(void);

/* Symbol: __udivmodti4 */
/* Demangled: __udivmodti4 */
int __udivmodti4(void);

/* Symbol: NeuronModel_finish */
/* Demangled: NeuronModel_finish */
int NeuronModel_finish(void);

/* Symbol: NeuronModel_addOperand */
/* Demangled: NeuronModel_addOperand */
int NeuronModel_addOperand(void);

/* Symbol: NeuronModel_setOperandValue */
/* Demangled: NeuronModel_setOperandValue */
int NeuronModel_setOperandValue(void);

/* Symbol: NeuronExecution_free */
/* Demangled: NeuronExecution_free */
int NeuronExecution_free(void);

/* Symbol: NeuronDevice_getName */
/* Demangled: NeuronDevice_getName */
int NeuronDevice_getName(void);

/* Symbol: NeuronMemory_createFromFd */
/* Demangled: NeuronMemory_createFromFd */
int NeuronMemory_createFromFd(void);

/* Symbol: NeuronMemory_free */
/* Demangled: NeuronMemory_free */
int NeuronMemory_free(void);

/* Symbol: __subtf3 */
/* Demangled: __subtf3 */
int __subtf3(void);

/* Symbol: NeuronModel_addOperation */
/* Demangled: NeuronModel_addOperation */
int NeuronModel_addOperation(void);

/* Symbol: NeuronModel_getSupportedOperations */
/* Demangled: NeuronModel_getSupportedOperations */
int NeuronModel_getSupportedOperations(void);

/* Symbol: NeuronExecution_setOutput */
/* Demangled: NeuronExecution_setOutput */
int NeuronExecution_setOutput(void);

/* Symbol: __eqtf2 */
/* Demangled: __eqtf2 */
int __eqtf2(void);

/* Symbol: __lttf2 */
/* Demangled: __lttf2 */
int __lttf2(void);

/* Symbol: NeuronModel_setOperandValueFromModel */
/* Demangled: NeuronModel_setOperandValueFromModel */
int NeuronModel_setOperandValueFromModel(void);

/* Symbol: NeuronModel_setOperandSymmPerChannelQuantParams */
/* Demangled: NeuronModel_setOperandSymmPerChannelQuantParams */
int NeuronModel_setOperandSymmPerChannelQuantParams(void);

/* Symbol: NeuronModel_suppressOutputConversion */
/* Demangled: NeuronModel_suppressOutputConversion */
int NeuronModel_suppressOutputConversion(void);

/* Symbol: NeuronModel_relaxComputationFloat32toFloat16 */
/* Demangled: NeuronModel_relaxComputationFloat32toFloat16 */
int NeuronModel_relaxComputationFloat32toFloat16(void);

/* Symbol: NeuronCompilation_finish */
/* Demangled: NeuronCompilation_finish */
int NeuronCompilation_finish(void);

/* Symbol: NeuronCompilation_getInputPaddedSize */
/* Demangled: NeuronCompilation_getInputPaddedSize */
int NeuronCompilation_getInputPaddedSize(void);

/* Symbol: NeuronExecution_setOutputFromMemory */
/* Demangled: NeuronExecution_setOutputFromMemory */
int NeuronExecution_setOutputFromMemory(void);

/* Symbol: __cmptf2 */
/* Demangled: __cmptf2 */
int __cmptf2(void);

/* Symbol: NeuronCompilation_setPreference */
/* Demangled: NeuronCompilation_setPreference */
int NeuronCompilation_setPreference(void);

/* Symbol: NeuronCompilation_getOutputPaddedDimensions */
/* Demangled: NeuronCompilation_getOutputPaddedDimensions */
int NeuronCompilation_getOutputPaddedDimensions(void);

/* Symbol: NeuronExecution_setBoostHint */
/* Demangled: NeuronExecution_setBoostHint */
int NeuronExecution_setBoostHint(void);

/* Symbol: NeuronExecution_setInputFromMemory */
/* Demangled: NeuronExecution_setInputFromMemory */
int NeuronExecution_setInputFromMemory(void);

/* Symbol: __letf2 */
/* Demangled: __letf2 */
int __letf2(void);

/* Symbol: __udivti3 */
/* Demangled: __udivti3 */
int __udivti3(void);

/* Symbol: NeuronModel_create */
/* Demangled: NeuronModel_create */
int NeuronModel_create(void);

/* Symbol: NeuronExecution_create */
/* Demangled: NeuronExecution_create */
int NeuronExecution_create(void);

/* Symbol: Neuron_getVersion */
/* Demangled: Neuron_getVersion */
int Neuron_getVersion(void);

/* Symbol: NeuronCompilation_getOutputPaddedSize */
/* Demangled: NeuronCompilation_getOutputPaddedSize */
int NeuronCompilation_getOutputPaddedSize(void);

/* Symbol: NeuronExecution_compute */
/* Demangled: NeuronExecution_compute */
int NeuronExecution_compute(void);

/* Symbol: NeuronModel_addOperationExtension */
/* Demangled: NeuronModel_addOperationExtension */
int NeuronModel_addOperationExtension(void);

/* Symbol: Neuron_getDeviceCount */
/* Demangled: Neuron_getDeviceCount */
int Neuron_getDeviceCount(void);

/* Symbol: Neuron_getDevice */
/* Demangled: Neuron_getDevice */
int Neuron_getDevice(void);

/* Symbol: __unordtf2 */
/* Demangled: __unordtf2 */
int __unordtf2(void);

/* Symbol: __fe_getround */
/* Demangled: __fe_getround */
int __fe_getround(void);

/* Symbol: NeuronCompilation_create */
/* Demangled: NeuronCompilation_create */
int NeuronCompilation_create(void);

/* Symbol: __gttf2 */
/* Demangled: __gttf2 */
int __gttf2(void);

/* Symbol: __fe_raise_inexact */
/* Demangled: __fe_raise_inexact */
int __fe_raise_inexact(void);

/* Symbol: NeuronModel_identifyInputsAndOutputs */
/* Demangled: NeuronModel_identifyInputsAndOutputs */
int NeuronModel_identifyInputsAndOutputs(void);

/* Symbol: NeuronModel_suppressInputConversion */
/* Demangled: NeuronModel_suppressInputConversion */
int NeuronModel_suppressInputConversion(void);

/* Symbol: NeuronCompilation_free */
/* Demangled: NeuronCompilation_free */
int NeuronCompilation_free(void);

/* Symbol: NeuronCompilation_createForDevices */
/* Demangled: NeuronCompilation_createForDevices */
int NeuronCompilation_createForDevices(void);

/* Symbol: __netf2 */
/* Demangled: __netf2 */
int __netf2(void);

/* Symbol: NeuronModel_free */
/* Demangled: NeuronModel_free */
int NeuronModel_free(void);

/* Symbol: NeuronModel_getSupportedOperationsForDevices */
/* Demangled: NeuronModel_getSupportedOperationsForDevices */
int NeuronModel_getSupportedOperationsForDevices(void);

/* Symbol: NeuronCompilation_getInputPaddedDimensions */
/* Demangled: NeuronCompilation_getInputPaddedDimensions */
int NeuronCompilation_getInputPaddedDimensions(void);

/* Symbol: __addtf3 */
/* Demangled: __addtf3 */
int __addtf3(void);

/* Symbol: NeuronCompilation_setCaching */
/* Demangled: NeuronCompilation_setCaching */
int NeuronCompilation_setCaching(void);

/* Symbol: NeuronExecution_setInput */
/* Demangled: NeuronExecution_setInput */
int NeuronExecution_setInput(void);

/* Symbol: __getf2 */
/* Demangled: __getf2 */
int __getf2(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBNEURON_ADAPTER_H */
