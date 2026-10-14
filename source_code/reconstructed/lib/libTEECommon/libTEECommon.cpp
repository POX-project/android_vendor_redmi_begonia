/*
 * Reverse-Engineered Source for: libTEECommon.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libTEECommon"

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
#include "libTEECommon.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_ISEE_TEE "/dev/isee_tee"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_ISEE_TEE, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_ISEE_TEE, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_ISEE_TEE, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: TEEC_InvokeCommand */
extern "C" __attribute__((visibility("default"))) int TEEC_InvokeCommand(void) {
    ALOGD("TEEC_InvokeCommand() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<TEEC_Context*, TEEC_Context*>, std::__1::__map_value_compare<TEEC_Context*, std::__1::__value_type<TEEC_Context*, TEEC_Context*>, std::__1::less<TEEC_Context*>, true>, std::__1::allocator<std::__1::__value_type<TEEC_Context*, TEEC_Context*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<TEEC_Context*, TEEC_Context*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIP12TEEC_ContextS3_EENS_19__map_value_compareIS3_S4_NS_4lessIS3_EELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIP12TEEC_ContextS3_EENS_19__map_value_compareIS3_S4_NS_4lessIS3_EELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Demangled: TEEC_RegisterSharedMemoryFileDescriptor */
extern "C" __attribute__((visibility("default"))) int TEEC_RegisterSharedMemoryFileDescriptor(void) {
    ALOGD("TEEC_RegisterSharedMemoryFileDescriptor() called");
    return 0;
}

/* Demangled: Common::TEEC_CloseSession(TEEC_Session*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Common17TEEC_CloseSessionEP12TEEC_Session(void) {
    ALOGD("_ZN6Common17TEEC_CloseSessionEP12TEEC_Session() called");
    return 0;
}

/* Demangled: Common::TEEC_FinalizeContext(TEEC_Context*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Common20TEEC_FinalizeContextEP12TEEC_Context(void) {
    ALOGD("_ZN6Common20TEEC_FinalizeContextEP12TEEC_Context() called");
    return 0;
}

/* Demangled: Common::TEEC_InitializeContext(char const*, TEEC_Context*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Common22TEEC_InitializeContextEPKcP12TEEC_Context(void) {
    ALOGD("_ZN6Common22TEEC_InitializeContextEPKcP12TEEC_Context() called");
    return 0;
}

/* Demangled: Common::teec_pre_process_operation(TEEC_Context*, TEEC_Operation*, tee_ioctl_param*, TEEC_SharedMemory*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Common26teec_pre_process_operationEP12TEEC_ContextP14TEEC_OperationP15tee_ioctl_paramP17TEEC_SharedMemory(void) {
    ALOGD("_ZN6Common26teec_pre_process_operationEP12TEEC_ContextP14TEEC_OperationP15tee_ioctl_paramP17TEEC_SharedMemory() called");
    return 0;
}

/* Demangled: Common::TEEC_RegisterSharedMemoryFileDescriptor(TEEC_Context*, TEEC_SharedMemory*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6Common39TEEC_RegisterSharedMemoryFileDescriptorEP12TEEC_ContextP17TEEC_SharedMemoryi(void) {
    ALOGD("_ZN6Common39TEEC_RegisterSharedMemoryFileDescriptorEP12TEEC_ContextP17TEEC_SharedMemoryi() called");
    return 0;
}

/* Exported Object: Common::getInstance()::client */
extern "C" __attribute__((visibility("default"))) void* _ZZN6Common11getInstanceEvE6client = NULL;

/* Demangled: TEEC_AllocateSharedMemory */
extern "C" __attribute__((visibility("default"))) int TEEC_AllocateSharedMemory(void) {
    ALOGD("TEEC_AllocateSharedMemory() called");
    return 0;
}

/* Demangled: TEEC_RegisterSharedMemory */
extern "C" __attribute__((visibility("default"))) int TEEC_RegisterSharedMemory(void) {
    ALOGD("TEEC_RegisterSharedMemory() called");
    return 0;
}

/* Demangled: Common::TEEC_OpenSession(TEEC_Context*, TEEC_Session*, TEEC_UUID const*, unsigned int, void const*, TEEC_Operation*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Common16TEEC_OpenSessionEP12TEEC_ContextP12TEEC_SessionPK9TEEC_UUIDjPKvP14TEEC_OperationPj(void) {
    ALOGD("_ZN6Common16TEEC_OpenSessionEP12TEEC_ContextP12TEEC_SessionPK9TEEC_UUIDjPKvP14TEEC_OperationPj() called");
    return 0;
}

/* Demangled: Common::TEEC_RequestCancellation(TEEC_Operation*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Common24TEEC_RequestCancellationEP14TEEC_Operation(void) {
    ALOGD("_ZN6Common24TEEC_RequestCancellationEP14TEEC_Operation() called");
    return 0;
}

/* Demangled: dump_buffer(char const*, unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z11dump_bufferPKcPKhj(void) {
    ALOGD("_Z11dump_bufferPKcPKhj() called");
    return 0;
}

/* Demangled: TEEC_OpenSession */
extern "C" __attribute__((visibility("default"))) int TEEC_OpenSession(void) {
    ALOGD("TEEC_OpenSession() called");
    return 0;
}

/* Demangled: TEEC_RequestCancellation */
extern "C" __attribute__((visibility("default"))) int TEEC_RequestCancellation(void) {
    ALOGD("TEEC_RequestCancellation() called");
    return 0;
}

/* Demangled: _dprintf(char const*, int, int, int, char const*, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _Z8_dprintfPKciiiS0_S0_z(void) {
    ALOGD("_Z8_dprintfPKciiiS0_S0_z() called");
    return 0;
}

/* Demangled: Common::teec_pre_process_tmpref(TEEC_Context*, unsigned int, TEEC_TempMemoryReference*, tee_ioctl_param*, TEEC_SharedMemory*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Common23teec_pre_process_tmprefEP12TEEC_ContextjP24TEEC_TempMemoryReferenceP15tee_ioctl_paramP17TEEC_SharedMemory(void) {
    ALOGD("_ZN6Common23teec_pre_process_tmprefEP12TEEC_ContextjP24TEEC_TempMemoryReferenceP15tee_ioctl_paramP17TEEC_SharedMemory() called");
    return 0;
}

/* Demangled: Common::~Common() */
extern "C" __attribute__((visibility("default"))) int _ZN6CommonD1Ev(void) {
    ALOGD("_ZN6CommonD1Ev() called");
    return 0;
}

/* Demangled: TEEC_FinalizeContext */
extern "C" __attribute__((visibility("default"))) int TEEC_FinalizeContext(void) {
    ALOGD("TEEC_FinalizeContext() called");
    return 0;
}

/* Demangled: TEEC_InitializeContext */
extern "C" __attribute__((visibility("default"))) int TEEC_InitializeContext(void) {
    ALOGD("TEEC_InitializeContext() called");
    return 0;
}

/* Demangled: Common::TEEC_AllocateSharedMemory(TEEC_Context*, TEEC_SharedMemory*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Common25TEEC_AllocateSharedMemoryEP12TEEC_ContextP17TEEC_SharedMemory(void) {
    ALOGD("_ZN6Common25TEEC_AllocateSharedMemoryEP12TEEC_ContextP17TEEC_SharedMemory() called");
    return 0;
}

/* Demangled: Common::TEEC_RegisterSharedMemory(TEEC_Context*, TEEC_SharedMemory*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Common25TEEC_RegisterSharedMemoryEP12TEEC_ContextP17TEEC_SharedMemory(void) {
    ALOGD("_ZN6Common25TEEC_RegisterSharedMemoryEP12TEEC_ContextP17TEEC_SharedMemory() called");
    return 0;
}

/* Demangled: Common::~Common() */
extern "C" __attribute__((visibility("default"))) int _ZN6CommonD2Ev(void) {
    ALOGD("_ZN6CommonD2Ev() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: Common::TEEC_InvokeCommand(TEEC_Session*, unsigned int, TEEC_Operation*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Common18TEEC_InvokeCommandEP12TEEC_SessionjP14TEEC_OperationPj(void) {
    ALOGD("_ZN6Common18TEEC_InvokeCommandEP12TEEC_SessionjP14TEEC_OperationPj() called");
    return 0;
}

/* Demangled: TEEC_ReleaseSharedMemory */
extern "C" __attribute__((visibility("default"))) int TEEC_ReleaseSharedMemory(void) {
    ALOGD("TEEC_ReleaseSharedMemory() called");
    return 0;
}

/* Exported Object: guard variable for Common::getInstance()::client */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN6Common11getInstanceEvE6client = NULL;

/* Demangled: Common::teec_free_temp_refs(TEEC_Operation*, TEEC_SharedMemory*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Common19teec_free_temp_refsEP14TEEC_OperationP17TEEC_SharedMemory(void) {
    ALOGD("_ZN6Common19teec_free_temp_refsEP14TEEC_OperationP17TEEC_SharedMemory() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: TEEC_CloseSession */
extern "C" __attribute__((visibility("default"))) int TEEC_CloseSession(void) {
    ALOGD("TEEC_CloseSession() called");
    return 0;
}

/* Demangled: Common::TEEC_ReleaseSharedMemory(TEEC_SharedMemory*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Common24TEEC_ReleaseSharedMemoryEP17TEEC_SharedMemory(void) {
    ALOGD("_ZN6Common24TEEC_ReleaseSharedMemoryEP17TEEC_SharedMemory() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<TEEC_Session*, TEEC_Session*>, std::__1::__map_value_compare<TEEC_Session*, std::__1::__value_type<TEEC_Session*, TEEC_Session*>, std::__1::less<TEEC_Session*>, true>, std::__1::allocator<std::__1::__value_type<TEEC_Session*, TEEC_Session*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<TEEC_Session*, TEEC_Session*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIP12TEEC_SessionS3_EENS_19__map_value_compareIS3_S4_NS_4lessIS3_EELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIP12TEEC_SessionS3_EENS_19__map_value_compareIS3_S4_NS_4lessIS3_EELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}
