/*
 * Reverse-Engineered Source for: libneuron_adapter.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libneuron_adapter"

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
#include "libneuron_adapter.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NeuronCompilation_setPriority */
extern "C" __attribute__((visibility("default"))) int NeuronCompilation_setPriority(void) {
    ALOGD("NeuronCompilation_setPriority() called");
    return 0;
}

/* Demangled: __udivmodti4 */
extern "C" __attribute__((visibility("default"))) int __udivmodti4(void) {
    ALOGD("__udivmodti4() called");
    return 0;
}

/* Demangled: NeuronModel_finish */
extern "C" __attribute__((visibility("default"))) int NeuronModel_finish(void) {
    ALOGD("NeuronModel_finish() called");
    return 0;
}

/* Demangled: NeuronModel_addOperand */
extern "C" __attribute__((visibility("default"))) int NeuronModel_addOperand(void) {
    ALOGD("NeuronModel_addOperand() called");
    return 0;
}

/* Demangled: NeuronModel_setOperandValue */
extern "C" __attribute__((visibility("default"))) int NeuronModel_setOperandValue(void) {
    ALOGD("NeuronModel_setOperandValue() called");
    return 0;
}

/* Demangled: NeuronExecution_free */
extern "C" __attribute__((visibility("default"))) int NeuronExecution_free(void) {
    ALOGD("NeuronExecution_free() called");
    return 0;
}

/* Demangled: NeuronDevice_getName */
extern "C" __attribute__((visibility("default"))) int NeuronDevice_getName(void) {
    ALOGD("NeuronDevice_getName() called");
    return 0;
}

/* Demangled: NeuronMemory_createFromFd */
extern "C" __attribute__((visibility("default"))) int NeuronMemory_createFromFd(void) {
    ALOGD("NeuronMemory_createFromFd() called");
    return 0;
}

/* Demangled: NeuronMemory_free */
extern "C" __attribute__((visibility("default"))) int NeuronMemory_free(void) {
    ALOGD("NeuronMemory_free() called");
    return 0;
}

/* Demangled: __subtf3 */
extern "C" __attribute__((visibility("default"))) int __subtf3(void) {
    ALOGD("__subtf3() called");
    return 0;
}

/* Demangled: NeuronModel_addOperation */
extern "C" __attribute__((visibility("default"))) int NeuronModel_addOperation(void) {
    ALOGD("NeuronModel_addOperation() called");
    return 0;
}

/* Demangled: NeuronModel_getSupportedOperations */
extern "C" __attribute__((visibility("default"))) int NeuronModel_getSupportedOperations(void) {
    ALOGD("NeuronModel_getSupportedOperations() called");
    return 0;
}

/* Demangled: NeuronExecution_setOutput */
extern "C" __attribute__((visibility("default"))) int NeuronExecution_setOutput(void) {
    ALOGD("NeuronExecution_setOutput() called");
    return 0;
}

/* Demangled: __eqtf2 */
extern "C" __attribute__((visibility("default"))) int __eqtf2(void) {
    ALOGD("__eqtf2() called");
    return 0;
}

/* Demangled: __lttf2 */
extern "C" __attribute__((visibility("default"))) int __lttf2(void) {
    ALOGD("__lttf2() called");
    return 0;
}

/* Demangled: NeuronModel_setOperandValueFromModel */
extern "C" __attribute__((visibility("default"))) int NeuronModel_setOperandValueFromModel(void) {
    ALOGD("NeuronModel_setOperandValueFromModel() called");
    return 0;
}

/* Demangled: NeuronModel_setOperandSymmPerChannelQuantParams */
extern "C" __attribute__((visibility("default"))) int NeuronModel_setOperandSymmPerChannelQuantParams(void) {
    ALOGD("NeuronModel_setOperandSymmPerChannelQuantParams() called");
    return 0;
}

/* Demangled: NeuronModel_suppressOutputConversion */
extern "C" __attribute__((visibility("default"))) int NeuronModel_suppressOutputConversion(void) {
    ALOGD("NeuronModel_suppressOutputConversion() called");
    return 0;
}

