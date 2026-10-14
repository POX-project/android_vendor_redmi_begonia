/*
 * Reverse-Engineered ABI Specification for: libTEECommon.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libTEECommon.so
 */

#ifndef BEGONIA_RE_LIBTEECOMMON_H
#define BEGONIA_RE_LIBTEECOMMON_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: TEEC_InvokeCommand */
/* Demangled: TEEC_InvokeCommand */
int TEEC_InvokeCommand(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIP12TEEC_ContextS3_EENS_19__map_value_compareIS3_S4_NS_4lessIS3_EELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<TEEC_Context*, TEEC_Context*>, std::__1::__map_value_compare<TEEC_Context*, std::__1::__value_type<TEEC_Context*, TEEC_Context*>, std::__1::less<TEEC_Context*>, true>, std::__1::allocator<std::__1::__value_type<TEEC_Context*, TEEC_Context*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<TEEC_Context*, TEEC_Context*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIP12TEEC_ContextS3_EENS_19__map_value_compareIS3_S4_NS_4lessIS3_EELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void);

/* Symbol: TEEC_RegisterSharedMemoryFileDescriptor */
/* Demangled: TEEC_RegisterSharedMemoryFileDescriptor */
int TEEC_RegisterSharedMemoryFileDescriptor(void);

/* Symbol: _ZN6Common17TEEC_CloseSessionEP12TEEC_Session */
/* Demangled: Common::TEEC_CloseSession(TEEC_Session*) */
int _ZN6Common17TEEC_CloseSessionEP12TEEC_Session(void);

/* Symbol: _ZN6Common20TEEC_FinalizeContextEP12TEEC_Context */
/* Demangled: Common::TEEC_FinalizeContext(TEEC_Context*) */
int _ZN6Common20TEEC_FinalizeContextEP12TEEC_Context(void);

/* Symbol: _ZN6Common22TEEC_InitializeContextEPKcP12TEEC_Context */
/* Demangled: Common::TEEC_InitializeContext(char const*, TEEC_Context*) */
int _ZN6Common22TEEC_InitializeContextEPKcP12TEEC_Context(void);

/* Symbol: _ZN6Common26teec_pre_process_operationEP12TEEC_ContextP14TEEC_OperationP15tee_ioctl_paramP17TEEC_SharedMemory */
/* Demangled: Common::teec_pre_process_operation(TEEC_Context*, TEEC_Operation*, tee_ioctl_param*, TEEC_SharedMemory*) */
int _ZN6Common26teec_pre_process_operationEP12TEEC_ContextP14TEEC_OperationP15tee_ioctl_paramP17TEEC_SharedMemory(void);

/* Symbol: _ZN6Common39TEEC_RegisterSharedMemoryFileDescriptorEP12TEEC_ContextP17TEEC_SharedMemoryi */
/* Demangled: Common::TEEC_RegisterSharedMemoryFileDescriptor(TEEC_Context*, TEEC_SharedMemory*, int) */
int _ZN6Common39TEEC_RegisterSharedMemoryFileDescriptorEP12TEEC_ContextP17TEEC_SharedMemoryi(void);

/* Symbol: _ZZN6Common11getInstanceEvE6client */
/* Demangled: Common::getInstance()::client */
extern void* _ZZN6Common11getInstanceEvE6client;

/* Symbol: TEEC_AllocateSharedMemory */
/* Demangled: TEEC_AllocateSharedMemory */
int TEEC_AllocateSharedMemory(void);

/* Symbol: TEEC_RegisterSharedMemory */
/* Demangled: TEEC_RegisterSharedMemory */
int TEEC_RegisterSharedMemory(void);

/* Symbol: _ZN6Common16TEEC_OpenSessionEP12TEEC_ContextP12TEEC_SessionPK9TEEC_UUIDjPKvP14TEEC_OperationPj */
/* Demangled: Common::TEEC_OpenSession(TEEC_Context*, TEEC_Session*, TEEC_UUID const*, unsigned int, void const*, TEEC_Operation*, unsigned int*) */
int _ZN6Common16TEEC_OpenSessionEP12TEEC_ContextP12TEEC_SessionPK9TEEC_UUIDjPKvP14TEEC_OperationPj(void);

/* Symbol: _ZN6Common24TEEC_RequestCancellationEP14TEEC_Operation */
/* Demangled: Common::TEEC_RequestCancellation(TEEC_Operation*) */
int _ZN6Common24TEEC_RequestCancellationEP14TEEC_Operation(void);

/* Symbol: _Z11dump_bufferPKcPKhj */
/* Demangled: dump_buffer(char const*, unsigned char const*, unsigned int) */
int _Z11dump_bufferPKcPKhj(void);