/* Demangled: NeuronModel_relaxComputationFloat32toFloat16 */
extern "C" __attribute__((visibility("default"))) int NeuronModel_relaxComputationFloat32toFloat16(void) {
    ALOGD("NeuronModel_relaxComputationFloat32toFloat16() called");
    return 0;
}

/* Demangled: NeuronCompilation_finish */
extern "C" __attribute__((visibility("default"))) int NeuronCompilation_finish(void) {
    ALOGD("NeuronCompilation_finish() called");
    return 0;
}

/* Demangled: NeuronCompilation_getInputPaddedSize */
extern "C" __attribute__((visibility("default"))) int NeuronCompilation_getInputPaddedSize(void) {
    ALOGD("NeuronCompilation_getInputPaddedSize() called");
    return 0;
}

/* Demangled: NeuronExecution_setOutputFromMemory */
extern "C" __attribute__((visibility("default"))) int NeuronExecution_setOutputFromMemory(void) {
    ALOGD("NeuronExecution_setOutputFromMemory() called");
    return 0;
}

/* Demangled: __cmptf2 */
extern "C" __attribute__((visibility("default"))) int __cmptf2(void) {
    ALOGD("__cmptf2() called");
    return 0;
}

/* Demangled: NeuronCompilation_setPreference */
extern "C" __attribute__((visibility("default"))) int NeuronCompilation_setPreference(void) {
    ALOGD("NeuronCompilation_setPreference() called");
    return 0;
}

/* Demangled: NeuronCompilation_getOutputPaddedDimensions */
extern "C" __attribute__((visibility("default"))) int NeuronCompilation_getOutputPaddedDimensions(void) {
    ALOGD("NeuronCompilation_getOutputPaddedDimensions() called");
    return 0;
}

/* Demangled: NeuronExecution_setBoostHint */
extern "C" __attribute__((visibility("default"))) int NeuronExecution_setBoostHint(void) {
    ALOGD("NeuronExecution_setBoostHint() called");
    return 0;
}

/* Demangled: NeuronExecution_setInputFromMemory */
extern "C" __attribute__((visibility("default"))) int NeuronExecution_setInputFromMemory(void) {
    ALOGD("NeuronExecution_setInputFromMemory() called");
    return 0;
}

/* Demangled: __letf2 */
extern "C" __attribute__((visibility("default"))) int __letf2(void) {
    ALOGD("__letf2() called");
    return 0;
}

/* Demangled: __udivti3 */
extern "C" __attribute__((visibility("default"))) int __udivti3(void) {
    ALOGD("__udivti3() called");
    return 0;
}

/* Demangled: NeuronModel_create */
extern "C" __attribute__((visibility("default"))) int NeuronModel_create(void) {
    ALOGD("NeuronModel_create() called");
    return 0;
}

/* Demangled: NeuronExecution_create */
extern "C" __attribute__((visibility("default"))) int NeuronExecution_create(void) {
    ALOGD("NeuronExecution_create() called");
    return 0;
}

/* Demangled: Neuron_getVersion */
extern "C" __attribute__((visibility("default"))) int Neuron_getVersion(void) {
    ALOGD("Neuron_getVersion() called");
    return 0;
}

/* Demangled: NeuronCompilation_getOutputPaddedSize */
extern "C" __attribute__((visibility("default"))) int NeuronCompilation_getOutputPaddedSize(void) {
    ALOGD("NeuronCompilation_getOutputPaddedSize() called");
    return 0;
}

/* Demangled: NeuronExecution_compute */
extern "C" __attribute__((visibility("default"))) int NeuronExecution_compute(void) {
    ALOGD("NeuronExecution_compute() called");
    return 0;
}

/* Demangled: NeuronModel_addOperationExtension */
extern "C" __attribute__((visibility("default"))) int NeuronModel_addOperationExtension(void) {
    ALOGD("NeuronModel_addOperationExtension() called");
    return 0;
}

/* Demangled: Neuron_getDeviceCount */
extern "C" __attribute__((visibility("default"))) int Neuron_getDeviceCount(void) {
    ALOGD("Neuron_getDeviceCount() called");
    return 0;
}

/* Demangled: Neuron_getDevice */
extern "C" __attribute__((visibility("default"))) int Neuron_getDevice(void) {
    ALOGD("Neuron_getDevice() called");
    return 0;
}

/* Demangled: __unordtf2 */
extern "C" __attribute__((visibility("default"))) int __unordtf2(void) {
    ALOGD("__unordtf2() called");
    return 0;
}

/* Demangled: __fe_getround */
extern "C" __attribute__((visibility("default"))) int __fe_getround(void) {
    ALOGD("__fe_getround() called");
    return 0;
}

/* Demangled: NeuronCompilation_create */
extern "C" __attribute__((visibility("default"))) int NeuronCompilation_create(void) {
    ALOGD("NeuronCompilation_create() called");
    return 0;
}

/* Demangled: __gttf2 */
extern "C" __attribute__((visibility("default"))) int __gttf2(void) {
    ALOGD("__gttf2() called");
    return 0;
}

/* Demangled: __fe_raise_inexact */
extern "C" __attribute__((visibility("default"))) int __fe_raise_inexact(void) {
    ALOGD("__fe_raise_inexact() called");
    return 0;
}

/* Demangled: NeuronModel_identifyInputsAndOutputs */
extern "C" __attribute__((visibility("default"))) int NeuronModel_identifyInputsAndOutputs(void) {
    ALOGD("NeuronModel_identifyInputsAndOutputs() called");
    return 0;
}

/* Demangled: NeuronModel_suppressInputConversion */
extern "C" __attribute__((visibility("default"))) int NeuronModel_suppressInputConversion(void) {
    ALOGD("NeuronModel_suppressInputConversion() called");
    return 0;
}

/* Demangled: NeuronCompilation_free */
extern "C" __attribute__((visibility("default"))) int NeuronCompilation_free(void) {
    ALOGD("NeuronCompilation_free() called");
    return 0;
}

/* Demangled: NeuronCompilation_createForDevices */
extern "C" __attribute__((visibility("default"))) int NeuronCompilation_createForDevices(void) {
    ALOGD("NeuronCompilation_createForDevices() called");
    return 0;
}

/* Demangled: __netf2 */
extern "C" __attribute__((visibility("default"))) int __netf2(void) {
    ALOGD("__netf2() called");
    return 0;
}

/* Demangled: NeuronModel_free */
extern "C" __attribute__((visibility("default"))) int NeuronModel_free(void) {
    ALOGD("NeuronModel_free() called");
    return 0;
}

/* Demangled: NeuronModel_getSupportedOperationsForDevices */
extern "C" __attribute__((visibility("default"))) int NeuronModel_getSupportedOperationsForDevices(void) {
    ALOGD("NeuronModel_getSupportedOperationsForDevices() called");
    return 0;
}

/* Demangled: NeuronCompilation_getInputPaddedDimensions */
extern "C" __attribute__((visibility("default"))) int NeuronCompilation_getInputPaddedDimensions(void) {
    ALOGD("NeuronCompilation_getInputPaddedDimensions() called");
    return 0;
}

/* Demangled: __addtf3 */
extern "C" __attribute__((visibility("default"))) int __addtf3(void) {
    ALOGD("__addtf3() called");
    return 0;
}

/* Demangled: NeuronCompilation_setCaching */
extern "C" __attribute__((visibility("default"))) int NeuronCompilation_setCaching(void) {
    ALOGD("NeuronCompilation_setCaching() called");
    return 0;
}

/* Demangled: NeuronExecution_setInput */
extern "C" __attribute__((visibility("default"))) int NeuronExecution_setInput(void) {
    ALOGD("NeuronExecution_setInput() called");
    return 0;
}

/* Demangled: __getf2 */
extern "C" __attribute__((visibility("default"))) int __getf2(void) {
    ALOGD("__getf2() called");
    return 0;
}