/* Symbol: TEEC_OpenSession */
/* Demangled: TEEC_OpenSession */
int TEEC_OpenSession(void);

/* Symbol: TEEC_RequestCancellation */
/* Demangled: TEEC_RequestCancellation */
int TEEC_RequestCancellation(void);

/* Symbol: _Z8_dprintfPKciiiS0_S0_z */
/* Demangled: _dprintf(char const*, int, int, int, char const*, char const*, ...) */
int _Z8_dprintfPKciiiS0_S0_z(void);

/* Symbol: _ZN6Common23teec_pre_process_tmprefEP12TEEC_ContextjP24TEEC_TempMemoryReferenceP15tee_ioctl_paramP17TEEC_SharedMemory */
/* Demangled: Common::teec_pre_process_tmpref(TEEC_Context*, unsigned int, TEEC_TempMemoryReference*, tee_ioctl_param*, TEEC_SharedMemory*) */
int _ZN6Common23teec_pre_process_tmprefEP12TEEC_ContextjP24TEEC_TempMemoryReferenceP15tee_ioctl_paramP17TEEC_SharedMemory(void);

/* Symbol: _ZN6CommonD1Ev */
/* Demangled: Common::~Common() */
int _ZN6CommonD1Ev(void);

/* Symbol: TEEC_FinalizeContext */
/* Demangled: TEEC_FinalizeContext */
int TEEC_FinalizeContext(void);

/* Symbol: TEEC_InitializeContext */
/* Demangled: TEEC_InitializeContext */
int TEEC_InitializeContext(void);

/* Symbol: _ZN6Common25TEEC_AllocateSharedMemoryEP12TEEC_ContextP17TEEC_SharedMemory */
/* Demangled: Common::TEEC_AllocateSharedMemory(TEEC_Context*, TEEC_SharedMemory*) */
int _ZN6Common25TEEC_AllocateSharedMemoryEP12TEEC_ContextP17TEEC_SharedMemory(void);

/* Symbol: _ZN6Common25TEEC_RegisterSharedMemoryEP12TEEC_ContextP17TEEC_SharedMemory */
/* Demangled: Common::TEEC_RegisterSharedMemory(TEEC_Context*, TEEC_SharedMemory*) */
int _ZN6Common25TEEC_RegisterSharedMemoryEP12TEEC_ContextP17TEEC_SharedMemory(void);

/* Symbol: _ZN6CommonD2Ev */
/* Demangled: Common::~Common() */
int _ZN6CommonD2Ev(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6Common18TEEC_InvokeCommandEP12TEEC_SessionjP14TEEC_OperationPj */
/* Demangled: Common::TEEC_InvokeCommand(TEEC_Session*, unsigned int, TEEC_Operation*, unsigned int*) */
int _ZN6Common18TEEC_InvokeCommandEP12TEEC_SessionjP14TEEC_OperationPj(void);

/* Symbol: TEEC_ReleaseSharedMemory */
/* Demangled: TEEC_ReleaseSharedMemory */
int TEEC_ReleaseSharedMemory(void);

/* Symbol: _ZGVZN6Common11getInstanceEvE6client */
/* Demangled: guard variable for Common::getInstance()::client */
extern void* _ZGVZN6Common11getInstanceEvE6client;

/* Symbol: _ZN6Common19teec_free_temp_refsEP14TEEC_OperationP17TEEC_SharedMemory */
/* Demangled: Common::teec_free_temp_refs(TEEC_Operation*, TEEC_SharedMemory*) */
int _ZN6Common19teec_free_temp_refsEP14TEEC_OperationP17TEEC_SharedMemory(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: TEEC_CloseSession */
/* Demangled: TEEC_CloseSession */
int TEEC_CloseSession(void);

/* Symbol: _ZN6Common24TEEC_ReleaseSharedMemoryEP17TEEC_SharedMemory */
/* Demangled: Common::TEEC_ReleaseSharedMemory(TEEC_SharedMemory*) */
int _ZN6Common24TEEC_ReleaseSharedMemoryEP17TEEC_SharedMemory(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIP12TEEC_SessionS3_EENS_19__map_value_compareIS3_S4_NS_4lessIS3_EELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<TEEC_Session*, TEEC_Session*>, std::__1::__map_value_compare<TEEC_Session*, std::__1::__value_type<TEEC_Session*, TEEC_Session*>, std::__1::less<TEEC_Session*>, true>, std::__1::allocator<std::__1::__value_type<TEEC_Session*, TEEC_Session*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<TEEC_Session*, TEEC_Session*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIP12TEEC_SessionS3_EENS_19__map_value_compareIS3_S4_NS_4lessIS3_EELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBTEECOMMON_H */
