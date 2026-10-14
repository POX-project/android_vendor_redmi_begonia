/*
 * Reverse-Engineered ABI Specification for: libcmdl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libcmdl.so
 */

#ifndef BEGONIA_RE_LIBCMDL_H
#define BEGONIA_RE_LIBCMDL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNK2MK21CCLRetainCommandQueue13GetMemoryUsedEv */
/* Demangled: MK::CCLRetainCommandQueue::GetMemoryUsed() const */
int _ZNK2MK21CCLRetainCommandQueue13GetMemoryUsedEv(void);

/* Symbol: _ZN2MK15CCLSetKernelArgD2Ev */
/* Demangled: MK::CCLSetKernelArg::~CCLSetKernelArg() */
int _ZN2MK15CCLSetKernelArgD2Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_programP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP11_cl_programP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E7destroyEv(void);

/* Symbol: _ZN2MK14COutputTensors7FactoryERNS_7CStreamE */
/* Demangled: MK::COutputTensors::Factory(MK::CStream&) */
int _ZN2MK14COutputTensors7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK8CVersion5MAJORE */
/* Demangled: MK::CVersion::MAJOR */
extern void* _ZN2MK8CVersion5MAJORE;

/* Symbol: _ZN2MK16CCLRetainContext4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLRetainContext::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK16CCLRetainContext4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP10_cl_kerneljmPvPmENS_9allocatorIS7_EES6_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP10_cl_kerneljmPvPmENS_9allocatorIS7_EES6_EE;

/* Symbol: _ZN2MK25CCLCreateKernelsInProgram20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLCreateKernelsInProgram::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK25CCLCreateKernelsInProgram20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK17CCLReleaseProgramC1Ev */
/* Demangled: MK::CCLReleaseProgram::CCLReleaseProgram() */
int _ZN2MK17CCLReleaseProgramC1Ev(void);

/* Symbol: _ZNSt3__16vectorINS_4pairIiN2MK8CPointerINS2_11CStaticDataEEEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::pair<int, MK::CPointer<MK::CStaticData> >, std::__1::allocator<std::__1::pair<int, MK::CPointer<MK::CStaticData> > > >::__push_back_slow_path<std::__1::pair<int, MK::CPointer<MK::CStaticData> > >(std::__1::pair<int, MK::CPointer<MK::CStaticData> >&&) */
int _ZNSt3__16vectorINS_4pairIiN2MK8CPointerINS2_11CStaticDataEEEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: CmdL_AttachclEnqueueMarkerWithWaitList */
/* Demangled: CmdL_AttachclEnqueueMarkerWithWaitList */
int CmdL_AttachclEnqueueMarkerWithWaitList(void);

/* Symbol: _ZN2MK14clGetImageInfoEP7_cl_memjmPvPm */
/* Demangled: MK::clGetImageInfo(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*) */
int _ZN2MK14clGetImageInfoEP7_cl_memjmPvPm(void);

/* Symbol: clReleaseCommandQueue */
/* Demangled: clReleaseCommandQueue */
int clReleaseCommandQueue(void);

/* Symbol: _ZN2MK9CCLFinish20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLFinish::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK9CCLFinish20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZNSt3__16vectorIPN2MK7CObjectENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<MK::CObject*, std::__1::allocator<MK::CObject*> >::__push_back_slow_path<MK::CObject* const&>(MK::CObject* const&) */
int _ZNSt3__16vectorIPN2MK7CObjectENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZN2MK15CCLRetainKernelC2Ev */
/* Demangled: MK::CCLRetainKernel::CCLRetainKernel() */
int _ZN2MK15CCLRetainKernelC2Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvPKmS9_jPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E7__cloneEPNS0_6__baseISF_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvPKmS9_jPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E7__cloneEPNS0_6__baseISF_EE(void);

/* Symbol: clGetKernelArgInfo */
/* Demangled: clGetKernelArgInfo */
int clGetKernelArgInfo(void);

/* Symbol: _ZNSt3__110__function6__funcIPFPvP11_cl_contextmmjENS_9allocatorIS6_EES5_E7destroyEv */
/* Demangled: std::__1::__function::__func<void* (*)(_cl_context*, unsigned long, unsigned long, unsigned int), std::__1::allocator<void* (*)(_cl_context*, unsigned long, unsigned long, unsigned int)>, void* (_cl_context*, unsigned long, unsigned long, unsigned int)>::destroy() */
int _ZNSt3__110__function6__funcIPFPvP11_cl_contextmmjENS_9allocatorIS6_EES5_E7destroyEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFP11_cl_contextPKlmPFvPKcPKvmPvESA_PiENS_9allocatorISF_EESE_EE */
/* Demangled: vtable for std::__1::__function::__func<_cl_context* (*)(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*), std::__1::allocator<_cl_context* (*)(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>, _cl_context* (long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFP11_cl_contextPKlmPFvPKcPKvmPvESA_PiENS_9allocatorISF_EESE_EE;

/* Symbol: _ZN2MK7CStream15InsertInLinkMapEPNS_7CObjectEPv */
/* Demangled: MK::CStream::InsertInLinkMap(MK::CObject*, void*) */
int _ZN2MK7CStream15InsertInLinkMapEPNS_7CObjectEPv(void);

/* Symbol: _ZN2MK20clSetUserEventStatusEP9_cl_eventi */
/* Demangled: MK::clSetUserEventStatus(_cl_event*, int) */
int _ZN2MK20clSetUserEventStatusEP9_cl_eventi(void);

/* Symbol: _ZN2MK17CCLReleaseProgramD0Ev */
/* Demangled: MK::CCLReleaseProgram::~CCLReleaseProgram() */
int _ZN2MK17CCLReleaseProgramD0Ev(void);

/* Symbol: _ZNK2MK16CCLRetainProgram11GetDiskUsedEv */
/* Demangled: MK::CCLRetainProgram::GetDiskUsed() const */
int _ZNK2MK16CCLRetainProgram11GetDiskUsedEv(void);

/* Symbol: _ZN2MK10CCLSVMFree4SaveERNS_7CStreamE */
/* Demangled: MK::CCLSVMFree::Save(MK::CStream&) */
int _ZN2MK10CCLSVMFree4SaveERNS_7CStreamE(void);

/* Symbol: _ZN2MK19CCLProfileKernelJobC2ERKS0_ */
/* Demangled: MK::CCLProfileKernelJob::CCLProfileKernelJob(MK::CCLProfileKernelJob const&) */
int _ZN2MK19CCLProfileKernelJobC2ERKS0_(void);

/* Symbol: MKProgram_AttachCLEnqueueMemoryCopy */
/* Demangled: MKProgram_AttachCLEnqueueMemoryCopy */
int MKProgram_AttachCLEnqueueMemoryCopy(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_SJ_OS7_SK_SK_OjOSB_OSC_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, _cl_mem*&&, unsigned long const*&&, unsigned long const*&&, unsigned long const*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_SJ_OS7_SK_SK_OjOSB_OSC_(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP11_cl_samplerjmPvPmENS_9allocatorIS7_EES6_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP11_cl_samplerjmPvPmENS_9allocatorIS7_EES6_EE;

/* Symbol: _ZN2MK21CCLCreateCommandQueue8ms_kRTTIE */
/* Demangled: MK::CCLCreateCommandQueue::ms_kRTTI */
extern void* _ZN2MK21CCLCreateCommandQueue8ms_kRTTIE;

/* Symbol: CmdL_AttachclEnqueueCopyImageToBuffer */
/* Demangled: CmdL_AttachclEnqueueCopyImageToBuffer */
int CmdL_AttachclEnqueueCopyImageToBuffer(void);

/* Symbol: _ZN2MK20CCLPrepareMemoryCopy15RegisterFactoryEv */
/* Demangled: MK::CCLPrepareMemoryCopy::RegisterFactory() */
int _ZN2MK20CCLPrepareMemoryCopy15RegisterFactoryEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP9_cl_eventiENS_9allocatorIS5_EES4_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, int), std::__1::allocator<int (*)(_cl_event*, int)>, int (_cl_event*, int)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP9_cl_eventiENS_9allocatorIS5_EES4_E7__cloneEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFviPvENS_9allocatorIS4_EES3_E7__cloneEv */
/* Demangled: std::__1::__function::__func<void (*)(int, void*), std::__1::allocator<void (*)(int, void*)>, void (int, void*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFviPvENS_9allocatorIS4_EES3_E7__cloneEv(void);

/* Symbol: _ZN2MK21CCLCreateCommandQueueC2ERKS0_ */
/* Demangled: MK::CCLCreateCommandQueue::CCLCreateCommandQueue(MK::CCLCreateCommandQueue const&) */
int _ZN2MK21CCLCreateCommandQueueC2ERKS0_(void);

/* Symbol: _ZN2MK15CCLRetainKernelC1ERKS0_ */
/* Demangled: MK::CCLRetainKernel::CCLRetainKernel(MK::CCLRetainKernel const&) */
int _ZN2MK15CCLRetainKernelC1ERKS0_(void);

/* Symbol: _ZN2MK15CCLRetainKernelD1Ev */
/* Demangled: MK::CCLRetainKernel::~CCLRetainKernel() */
int _ZN2MK15CCLRetainKernelD1Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPKvjPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPKvjPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E7destroyEv(void);

/* Symbol: _ZN2MK20CCLEnqueueMemoryCopyC1Ev */
/* Demangled: MK::CCLEnqueueMemoryCopy::CCLEnqueueMemoryCopy() */
int _ZN2MK20CCLEnqueueMemoryCopyC1Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcjPKS3_PFvS3_PvESE_PiENS_9allocatorISJ_EESI_EclEOS5_OjOS9_OSB_SO_OSD_OSG_OSE_OSH_ */
/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)>::operator()(_cl_context*&&, unsigned int&&, _cl_device_id* const*&&, char const*&&, unsigned int&&, _cl_program* const*&&, void (*&&)(_cl_program*, void*), void*&&, int*&&) */
int _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcjPKS3_PFvS3_PvESE_PiENS_9allocatorISJ_EESI_EclEOS5_OjOS9_OSB_SO_OSD_OSG_OSE_OSH_(void);

/* Symbol: _ZTVN2MK7CLUtilsE */
/* Demangled: vtable for MK::CLUtils */
extern void* _ZTVN2MK7CLUtilsE;

/* Symbol: _ZNK2MK16CCLRetainContext3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLRetainContext::Log(MK::CJsonLog&) const */
int _ZNK2MK16CCLRetainContext3LogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK11CUpdateBool8ms_kRTTIE */
/* Demangled: MK::CUpdateBool::ms_kRTTI */
extern void* _ZN2MK11CUpdateBool8ms_kRTTIE;

/* Symbol: _ZN2MK7CLUtils19GetOpenCLDeviceInfoERNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES8_NS1_4lessIS8_EENS6_INS1_4pairIKS8_S8_EEEEEE */
/* Demangled: MK::CLUtils::GetOpenCLDeviceInfo(std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >&) */
int _ZN2MK7CLUtils19GetOpenCLDeviceInfoERNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES8_NS1_4lessIS8_EENS6_INS1_4pairIKS8_S8_EEEEEE(void);

/* Symbol: _ZTVN2MK14CCLCreateImageE */
/* Demangled: vtable for MK::CCLCreateImage */
extern void* _ZTVN2MK14CCLCreateImageE;

/* Symbol: _ZN2MK16CCLWaitForEvents20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLWaitForEvents::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK16CCLWaitForEvents20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcPFvS3_PvESA_ENS_9allocatorISE_EESD_EclEOS3_OjOS7_OS9_OSC_OSA_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)>, int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)>::operator()(_cl_program*&&, unsigned int&&, _cl_device_id* const*&&, char const*&&, void (*&&)(_cl_program*, void*), void*&&) */
int _ZNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcPFvS3_PvESA_ENS_9allocatorISE_EESD_EclEOS3_OjOS7_OS9_OSC_OSA_(void);

/* Symbol: _ZNSt3__112__deque_baseIN2MK8CPointerINS1_4CJobEEENS_9allocatorIS4_EEE5clearEv */
/* Demangled: std::__1::__deque_base<MK::CPointer<MK::CJob>, std::__1::allocator<MK::CPointer<MK::CJob> > >::clear() */
int _ZNSt3__112__deque_baseIN2MK8CPointerINS1_4CJobEEENS_9allocatorIS4_EEE5clearEv(void);

/* Symbol: _ZN2MK21CCLCreateCommandQueue7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLCreateCommandQueue::Factory(MK::CStream&) */
int _ZN2MK21CCLCreateCommandQueue7FactoryERNS_7CStreamE(void);

/* Symbol: _ZNK2MK21CCLEnqueueWriteBuffer13GetMemoryUsedEv */
/* Demangled: MK::CCLEnqueueWriteBuffer::GetMemoryUsed() const */
int _ZNK2MK21CCLEnqueueWriteBuffer13GetMemoryUsedEv(void);

/* Symbol: _ZN2MK9CCLFinish3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLFinish::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK9CCLFinish3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZN2MK20CCLEnqueueMemoryCopyD0Ev */
/* Demangled: MK::CCLEnqueueMemoryCopy::~CCLEnqueueMemoryCopy() */
int _ZN2MK20CCLEnqueueMemoryCopyD0Ev(void);

/* Symbol: _ZN2MK15clRetainContextEP11_cl_context */
/* Demangled: MK::clRetainContext(_cl_context*) */
int _ZN2MK15clRetainContextEP11_cl_context(void);

/* Symbol: clSVMFree */
/* Demangled: clSVMFree */
int clSVMFree(void);

/* Symbol: _ZN2MK19CCLReleaseMemObjectC2ERKS0_ */
/* Demangled: MK::CCLReleaseMemObject::CCLReleaseMemObject(MK::CCLReleaseMemObject const&) */
int _ZN2MK19CCLReleaseMemObjectC2ERKS0_(void);

/* Symbol: _ZN2MK16CCLEnqueueSVMMapC2ERKS0_ */
/* Demangled: MK::CCLEnqueueSVMMap::CCLEnqueueSVMMap(MK::CCLEnqueueSVMMap const&) */
int _ZN2MK16CCLEnqueueSVMMapC2ERKS0_(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP9_cl_eventjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_event*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_event*, unsigned int, unsigned long, void*, unsigned long*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP9_cl_eventjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP9_cl_eventENS_9allocatorIS5_EES4_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_event*), std::__1::allocator<int (*)(_cl_event*)>, int (_cl_event*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP9_cl_eventENS_9allocatorIS5_EES4_E7destroyEv(void);

/* Symbol: _ZNK2MK11CMemoryCopy3LogERNS_8CJsonLogE */
/* Demangled: MK::CMemoryCopy::Log(MK::CJsonLog&) const */
int _ZNK2MK11CMemoryCopy3LogERNS_8CJsonLogE(void);

/* Symbol: _ZNSt3__114__split_bufferIPN2MK8CPointerINS1_8CProgramEEERNS_9allocatorIS5_EEE10push_frontERKS5_ */
/* Demangled: std::__1::__split_buffer<MK::CPointer<MK::CProgram>*, std::__1::allocator<MK::CPointer<MK::CProgram>*>&>::push_front(MK::CPointer<MK::CProgram>* const&) */
int _ZNSt3__114__split_bufferIPN2MK8CPointerINS1_8CProgramEEERNS_9allocatorIS5_EEE10push_frontERKS5_(void);

/* Symbol: _ZN2MK23CCLEnqueueNDRangeKernel8ms_kRTTIE */
/* Demangled: MK::CCLEnqueueNDRangeKernel::ms_kRTTI */
extern void* _ZN2MK23CCLEnqueueNDRangeKernel8ms_kRTTIE;

/* Symbol: _ZNK2MK9CCLFinish3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLFinish::Log(MK::CJsonLog&) const */
int _ZNK2MK9CCLFinish3LogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK8CCLFlush4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLFlush::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK8CCLFlush4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK16CCLEnqueueSVMMap4SaveERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueSVMMap::Save(MK::CStream&) */
int _ZN2MK16CCLEnqueueSVMMap4SaveERNS_7CStreamE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP11_cl_contextPKlmPFvPKcPKvmPvESA_PiENS_9allocatorISF_EESE_E7__cloneEv */
/* Demangled: std::__1::__function::__func<_cl_context* (*)(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*), std::__1::allocator<_cl_context* (*)(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>, _cl_context* (long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFP11_cl_contextPKlmPFvPKcPKvmPvESA_PiENS_9allocatorISF_EESE_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP10_cl_kerneljmPKvENS_9allocatorIS7_EES6_EclEOS3_OjOmOS5_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned long, void const*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned long, void const*)>, int (_cl_kernel*, unsigned int, unsigned long, void const*)>::operator()(_cl_kernel*&&, unsigned int&&, unsigned long&&, void const*&&) */
int _ZNSt3__110__function6__funcIPFiP10_cl_kerneljmPKvENS_9allocatorIS7_EES6_EclEOS3_OjOmOS5_(void);

/* Symbol: _ZN2MK15CCLCreateBufferC1Ev */
/* Demangled: MK::CCLCreateBuffer::CCLCreateBuffer() */
int _ZN2MK15CCLCreateBufferC1Ev(void);

/* Symbol: _ZN2MK14CCLCreateImage4SaveERNS_7CStreamE */
/* Demangled: MK::CCLCreateImage::Save(MK::CStream&) */
int _ZN2MK14CCLCreateImage4SaveERNS_7CStreamE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_programENS_9allocatorIS5_EES4_EclEOS3_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*), std::__1::allocator<int (*)(_cl_program*)>, int (_cl_program*)>::operator()(_cl_program*&&) */
int _ZNSt3__110__function6__funcIPFiP11_cl_programENS_9allocatorIS5_EES4_EclEOS3_(void);

/* Symbol: _ZN2MK28CCLEnqueueMarkerWithWaitList6RecordEP17_cl_command_queuejPKP9_cl_eventS4_ */
/* Demangled: MK::CCLEnqueueMarkerWithWaitList::Record(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event*) */
int _ZN2MK28CCLEnqueueMarkerWithWaitList6RecordEP17_cl_command_queuejPKP9_cl_eventS4_(void);

/* Symbol: _ZN2MK16CCLEnqueueSVMMap7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueSVMMap::Factory(MK::CStream&) */
int _ZN2MK16CCLEnqueueSVMMap7FactoryERNS_7CStreamE(void);

/* Symbol: _ZNSt3__110__function6__funcINS_8functionIFimPvEEENS_9allocatorIS5_EEFijS3_EE7destroyEv */
/* Demangled: std::__1::__function::__func<std::__1::function<int (unsigned long, void*)>, std::__1::allocator<std::__1::function<int (unsigned long, void*)> >, int (unsigned int, void*)>::destroy() */
int _ZNSt3__110__function6__funcINS_8functionIFimPvEEENS_9allocatorIS5_EEFijS3_EE7destroyEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_programENS_9allocatorIS5_EES4_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*), std::__1::allocator<int (*)(_cl_program*)>, int (_cl_program*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP11_cl_programENS_9allocatorIS5_EES4_E7destroyEv(void);

/* Symbol: _ZN2MK8CProgramC1ERKS0_ */
/* Demangled: MK::CProgram::CProgram(MK::CProgram const&) */
int _ZN2MK8CProgramC1ERKS0_(void);

/* Symbol: _ZN2MK16CRegisterFactoryC2Ev */
/* Demangled: MK::CRegisterFactory::CRegisterFactory() */
int _ZN2MK16CRegisterFactoryC2Ev(void);

/* Symbol: _ZN2MK14CCLRetainEvent6RecordEP9_cl_event */
/* Demangled: MK::CCLRetainEvent::Record(_cl_event*) */
int _ZN2MK14CCLRetainEvent6RecordEP9_cl_event(void);

/* Symbol: _ZNSt3__16vectorIP13_cl_device_idNS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
/* Demangled: _ZNSt3__16vectorIP13_cl_device_idNS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
int _ZNSt3__16vectorIP13_cl_device_idNS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP11_cl_contextjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_context*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_context*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_context*, unsigned int, unsigned long, void*, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_context*, unsigned int, unsigned long, void*, unsigned long*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP11_cl_contextjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void);

/* Symbol: _ZN2MK13CDummyCommand8ms_kRTTIE */
/* Demangled: MK::CDummyCommand::ms_kRTTI */
extern void* _ZN2MK13CDummyCommand8ms_kRTTIE;

/* Symbol: _ZNK2MK13CDummyCommand13GetMemoryUsedEv */
/* Demangled: MK::CDummyCommand::GetMemoryUsed() const */
int _ZNK2MK13CDummyCommand13GetMemoryUsedEv(void);

/* Symbol: _ZN2MK15CCLCreateBufferD0Ev */
/* Demangled: MK::CCLCreateBuffer::~CCLCreateBuffer() */
int _ZN2MK15CCLCreateBufferD0Ev(void);

/* Symbol: _ZN2MK15CCLBuildProgram7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLBuildProgram::Factory(MK::CStream&) */
int _ZN2MK15CCLBuildProgram7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK13CCLProfileJobC1EPKcP9_cl_event */
/* Demangled: MK::CCLProfileJob::CCLProfileJob(char const*, _cl_event*) */
int _ZN2MK13CCLProfileJobC1EPKcP9_cl_event(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmPvPiENS_9allocatorISC_EESB_E7__cloneEv */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmPvPiENS_9allocatorISC_EESB_E7__cloneEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmmmPvPiENS_9allocatorISC_EESB_E7__cloneEPNS0_6__baseISB_EE */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)>::__clone(std::__1::__function::__base<_cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)>*) const */
int _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmmmPvPiENS_9allocatorISC_EESB_E7__cloneEPNS0_6__baseISB_EE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP9_cl_eventP11_cl_contextPiENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE */
/* Demangled: std::__1::__function::__func<_cl_event* (*)(_cl_context*, int*), std::__1::allocator<_cl_event* (*)(_cl_context*, int*)>, _cl_event* (_cl_context*, int*)>::__clone(std::__1::__function::__base<_cl_event* (_cl_context*, int*)>*) const */
int _ZNKSt3__110__function6__funcIPFP9_cl_eventP11_cl_contextPiENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPiENS_9allocatorISF_EESE_EE */
/* Demangled: vtable for std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPiENS_9allocatorISF_EESE_EE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EElEERPNS_15__tree_end_nodeISJ_EESK_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EElEERPNS_15__tree_end_nodeISJ_EESK_RKT_(void);

/* Symbol: _ZN2MK19CCLReleaseMemObjectC1Ev */
/* Demangled: MK::CCLReleaseMemObject::CCLReleaseMemObject() */
int _ZN2MK19CCLReleaseMemObjectC1Ev(void);

/* Symbol: _ZNK2MK26CCLCreateProgramWithBinary3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLCreateProgramWithBinary::Log(MK::CJsonLog&) const */
int _ZNK2MK26CCLCreateProgramWithBinary3LogERNS_8CJsonLogE(void);

/* Symbol: _ZTVN2MK16CCLEnqueueMarkerE */
/* Demangled: vtable for MK::CCLEnqueueMarker */
extern void* _ZTVN2MK16CCLEnqueueMarkerE;

/* Symbol: _ZN2MK14CContextGlobal19GetKernelMemObjectsEP10_cl_kernelRNSt3__16vectorIP7_cl_memNS3_9allocatorIS6_EEEE */
/* Demangled: MK::CContextGlobal::GetKernelMemObjects(_cl_kernel*, std::__1::vector<_cl_mem*, std::__1::allocator<_cl_mem*> >&) */
int _ZN2MK14CContextGlobal19GetKernelMemObjectsEP10_cl_kernelRNSt3__16vectorIP7_cl_memNS3_9allocatorIS6_EEEE(void);

/* Symbol: MKProgram_AttachCLRetainKernel */
/* Demangled: MKProgram_AttachCLRetainKernel */
int MKProgram_AttachCLRetainKernel(void);

/* Symbol: _ZNSt3__110__function6__funcIPFijPP15_cl_platform_idPjENS_9allocatorIS7_EES6_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(unsigned int, _cl_platform_id**, unsigned int*), std::__1::allocator<int (*)(unsigned int, _cl_platform_id**, unsigned int*)>, int (unsigned int, _cl_platform_id**, unsigned int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFijPP15_cl_platform_idPjENS_9allocatorIS7_EES6_E7destroyEv(void);

/* Symbol: _ZN2MK13CInputTensors4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CInputTensors::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK13CInputTensors4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK11CMemoryCopy4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CMemoryCopy::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK11CMemoryCopy4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK8CProgram3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CProgram::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK8CProgram3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZN2MK14CCLCreateImage4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLCreateImage::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK14CCLCreateImage4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK21CCLEnqueueWriteBufferC2ERKS0_ */
/* Demangled: MK::CCLEnqueueWriteBuffer::CCLEnqueueWriteBuffer(MK::CCLEnqueueWriteBuffer const&) */
int _ZN2MK21CCLEnqueueWriteBufferC2ERKS0_(void);

/* Symbol: _ZNK2MK10CCLSVMFree11GetDiskUsedEv */
/* Demangled: MK::CCLSVMFree::GetDiskUsed() const */
int _ZNK2MK10CCLSVMFree11GetDiskUsedEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_mmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_mmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK13CDummyCommand7FactoryERNS_7CStreamE */
/* Demangled: MK::CDummyCommand::Factory(MK::CStream&) */
int _ZN2MK13CDummyCommand7FactoryERNS_7CStreamE(void);

/* Symbol: clGetDeviceIDs */
/* Demangled: clGetDeviceIDs */
int clGetDeviceIDs(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP7_cl_memjmPvPmENS_9allocatorIS7_EES6_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP7_cl_memjmPvPmENS_9allocatorIS7_EES6_EE;

/* Symbol: CmdL_AttachclCreateImage */
/* Demangled: CmdL_AttachclCreateImage */
int CmdL_AttachclCreateImage(void);

/* Symbol: _ZN2MK28CCLEnqueueMarkerWithWaitListC2Ev */
/* Demangled: MK::CCLEnqueueMarkerWithWaitList::CCLEnqueueMarkerWithWaitList() */
int _ZN2MK28CCLEnqueueMarkerWithWaitListC2Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP10_cl_kerneljmPvPmENS_9allocatorIS7_EES6_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP10_cl_kerneljmPvPmENS_9allocatorIS7_EES6_E7destroyEv(void);

/* Symbol: _ZN2MK11CMemoryCopy8ms_kRTTIE */
/* Demangled: MK::CMemoryCopy::ms_kRTTI */
extern void* _ZN2MK11CMemoryCopy8ms_kRTTIE;

/* Symbol: CmdL_AttachclEnqueueSVMMemFill */
/* Demangled: CmdL_AttachclEnqueueSVMMemFill */
int CmdL_AttachclEnqueueSVMMemFill(void);

/* Symbol: _ZN2MK19CCLReleaseMemObjectD0Ev */
/* Demangled: MK::CCLReleaseMemObject::~CCLReleaseMemObject() */
int _ZN2MK19CCLReleaseMemObjectD0Ev(void);

/* Symbol: CmdL_AttachclEnqueueWriteBuffer */
/* Demangled: CmdL_AttachclEnqueueWriteBuffer */
int CmdL_AttachclEnqueueWriteBuffer(void);

/* Symbol: clCreateKernel */
/* Demangled: clCreateKernel */
int clCreateKernel(void);

/* Symbol: _ZNK2MK26CCLCreateProgramWithSource13GetMemoryUsedEv */
/* Demangled: MK::CCLCreateProgramWithSource::GetMemoryUsed() const */
int _ZNK2MK26CCLCreateProgramWithSource13GetMemoryUsedEv(void);

/* Symbol: _ZN2MK15CCLSetKernelArgC2Ev */
/* Demangled: MK::CCLSetKernelArg::CCLSetKernelArg() */
int _ZN2MK15CCLSetKernelArgC2Ev(void);

/* Symbol: _ZNK2MK15CCLSetKernelArg11GetDiskUsedEv */
/* Demangled: MK::CCLSetKernelArg::GetDiskUsed() const */
int _ZNK2MK15CCLSetKernelArg11GetDiskUsedEv(void);

/* Symbol: MKProgram_AttachStaticData */
/* Demangled: MKProgram_AttachStaticData */
int MKProgram_AttachStaticData(void);

/* Symbol: _ZN2MK19CCLReleaseMemObject6RecordEP7_cl_mem */
/* Demangled: MK::CCLReleaseMemObject::Record(_cl_mem*) */
int _ZN2MK19CCLReleaseMemObject6RecordEP7_cl_mem(void);

/* Symbol: _ZN2MK16CCLReleaseKernel4SaveERNS_7CStreamE */
/* Demangled: MK::CCLReleaseKernel::Save(MK::CStream&) */
int _ZN2MK16CCLReleaseKernel4SaveERNS_7CStreamE(void);

/* Symbol: _ZN2MK17CCLReleaseProgram4SaveERNS_7CStreamE */
/* Demangled: MK::CCLReleaseProgram::Save(MK::CStream&) */
int _ZN2MK17CCLReleaseProgram4SaveERNS_7CStreamE(void);

/* Symbol: _ZN2MK21CCLRetainCommandQueue8ms_kRTTIE */
/* Demangled: MK::CCLRetainCommandQueue::ms_kRTTI */
extern void* _ZN2MK21CCLRetainCommandQueue8ms_kRTTIE;

/* Symbol: MKStream_Create */
/* Demangled: MKStream_Create */
int MKStream_Create(void);

/* Symbol: clGetPlatformIDs */
/* Demangled: clGetPlatformIDs */
int clGetPlatformIDs(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIP10_cl_kernelNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS_19__map_value_compareIS3_SA_NS_4lessIS3_EELb1EEENS7_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<_cl_kernel*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<_cl_kernel*, std::__1::__value_type<_cl_kernel*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<_cl_kernel*>, true>, std::__1::allocator<std::__1::__value_type<_cl_kernel*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<_cl_kernel*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIP10_cl_kernelNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS_19__map_value_compareIS3_SA_NS_4lessIS3_EELb1EEENS7_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void);

/* Symbol: _ZN2MK28CCLEnqueueMarkerWithWaitListD1Ev */
/* Demangled: MK::CCLEnqueueMarkerWithWaitList::~CCLEnqueueMarkerWithWaitList() */
int _ZN2MK28CCLEnqueueMarkerWithWaitListD1Ev(void);

/* Symbol: _ZNK2MK20CCLEnqueueMemoryCopy3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLEnqueueMemoryCopy::Log(MK::CJsonLog&) const */
int _ZNK2MK20CCLEnqueueMemoryCopy3LogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK18CCLRetainMemObject20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLRetainMemObject::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK18CCLRetainMemObject20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: MKProgram_AttachCLReleaseProgram */
/* Demangled: MKProgram_AttachCLReleaseProgram */
int MKProgram_AttachCLReleaseProgram(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP10_cl_kerneljmPKvENS_9allocatorIS7_EES6_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned long, void const*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned long, void const*)>, int (_cl_kernel*, unsigned int, unsigned long, void const*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP10_cl_kerneljmPKvENS_9allocatorIS7_EES6_E7__cloneEv(void);

/* Symbol: clEnqueueMapBuffer */
/* Demangled: clEnqueueMapBuffer */
int clEnqueueMapBuffer(void);

/* Symbol: _ZNK2MK18CCLEnqueueSVMUnmap13GetMemoryUsedEv */
/* Demangled: MK::CCLEnqueueSVMUnmap::GetMemoryUsed() const */
int _ZNK2MK18CCLEnqueueSVMUnmap13GetMemoryUsedEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv(void);

/* Symbol: _ZN2MK7CObject7FactoryERNS_7CStreamE */
/* Demangled: MK::CObject::Factory(MK::CStream&) */
int _ZN2MK7CObject7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK15CCLSetKernelArgD1Ev */
/* Demangled: MK::CCLSetKernelArg::~CCLSetKernelArg() */
int _ZN2MK15CCLSetKernelArgD1Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP11_cl_samplerjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP11_cl_samplerjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEPNS0_6__baseISC_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEPNS0_6__baseISC_EE(void);

/* Symbol: _ZN2MK18clCreateSubDevicesEP13_cl_device_idPKljPS1_Pj */
/* Demangled: MK::clCreateSubDevices(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*) */
int _ZN2MK18clCreateSubDevicesEP13_cl_device_idPKljPS1_Pj(void);

/* Symbol: _ZN2MK18clGetKernelArgInfoEP10_cl_kerneljjmPvPm */
/* Demangled: MK::clGetKernelArgInfo(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*) */
int _ZN2MK18clGetKernelArgInfoEP10_cl_kerneljjmPvPm(void);

/* Symbol: _ZNK2MK26CCLCreateProgramWithBinary13GetMemoryUsedEv */
/* Demangled: MK::CCLCreateProgramWithBinary::GetMemoryUsed() const */
int _ZNK2MK26CCLCreateProgramWithBinary13GetMemoryUsedEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextPKmPiENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE */
/* Demangled: std::__1::__function::__func<_cl_sampler* (*)(_cl_context*, unsigned long const*, int*), std::__1::allocator<_cl_sampler* (*)(_cl_context*, unsigned long const*, int*)>, _cl_sampler* (_cl_context*, unsigned long const*, int*)>::__clone(std::__1::__function::__base<_cl_sampler* (_cl_context*, unsigned long const*, int*)>*) const */
int _ZNKSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextPKmPiENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePP9_cl_eventENS_9allocatorIS8_EES7_EclEOS3_OS6_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_event**)>, int (_cl_command_queue*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_event**&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePP9_cl_eventENS_9allocatorIS8_EES7_EclEOS3_OS6_(void);

/* Symbol: _ZN2MK20CCLPrepareMemoryCopy4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLPrepareMemoryCopy::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK20CCLPrepareMemoryCopy4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZTVN2MK15CCLSetKernelArgE */
/* Demangled: vtable for MK::CCLSetKernelArg */
extern void* _ZTVN2MK15CCLSetKernelArgE;

/* Symbol: _ZNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmPKmS8_PmS9_jPKP9_cl_eventPSB_PiENS_9allocatorISH_EESG_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*), std::__1::allocator<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)>, void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmPKmS8_PmS9_jPKP9_cl_eventPSB_PiENS_9allocatorISH_EESG_E18destroy_deallocateEv(void);

/* Symbol: MKDebug_SetLevel */
/* Demangled: MKDebug_SetLevel */
int MKDebug_SetLevel(void);

/* Symbol: _ZN2MK18CCLEnqueueSVMUnmap4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLEnqueueSVMUnmap::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK18CCLEnqueueSVMUnmap4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNSt3__16vectorIP9_cl_eventNS_9allocatorIS2_EEE6assignIPKS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
/* Demangled: _ZNSt3__16vectorIP9_cl_eventNS_9allocatorIS2_EEE6assignIPKS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
int _ZNSt3__16vectorIP9_cl_eventNS_9allocatorIS2_EEE6assignIPKS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void);

/* Symbol: _ZN2MK16CCLRetainContext4SaveERNS_7CStreamE */
/* Demangled: MK::CCLRetainContext::Save(MK::CStream&) */
int _ZN2MK16CCLRetainContext4SaveERNS_7CStreamE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_programP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_EclEOS3_OS5_OjOmOS6_OS7_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::operator()(_cl_program*&&, _cl_device_id*&&, unsigned int&&, unsigned long&&, void*&&, unsigned long*&&) */
int _ZNSt3__110__function6__funcIPFiP11_cl_programP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_EclEOS3_OS5_OjOmOS6_OS7_(void);

/* Symbol: _ZN2MK7CStream17ReadDynamicStringERPc */
/* Demangled: MK::CStream::ReadDynamicString(char*&) */
int _ZN2MK7CStream17ReadDynamicStringERPc(void);

/* Symbol: _ZN2MK15CCLRetainKernelC1Ev */
/* Demangled: MK::CCLRetainKernel::CCLRetainKernel() */
int _ZN2MK15CCLRetainKernelC1Ev(void);

/* Symbol: _ZNK2MK16CCLCreateContext3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLCreateContext::Log(MK::CJsonLog&) const */
int _ZNK2MK16CCLCreateContext3LogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK24CCLEnqueueUnmapMemObject15RegisterFactoryEv */
/* Demangled: MK::CCLEnqueueUnmapMemObject::RegisterFactory() */
int _ZN2MK24CCLEnqueueUnmapMemObject15RegisterFactoryEv(void);

/* Symbol: _ZN2MK8CCLFlush3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLFlush::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK8CCLFlush3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: MKProgram_AttachCLSetKernelArg */
/* Demangled: MKProgram_AttachCLSetKernelArg */
int MKProgram_AttachCLSetKernelArg(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS8_PiENS_9allocatorISE_EESD_E7destroyEv */
/* Demangled: std::__1::__function::__func<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*), std::__1::allocator<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)>, void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS8_PiENS_9allocatorISE_EESD_E7destroyEv(void);

/* Symbol: CmdL_AttachclSetKernelExecInfo */
/* Demangled: CmdL_AttachclSetKernelExecInfo */
int CmdL_AttachclSetKernelExecInfo(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE8__appendEm */
/* Demangled: std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__append(unsigned long) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE8__appendEm(void);

/* Symbol: _ZN2MK21CCLCreateCommandQueue3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLCreateCommandQueue::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK21CCLCreateCommandQueue3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZN2MK27CCLEnqueueCopyBufferToImage6RecordEP17_cl_command_queueP7_cl_memS4_mPKmS6_jPKP9_cl_eventS8_ */
/* Demangled: MK::CCLEnqueueCopyBufferToImage::Record(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event*) */
int _ZN2MK27CCLEnqueueCopyBufferToImage6RecordEP17_cl_command_queueP7_cl_memS4_mPKmS6_jPKP9_cl_eventS8_(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithBinary8ms_kRTTIE */
/* Demangled: MK::CCLCreateProgramWithBinary::ms_kRTTI */
extern void* _ZN2MK26CCLCreateProgramWithBinary8ms_kRTTIE;

/* Symbol: _ZN2MK16CCLReleaseKernelC1ERKS0_ */
/* Demangled: MK::CCLReleaseKernel::CCLReleaseKernel(MK::CCLReleaseKernel const&) */
int _ZN2MK16CCLReleaseKernelC1ERKS0_(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvPmENS_9allocatorIS7_EES6_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvPmENS_9allocatorIS7_EES6_EE;

/* Symbol: _ZTVNSt3__110__function6__funcIPFivENS_9allocatorIS3_EES2_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(), std::__1::allocator<int (*)()>, int ()> */
extern void* _ZTVNSt3__110__function6__funcIPFivENS_9allocatorIS3_EES2_EE;

/* Symbol: _ZNKSt3__110__function6__funcIPFiP11_cl_contextjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_context*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_context*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_context*, unsigned int, unsigned long, void*, unsigned long*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP11_cl_contextjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv(void);

/* Symbol: _ZN2MK15CCLCreateBuffer20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLCreateBuffer::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK15CCLCreateBuffer20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK16CCLCreateContext7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLCreateContext::Factory(MK::CStream&) */
int _ZN2MK16CCLCreateContext7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK15CCLRetainKernelD0Ev */
/* Demangled: MK::CCLRetainKernel::~CCLRetainKernel() */
int _ZN2MK15CCLRetainKernelD0Ev(void);

/* Symbol: _Z30handleEnqueueNDRangeKernelNULLP10_cl_kernelj */
/* Demangled: handleEnqueueNDRangeKernelNULL(_cl_kernel*, unsigned int) */
int _Z30handleEnqueueNDRangeKernelNULLP10_cl_kernelj(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP15_cl_platform_idENS_9allocatorIS5_EES4_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_platform_id*), std::__1::allocator<int (*)(_cl_platform_id*)>, int (_cl_platform_id*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP15_cl_platform_idENS_9allocatorIS5_EES4_EE;

/* Symbol: _ZTVN2MK16CCLEnqueueSVMMapE */
/* Demangled: vtable for MK::CCLEnqueueSVMMap */
extern void* _ZTVN2MK16CCLEnqueueSVMMapE;

/* Symbol: _ZN2MK8CProgram4SaveERNS_7CStreamE */
/* Demangled: MK::CProgram::Save(MK::CStream&) */
int _ZN2MK8CProgram4SaveERNS_7CStreamE(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__append(unsigned long) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm(void);

/* Symbol: _ZNK2MK16CCLWaitForEvents15CopyConstructToEv */
/* Demangled: MK::CCLWaitForEvents::CopyConstructTo() const */
int _ZNK2MK16CCLWaitForEvents15CopyConstructToEv(void);

/* Symbol: _ZNK2MK7CObject3LogERNS_8CJsonLogE */
/* Demangled: MK::CObject::Log(MK::CJsonLog&) const */
int _ZNK2MK7CObject3LogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK19CCLReleaseMemObject3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLReleaseMemObject::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK19CCLReleaseMemObject3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _Z16clSaveKernelNameP10_cl_kernelPKc */
/* Demangled: clSaveKernelName(_cl_kernel*, char const*) */
int _Z16clSaveKernelNameP10_cl_kernelPKc(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_mmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_SJ_OS7_SK_SK_OmSL_SL_SL_OjOSB_OSC_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, _cl_mem*&&, unsigned long const*&&, unsigned long const*&&, unsigned long const*&&, unsigned long&&, unsigned long&&, unsigned long&&, unsigned long&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_mmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_SJ_OS7_SK_SK_OmSL_SL_SL_OjOSB_OSC_(void);

/* Symbol: MKConfig_StartProfileCL */
/* Demangled: MKConfig_StartProfileCL */
int MKConfig_StartProfileCL(void);

/* Symbol: CmdL_AttachclCreateSamplerWithProperties */
/* Demangled: CmdL_AttachclCreateSamplerWithProperties */
int CmdL_AttachclCreateSamplerWithProperties(void);

/* Symbol: _ZN2MK10CCLCommandD2Ev */
/* Demangled: MK::CCLCommand::~CCLCommand() */
int _ZN2MK10CCLCommandD2Ev(void);

/* Symbol: _ZN2MK15CCLBuildProgram4SaveERNS_7CStreamE */
/* Demangled: MK::CCLBuildProgram::Save(MK::CStream&) */
int _ZN2MK15CCLBuildProgram4SaveERNS_7CStreamE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP7_cl_memS3_mjPKvPiENS_9allocatorIS8_EES7_EclEOS3_OmOjOS5_OS6_ */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_mem*, unsigned long, unsigned int, void const*, int*), std::__1::allocator<_cl_mem* (*)(_cl_mem*, unsigned long, unsigned int, void const*, int*)>, _cl_mem* (_cl_mem*, unsigned long, unsigned int, void const*, int*)>::operator()(_cl_mem*&&, unsigned long&&, unsigned int&&, void const*&&, int*&&) */
int _ZNSt3__110__function6__funcIPFP7_cl_memS3_mjPKvPiENS_9allocatorIS8_EES7_EclEOS3_OmOjOS5_OS6_(void);

/* Symbol: _ZN2MK8CProgram4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CProgram::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK8CProgram4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK18clEnqueueSVMMemcpyEP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS6_ */
/* Demangled: MK::clEnqueueSVMMemcpy(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK18clEnqueueSVMMemcpyEP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS6_(void);

/* Symbol: _ZN2MK21CCLEnqueueWriteBuffer4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLEnqueueWriteBuffer::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK21CCLEnqueueWriteBuffer4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK21CCLEnqueueWriteBuffer7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueWriteBuffer::Factory(MK::CStream&) */
int _ZN2MK21CCLEnqueueWriteBuffer7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK18CCLEnqueueSVMUnmap7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueSVMUnmap::Factory(MK::CStream&) */
int _ZN2MK18CCLEnqueueSVMUnmap7FactoryERNS_7CStreamE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP9_cl_eventP11_cl_contextPiENS_9allocatorIS8_EES7_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<_cl_event* (*)(_cl_context*, int*), std::__1::allocator<_cl_event* (*)(_cl_context*, int*)>, _cl_event* (_cl_context*, int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFP9_cl_eventP11_cl_contextPiENS_9allocatorIS8_EES7_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK8CVersionC2Eii */
/* Demangled: MK::CVersion::CVersion(int, int) */
int _ZN2MK8CVersionC2Eii(void);

/* Symbol: CmdL_SaveToBuffer */
/* Demangled: CmdL_SaveToBuffer */
int CmdL_SaveToBuffer(void);

/* Symbol: _ZN2MK20CCLEnqueueReadBuffer8ms_kRTTIE */
/* Demangled: MK::CCLEnqueueReadBuffer::ms_kRTTI */
extern void* _ZN2MK20CCLEnqueueReadBuffer8ms_kRTTIE;

/* Symbol: MKProgram_AttachCLImportMemory */
/* Demangled: MKProgram_AttachCLImportMemory */
int MKProgram_AttachCLImportMemory(void);

/* Symbol: _ZNK2MK11CStaticData3LogERNS_8CJsonLogE */
/* Demangled: MK::CStaticData::Log(MK::CJsonLog&) const */
int _ZNK2MK11CStaticData3LogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK4CLog4SaveEPKc */
/* Demangled: MK::CLog::Save(char const*) */
int _ZN2MK4CLog4SaveEPKc(void);

/* Symbol: _ZN2MK25CCLCreateKernelsInProgram3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLCreateKernelsInProgram::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK25CCLCreateKernelsInProgram3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZN2MK9CCLFinishD2Ev */
/* Demangled: MK::CCLFinish::~CCLFinish() */
int _ZN2MK9CCLFinishD2Ev(void);

/* Symbol: _ZN2MK16CCLReleaseKernel8ms_kRTTIE */
/* Demangled: MK::CCLReleaseKernel::ms_kRTTI */
extern void* _ZN2MK16CCLReleaseKernel8ms_kRTTIE;

/* Symbol: _ZNK2MK11CCLSVMAlloc13GetMemoryUsedEv */
/* Demangled: MK::CCLSVMAlloc::GetMemoryUsed() const */
int _ZNK2MK11CCLSVMAlloc13GetMemoryUsedEv(void);

/* Symbol: _ZNK2MK13CInputTensors11GetDiskUsedEv */
/* Demangled: MK::CInputTensors::GetDiskUsed() const */
int _ZNK2MK13CInputTensors11GetDiskUsedEv(void);

/* Symbol: CmdL_SetHostPtr */
/* Demangled: CmdL_SetHostPtr */
int CmdL_SetHostPtr(void);

/* Symbol: CmdL_AttachclCreatePipe */
/* Demangled: CmdL_AttachclCreatePipe */
int CmdL_AttachclCreatePipe(void);

/* Symbol: _ZN2MK13clLinkProgramEP11_cl_contextjPKP13_cl_device_idPKcjPKP11_cl_programPFvS9_PvESC_Pi */
/* Demangled: MK::clLinkProgram(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*) */
int _ZN2MK13clLinkProgramEP11_cl_contextjPKP13_cl_device_idPKcjPKP11_cl_programPFvS9_PvESC_Pi(void);

/* Symbol: _ZNK2MK25CCLCreateKernelsInProgram11GetDiskUsedEv */
/* Demangled: MK::CCLCreateKernelsInProgram::GetDiskUsed() const */
int _ZNK2MK25CCLCreateKernelsInProgram11GetDiskUsedEv(void);

/* Symbol: _ZNSt3__16vectorIPKcNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<char const*, std::__1::allocator<char const*> >::__push_back_slow_path<char const*>(char const*&&) */
int _ZNSt3__16vectorIPKcNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP11_cl_contextPKljPKP13_cl_device_idPFvPKcPKvmPvESE_PiENS_9allocatorISJ_EESI_EclEOS5_OjOS9_OSG_OSE_OSH_ */
/* Demangled: std::__1::__function::__func<_cl_context* (*)(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*), std::__1::allocator<_cl_context* (*)(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>, _cl_context* (long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>::operator()(long const*&&, unsigned int&&, _cl_device_id* const*&&, void (*&&)(char const*, void const*, unsigned long, void*), void*&&, int*&&) */
int _ZNSt3__110__function6__funcIPFP11_cl_contextPKljPKP13_cl_device_idPFvPKcPKvmPvESE_PiENS_9allocatorISJ_EESI_EclEOS5_OjOS9_OSG_OSE_OSH_(void);

/* Symbol: _ZTVN2MK4CLogE */
/* Demangled: vtable for MK::CLog */
extern void* _ZTVN2MK4CLogE;

/* Symbol: _ZTVN2MK23CCLEnqueueNDRangeKernelE */
/* Demangled: vtable for MK::CCLEnqueueNDRangeKernel */
extern void* _ZTVN2MK23CCLEnqueueNDRangeKernelE;

/* Symbol: _ZN2MK11CCLSVMAlloc20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLSVMAlloc::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK11CCLSVMAlloc20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E7destroyEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePvjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_EclEOS3_OS4_OjOS8_OS9_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, void*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePvjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_EclEOS3_OS4_OjOS8_OS9_(void);

/* Symbol: _ZN2MK14COutputTensors4SaveERNS_7CStreamE */
/* Demangled: MK::COutputTensors::Save(MK::CStream&) */
int _ZN2MK14COutputTensors4SaveERNS_7CStreamE(void);

/* Symbol: _ZN2MK16CRegisterFactoryC1Ev */
/* Demangled: MK::CRegisterFactory::CRegisterFactory() */
int _ZN2MK16CRegisterFactoryC1Ev(void);

/* Symbol: CmdL_Reset */
/* Demangled: CmdL_Reset */
int CmdL_Reset(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP7_cl_memjmPvPmENS_9allocatorIS7_EES6_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP7_cl_memjmPvPmENS_9allocatorIS7_EES6_E7destroyEv(void);

/* Symbol: _ZNK2MK21CCLCreateCommandQueue15CopyConstructToEv */
/* Demangled: MK::CCLCreateCommandQueue::CopyConstructTo() const */
int _ZNK2MK21CCLCreateCommandQueue15CopyConstructToEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_programjPP10_cl_kernelPjENS_9allocatorIS9_EES8_EclEOS3_OjOS6_OS7_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_kernel**, unsigned int*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_kernel**, unsigned int*)>, int (_cl_program*, unsigned int, _cl_kernel**, unsigned int*)>::operator()(_cl_program*&&, unsigned int&&, _cl_kernel**&&, unsigned int*&&) */
int _ZNSt3__110__function6__funcIPFiP11_cl_programjPP10_cl_kernelPjENS_9allocatorIS9_EES8_EclEOS3_OjOS6_OS7_(void);

/* Symbol: clEnqueueBarrier */
/* Demangled: clEnqueueBarrier */
int clEnqueueBarrier(void);

/* Symbol: _ZN2MK16CCLCreateContext6RecordEPKljPKP13_cl_device_idP11_cl_context */
/* Demangled: MK::CCLCreateContext::Record(long const*, unsigned int, _cl_device_id* const*, _cl_context*) */
int _ZN2MK16CCLCreateContext6RecordEPKljPKP13_cl_device_idP11_cl_context(void);

/* Symbol: _ZN2MK22CCLReleaseCommandQueue6RecordEP17_cl_command_queue */
/* Demangled: MK::CCLReleaseCommandQueue::Record(_cl_command_queue*) */
int _ZN2MK22CCLReleaseCommandQueue6RecordEP17_cl_command_queue(void);

/* Symbol: _ZNK2MK21CCLEnqueueWriteBuffer15CopyConstructToEv */
/* Demangled: MK::CCLEnqueueWriteBuffer::CopyConstructTo() const */
int _ZNK2MK21CCLEnqueueWriteBuffer15CopyConstructToEv(void);

/* Symbol: _ZNK2MK16CCLReleaseKernel13GetMemoryUsedEv */
/* Demangled: MK::CCLReleaseKernel::GetMemoryUsed() const */
int _ZNK2MK16CCLReleaseKernel13GetMemoryUsedEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP13_cl_device_idjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP13_cl_device_idjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFijPKP9_cl_eventENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE */
/* Demangled: std::__1::__function::__func<int (*)(unsigned int, _cl_event* const*), std::__1::allocator<int (*)(unsigned int, _cl_event* const*)>, int (unsigned int, _cl_event* const*)>::__clone(std::__1::__function::__base<int (unsigned int, _cl_event* const*)>*) const */
int _ZNKSt3__110__function6__funcIPFijPKP9_cl_eventENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP10_cl_kernelENS_9allocatorIS5_EES4_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*), std::__1::allocator<int (*)(_cl_kernel*)>, int (_cl_kernel*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP10_cl_kernelENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void);

/* Symbol: MKProgram_Run */
/* Demangled: MKProgram_Run */
int MKProgram_Run(void);

/* Symbol: clEnqueueFillImage */
/* Demangled: clEnqueueFillImage */
int clEnqueueFillImage(void);

/* Symbol: _ZTVN2MK28CCLEnqueueMarkerWithWaitListE */
/* Demangled: vtable for MK::CCLEnqueueMarkerWithWaitList */
extern void* _ZTVN2MK28CCLEnqueueMarkerWithWaitListE;

/* Symbol: _ZN2MK13CCLProfileJobC2EPKcP9_cl_event */
/* Demangled: MK::CCLProfileJob::CCLProfileJob(char const*, _cl_event*) */
int _ZN2MK13CCLProfileJobC2EPKcP9_cl_event(void);

/* Symbol: CmdL_LoadByBuffer */
/* Demangled: CmdL_LoadByBuffer */
int CmdL_LoadByBuffer(void);

/* Symbol: _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPKhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
/* Demangled: _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPKhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
int _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPKhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_(void);

/* Symbol: _ZNSt3__16vectorIP9_cl_eventNS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
/* Demangled: _ZNSt3__16vectorIP9_cl_eventNS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
int _ZNSt3__16vectorIP9_cl_eventNS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void);

/* Symbol: _ZTVN2MK19CCLEnqueueMapBufferE */
/* Demangled: vtable for MK::CCLEnqueueMapBuffer */
extern void* _ZTVN2MK19CCLEnqueueMapBufferE;

/* Symbol: _ZNK2MK15CCLRetainKernel3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLRetainKernel::Log(MK::CJsonLog&) const */
int _ZNK2MK15CCLRetainKernel3LogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK14CCLRetainEvent3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLRetainEvent::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK14CCLRetainEvent3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcjPKS3_PS9_PFvS3_PvESD_ENS_9allocatorISH_EESG_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)>, int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcjPKS3_PS9_PFvS3_PvESD_ENS_9allocatorISH_EESG_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP13_cl_device_idENS_9allocatorIS5_EES4_EclEOS3_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*), std::__1::allocator<int (*)(_cl_device_id*)>, int (_cl_device_id*)>::operator()(_cl_device_id*&&) */
int _ZNSt3__110__function6__funcIPFiP13_cl_device_idENS_9allocatorIS5_EES4_EclEOS3_(void);

/* Symbol: _ZNK2MK5CBool15CopyConstructToEv */
/* Demangled: MK::CBool::CopyConstructTo() const */
int _ZNK2MK5CBool15CopyConstructToEv(void);

/* Symbol: _ZNK2MK8CVersionneERKS0_ */
/* Demangled: MK::CVersion::operator!=(MK::CVersion const&) const */
int _ZNK2MK8CVersionneERKS0_(void);

/* Symbol: _ZN2MK28CCLEnqueueMarkerWithWaitListC1Ev */
/* Demangled: MK::CCLEnqueueMarkerWithWaitList::CCLEnqueueMarkerWithWaitList() */
int _ZN2MK28CCLEnqueueMarkerWithWaitListC1Ev(void);

/* Symbol: _ZN2MK22CCLReleaseCommandQueue4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLReleaseCommandQueue::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK22CCLReleaseCommandQueue4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK16CCLWaitForEvents15RegisterFactoryEv */
/* Demangled: MK::CCLWaitForEvents::RegisterFactory() */
int _ZN2MK16CCLWaitForEvents15RegisterFactoryEv(void);

/* Symbol: _ZN2MK16CCLEnqueueMarker15RegisterFactoryEv */
/* Demangled: MK::CCLEnqueueMarker::RegisterFactory() */
int _ZN2MK16CCLEnqueueMarker15RegisterFactoryEv(void);

/* Symbol: _ZNK2MK16CCLEnqueueMarker11GetDiskUsedEv */
/* Demangled: MK::CCLEnqueueMarker::GetDiskUsed() const */
int _ZNK2MK16CCLEnqueueMarker11GetDiskUsedEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idmPiENS_9allocatorISA_EES9_E7destroyEv */
/* Demangled: std::__1::__function::__func<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long, int*), std::__1::allocator<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long, int*)>, _cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long, int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idmPiENS_9allocatorISA_EES9_E7destroyEv(void);

/* Symbol: _ZN2MK15CCLSetKernelArgC1Ev */
/* Demangled: MK::CCLSetKernelArg::CCLSetKernelArg() */
int _ZN2MK15CCLSetKernelArgC1Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_programENS_9allocatorIS5_EES4_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*), std::__1::allocator<int (*)(_cl_program*)>, int (_cl_program*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP11_cl_programENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPKlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
/* Demangled: _ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPKlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
int _ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPKlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_(void);

/* Symbol: _ZN2MK27CCLEnqueueCopyBufferToImage3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLEnqueueCopyBufferToImage::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK27CCLEnqueueCopyBufferToImage3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZN2MK16CCLWaitForEvents4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLWaitForEvents::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK16CCLWaitForEvents4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK5CBool4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CBool::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK5CBool4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK22clEnqueueWaitForEventsEP17_cl_command_queuejPKP9_cl_event */
/* Demangled: MK::clEnqueueWaitForEvents(_cl_command_queue*, unsigned int, _cl_event* const*) */
int _ZN2MK22clEnqueueWaitForEventsEP17_cl_command_queuejPKP9_cl_event(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithBinaryC2ERKS0_ */
/* Demangled: MK::CCLCreateProgramWithBinary::CCLCreateProgramWithBinary(MK::CCLCreateProgramWithBinary const&) */
int _ZN2MK26CCLCreateProgramWithBinaryC2ERKS0_(void);

/* Symbol: _ZN2MK28CCLEnqueueMarkerWithWaitListD0Ev */
/* Demangled: MK::CCLEnqueueMarkerWithWaitList::~CCLEnqueueMarkerWithWaitList() */
int _ZN2MK28CCLEnqueueMarkerWithWaitListD0Ev(void);

/* Symbol: _ZTVN2MK17CCLReleaseProgramE */
/* Demangled: vtable for MK::CCLReleaseProgram */
extern void* _ZTVN2MK17CCLReleaseProgramE;

/* Symbol: _ZN2MK16CCLCreateContext4SaveERNS_7CStreamE */
/* Demangled: MK::CCLCreateContext::Save(MK::CStream&) */
int _ZN2MK16CCLCreateContext4SaveERNS_7CStreamE(void);

/* Symbol: _ZN2MK21CCLRetainCommandQueue4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLRetainCommandQueue::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK21CCLRetainCommandQueue4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK18clEnqueueMapBufferEP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS5_Pi */
/* Demangled: MK::clEnqueueMapBuffer(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*) */
int _ZN2MK18clEnqueueMapBufferEP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS5_Pi(void);

/* Symbol: _ZN2MK24CCLEnqueueUnmapMemObjectD2Ev */
/* Demangled: MK::CCLEnqueueUnmapMemObject::~CCLEnqueueUnmapMemObject() */
int _ZN2MK24CCLEnqueueUnmapMemObjectD2Ev(void);

/* Symbol: _ZN2MK17CCLReleaseProgram7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLReleaseProgram::Factory(MK::CStream&) */
int _ZN2MK17CCLReleaseProgram7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK15CCLSetKernelArgD0Ev */
/* Demangled: MK::CCLSetKernelArg::~CCLSetKernelArg() */
int _ZN2MK15CCLSetKernelArgD0Ev(void);

/* Symbol: _ZN2MK11CCLSVMAlloc4SaveERNS_7CStreamE */
/* Demangled: MK::CCLSVMAlloc::Save(MK::CStream&) */
int _ZN2MK11CCLSVMAlloc4SaveERNS_7CStreamE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP15_cl_platform_idmjPP13_cl_device_idPjENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*), std::__1::allocator<int (*)(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)>, int (_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)>::__clone(std::__1::__function::__base<int (_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP15_cl_platform_idmjPP13_cl_device_idPjENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE;

/* Symbol: _ZN2MK16clEnqueueBarrierEP17_cl_command_queue */
/* Demangled: MK::clEnqueueBarrier(_cl_command_queue*) */
int _ZN2MK16clEnqueueBarrierEP17_cl_command_queue(void);

/* Symbol: _ZN2MK11CCLSVMAlloc4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLSVMAlloc::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK11CCLSVMAlloc4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP15_cl_platform_idENS_9allocatorIS5_EES4_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*), std::__1::allocator<int (*)(_cl_platform_id*)>, int (_cl_platform_id*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP15_cl_platform_idENS_9allocatorIS5_EES4_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP15_cl_platform_idmjPP13_cl_device_idPjENS_9allocatorIS9_EES8_EclEOS3_OmOjOS6_OS7_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*), std::__1::allocator<int (*)(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)>, int (_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)>::operator()(_cl_platform_id*&&, unsigned long&&, unsigned int&&, _cl_device_id**&&, unsigned int*&&) */
int _ZNSt3__110__function6__funcIPFiP15_cl_platform_idmjPP13_cl_device_idPjENS_9allocatorIS9_EES8_EclEOS3_OmOjOS6_OS7_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueENS_9allocatorIS5_EES4_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*), std::__1::allocator<int (*)(_cl_command_queue*)>, int (_cl_command_queue*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueENS_9allocatorIS5_EES4_E7destroyEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFivENS_9allocatorIS3_EES2_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(), std::__1::allocator<int (*)()>, int ()>::destroy() */
int _ZNSt3__110__function6__funcIPFivENS_9allocatorIS3_EES2_E7destroyEv(void);

/* Symbol: MKStream_SaveToFile */
/* Demangled: MKStream_SaveToFile */
int MKStream_SaveToFile(void);

/* Symbol: CmdL_AttachclRetainProgram */
/* Demangled: CmdL_AttachclRetainProgram */
int CmdL_AttachclRetainProgram(void);

/* Symbol: _ZNK2MK16CCLRetainProgram3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLRetainProgram::Log(MK::CJsonLog&) const */
int _ZNK2MK16CCLRetainProgram3LogERNS_8CJsonLogE(void);

/* Symbol: _ZNK2MK16CCLEnqueueSVMMap11GetDiskUsedEv */
/* Demangled: MK::CCLEnqueueSVMMap::GetDiskUsed() const */
int _ZNK2MK16CCLEnqueueSVMMap11GetDiskUsedEv(void);

/* Symbol: _ZN2MK13CCLProfileJobD2Ev */
/* Demangled: MK::CCLProfileJob::~CCLProfileJob() */
int _ZN2MK13CCLProfileJobD2Ev(void);

/* Symbol: _ZN2MK15clWaitForEventsEjPKP9_cl_event */
/* Demangled: MK::clWaitForEvents(unsigned int, _cl_event* const*) */
int _ZN2MK15clWaitForEventsEjPKP9_cl_event(void);

/* Symbol: _ZN2MK12CDynamicData3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CDynamicData::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK12CDynamicData3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZN2MK11CStaticData4SaveERNS_7CStreamE */
/* Demangled: MK::CStaticData::Save(MK::CStream&) */
int _ZN2MK11CStaticData4SaveERNS_7CStreamE(void);

/* Symbol: MKStream_GetObjectCount */
/* Demangled: MKStream_GetObjectCount */
int MKStream_GetObjectCount(void);

/* Symbol: _ZN2MK14COutputTensors8ms_kRTTIE */
/* Demangled: MK::COutputTensors::ms_kRTTI */
extern void* _ZN2MK14COutputTensors8ms_kRTTIE;

/* Symbol: _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmmPvPiENS_9allocatorIS9_EES8_EclEOS5_OmSE_OS6_OS7_ */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, unsigned long, void*, int*)>::operator()(_cl_context*&&, unsigned long&&, unsigned long&&, void*&&, int*&&) */
int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmmPvPiENS_9allocatorIS9_EES8_EclEOS5_OmSE_OS6_OS7_(void);

/* Symbol: _ZN2MK13CDummyCommand3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CDummyCommand::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK13CDummyCommand3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZN2MK21CCLCreateCommandQueue4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLCreateCommandQueue::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK21CCLCreateCommandQueue4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mPKmS7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mPKmS7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFvP11_cl_contextPvENS_9allocatorIS6_EES5_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<void (*)(_cl_context*, void*), std::__1::allocator<void (*)(_cl_context*, void*)>, void (_cl_context*, void*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFvP11_cl_contextPvENS_9allocatorIS6_EES5_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK13CDummyCommandC1ERKS0_ */
/* Demangled: MK::CDummyCommand::CDummyCommand(MK::CDummyCommand const&) */
int _ZN2MK13CDummyCommandC1ERKS0_(void);

/* Symbol: _ZN2MK8CProgram20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CProgram::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK8CProgram20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK16CCLCreateContext4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLCreateContext::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK16CCLCreateContext4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK20CCLEnqueueMemoryCopy7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueMemoryCopy::Factory(MK::CStream&) */
int _ZN2MK20CCLEnqueueMemoryCopy7FactoryERNS_7CStreamE(void);

/* Symbol: _ZNK2MK15CCLReleaseEvent11GetDiskUsedEv */
/* Demangled: MK::CCLReleaseEvent::GetDiskUsed() const */
int _ZNK2MK15CCLReleaseEvent11GetDiskUsedEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuemjPmENS_9allocatorIS6_EES5_E7__cloneEPNS0_6__baseIS5_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned long, unsigned int, unsigned long*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned long, unsigned int, unsigned long*)>, int (_cl_command_queue*, unsigned long, unsigned int, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, unsigned long, unsigned int, unsigned long*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuemjPmENS_9allocatorIS6_EES5_E7__cloneEPNS0_6__baseIS5_EE(void);

/* Symbol: _ZN2MK11CStaticDataC1ERKS0_ */
/* Demangled: MK::CStaticData::CStaticData(MK::CStaticData const&) */
int _ZN2MK11CStaticDataC1ERKS0_(void);

/* Symbol: _ZN2MK16CCLEnqueueMarkerD2Ev */
/* Demangled: MK::CCLEnqueueMarker::~CCLEnqueueMarker() */
int _ZN2MK16CCLEnqueueMarkerD2Ev(void);

/* Symbol: _ZNSt3__16vectorINS_4pairIP7_cl_memN2MK8CPointerINS4_11CStaticDataEEEEENS_9allocatorIS8_EEE21__push_back_slow_pathIS8_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::pair<_cl_mem*, MK::CPointer<MK::CStaticData> >, std::__1::allocator<std::__1::pair<_cl_mem*, MK::CPointer<MK::CStaticData> > > >::__push_back_slow_path<std::__1::pair<_cl_mem*, MK::CPointer<MK::CStaticData> > >(std::__1::pair<_cl_mem*, MK::CPointer<MK::CStaticData> >&&) */
int _ZNSt3__16vectorINS_4pairIP7_cl_memN2MK8CPointerINS4_11CStaticDataEEEEENS_9allocatorIS8_EEE21__push_back_slow_pathIS8_EEvOT_(void);

/* Symbol: _ZN2MK14CContextGlobal13GetKernelNameEP10_cl_kernel */
/* Demangled: MK::CContextGlobal::GetKernelName(_cl_kernel*) */
int _ZN2MK14CContextGlobal13GetKernelNameEP10_cl_kernel(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcPiENS_9allocatorISE_EESD_EE */
/* Demangled: vtable for std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcPiENS_9allocatorISE_EESD_EE;

/* Symbol: CmdL_TreeNodeDumpJsonFile */
/* Demangled: CmdL_TreeNodeDumpJsonFile */
int CmdL_TreeNodeDumpJsonFile(void);

/* Symbol: _ZN2MK10CCLCommand8ms_kRTTIE */
/* Demangled: MK::CCLCommand::ms_kRTTI */
extern void* _ZN2MK10CCLCommand8ms_kRTTIE;

/* Symbol: _ZN2MK10CCLCommandC2Ev */
/* Demangled: MK::CCLCommand::CCLCommand() */
int _ZN2MK10CCLCommandC2Ev(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithBinary4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLCreateProgramWithBinary::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK26CCLCreateProgramWithBinary4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNK2MK18CCLEnqueueSVMUnmap11GetDiskUsedEv */
/* Demangled: MK::CCLEnqueueSVMUnmap::GetDiskUsed() const */
int _ZNK2MK18CCLEnqueueSVMUnmap11GetDiskUsedEv(void);

/* Symbol: _ZN2MK20clCreateCommandQueueEP11_cl_contextP13_cl_device_idmPi */
/* Demangled: MK::clCreateCommandQueue(_cl_context*, _cl_device_id*, unsigned long, int*) */
int _ZN2MK20clCreateCommandQueueEP11_cl_contextP13_cl_device_idmPi(void);

/* Symbol: _ZNK2MK14CCLRetainEvent3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLRetainEvent::Log(MK::CJsonLog&) const */
int _ZNK2MK14CCLRetainEvent3LogERNS_8CJsonLogE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idmPiENS_9allocatorISA_EES9_E7__cloneEv */
/* Demangled: std::__1::__function::__func<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long, int*), std::__1::allocator<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long, int*)>, _cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long, int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idmPiENS_9allocatorISA_EES9_E7__cloneEv(void);

/* Symbol: MKProgram_AttachMemoryCopy */
/* Demangled: MKProgram_AttachMemoryCopy */
int MKProgram_AttachMemoryCopy(void);

/* Symbol: _ZN2MK11CUpdateBoolC2EPNS_5CBoolEb */
/* Demangled: MK::CUpdateBool::CUpdateBool(MK::CBool*, bool) */
int _ZN2MK11CUpdateBoolC2EPNS_5CBoolEb(void);

/* Symbol: _ZGVZN2MK7CConfig11GetInstanceEvE12gs_kInstance */
/* Demangled: guard variable for MK::CConfig::GetInstance()::gs_kInstance */
extern void* _ZGVZN2MK7CConfig11GetInstanceEvE12gs_kInstance;

/* Symbol: MKCommand_Release */
/* Demangled: MKCommand_Release */
int MKCommand_Release(void);

/* Symbol: _ZN2MK11CUpdateBool15RegisterFactoryEv */
/* Demangled: MK::CUpdateBool::RegisterFactory() */
int _ZN2MK11CUpdateBool15RegisterFactoryEv(void);

/* Symbol: _ZN2MK8CVersionC1Eii */
/* Demangled: MK::CVersion::CVersion(int, int) */
int _ZN2MK8CVersionC1Eii(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EE;

/* Symbol: _ZN2MK15CCLBuildProgramC1ERKS0_ */
/* Demangled: MK::CCLBuildProgram::CCLBuildProgram(MK::CCLBuildProgram const&) */
int _ZN2MK15CCLBuildProgramC1ERKS0_(void);

/* Symbol: _ZN2MK10CCLCommandD1Ev */
/* Demangled: MK::CCLCommand::~CCLCommand() */
int _ZN2MK10CCLCommandD1Ev(void);

/* Symbol: _ZN2MK15CCLCreateBuffer15RegisterFactoryEv */
/* Demangled: MK::CCLCreateBuffer::RegisterFactory() */
int _ZN2MK15CCLCreateBuffer15RegisterFactoryEv(void);

/* Symbol: _ZN2MK9CCLFinishC2Ev */
/* Demangled: MK::CCLFinish::CCLFinish() */
int _ZN2MK9CCLFinishC2Ev(void);

/* Symbol: _ZN2MK15CCLSetKernelArg4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLSetKernelArg::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK15CCLSetKernelArg4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZTVN2MK11CThreadJobQE */
/* Demangled: vtable for MK::CThreadJobQ */
extern void* _ZTVN2MK11CThreadJobQE;

/* Symbol: _ZN2MK7CStream17ReadDynamicStringERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: MK::CStream::ReadDynamicString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN2MK7CStream17ReadDynamicStringERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN2MK24CCLEnqueueUnmapMemObject20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueUnmapMemObject::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK24CCLEnqueueUnmapMemObject20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK7CObject4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CObject::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK7CObject4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPKvjPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPKvjPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mPKmS7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mPKmS7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFivENS_9allocatorIS3_EES2_EclEv */
/* Demangled: std::__1::__function::__func<int (*)(), std::__1::allocator<int (*)()>, int ()>::operator()() */
int _ZNSt3__110__function6__funcIPFivENS_9allocatorIS3_EES2_EclEv(void);

/* Symbol: _ZNSt3__15dequeIbNS_9allocatorIbEEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<bool, std::__1::allocator<bool> >::__add_back_capacity() */
int _ZNSt3__15dequeIbNS_9allocatorIbEEE19__add_back_capacityEv(void);

/* Symbol: _ZTVN2MK11CMemoryCopyE */
/* Demangled: vtable for MK::CMemoryCopy */
extern void* _ZTVN2MK11CMemoryCopyE;

/* Symbol: CmdL_TreeNodePopStack */
/* Demangled: CmdL_TreeNodePopStack */
int CmdL_TreeNodePopStack(void);

/* Symbol: _ZN2MK19CCLEnqueueMapBuffer3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLEnqueueMapBuffer::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK19CCLEnqueueMapBuffer3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZNSt3__16vectorImNS_9allocatorImEEE6assignIPmEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleImNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorImNS_9allocatorImEEE6assignIPmEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleImNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorImNS_9allocatorImEEE6assignIPmEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleImNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZN2MK20CCLEnqueueReadBuffer4SaveERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueReadBuffer::Save(MK::CStream&) */
int _ZN2MK20CCLEnqueueReadBuffer4SaveERNS_7CStreamE(void);

/* Symbol: _ZN2MK9CCLFinish4SaveERNS_7CStreamE */
/* Demangled: MK::CCLFinish::Save(MK::CStream&) */
int _ZN2MK9CCLFinish4SaveERNS_7CStreamE(void);

/* Symbol: _ZN2MK17CCLReleaseContextC2ERKS0_ */
/* Demangled: MK::CCLReleaseContext::CCLReleaseContext(MK::CCLReleaseContext const&) */
int _ZN2MK17CCLReleaseContextC2ERKS0_(void);

/* Symbol: MKBool_Release */
/* Demangled: MKBool_Release */
int MKBool_Release(void);

/* Symbol: _ZN2MK7CObjectC1ERKS0_ */
/* Demangled: MK::CObject::CObject(MK::CObject const&) */
int _ZN2MK7CObjectC1ERKS0_(void);

/* Symbol: _ZN2MK9CCLFinishD1Ev */
/* Demangled: MK::CCLFinish::~CCLFinish() */
int _ZN2MK9CCLFinishD1Ev(void);

/* Symbol: _ZN2MK11CCLSVMAlloc3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLSVMAlloc::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK11CCLSVMAlloc3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZTVN2MK11CStaticDataE */
/* Demangled: vtable for MK::CStaticData */
extern void* _ZTVN2MK11CStaticDataE;

/* Symbol: _ZNSt3__114__split_bufferIPN2MK8CPointerINS1_8CProgramEEERNS_9allocatorIS5_EEE9push_backEOS5_ */
/* Demangled: std::__1::__split_buffer<MK::CPointer<MK::CProgram>*, std::__1::allocator<MK::CPointer<MK::CProgram>*>&>::push_back(MK::CPointer<MK::CProgram>*&&) */
int _ZNSt3__114__split_bufferIPN2MK8CPointerINS1_8CProgramEEERNS_9allocatorIS5_EEE9push_backEOS5_(void);

/* Symbol: _ZNK2MK25CCLCreateKernelsInProgram15CopyConstructToEv */
/* Demangled: MK::CCLCreateKernelsInProgram::CopyConstructTo() const */
int _ZNK2MK25CCLCreateKernelsInProgram15CopyConstructToEv(void);

/* Symbol: _ZN2MK15CCLRetainKernel4SaveERNS_7CStreamE */
/* Demangled: MK::CCLRetainKernel::Save(MK::CStream&) */
int _ZN2MK15CCLRetainKernel4SaveERNS_7CStreamE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEPNS0_6__baseISC_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEPNS0_6__baseISC_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP15_cl_platform_idENS_9allocatorIS5_EES4_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*), std::__1::allocator<int (*)(_cl_platform_id*)>, int (_cl_platform_id*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP15_cl_platform_idENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK16clGetProgramInfoEP11_cl_programjmPvPm */
/* Demangled: MK::clGetProgramInfo(_cl_program*, unsigned int, unsigned long, void*, unsigned long*) */
int _ZN2MK16clGetProgramInfoEP11_cl_programjmPvPm(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithSource20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLCreateProgramWithSource::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK26CCLCreateProgramWithSource20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathImEEvOT_ */
/* Demangled: void std::__1::vector<unsigned long, std::__1::allocator<unsigned long> >::__push_back_slow_path<unsigned long>(unsigned long&&) */
int _ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathImEEvOT_(void);

/* Symbol: _ZNK2MK8CCLFlush11GetDiskUsedEv */
/* Demangled: MK::CCLFlush::GetDiskUsed() const */
int _ZNK2MK8CCLFlush11GetDiskUsedEv(void);

/* Symbol: _ZN2MK17CCLReleaseContext8ms_kRTTIE */
/* Demangled: MK::CCLReleaseContext::ms_kRTTI */
extern void* _ZN2MK17CCLReleaseContext8ms_kRTTIE;

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuemjPmENS_9allocatorIS6_EES5_EclEOS3_OmOjOS4_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned long, unsigned int, unsigned long*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned long, unsigned int, unsigned long*)>, int (_cl_command_queue*, unsigned long, unsigned int, unsigned long*)>::operator()(_cl_command_queue*&&, unsigned long&&, unsigned int&&, unsigned long*&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuemjPmENS_9allocatorIS6_EES5_EclEOS3_OmOjOS4_(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: CmdL_SetDebugLevel */
/* Demangled: CmdL_SetDebugLevel */
int CmdL_SetDebugLevel(void);

/* Symbol: CmdL_AttachclRetainCommandQueue */
/* Demangled: CmdL_AttachclRetainCommandQueue */
int CmdL_AttachclRetainCommandQueue(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP9_cl_eventENS_9allocatorIS5_EES4_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_event*), std::__1::allocator<int (*)(_cl_event*)>, int (_cl_event*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP9_cl_eventENS_9allocatorIS5_EES4_EE;

/* Symbol: _ZNSt3__16vectorIP7_cl_memNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<_cl_mem*, std::__1::allocator<_cl_mem*> >::__push_back_slow_path<_cl_mem* const&>(_cl_mem* const&) */
int _ZNSt3__16vectorIP7_cl_memNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZNK2MK12CDynamicData13GetMemoryUsedEv */
/* Demangled: MK::CDynamicData::GetMemoryUsed() const */
int _ZNK2MK12CDynamicData13GetMemoryUsedEv(void);

/* Symbol: CmdL_AttachclEnqueueMigrateMemObjects */
/* Demangled: CmdL_AttachclEnqueueMigrateMemObjects */
int CmdL_AttachclEnqueueMigrateMemObjects(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmPvPiENS_9allocatorISC_EESB_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmPvPiENS_9allocatorISC_EESB_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK26clEnqueueMigrateMemObjectsEP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS7_ */
/* Demangled: MK::clEnqueueMigrateMemObjects(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK26clEnqueueMigrateMemObjectsEP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS7_(void);

/* Symbol: _ZN2MK15CCLRetainKernelC2ERKS0_ */
/* Demangled: MK::CCLRetainKernel::CCLRetainKernel(MK::CCLRetainKernel const&) */
int _ZN2MK15CCLRetainKernelC2ERKS0_(void);

/* Symbol: _ZN2MK18CCLRetainMemObject4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLRetainMemObject::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK18CCLRetainMemObject4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_OS7_OmSL_SL_OjOSB_OSC_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, void const*&&, unsigned long&&, unsigned long&&, unsigned long&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_OS7_OmSL_SL_OjOSB_OSC_(void);

/* Symbol: _ZN2MK15CCLReleaseEvent4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLReleaseEvent::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK15CCLReleaseEvent4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mPKmS7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mPKmS7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP10_cl_kernelP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_EclEOS3_OS5_OjOmOS6_OS7_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::operator()(_cl_kernel*&&, _cl_device_id*&&, unsigned int&&, unsigned long&&, void*&&, unsigned long*&&) */
int _ZNSt3__110__function6__funcIPFiP10_cl_kernelP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_EclEOS3_OS5_OjOmOS6_OS7_(void);

/* Symbol: clEnqueueMapImage */
/* Demangled: clEnqueueMapImage */
int clEnqueueMapImage(void);

/* Symbol: _ZN2MK15CCLCreateKernel8ms_kRTTIE */
/* Demangled: MK::CCLCreateKernel::ms_kRTTI */
extern void* _ZN2MK15CCLCreateKernel8ms_kRTTIE;

/* Symbol: _ZN2MK17CCLReleaseProgramC1ERKS0_ */
/* Demangled: MK::CCLReleaseProgram::CCLReleaseProgram(MK::CCLReleaseProgram const&) */
int _ZN2MK17CCLReleaseProgramC1ERKS0_(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP11_cl_programP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP11_cl_programP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_EE;

/* Symbol: _ZNKSt3__110__function6__funcIPFimPvENS_9allocatorIS4_EES3_E7__cloneEPNS0_6__baseIS3_EE */
/* Demangled: std::__1::__function::__func<int (*)(unsigned long, void*), std::__1::allocator<int (*)(unsigned long, void*)>, int (unsigned long, void*)>::__clone(std::__1::__function::__base<int (unsigned long, void*)>*) const */
int _ZNKSt3__110__function6__funcIPFimPvENS_9allocatorIS4_EES3_E7__cloneEPNS0_6__baseIS3_EE(void);

/* Symbol: MKProgram_AttachCLReleaseKernel */
/* Demangled: MKProgram_AttachCLReleaseKernel */
int MKProgram_AttachCLReleaseKernel(void);

/* Symbol: _ZN2MK12CDynamicData4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CDynamicData::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK12CDynamicData4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: CmdL_GetTreeNodeCount */
/* Demangled: CmdL_GetTreeNodeCount */
int CmdL_GetTreeNodeCount(void);

/* Symbol: _ZN2MK8CJsonLog3LogEPKcS2_z */
/* Demangled: MK::CJsonLog::Log(char const*, char const*, ...) */
int _ZN2MK8CJsonLog3LogEPKcS2_z(void);

/* Symbol: MKProgram_GetCLCommandQueue */
/* Demangled: MKProgram_GetCLCommandQueue */
int MKProgram_GetCLCommandQueue(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmmPvPiENS_9allocatorIS9_EES8_E7__cloneEv */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, unsigned long, void*, int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmmPvPiENS_9allocatorIS9_EES8_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithBinary7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLCreateProgramWithBinary::Factory(MK::CStream&) */
int _ZN2MK26CCLCreateProgramWithBinary7FactoryERNS_7CStreamE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcjPKS3_PS9_PFvS3_PvESD_ENS_9allocatorISH_EESG_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)>, int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcjPKS3_PS9_PFvS3_PvESD_ENS_9allocatorISH_EESG_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP7_cl_memPFvS3_PvES4_ENS_9allocatorIS8_EES7_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*, void (*)(_cl_mem*, void*), void*), std::__1::allocator<int (*)(_cl_mem*, void (*)(_cl_mem*, void*), void*)>, int (_cl_mem*, void (*)(_cl_mem*, void*), void*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP7_cl_memPFvS3_PvES4_ENS_9allocatorIS8_EES7_E18destroy_deallocateEv(void);

/* Symbol: MKStream_SaveToBuffer */
/* Demangled: MKStream_SaveToBuffer */
int MKStream_SaveToBuffer(void);

/* Symbol: _ZN2MK24clEnqueueWriteBufferRectEP17_cl_command_queueP7_cl_memjPKmS5_S5_mmmmPvjPKP9_cl_eventPS8_ */
/* Demangled: MK::clEnqueueWriteBufferRect(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK24clEnqueueWriteBufferRectEP17_cl_command_queueP7_cl_memjPKmS5_S5_mmmmPvjPKP9_cl_eventPS8_(void);

/* Symbol: _ZNK2MK7CObject11GetDiskUsedEv */
/* Demangled: MK::CObject::GetDiskUsed() const */
int _ZNK2MK7CObject11GetDiskUsedEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmmmPvPiENS_9allocatorISC_EESB_E7destroyEv */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmmmPvPiENS_9allocatorISC_EESB_E7destroyEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPPvPFvS3_jS5_S4_ES4_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPPvPFvS3_jS5_S4_ES4_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv(void);

/* Symbol: _ZN2MK34clCreateCommandQueueWithPropertiesEP11_cl_contextP13_cl_device_idPKmPi */
/* Demangled: MK::clCreateCommandQueueWithProperties(_cl_context*, _cl_device_id*, unsigned long const*, int*) */
int _ZN2MK34clCreateCommandQueueWithPropertiesEP11_cl_contextP13_cl_device_idPKmPi(void);

/* Symbol: _ZNK2MK24CCLEnqueueUnmapMemObject15CopyConstructToEv */
/* Demangled: MK::CCLEnqueueUnmapMemObject::CopyConstructTo() const */
int _ZNK2MK24CCLEnqueueUnmapMemObject15CopyConstructToEv(void);

/* Symbol: _ZN2MK9CCLFinishC1ERKS0_ */
/* Demangled: MK::CCLFinish::CCLFinish(MK::CCLFinish const&) */
int _ZN2MK9CCLFinishC1ERKS0_(void);

/* Symbol: _ZN2MK22CCLReleaseCommandQueueD2Ev */
/* Demangled: MK::CCLReleaseCommandQueue::~CCLReleaseCommandQueue() */
int _ZN2MK22CCLReleaseCommandQueueD2Ev(void);

/* Symbol: _ZTVN2MK14COutputTensorsE */
/* Demangled: vtable for MK::COutputTensors */
extern void* _ZTVN2MK14COutputTensorsE;

/* Symbol: _ZN2MK17clGetPlatformInfoEP15_cl_platform_idjmPvPm */
/* Demangled: MK::clGetPlatformInfo(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*) */
int _ZN2MK17clGetPlatformInfoEP15_cl_platform_idjmPvPm(void);

/* Symbol: _ZN2MK15CCLCreateBuffer6RecordEP11_cl_contextmmPvP7_cl_mem */
/* Demangled: MK::CCLCreateBuffer::Record(_cl_context*, unsigned long, unsigned long, void*, _cl_mem*) */
int _ZN2MK15CCLCreateBuffer6RecordEP11_cl_contextmmPvP7_cl_mem(void);

/* Symbol: _ZN2MK24CCLEnqueueUnmapMemObjectC2Ev */
/* Demangled: MK::CCLEnqueueUnmapMemObject::CCLEnqueueUnmapMemObject() */
int _ZN2MK24CCLEnqueueUnmapMemObjectC2Ev(void);

/* Symbol: _ZN2MK16CCLRetainProgram4SaveERNS_7CStreamE */
/* Demangled: MK::CCLRetainProgram::Save(MK::CStream&) */
int _ZN2MK16CCLRetainProgram4SaveERNS_7CStreamE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejmPvmjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejmPvmjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP7_cl_memjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)>::operator()(_cl_mem*&&, unsigned int&&, unsigned long&&, void*&&, unsigned long*&&) */
int _ZNSt3__110__function6__funcIPFiP7_cl_memjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_(void);

/* Symbol: _ZN2MK17CCLReleaseProgram6RecordEP11_cl_program */
/* Demangled: MK::CCLReleaseProgram::Record(_cl_program*) */
int _ZN2MK17CCLReleaseProgram6RecordEP11_cl_program(void);

/* Symbol: _ZNK2MK9CCLFinish11GetDiskUsedEv */
/* Demangled: MK::CCLFinish::GetDiskUsed() const */
int _ZNK2MK9CCLFinish11GetDiskUsedEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFP11_cl_contextPKljPKP13_cl_device_idPFvPKcPKvmPvESE_PiENS_9allocatorISJ_EESI_EE */
/* Demangled: vtable for std::__1::__function::__func<_cl_context* (*)(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*), std::__1::allocator<_cl_context* (*)(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>, _cl_context* (long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFP11_cl_contextPKljPKP13_cl_device_idPFvPKcPKvmPvESE_PiENS_9allocatorISJ_EESI_EE;

/* Symbol: _ZN2MK15CCLBuildProgram4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLBuildProgram::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK15CCLBuildProgram4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK14CCLCreateImageD2Ev */
/* Demangled: MK::CCLCreateImage::~CCLCreateImage() */
int _ZN2MK14CCLCreateImageD2Ev(void);

/* Symbol: _ZN2MK15CCLRetainKernel3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLRetainKernel::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK15CCLRetainKernel3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP11_cl_programjPP10_cl_kernelPjENS_9allocatorIS9_EES8_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_kernel**, unsigned int*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_kernel**, unsigned int*)>, int (_cl_program*, unsigned int, _cl_kernel**, unsigned int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP11_cl_programjPP10_cl_kernelPjENS_9allocatorIS9_EES8_EE;

/* Symbol: _ZN2MK26CCLCreateProgramWithBinaryD2Ev */
/* Demangled: MK::CCLCreateProgramWithBinary::~CCLCreateProgramWithBinary() */
int _ZN2MK26CCLCreateProgramWithBinaryD2Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePFvPvES4_mjPKP7_cl_memPPKvjPKP9_cl_eventPSF_ENS_9allocatorISK_EESJ_EclEOS3_OS6_OS4_OmOjOSA_OSD_SS_OSH_OSI_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, void (*&&)(void*), void*&&, unsigned long&&, unsigned int&&, _cl_mem* const*&&, void const**&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePFvPvES4_mjPKP7_cl_memPPKvjPKP9_cl_eventPSF_ENS_9allocatorISK_EESJ_EclEOS3_OS6_OS4_OmOjOSA_OSD_SS_OSH_OSI_(void);

/* Symbol: _ZN2MK14COutputTensorsD2Ev */
/* Demangled: MK::COutputTensors::~COutputTensors() */
int _ZN2MK14COutputTensorsD2Ev(void);

/* Symbol: _ZN2MK8CProgramC2ERKS0_ */
/* Demangled: MK::CProgram::CProgram(MK::CProgram const&) */
int _ZN2MK8CProgramC2ERKS0_(void);

/* Symbol: _ZN2MK24CCLEnqueueUnmapMemObjectD1Ev */
/* Demangled: MK::CCLEnqueueUnmapMemObject::~CCLEnqueueUnmapMemObject() */
int _ZN2MK24CCLEnqueueUnmapMemObjectD1Ev(void);

/* Symbol: _ZTVN2MK15CCLRetainKernelE */
/* Demangled: vtable for MK::CCLRetainKernel */
extern void* _ZTVN2MK15CCLRetainKernelE;

/* Symbol: _ZNKSt3__110__function6__funcIPFiP11_cl_programENS_9allocatorIS5_EES4_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*), std::__1::allocator<int (*)(_cl_program*)>, int (_cl_program*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP11_cl_programENS_9allocatorIS5_EES4_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePvjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePvjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E7destroyEv(void);

/* Symbol: _ZN2MK8CCommandC2Ev */
/* Demangled: MK::CCommand::CCommand() */
int _ZN2MK8CCommandC2Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_S7_mmmmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_EclEOS3_OS5_OjOS7_SM_SM_OmSN_SN_SN_OS8_SL_OSC_OSD_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, unsigned int&&, unsigned long const*&&, unsigned long const*&&, unsigned long const*&&, unsigned long&&, unsigned long&&, unsigned long&&, unsigned long&&, void*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_S7_mmmmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_EclEOS3_OS5_OjOS7_SM_SM_OmSN_SN_SN_OS8_SL_OSC_OSD_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP9_cl_eventiPFvS3_iPvES4_ENS_9allocatorIS8_EES7_EclEOS3_OiOS6_OS4_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, int, void (*)(_cl_event*, int, void*), void*), std::__1::allocator<int (*)(_cl_event*, int, void (*)(_cl_event*, int, void*), void*)>, int (_cl_event*, int, void (*)(_cl_event*, int, void*), void*)>::operator()(_cl_event*&&, int&&, void (*&&)(_cl_event*, int, void*), void*&&) */
int _ZNSt3__110__function6__funcIPFiP9_cl_eventiPFvS3_iPvES4_ENS_9allocatorIS8_EES7_EclEOS3_OiOS6_OS4_(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithSource15RegisterFactoryEv */
/* Demangled: MK::CCLCreateProgramWithSource::RegisterFactory() */
int _ZN2MK26CCLCreateProgramWithSource15RegisterFactoryEv(void);

/* Symbol: _ZN2MK15CProfileDataJobC1ERKS0_ */
/* Demangled: MK::CProfileDataJob::CProfileDataJob(MK::CProfileDataJob const&) */
int _ZN2MK15CProfileDataJobC1ERKS0_(void);

/* Symbol: clCreateCommandQueue */
/* Demangled: clCreateCommandQueue */
int clCreateCommandQueue(void);

/* Symbol: _ZNK2MK15CCLReleaseEvent15CopyConstructToEv */
/* Demangled: MK::CCLReleaseEvent::CopyConstructTo() const */
int _ZNK2MK15CCLReleaseEvent15CopyConstructToEv(void);

/* Symbol: _ZNK2MK15CCLSetKernelArg3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLSetKernelArg::Log(MK::CJsonLog&) const */
int _ZNK2MK15CCLSetKernelArg3LogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK13CCLProfileJobD1Ev */
/* Demangled: MK::CCLProfileJob::~CCLProfileJob() */
int _ZN2MK13CCLProfileJobD1Ev(void);

/* Symbol: _ZN2MK16CCLEnqueueMarkerC2Ev */
/* Demangled: MK::CCLEnqueueMarker::CCLEnqueueMarker() */
int _ZN2MK16CCLEnqueueMarkerC2Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_mjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_SJ_OS7_SK_OmOjOSB_OSC_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, _cl_mem*&&, unsigned long const*&&, unsigned long const*&&, unsigned long&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_mjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_SJ_OS7_SK_OmOjOSB_OSC_(void);

/* Symbol: _ZN2MK15clRetainSamplerEP11_cl_sampler */
/* Demangled: MK::clRetainSampler(_cl_sampler*) */
int _ZN2MK15clRetainSamplerEP11_cl_sampler(void);

/* Symbol: _ZN2MK16CCLReleaseKernel6RecordEP10_cl_kernel */
/* Demangled: MK::CCLReleaseKernel::Record(_cl_kernel*) */
int _ZN2MK16CCLReleaseKernel6RecordEP10_cl_kernel(void);

/* Symbol: _ZN2MK17CCLReleaseProgram3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLReleaseProgram::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK17CCLReleaseProgram3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZNK2MK10CCLSVMFree13GetMemoryUsedEv */
/* Demangled: MK::CCLSVMFree::GetMemoryUsed() const */
int _ZNK2MK10CCLSVMFree13GetMemoryUsedEv(void);

/* Symbol: _ZN2MK8CProgram23GetAllObjectsByNameRTTIERNSt3__16vectorIPNS_7CObjectENS1_9allocatorIS4_EEEEPKcPKNS_5CRTTIEb */
/* Demangled: MK::CProgram::GetAllObjectsByNameRTTI(std::__1::vector<MK::CObject*, std::__1::allocator<MK::CObject*> >&, char const*, MK::CRTTI const*, bool) */
int _ZN2MK8CProgram23GetAllObjectsByNameRTTIERNSt3__16vectorIPNS_7CObjectENS1_9allocatorIS4_EEEEPKcPKNS_5CRTTIEb(void);

/* Symbol: _ZN2MK8CCLFlush6RecordEP17_cl_command_queue */
/* Demangled: MK::CCLFlush::Record(_cl_command_queue*) */
int _ZN2MK8CCLFlush6RecordEP17_cl_command_queue(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv(void);

/* Symbol: CmdL_AttachclRetainSampler */
/* Demangled: CmdL_AttachclRetainSampler */
int CmdL_AttachclRetainSampler(void);

/* Symbol: _ZN2MK16CCLEnqueueMarkerC1ERKS0_ */
/* Demangled: MK::CCLEnqueueMarker::CCLEnqueueMarker(MK::CCLEnqueueMarker const&) */
int _ZN2MK16CCLEnqueueMarkerC1ERKS0_(void);

/* Symbol: _ZN2MK16CCLEnqueueMarkerD1Ev */
/* Demangled: MK::CCLEnqueueMarker::~CCLEnqueueMarker() */
int _ZN2MK16CCLEnqueueMarkerD1Ev(void);

/* Symbol: _ZN2MK22CCLReleaseCommandQueueC1ERKS0_ */
/* Demangled: MK::CCLReleaseCommandQueue::CCLReleaseCommandQueue(MK::CCLReleaseCommandQueue const&) */
int _ZN2MK22CCLReleaseCommandQueueC1ERKS0_(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcPiENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE */
/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)>::__clone(std::__1::__function::__base<_cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)>*) const */
int _ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcPiENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mmmjPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E7__cloneEPNS0_6__baseISB_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mmmjPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E7__cloneEPNS0_6__baseISB_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextPKmPiENS_9allocatorISA_EES9_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<_cl_sampler* (*)(_cl_context*, unsigned long const*, int*), std::__1::allocator<_cl_sampler* (*)(_cl_context*, unsigned long const*, int*)>, _cl_sampler* (_cl_context*, unsigned long const*, int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextPKmPiENS_9allocatorISA_EES9_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPKlPvmPiENS_9allocatorISB_EESA_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, long const*, void*, unsigned long, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, long const*, void*, unsigned long, int*)>, _cl_mem* (_cl_context*, unsigned long, long const*, void*, unsigned long, int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPKlPvmPiENS_9allocatorISB_EESA_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK15clReleaseDeviceEP13_cl_device_id */
/* Demangled: MK::clReleaseDevice(_cl_device_id*) */
int _ZN2MK15clReleaseDeviceEP13_cl_device_id(void);

/* Symbol: _ZTVN2MK26CCLCreateProgramWithSourceE */
/* Demangled: vtable for MK::CCLCreateProgramWithSource */
extern void* _ZTVN2MK26CCLCreateProgramWithSourceE;

/* Symbol: _ZN2MK22CCLReleaseCommandQueue7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLReleaseCommandQueue::Factory(MK::CStream&) */
int _ZN2MK22CCLReleaseCommandQueue7FactoryERNS_7CStreamE(void);

/* Symbol: _ZTVN2MK15CCLReleaseEventE */
/* Demangled: vtable for MK::CCLReleaseEvent */
extern void* _ZTVN2MK15CCLReleaseEventE;

/* Symbol: CmdL_LoadByFile */
/* Demangled: CmdL_LoadByFile */
int CmdL_LoadByFile(void);

/* Symbol: CmdL_AttachclCreateProgramWithBinary */
/* Demangled: CmdL_AttachclCreateProgramWithBinary */
int CmdL_AttachclCreateProgramWithBinary(void);

/* Symbol: _ZN2MK15CCLCreateKernel15RegisterFactoryEv */
/* Demangled: MK::CCLCreateKernel::RegisterFactory() */
int _ZN2MK15CCLCreateKernel15RegisterFactoryEv(void);

/* Symbol: _ZN2MK14CCLRetainEvent20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLRetainEvent::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK14CCLRetainEvent20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmmmPvPiENS_9allocatorISC_EESB_E7__cloneEv */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmmmPvPiENS_9allocatorISC_EESB_E7__cloneEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP15_cl_platform_idmjPP13_cl_device_idPjENS_9allocatorIS9_EES8_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*), std::__1::allocator<int (*)(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)>, int (_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP15_cl_platform_idmjPP13_cl_device_idPjENS_9allocatorIS9_EES8_EE;

/* Symbol: _ZTVN2MK16CCLRetainContextE */
/* Demangled: vtable for MK::CCLRetainContext */
extern void* _ZTVN2MK16CCLRetainContextE;

/* Symbol: _ZN2MK16CCLWaitForEventsC1ERKS0_ */
/* Demangled: MK::CCLWaitForEvents::CCLWaitForEvents(MK::CCLWaitForEvents const&) */
int _ZN2MK16CCLWaitForEventsC1ERKS0_(void);

/* Symbol: MKProgram_AttachCLEnqueueSVMMap */
/* Demangled: MKProgram_AttachCLEnqueueSVMMap */
int MKProgram_AttachCLEnqueueSVMMap(void);

/* Symbol: MKProgram_AttachCLRetainContext */
/* Demangled: MKProgram_AttachCLRetainContext */
int MKProgram_AttachCLRetainContext(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcPiENS_9allocatorISE_EESD_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcPiENS_9allocatorISE_EESD_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK7CStream4SaveERPcRi */
/* Demangled: MK::CStream::Save(char*&, int&) */
int _ZN2MK7CStream4SaveERPcRi(void);

/* Symbol: clCreateImage */
/* Demangled: clCreateImage */
int clCreateImage(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIP11_cl_programNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS_19__map_value_compareIS3_SA_NS_4lessIS3_EELb1EEENS7_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<_cl_program*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<_cl_program*, std::__1::__value_type<_cl_program*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<_cl_program*>, true>, std::__1::allocator<std::__1::__value_type<_cl_program*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<_cl_program*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIP11_cl_programNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS_19__map_value_compareIS3_SA_NS_4lessIS3_EELb1EEENS7_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void);

/* Symbol: _ZNK2MK22CCLReleaseCommandQueue13GetMemoryUsedEv */
/* Demangled: MK::CCLReleaseCommandQueue::GetMemoryUsed() const */
int _ZNK2MK22CCLReleaseCommandQueue13GetMemoryUsedEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP9_cl_eventjmPvPmENS_9allocatorIS7_EES6_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_event*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_event*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_event*, unsigned int, unsigned long, void*, unsigned long*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP9_cl_eventjmPvPmENS_9allocatorIS7_EES6_EE;

/* Symbol: _Z15MKSysTrace_Exitv */
/* Demangled: MKSysTrace_Exit() */
int _Z15MKSysTrace_Exitv(void);

/* Symbol: _ZN2MK11CUpdateBool4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CUpdateBool::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK11CUpdateBool4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: CmdL_AttachclFlush */
/* Demangled: CmdL_AttachclFlush */
int CmdL_AttachclFlush(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP11_cl_programjmPvPmENS_9allocatorIS7_EES6_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_program*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_program*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_program*, unsigned int, unsigned long, void*, unsigned long*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP11_cl_programjmPvPmENS_9allocatorIS7_EES6_EE;

/* Symbol: _ZTVN2MK13CInputTensorsE */
/* Demangled: vtable for MK::CInputTensors */
extern void* _ZTVN2MK13CInputTensorsE;

/* Symbol: _ZN2MK7CStream4LoadEPKcii */
/* Demangled: MK::CStream::Load(char const*, int, int) */
int _ZN2MK7CStream4LoadEPKcii(void);

/* Symbol: _ZN2MK9CCLFinishC1Ev */
/* Demangled: MK::CCLFinish::CCLFinish() */
int _ZN2MK9CCLFinishC1Ev(void);

/* Symbol: _ZN2MK10CCLCommandC2ERKS0_ */
/* Demangled: MK::CCLCommand::CCLCommand(MK::CCLCommand const&) */
int _ZN2MK10CCLCommandC2ERKS0_(void);

/* Symbol: _ZN2MK10CCLCommandD0Ev */
/* Demangled: MK::CCLCommand::~CCLCommand() */
int _ZN2MK10CCLCommandD0Ev(void);

/* Symbol: _ZTVN2MK18CCLRetainMemObjectE */
/* Demangled: vtable for MK::CCLRetainMemObject */
extern void* _ZTVN2MK18CCLRetainMemObjectE;

/* Symbol: _ZN2MK21CCLRetainCommandQueueC2ERKS0_ */
/* Demangled: MK::CCLRetainCommandQueue::CCLRetainCommandQueue(MK::CCLRetainCommandQueue const&) */
int _ZN2MK21CCLRetainCommandQueueC2ERKS0_(void);

/* Symbol: _ZN2MK18CCLEnqueueSVMUnmapD2Ev */
/* Demangled: MK::CCLEnqueueSVMUnmap::~CCLEnqueueSVMUnmap() */
int _ZN2MK18CCLEnqueueSVMUnmapD2Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFimPvENS_9allocatorIS4_EES3_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(unsigned long, void*), std::__1::allocator<int (*)(unsigned long, void*)>, int (unsigned long, void*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFimPvENS_9allocatorIS4_EES3_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK21CCLCreateCommandQueue4SaveERNS_7CStreamE */
/* Demangled: MK::CCLCreateCommandQueue::Save(MK::CStream&) */
int _ZN2MK21CCLCreateCommandQueue4SaveERNS_7CStreamE(void);

/* Symbol: _ZNK2MK19CCLReleaseMemObject3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLReleaseMemObject::Log(MK::CJsonLog&) const */
int _ZNK2MK19CCLReleaseMemObject3LogERNS_8CJsonLogE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuePvjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuePvjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_EE;

/* Symbol: _ZN2MK8CProgram15DetachCommandAtEi */
/* Demangled: MK::CProgram::DetachCommandAt(int) */
int _ZN2MK8CProgram15DetachCommandAtEi(void);

/* Symbol: CmdL_AttachclCreateImage2D */
/* Demangled: CmdL_AttachclCreateImage2D */
int CmdL_AttachclCreateImage2D(void);

/* Symbol: _ZN2MK20clEnqueueWriteBufferEP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS7_ */
/* Demangled: MK::clEnqueueWriteBuffer(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK20clEnqueueWriteBufferEP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS7_(void);

/* Symbol: _ZN2MK21clEnqueueNativeKernelEP17_cl_command_queuePFvPvES2_mjPKP7_cl_memPPKvjPKP9_cl_eventPSD_ */
/* Demangled: MK::clEnqueueNativeKernel(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK21clEnqueueNativeKernelEP17_cl_command_queuePFvPvES2_mjPKP7_cl_memPPKvjPKP9_cl_eventPSD_(void);

/* Symbol: _ZNK2MK27CCLEnqueueCopyBufferToImage3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLEnqueueCopyBufferToImage::Log(MK::CJsonLog&) const */
int _ZNK2MK27CCLEnqueueCopyBufferToImage3LogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK21CCLEnqueueWriteBuffer4SaveERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueWriteBuffer::Save(MK::CStream&) */
int _ZN2MK21CCLEnqueueWriteBuffer4SaveERNS_7CStreamE(void);

/* Symbol: MKProgram_AttachCLReleaseEvent */
/* Demangled: MKProgram_AttachCLReleaseEvent */
int MKProgram_AttachCLReleaseEvent(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP11_cl_contextPKljPKP13_cl_device_idPFvPKcPKvmPvESE_PiENS_9allocatorISJ_EESI_E7destroyEv */
/* Demangled: std::__1::__function::__func<_cl_context* (*)(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*), std::__1::allocator<_cl_context* (*)(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>, _cl_context* (long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFP11_cl_contextPKljPKP13_cl_device_idPFvPKcPKvmPvESE_PiENS_9allocatorISJ_EESI_E7destroyEv(void);

/* Symbol: _ZN2MK15CProfileDataJobC2EPKcf */
/* Demangled: MK::CProfileDataJob::CProfileDataJob(char const*, float) */
int _ZN2MK15CProfileDataJobC2EPKcf(void);

/* Symbol: _ZN2MK32clSetMemObjectDestructorCallbackEP7_cl_memPFvS1_PvES2_ */
/* Demangled: MK::clSetMemObjectDestructorCallback(_cl_mem*, void (*)(_cl_mem*, void*), void*) */
int _ZN2MK32clSetMemObjectDestructorCallbackEP7_cl_memPFvS1_PvES2_(void);

/* Symbol: _ZN2MK8CVersion5MINORE */
/* Demangled: MK::CVersion::MINOR */
extern void* _ZN2MK8CVersion5MINORE;

/* Symbol: _ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZN2MK9CCLFinish4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLFinish::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK9CCLFinish4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK9CCLFinishD0Ev */
/* Demangled: MK::CCLFinish::~CCLFinish() */
int _ZN2MK9CCLFinishD0Ev(void);

/* Symbol: _ZN2MK19CCLEnqueueMapBufferC1ERKS0_ */
/* Demangled: MK::CCLEnqueueMapBuffer::CCLEnqueueMapBuffer(MK::CCLEnqueueMapBuffer const&) */
int _ZN2MK19CCLEnqueueMapBufferC1ERKS0_(void);

/* Symbol: _ZN2MK15CCLImportMemory15RegisterFactoryEv */
/* Demangled: MK::CCLImportMemory::RegisterFactory() */
int _ZN2MK15CCLImportMemory15RegisterFactoryEv(void);

/* Symbol: _ZN2MK20CCLPrepareMemoryCopy3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLPrepareMemoryCopy::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK20CCLPrepareMemoryCopy3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvPKmS9_jPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvPKmS9_jPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E7destroyEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvmjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvmjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFijPKP9_cl_eventENS_9allocatorIS7_EES6_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(unsigned int, _cl_event* const*), std::__1::allocator<int (*)(unsigned int, _cl_event* const*)>, int (unsigned int, _cl_event* const*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFijPKP9_cl_eventENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK11CStaticDataD2Ev */
/* Demangled: MK::CStaticData::~CStaticData() */
int _ZN2MK11CStaticDataD2Ev(void);

/* Symbol: CmdL_TreeNodeRelease */
/* Demangled: CmdL_TreeNodeRelease */
int CmdL_TreeNodeRelease(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP11_cl_contextmjjP16_cl_image_formatPjENS_9allocatorIS8_EES7_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*), std::__1::allocator<int (*)(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)>, int (_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP11_cl_contextmjjP16_cl_image_formatPjENS_9allocatorIS8_EES7_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_contextjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_context*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_context*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_context*, unsigned int, unsigned long, void*, unsigned long*)>::operator()(_cl_context*&&, unsigned int&&, unsigned long&&, void*&&, unsigned long*&&) */
int _ZNSt3__110__function6__funcIPFiP11_cl_contextjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_(void);

/* Symbol: CmdL_AttachclEnqueueMapImage */
/* Demangled: CmdL_AttachclEnqueueMapImage */
int CmdL_AttachclEnqueueMapImage(void);

/* Symbol: _ZN2MK24clCreateKernelsInProgramEP11_cl_programjPP10_cl_kernelPj */
/* Demangled: MK::clCreateKernelsInProgram(_cl_program*, unsigned int, _cl_kernel**, unsigned int*) */
int _ZN2MK24clCreateKernelsInProgramEP11_cl_programjPP10_cl_kernelPj(void);

/* Symbol: _ZN2MK21CCLRetainCommandQueueD2Ev */
/* Demangled: MK::CCLRetainCommandQueue::~CCLRetainCommandQueue() */
int _ZN2MK21CCLRetainCommandQueueD2Ev(void);

/* Symbol: MKProgram_AttachCLEnqueueWriteBuffer */
/* Demangled: MKProgram_AttachCLEnqueueWriteBuffer */
int MKProgram_AttachCLEnqueueWriteBuffer(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP9_cl_eventiPFvS3_iPvES4_ENS_9allocatorIS8_EES7_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, int, void (*)(_cl_event*, int, void*), void*), std::__1::allocator<int (*)(_cl_event*, int, void (*)(_cl_event*, int, void*), void*)>, int (_cl_event*, int, void (*)(_cl_event*, int, void*), void*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP9_cl_eventiPFvS3_iPvES4_ENS_9allocatorIS8_EES7_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK13CDummyCommand4SaveERNS_7CStreamE */
/* Demangled: MK::CDummyCommand::Save(MK::CStream&) */
int _ZN2MK13CDummyCommand4SaveERNS_7CStreamE(void);

/* Symbol: _ZNSt3__16vectorIPN2MK7CObjectENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_ */
/* Demangled: void std::__1::vector<MK::CObject*, std::__1::allocator<MK::CObject*> >::__push_back_slow_path<MK::CObject*>(MK::CObject*&&) */
int _ZNSt3__16vectorIPN2MK7CObjectENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePvjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E7__cloneEPNS0_6__baseISA_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePvjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E7__cloneEPNS0_6__baseISA_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmPvPiENS_9allocatorISC_EESB_EclEOS5_OmOS8_SH_SH_SH_OS9_OSA_ */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)>::operator()(_cl_context*&&, unsigned long&&, _cl_image_format const*&&, unsigned long&&, unsigned long&&, unsigned long&&, void*&&, int*&&) */
int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmPvPiENS_9allocatorISC_EESB_EclEOS5_OmOS8_SH_SH_SH_OS9_OSA_(void);

/* Symbol: _ZN2MK8CVersionC1EPKc */
/* Demangled: MK::CVersion::CVersion(char const*) */
int _ZN2MK8CVersionC1EPKc(void);

/* Symbol: _ZN2MK18CCLEnqueueSVMUnmap20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueSVMUnmap::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK18CCLEnqueueSVMUnmap20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZTVN2MK13CCLProfileJobE */
/* Demangled: vtable for MK::CCLProfileJob */
extern void* _ZTVN2MK13CCLProfileJobE;

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK12CDynamicData8ms_kRTTIE */
/* Demangled: MK::CDynamicData::ms_kRTTI */
extern void* _ZN2MK12CDynamicData8ms_kRTTIE;

/* Symbol: _ZN2MK8CCLFlushC1ERKS0_ */
/* Demangled: MK::CCLFlush::CCLFlush(MK::CCLFlush const&) */
int _ZN2MK8CCLFlushC1ERKS0_(void);

/* Symbol: _ZN2MK23CCLEnqueueNDRangeKernelC1ERKS0_ */
/* Demangled: MK::CCLEnqueueNDRangeKernel::CCLEnqueueNDRangeKernel(MK::CCLEnqueueNDRangeKernel const&) */
int _ZN2MK23CCLEnqueueNDRangeKernelC1ERKS0_(void);

/* Symbol: _ZNK2MK9CCLFinish15CopyConstructToEv */
/* Demangled: MK::CCLFinish::CopyConstructTo() const */
int _ZNK2MK9CCLFinish15CopyConstructToEv(void);

/* Symbol: _ZN2MK22CCLReleaseCommandQueueC2Ev */
/* Demangled: MK::CCLReleaseCommandQueue::CCLReleaseCommandQueue() */
int _ZN2MK22CCLReleaseCommandQueueC2Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OjOS7_OmSJ_OSB_OSC_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, unsigned int&&, _cl_mem* const*&&, unsigned long&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OjOS7_OmSJ_OSB_OSC_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventPS5_ENS_9allocatorISA_EES9_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventPS5_ENS_9allocatorISA_EES9_E7destroyEv(void);

/* Symbol: _ZN2MK14CCLRetainEvent15RegisterFactoryEv */
/* Demangled: MK::CCLRetainEvent::RegisterFactory() */
int _ZN2MK14CCLRetainEvent15RegisterFactoryEv(void);

/* Symbol: CmdL_AttachclCreateProgramWithBuiltInKernels */
/* Demangled: CmdL_AttachclCreateProgramWithBuiltInKernels */
int CmdL_AttachclCreateProgramWithBuiltInKernels(void);

/* Symbol: clCreateUserEvent */
/* Demangled: clCreateUserEvent */
int clCreateUserEvent(void);

/* Symbol: _ZN2MK16CCLWaitForEvents3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLWaitForEvents::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK16CCLWaitForEvents3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_contextENS_9allocatorIS5_EES4_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_context*), std::__1::allocator<int (*)(_cl_context*)>, int (_cl_context*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP11_cl_contextENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void);

/* Symbol: _ZNK2MK8CProgram11GetDiskUsedEv */
/* Demangled: MK::CProgram::GetDiskUsed() const */
int _ZNK2MK8CProgram11GetDiskUsedEv(void);

/* Symbol: _ZN2MK14clCreateKernelEP11_cl_programPKcPi */
/* Demangled: MK::clCreateKernel(_cl_program*, char const*, int*) */
int _ZN2MK14clCreateKernelEP11_cl_programPKcPi(void);

/* Symbol: _ZN2MK14CCLCreateImageC2Ev */
/* Demangled: MK::CCLCreateImage::CCLCreateImage() */
int _ZN2MK14CCLCreateImageC2Ev(void);

/* Symbol: _ZN2MK15CCLImportMemory6RecordEP11_cl_contextmPKlPvmP7_cl_mem */
/* Demangled: MK::CCLImportMemory::Record(_cl_context*, unsigned long, long const*, void*, unsigned long, _cl_mem*) */
int _ZN2MK15CCLImportMemory6RecordEP11_cl_contextmPKlPvmP7_cl_mem(void);

/* Symbol: _ZN2MK15CCLSetKernelArg4SaveERNS_7CStreamE */
/* Demangled: MK::CCLSetKernelArg::Save(MK::CStream&) */
int _ZN2MK15CCLSetKernelArg4SaveERNS_7CStreamE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSF_ENS_9allocatorISH_EESG_EclEOS5_OjOS9_OSB_OSE_OSF_SQ_ */
/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)>::operator()(_cl_context*&&, unsigned int&&, _cl_device_id* const*&&, unsigned long const*&&, unsigned char const**&&, int*&&, int*&&) */
int _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSF_ENS_9allocatorISH_EESG_EclEOS5_OjOS9_OSB_OSE_OSF_SQ_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePFvPvES4_mjPKP7_cl_memPPKvjPKP9_cl_eventPSF_ENS_9allocatorISK_EESJ_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePFvPvES4_mjPKP7_cl_memPPKvjPKP9_cl_eventPSF_ENS_9allocatorISK_EESJ_E7destroyEv(void);

/* Symbol: _ZN2MK26clEnqueueCopyBufferToImageEP17_cl_command_queueP7_cl_memS3_mPKmS5_jPKP9_cl_eventPS7_ */
/* Demangled: MK::clEnqueueCopyBufferToImage(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK26clEnqueueCopyBufferToImageEP17_cl_command_queueP7_cl_memS3_mPKmS5_jPKP9_cl_eventPS7_(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithBinaryC2Ev */
/* Demangled: MK::CCLCreateProgramWithBinary::CCLCreateProgramWithBinary() */
int _ZN2MK26CCLCreateProgramWithBinaryC2Ev(void);

/* Symbol: _ZN2MK22CCLReleaseCommandQueueD1Ev */
/* Demangled: MK::CCLReleaseCommandQueue::~CCLReleaseCommandQueue() */
int _ZN2MK22CCLReleaseCommandQueueD1Ev(void);

/* Symbol: _ZNK2MK16CCLRetainContext11GetDiskUsedEv */
/* Demangled: MK::CCLRetainContext::GetDiskUsed() const */
int _ZNK2MK16CCLRetainContext11GetDiskUsedEv(void);

/* Symbol: _ZN2MK14COutputTensorsC2Ev */
/* Demangled: MK::COutputTensors::COutputTensors() */
int _ZN2MK14COutputTensorsC2Ev(void);

/* Symbol: _ZN2MK24CCLEnqueueUnmapMemObjectC1Ev */
/* Demangled: MK::CCLEnqueueUnmapMemObject::CCLEnqueueUnmapMemObject() */
int _ZN2MK24CCLEnqueueUnmapMemObjectC1Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP10_cl_kernelP11_cl_programPKcPiENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE */
/* Demangled: std::__1::__function::__func<_cl_kernel* (*)(_cl_program*, char const*, int*), std::__1::allocator<_cl_kernel* (*)(_cl_program*, char const*, int*)>, _cl_kernel* (_cl_program*, char const*, int*)>::__clone(std::__1::__function::__base<_cl_kernel* (_cl_program*, char const*, int*)>*) const */
int _ZNKSt3__110__function6__funcIPFP10_cl_kernelP11_cl_programPKcPiENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE(void);

/* Symbol: _ZN2MK26clEnqueueCopyImageToBufferEP17_cl_command_queueP7_cl_memS3_PKmS5_mjPKP9_cl_eventPS7_ */
/* Demangled: MK::clEnqueueCopyImageToBuffer(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK26clEnqueueCopyImageToBufferEP17_cl_command_queueP7_cl_memS3_PKmS5_mjPKP9_cl_eventPS7_(void);

/* Symbol: _ZNK2MK15CCLBuildProgram15CopyConstructToEv */
/* Demangled: MK::CCLBuildProgram::CopyConstructTo() const */
int _ZNK2MK15CCLBuildProgram15CopyConstructToEv(void);

/* Symbol: _ZN2MK14CCLCreateImage7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLCreateImage::Factory(MK::CStream&) */
int _ZN2MK14CCLCreateImage7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK17CCLReleaseContextD2Ev */
/* Demangled: MK::CCLReleaseContext::~CCLReleaseContext() */
int _ZN2MK17CCLReleaseContextD2Ev(void);

/* Symbol: _ZN2MK14CCLCreateImageD1Ev */
/* Demangled: MK::CCLCreateImage::~CCLCreateImage() */
int _ZN2MK14CCLCreateImageD1Ev(void);

/* Symbol: _ZN2MK16CCLReleaseKernelD2Ev */
/* Demangled: MK::CCLReleaseKernel::~CCLReleaseKernel() */
int _ZN2MK16CCLReleaseKernelD2Ev(void);

/* Symbol: _ZN2MK10CCLSVMFree7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLSVMFree::Factory(MK::CStream&) */
int _ZN2MK10CCLSVMFree7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK11CStaticData7FactoryERNS_7CStreamE */
/* Demangled: MK::CStaticData::Factory(MK::CStream&) */
int _ZN2MK11CStaticData7FactoryERNS_7CStreamE(void);

/* Symbol: clEnqueueCopyBufferToImage */
/* Demangled: clEnqueueCopyBufferToImage */
int clEnqueueCopyBufferToImage(void);

/* Symbol: _ZN2MK10CCLCommand20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLCommand::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK10CCLCommand20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK15CCLCreateKernelC1ERKS0_ */
/* Demangled: MK::CCLCreateKernel::CCLCreateKernel(MK::CCLCreateKernel const&) */
int _ZN2MK15CCLCreateKernelC1ERKS0_(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithBinaryD1Ev */
/* Demangled: MK::CCLCreateProgramWithBinary::~CCLCreateProgramWithBinary() */
int _ZN2MK26CCLCreateProgramWithBinaryD1Ev(void);

/* Symbol: _ZN2MK21CCLRetainCommandQueue7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLRetainCommandQueue::Factory(MK::CStream&) */
int _ZN2MK21CCLRetainCommandQueue7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK14COutputTensorsD1Ev */
/* Demangled: MK::COutputTensors::~COutputTensors() */
int _ZN2MK14COutputTensorsD1Ev(void);

/* Symbol: MKProgram_SetBooleanCondition */
/* Demangled: MKProgram_SetBooleanCondition */
int MKProgram_SetBooleanCondition(void);

/* Symbol: _ZN2MK24CCLEnqueueUnmapMemObjectD0Ev */
/* Demangled: MK::CCLEnqueueUnmapMemObject::~CCLEnqueueUnmapMemObject() */
int _ZN2MK24CCLEnqueueUnmapMemObjectD0Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePvjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePvjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK13CInputTensors4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CInputTensors::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK13CInputTensors4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: CmdL_AttachclWaitForEvents */
/* Demangled: CmdL_AttachclWaitForEvents */
int CmdL_AttachclWaitForEvents(void);

/* Symbol: _ZZN2MK14CContextGlobal11GetInstanceEvE12ms_kInstance */
/* Demangled: MK::CContextGlobal::GetInstance()::ms_kInstance */
extern void* _ZZN2MK14CContextGlobal11GetInstanceEvE12ms_kInstance;

/* Symbol: _ZNK2MK14CCLCreateImage3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLCreateImage::Log(MK::CJsonLog&) const */
int _ZNK2MK14CCLCreateImage3LogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK19CCLReleaseMemObject8ms_kRTTIE */
/* Demangled: MK::CCLReleaseMemObject::ms_kRTTI */
extern void* _ZN2MK19CCLReleaseMemObject8ms_kRTTIE;

/* Symbol: _ZN2MK15CCLRetainKernel20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLRetainKernel::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK15CCLRetainKernel20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK16CCLRetainProgram3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLRetainProgram::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK16CCLRetainProgram3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFijPKP9_cl_eventENS_9allocatorIS7_EES6_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(unsigned int, _cl_event* const*), std::__1::allocator<int (*)(unsigned int, _cl_event* const*)>, int (unsigned int, _cl_event* const*)>::destroy() */
int _ZNSt3__110__function6__funcIPFijPKP9_cl_eventENS_9allocatorIS7_EES6_E7destroyEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPbNS_9allocatorIS1_EEE10push_frontEOS1_ */
/* Demangled: std::__1::__split_buffer<bool*, std::__1::allocator<bool*> >::push_front(bool*&&) */
int _ZNSt3__114__split_bufferIPbNS_9allocatorIS1_EEE10push_frontEOS1_(void);

/* Symbol: _ZN2MK19opencl_is_availableEv */
/* Demangled: MK::opencl_is_available() */
int _ZN2MK19opencl_is_availableEv(void);

/* Symbol: _ZNKSt3__110__function6__funcINS_8functionIFimPvEEENS_9allocatorIS5_EEFijS3_EE7__cloneEPNS0_6__baseIS8_EE */
/* Demangled: std::__1::__function::__func<std::__1::function<int (unsigned long, void*)>, std::__1::allocator<std::__1::function<int (unsigned long, void*)> >, int (unsigned int, void*)>::__clone(std::__1::__function::__base<int (unsigned int, void*)>*) const */
int _ZNKSt3__110__function6__funcINS_8functionIFimPvEEENS_9allocatorIS5_EEFijS3_EE7__cloneEPNS0_6__baseIS8_EE(void);

/* Symbol: _ZN2MK13CCLProfileJobD0Ev */
/* Demangled: MK::CCLProfileJob::~CCLProfileJob() */
int _ZN2MK13CCLProfileJobD0Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP13_cl_device_idENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*), std::__1::allocator<int (*)(_cl_device_id*)>, int (_cl_device_id*)>::__clone(std::__1::__function::__base<int (_cl_device_id*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP13_cl_device_idENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void);

/* Symbol: _ZN2MK16CCLEnqueueMarkerC1Ev */
/* Demangled: MK::CCLEnqueueMarker::CCLEnqueueMarker() */
int _ZN2MK16CCLEnqueueMarkerC1Ev(void);

/* Symbol: _ZN2MK17CCLReleaseContext15RegisterFactoryEv */
/* Demangled: MK::CCLReleaseContext::RegisterFactory() */
int _ZN2MK17CCLReleaseContext15RegisterFactoryEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP9_cl_eventjmPvPmENS_9allocatorIS7_EES6_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_event*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_event*, unsigned int, unsigned long, void*, unsigned long*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP9_cl_eventjmPvPmENS_9allocatorIS7_EES6_E7destroyEv(void);

/* Symbol: _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZNSt3__114__split_bufferIPN2MK8CPointerINS1_8CProgramEEENS_9allocatorIS5_EEE10push_frontEOS5_ */
/* Demangled: std::__1::__split_buffer<MK::CPointer<MK::CProgram>*, std::__1::allocator<MK::CPointer<MK::CProgram>*> >::push_front(MK::CPointer<MK::CProgram>*&&) */
int _ZNSt3__114__split_bufferIPN2MK8CPointerINS1_8CProgramEEENS_9allocatorIS5_EEE10push_frontEOS5_(void);

/* Symbol: clEnqueueSVMMemcpy */
/* Demangled: clEnqueueSVMMemcpy */
int clEnqueueSVMMemcpy(void);

/* Symbol: _ZNSt3__16vectorIP9_cl_eventNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<_cl_event*, std::__1::allocator<_cl_event*> >::__push_back_slow_path<_cl_event*>(_cl_event*&&) */
int _ZNSt3__16vectorIP9_cl_eventNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZNK2MK19CCLEnqueueMapBuffer15CopyConstructToEv */
/* Demangled: MK::CCLEnqueueMapBuffer::CopyConstructTo() const */
int _ZNK2MK19CCLEnqueueMapBuffer15CopyConstructToEv(void);

/* Symbol: _ZN2MK24CCLEnqueueUnmapMemObjectC1ERKS0_ */
/* Demangled: MK::CCLEnqueueUnmapMemObject::CCLEnqueueUnmapMemObject(MK::CCLEnqueueUnmapMemObject const&) */
int _ZN2MK24CCLEnqueueUnmapMemObjectC1ERKS0_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcPiENS_9allocatorISE_EESD_EclEOS5_OjOS9_OSB_OSC_ */
/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)>::operator()(_cl_context*&&, unsigned int&&, _cl_device_id* const*&&, char const*&&, int*&&) */
int _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcPiENS_9allocatorISE_EESD_EclEOS5_OjOS9_OSB_OSC_(void);

/* Symbol: _ZN2MK11CUpdateBoolC2ERKS0_ */
/* Demangled: MK::CUpdateBool::CUpdateBool(MK::CUpdateBool const&) */
int _ZN2MK11CUpdateBoolC2ERKS0_(void);

/* Symbol: _ZN2MK33clCreateProgramWithBuiltInKernelsEP11_cl_contextjPKP13_cl_device_idPKcPi */
/* Demangled: MK::clCreateProgramWithBuiltInKernels(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*) */
int _ZN2MK33clCreateProgramWithBuiltInKernelsEP11_cl_contextjPKP13_cl_device_idPKcPi(void);

/* Symbol: _ZN2MK13CInputTensors20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CInputTensors::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK13CInputTensors20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK23clGetEventProfilingInfoEP9_cl_eventjmPvPm */
/* Demangled: MK::clGetEventProfilingInfo(_cl_event*, unsigned int, unsigned long, void*, unsigned long*) */
int _ZN2MK23clGetEventProfilingInfoEP9_cl_eventjmPvPm(void);

/* Symbol: _ZN2MK15CCLRetainKernel7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLRetainKernel::Factory(MK::CStream&) */
int _ZN2MK15CCLRetainKernel7FactoryERNS_7CStreamE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP11_cl_contextPKlmPFvPKcPKvmPvESA_PiENS_9allocatorISF_EESE_E7__cloneEPNS0_6__baseISE_EE */
/* Demangled: std::__1::__function::__func<_cl_context* (*)(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*), std::__1::allocator<_cl_context* (*)(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>, _cl_context* (long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>::__clone(std::__1::__function::__base<_cl_context* (long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>*) const */
int _ZNKSt3__110__function6__funcIPFP11_cl_contextPKlmPFvPKcPKvmPvESA_PiENS_9allocatorISF_EESE_E7__cloneEPNS0_6__baseISE_EE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFPvP11_cl_contextmmjENS_9allocatorIS6_EES5_E7__cloneEv */
/* Demangled: std::__1::__function::__func<void* (*)(_cl_context*, unsigned long, unsigned long, unsigned int), std::__1::allocator<void* (*)(_cl_context*, unsigned long, unsigned long, unsigned int)>, void* (_cl_context*, unsigned long, unsigned long, unsigned int)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFPvP11_cl_contextmmjENS_9allocatorIS6_EES5_E7__cloneEv(void);

/* Symbol: _ZN2MK16CCLEnqueueMarkerD0Ev */
/* Demangled: MK::CCLEnqueueMarker::~CCLEnqueueMarker() */
int _ZN2MK16CCLEnqueueMarkerD0Ev(void);

/* Symbol: _ZNSt3__16vectorIlNS_9allocatorIlEEE6insertIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueENS_11__wrap_iterIS5_EEE4typeENSB_IPKlEES7_S7_ */
/* Demangled: _ZNSt3__16vectorIlNS_9allocatorIlEEE6insertIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueENS_11__wrap_iterIS5_EEE4typeENSB_IPKlEES7_S7_ */
int _ZNSt3__16vectorIlNS_9allocatorIlEEE6insertIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueENS_11__wrap_iterIS5_EEE4typeENSB_IPKlEES7_S7_(void);

/* Symbol: _ZN2MK18CCLEnqueueSVMUnmapC1ERKS0_ */
/* Demangled: MK::CCLEnqueueSVMUnmap::CCLEnqueueSVMUnmap(MK::CCLEnqueueSVMUnmap const&) */
int _ZN2MK18CCLEnqueueSVMUnmapC1ERKS0_(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejmPvmjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E7__cloneEPNS0_6__baseISA_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejmPvmjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E7__cloneEPNS0_6__baseISA_EE(void);

/* Symbol: CmdL_AttachclEnqueueWaitForEvents */
/* Demangled: CmdL_AttachclEnqueueWaitForEvents */
int CmdL_AttachclEnqueueWaitForEvents(void);

/* Symbol: clRetainDevice */
/* Demangled: clRetainDevice */
int clRetainDevice(void);

/* Symbol: _ZN2MK21CCLEnqueueWriteBuffer3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLEnqueueWriteBuffer::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK21CCLEnqueueWriteBuffer3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZN2MK8CCLFlush4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLFlush::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK8CCLFlush4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK19CCLReleaseMemObject15RegisterFactoryEv */
/* Demangled: MK::CCLReleaseMemObject::RegisterFactory() */
int _ZN2MK19CCLReleaseMemObject15RegisterFactoryEv(void);

/* Symbol: _ZNK2MK7CObject7DumpLogERNS_8CJsonLogE */
/* Demangled: MK::CObject::DumpLog(MK::CJsonLog&) const */
int _ZNK2MK7CObject7DumpLogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK19CCLEnqueueMapBuffer8ms_kRTTIE */
/* Demangled: MK::CCLEnqueueMapBuffer::ms_kRTTI */
extern void* _ZN2MK19CCLEnqueueMapBuffer8ms_kRTTIE;

/* Symbol: _ZNK2MK15CCLRetainKernel11GetDiskUsedEv */
/* Demangled: MK::CCLRetainKernel::GetDiskUsed() const */
int _ZNK2MK15CCLRetainKernel11GetDiskUsedEv(void);

/* Symbol: _ZN2MK10CCLSVMFree4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLSVMFree::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK10CCLSVMFree4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK18CCLEnqueueSVMUnmapC2Ev */
/* Demangled: MK::CCLEnqueueSVMUnmap::CCLEnqueueSVMUnmap() */
int _ZN2MK18CCLEnqueueSVMUnmapC2Ev(void);

/* Symbol: _ZN2MK4CJobC2Ev */
/* Demangled: MK::CJob::CJob() */
int _ZN2MK4CJobC2Ev(void);

/* Symbol: _ZN2MK10CCLCommand7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLCommand::Factory(MK::CStream&) */
int _ZN2MK10CCLCommand7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK21CCLRetainCommandQueue3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLRetainCommandQueue::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK21CCLRetainCommandQueue3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPiENS_9allocatorISF_EESE_E7__cloneEPNS0_6__baseISE_EE */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)>::__clone(std::__1::__function::__base<_cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)>*) const */
int _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPiENS_9allocatorISF_EESE_E7__cloneEPNS0_6__baseISE_EE(void);

/* Symbol: clEnqueueMigrateMemObjects */
/* Demangled: clEnqueueMigrateMemObjects */
int clEnqueueMigrateMemObjects(void);

/* Symbol: _ZN2MK20CCLPrepareMemoryCopy4SaveERNS_7CStreamE */
/* Demangled: MK::CCLPrepareMemoryCopy::Save(MK::CStream&) */
int _ZN2MK20CCLPrepareMemoryCopy4SaveERNS_7CStreamE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP9_cl_eventjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_event*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_event*, unsigned int, unsigned long, void*, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_event*, unsigned int, unsigned long, void*, unsigned long*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP9_cl_eventjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void);

/* Symbol: _ZN2MK9CCLFinish7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLFinish::Factory(MK::CStream&) */
int _ZN2MK9CCLFinish7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK18CCLRetainMemObjectD2Ev */
/* Demangled: MK::CCLRetainMemObject::~CCLRetainMemObject() */
int _ZN2MK18CCLRetainMemObjectD2Ev(void);

/* Symbol: _ZN2MK14CCLRetainEventC2ERKS0_ */
/* Demangled: MK::CCLRetainEvent::CCLRetainEvent(MK::CCLRetainEvent const&) */
int _ZN2MK14CCLRetainEventC2ERKS0_(void);

/* Symbol: _ZN2MK18CCLEnqueueSVMUnmap4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLEnqueueSVMUnmap::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK18CCLEnqueueSVMUnmap4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmPKmS8_PmS9_jPKP9_cl_eventPSB_PiENS_9allocatorISH_EESG_E7__cloneEv */
/* Demangled: std::__1::__function::__func<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*), std::__1::allocator<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)>, void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmPKmS8_PmS9_jPKP9_cl_eventPSB_PiENS_9allocatorISH_EESG_E7__cloneEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP11_cl_programjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_program*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_program*, unsigned int, unsigned long, void*, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_program*, unsigned int, unsigned long, void*, unsigned long*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP11_cl_programjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEPNS0_6__baseISC_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEPNS0_6__baseISC_EE(void);

/* Symbol: _ZNSt3__16vectorIN2MK8CPointerINS1_16CCLCreateContextEEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_ */
/* Demangled: void std::__1::vector<MK::CPointer<MK::CCLCreateContext>, std::__1::allocator<MK::CPointer<MK::CCLCreateContext> > >::__push_back_slow_path<MK::CPointer<MK::CCLCreateContext> >(MK::CPointer<MK::CCLCreateContext>&&) */
int _ZNSt3__16vectorIN2MK8CPointerINS1_16CCLCreateContextEEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void);

/* Symbol: CmdL_AttachclCreateImage3D */
/* Demangled: CmdL_AttachclCreateImage3D */
int CmdL_AttachclCreateImage3D(void);

/* Symbol: _ZN2MK16CCLRetainContextD2Ev */
/* Demangled: MK::CCLRetainContext::~CCLRetainContext() */
int _ZN2MK16CCLRetainContextD2Ev(void);

/* Symbol: _ZN2MK18CCLEnqueueSVMUnmapD1Ev */
/* Demangled: MK::CCLEnqueueSVMUnmap::~CCLEnqueueSVMUnmap() */
int _ZN2MK18CCLEnqueueSVMUnmapD1Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP10_cl_kerneljPKvENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, void const*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, void const*)>, int (_cl_kernel*, unsigned int, void const*)>::__clone(std::__1::__function::__base<int (_cl_kernel*, unsigned int, void const*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP10_cl_kerneljPKvENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mmmjPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_EclEOS3_OS5_SH_OmSI_SI_OjOS9_OSA_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, _cl_mem*&&, unsigned long&&, unsigned long&&, unsigned long&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mmmjPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_EclEOS3_OS5_SH_OmSI_SI_OjOS9_OSA_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_S7_EEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEENS_21__tree_const_iteratorIS8_SP_lEERKT_DpOT0_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&>(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_S7_EEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEENS_21__tree_const_iteratorIS8_SP_lEERKT_DpOT0_(void);

/* Symbol: _ZN2MK21clGetCommandQueueInfoEP17_cl_command_queuejmPvPm */
/* Demangled: MK::clGetCommandQueueInfo(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*) */
int _ZN2MK21clGetCommandQueueInfoEP17_cl_command_queuejmPvPm(void);

/* Symbol: _ZN2MK14CCLCreateImage20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLCreateImage::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK14CCLCreateImage20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcPFvS3_PvESA_ENS_9allocatorISE_EESD_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)>, int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcPFvS3_PvESA_ENS_9allocatorISE_EESD_E18destroy_deallocateEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP15_cl_platform_idjmPvPmENS_9allocatorIS7_EES6_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP15_cl_platform_idjmPvPmENS_9allocatorIS7_EES6_EE;

/* Symbol: _ZN2MK11CStaticDataC2Ev */
/* Demangled: MK::CStaticData::CStaticData() */
int _ZN2MK11CStaticDataC2Ev(void);

/* Symbol: _ZN2MK11CMemoryCopy6RecordEPvPKvmPmS4_S4_ */
/* Demangled: MK::CMemoryCopy::Record(void*, void const*, unsigned long, unsigned long*, unsigned long*, unsigned long*) */
int _ZN2MK11CMemoryCopy6RecordEPvPKvmPmS4_S4_(void);

/* Symbol: _ZN2MK18clGetMemObjectInfoEP7_cl_memjmPvPm */
/* Demangled: MK::clGetMemObjectInfo(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*) */
int _ZN2MK18clGetMemObjectInfoEP7_cl_memjmPvPm(void);

/* Symbol: _ZN2MK24CCLEnqueueUnmapMemObject4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLEnqueueUnmapMemObject::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK24CCLEnqueueUnmapMemObject4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFPvP11_cl_contextmmjENS_9allocatorIS6_EES5_E7__cloneEPNS0_6__baseIS5_EE */
/* Demangled: std::__1::__function::__func<void* (*)(_cl_context*, unsigned long, unsigned long, unsigned int), std::__1::allocator<void* (*)(_cl_context*, unsigned long, unsigned long, unsigned int)>, void* (_cl_context*, unsigned long, unsigned long, unsigned int)>::__clone(std::__1::__function::__base<void* (_cl_context*, unsigned long, unsigned long, unsigned int)>*) const */
int _ZNKSt3__110__function6__funcIPFPvP11_cl_contextmmjENS_9allocatorIS6_EES5_E7__cloneEPNS0_6__baseIS5_EE(void);

/* Symbol: MKConfig_IsRecordEnable */
/* Demangled: MKConfig_IsRecordEnable */
int MKConfig_IsRecordEnable(void);

/* Symbol: _ZN2MK24clGetKernelWorkGroupInfoEP10_cl_kernelP13_cl_device_idjmPvPm */
/* Demangled: MK::clGetKernelWorkGroupInfo(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*) */
int _ZN2MK24clGetKernelWorkGroupInfoEP10_cl_kernelP13_cl_device_idjmPvPm(void);

/* Symbol: clGetEventInfo */
/* Demangled: clGetEventInfo */
int clGetEventInfo(void);

/* Symbol: _ZTVN2MK26CCLCreateProgramWithBinaryE */
/* Demangled: vtable for MK::CCLCreateProgramWithBinary */
extern void* _ZTVN2MK26CCLCreateProgramWithBinaryE;

/* Symbol: _ZN2MK21CCLRetainCommandQueueC2Ev */
/* Demangled: MK::CCLRetainCommandQueue::CCLRetainCommandQueue() */
int _ZN2MK21CCLRetainCommandQueueC2Ev(void);

/* Symbol: _ZN2MK15CProfileDataJob6HandleEv */
/* Demangled: MK::CProfileDataJob::Handle() */
int _ZN2MK15CProfileDataJob6HandleEv(void);

/* Symbol: clEnqueueCopyBufferRect */
/* Demangled: clEnqueueCopyBufferRect */
int clEnqueueCopyBufferRect(void);

/* Symbol: _ZN2MK14CCLCreateImage4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLCreateImage::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK14CCLCreateImage4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: MKProgram_AttachCLCreateKernel */
/* Demangled: MKProgram_AttachCLCreateKernel */
int MKProgram_AttachCLCreateKernel(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP10_cl_kerneljmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP10_cl_kerneljmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZN2MK11CStaticDataD1Ev */
/* Demangled: MK::CStaticData::~CStaticData() */
int _ZN2MK11CStaticDataD1Ev(void);

/* Symbol: CmdL_SetCLContextExtendedProp */
/* Demangled: CmdL_SetCLContextExtendedProp */
int CmdL_SetCLContextExtendedProp(void);

/* Symbol: _ZN2MK21CCLCreateCommandQueue20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLCreateCommandQueue::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK21CCLCreateCommandQueue20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK11CStaticDataC2ERKS0_ */
/* Demangled: MK::CStaticData::CStaticData(MK::CStaticData const&) */
int _ZN2MK11CStaticDataC2ERKS0_(void);

/* Symbol: _ZN2MK13CInputTensors3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CInputTensors::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK13CInputTensors3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZN2MK15CProfileDataJobC1EPKcf */
/* Demangled: MK::CProfileDataJob::CProfileDataJob(char const*, float) */
int _ZN2MK15CProfileDataJobC1EPKcf(void);

/* Symbol: _ZN2MK8CProgram7FactoryERNS_7CStreamE */
/* Demangled: MK::CProgram::Factory(MK::CStream&) */
int _ZN2MK8CProgram7FactoryERNS_7CStreamE(void);

/* Symbol: clReleaseDevice */
/* Demangled: clReleaseDevice */
int clReleaseDevice(void);

/* Symbol: _ZN2MK21CCLEnqueueWriteBuffer6RecordEP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventS8_ */
/* Demangled: MK::CCLEnqueueWriteBuffer::Record(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event*) */
int _ZN2MK21CCLEnqueueWriteBuffer6RecordEP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventS8_(void);

/* Symbol: _ZN2MK14CCLRetainEvent4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLRetainEvent::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK14CCLRetainEvent4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK28clEnqueueBarrierWithWaitListEP17_cl_command_queuejPKP9_cl_eventPS3_ */
/* Demangled: MK::clEnqueueBarrierWithWaitList(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK28clEnqueueBarrierWithWaitListEP17_cl_command_queuejPKP9_cl_eventPS3_(void);

/* Symbol: _ZN2MK21CCLRetainCommandQueueD1Ev */
/* Demangled: MK::CCLRetainCommandQueue::~CCLRetainCommandQueue() */
int _ZN2MK21CCLRetainCommandQueueD1Ev(void);

/* Symbol: _ZNK2MK11CCLSVMAlloc15CopyConstructToEv */
/* Demangled: MK::CCLSVMAlloc::CopyConstructTo() const */
int _ZNK2MK11CCLSVMAlloc15CopyConstructToEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFbiPvENS_9allocatorIS4_EES3_E7__cloneEPNS0_6__baseIS3_EE */
/* Demangled: std::__1::__function::__func<bool (*)(int, void*), std::__1::allocator<bool (*)(int, void*)>, bool (int, void*)>::__clone(std::__1::__function::__base<bool (int, void*)>*) const */
int _ZNKSt3__110__function6__funcIPFbiPvENS_9allocatorIS4_EES3_E7__cloneEPNS0_6__baseIS3_EE(void);

/* Symbol: _ZN2MK20CCLEnqueueReadBufferD2Ev */
/* Demangled: MK::CCLEnqueueReadBuffer::~CCLEnqueueReadBuffer() */
int _ZN2MK20CCLEnqueueReadBufferD2Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPiENS_9allocatorISF_EESE_E7destroyEv */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPiENS_9allocatorISF_EESE_E7destroyEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmPKmS8_PmS9_jPKP9_cl_eventPSB_PiENS_9allocatorISH_EESG_EE */
/* Demangled: vtable for std::__1::__function::__func<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*), std::__1::allocator<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)>, void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmPKmS8_PmS9_jPKP9_cl_eventPSB_PiENS_9allocatorISH_EESG_EE;

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP7_cl_memPFvS3_PvES4_ENS_9allocatorIS8_EES7_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_mem*, void (*)(_cl_mem*, void*), void*), std::__1::allocator<int (*)(_cl_mem*, void (*)(_cl_mem*, void*), void*)>, int (_cl_mem*, void (*)(_cl_mem*, void*), void*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP7_cl_memPFvS3_PvES4_ENS_9allocatorIS8_EES7_EE;

/* Symbol: _ZN2MK13CInputTensorsD2Ev */
/* Demangled: MK::CInputTensors::~CInputTensors() */
int _ZN2MK13CInputTensorsD2Ev(void);

/* Symbol: CmdL_AttachclCreateUserEvent */
/* Demangled: CmdL_AttachclCreateUserEvent */
int CmdL_AttachclCreateUserEvent(void);

/* Symbol: clRetainEvent */
/* Demangled: clRetainEvent */
int clRetainEvent(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueENS_9allocatorIS5_EES4_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*), std::__1::allocator<int (*)(_cl_command_queue*)>, int (_cl_command_queue*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK22CCLReleaseCommandQueueC1Ev */
/* Demangled: MK::CCLReleaseCommandQueue::CCLReleaseCommandQueue() */
int _ZN2MK22CCLReleaseCommandQueueC1Ev(void);

/* Symbol: _ZN2MK23CCLEnqueueNDRangeKernel3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLEnqueueNDRangeKernel::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK23CCLEnqueueNDRangeKernel3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idPKmPiENS_9allocatorISC_EESB_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long const*, int*), std::__1::allocator<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long const*, int*)>, _cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long const*, int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idPKmPiENS_9allocatorISC_EESB_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__16vectorImNS_9allocatorImEEE8__appendEm */
/* Demangled: std::__1::vector<unsigned long, std::__1::allocator<unsigned long> >::__append(unsigned long) */
int _ZNSt3__16vectorImNS_9allocatorImEEE8__appendEm(void);

/* Symbol: _ZN2MK11CUpdateBoolD2Ev */
/* Demangled: MK::CUpdateBool::~CUpdateBool() */
int _ZN2MK11CUpdateBoolD2Ev(void);

/* Symbol: CmdL_AttachclUnloadCompiler */
/* Demangled: CmdL_AttachclUnloadCompiler */
int CmdL_AttachclUnloadCompiler(void);

/* Symbol: _ZN2MK15clRetainProgramEP11_cl_program */
/* Demangled: MK::clRetainProgram(_cl_program*) */
int _ZN2MK15clRetainProgramEP11_cl_program(void);

/* Symbol: _ZN2MK17CCLReleaseContextC2Ev */
/* Demangled: MK::CCLReleaseContext::CCLReleaseContext() */
int _ZN2MK17CCLReleaseContextC2Ev(void);

/* Symbol: _ZN2MK16CCLRetainProgram8ms_kRTTIE */
/* Demangled: MK::CCLRetainProgram::ms_kRTTI */
extern void* _ZN2MK16CCLRetainProgram8ms_kRTTIE;

/* Symbol: _ZN2MK13CInputTensorsC2ERKS0_ */
/* Demangled: MK::CInputTensors::CInputTensors(MK::CInputTensors const&) */
int _ZN2MK13CInputTensorsC2ERKS0_(void);

/* Symbol: _ZN2MK14CCLCreateImageC1Ev */
/* Demangled: MK::CCLCreateImage::CCLCreateImage() */
int _ZN2MK14CCLCreateImageC1Ev(void);

/* Symbol: _ZNK2MK21CCLCreateCommandQueue13GetMemoryUsedEv */
/* Demangled: MK::CCLCreateCommandQueue::GetMemoryUsed() const */
int _ZNK2MK21CCLCreateCommandQueue13GetMemoryUsedEv(void);

/* Symbol: _ZN2MK16CCLReleaseKernelC2Ev */
/* Demangled: MK::CCLReleaseKernel::CCLReleaseKernel() */
int _ZN2MK16CCLReleaseKernelC2Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcPiENS_9allocatorISE_EESD_E7destroyEv */
/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcPiENS_9allocatorISE_EESD_E7destroyEv(void);

/* Symbol: _ZN2MK4CLog3LogEPKcz */
/* Demangled: MK::CLog::Log(char const*, ...) */
int _ZN2MK4CLog3LogEPKcz(void);

/* Symbol: _ZN2MK11CThreadJobQ15thread_functionEPv */
/* Demangled: MK::CThreadJobQ::thread_function(void*) */
int _ZN2MK11CThreadJobQ15thread_functionEPv(void);

/* Symbol: _ZN2MK14COutputTensorsC1Ev */
/* Demangled: MK::COutputTensors::COutputTensors() */
int _ZN2MK14COutputTensorsC1Ev(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithBinaryC1Ev */
/* Demangled: MK::CCLCreateProgramWithBinary::CCLCreateProgramWithBinary() */
int _ZN2MK26CCLCreateProgramWithBinaryC1Ev(void);

/* Symbol: _ZN2MK11CStaticData8AllocateEm */
/* Demangled: MK::CStaticData::Allocate(unsigned long) */
int _ZN2MK11CStaticData8AllocateEm(void);

/* Symbol: _ZN2MK20CCLPrepareMemoryCopy4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLPrepareMemoryCopy::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK20CCLPrepareMemoryCopy4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK22CCLReleaseCommandQueueD0Ev */
/* Demangled: MK::CCLReleaseCommandQueue::~CCLReleaseCommandQueue() */
int _ZN2MK22CCLReleaseCommandQueueD0Ev(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithBinary15RegisterFactoryEv */
/* Demangled: MK::CCLCreateProgramWithBinary::RegisterFactory() */
int _ZN2MK26CCLCreateProgramWithBinary15RegisterFactoryEv(void);

/* Symbol: _ZTVN2MK27CCLEnqueueCopyBufferToImageE */
/* Demangled: vtable for MK::CCLEnqueueCopyBufferToImage */
extern void* _ZTVN2MK27CCLEnqueueCopyBufferToImageE;

/* Symbol: _ZN2MK19CCLProfileKernelJobC1ERKS0_ */
/* Demangled: MK::CCLProfileKernelJob::CCLProfileKernelJob(MK::CCLProfileKernelJob const&) */
int _ZN2MK19CCLProfileKernelJobC1ERKS0_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7destroyEv(void);

/* Symbol: _ZNK2MK8CCommand15CopyConstructToEv */
/* Demangled: MK::CCommand::CopyConstructTo() const */
int _ZNK2MK8CCommand15CopyConstructToEv(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithSource7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLCreateProgramWithSource::Factory(MK::CStream&) */
int _ZN2MK26CCLCreateProgramWithSource7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK17CCLReleaseContextD1Ev */
/* Demangled: MK::CCLReleaseContext::~CCLReleaseContext() */
int _ZN2MK17CCLReleaseContextD1Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcPFvS3_PvESA_ENS_9allocatorISE_EESD_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)>, int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcPFvS3_PvESA_ENS_9allocatorISE_EESD_E7destroyEv(void);

/* Symbol: _ZNSt3__112__deque_baseIN2MK8CPointerINS1_8CProgramEEENS_9allocatorIS4_EEE5clearEv */
/* Demangled: std::__1::__deque_base<MK::CPointer<MK::CProgram>, std::__1::allocator<MK::CPointer<MK::CProgram> > >::clear() */
int _ZNSt3__112__deque_baseIN2MK8CPointerINS1_8CProgramEEENS_9allocatorIS4_EEE5clearEv(void);

/* Symbol: _ZNK2MK8CProgram3LogERNS_8CJsonLogE */
/* Demangled: MK::CProgram::Log(MK::CJsonLog&) const */
int _ZNK2MK8CProgram3LogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK18clEnqueueCopyImageEP17_cl_command_queueP7_cl_memS3_PKmS5_S5_jPKP9_cl_eventPS7_ */
/* Demangled: MK::clEnqueueCopyImage(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK18clEnqueueCopyImageEP17_cl_command_queueP7_cl_memS3_PKmS5_S5_jPKP9_cl_eventPS7_(void);

/* Symbol: _ZN2MK14CCLCreateImageD0Ev */
/* Demangled: MK::CCLCreateImage::~CCLCreateImage() */
int _ZN2MK14CCLCreateImageD0Ev(void);

/* Symbol: _ZN2MK21CCLCreateCommandQueueC1ERKS0_ */
/* Demangled: MK::CCLCreateCommandQueue::CCLCreateCommandQueue(MK::CCLCreateCommandQueue const&) */
int _ZN2MK21CCLCreateCommandQueueC1ERKS0_(void);

/* Symbol: _ZN2MK16CCLReleaseKernelD1Ev */
/* Demangled: MK::CCLReleaseKernel::~CCLReleaseKernel() */
int _ZN2MK16CCLReleaseKernelD1Ev(void);

/* Symbol: CmdL_AttachclCreateBuffer */
/* Demangled: CmdL_AttachclCreateBuffer */
int CmdL_AttachclCreateBuffer(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithBinaryD0Ev */
/* Demangled: MK::CCLCreateProgramWithBinary::~CCLCreateProgramWithBinary() */
int _ZN2MK26CCLCreateProgramWithBinaryD0Ev(void);

/* Symbol: _ZN2MK14COutputTensorsD0Ev */
/* Demangled: MK::COutputTensors::~COutputTensors() */
int _ZN2MK14COutputTensorsD0Ev(void);

/* Symbol: _ZN2MK11CCLSVMAllocD2Ev */
/* Demangled: MK::CCLSVMAlloc::~CCLSVMAlloc() */
int _ZN2MK11CCLSVMAllocD2Ev(void);

/* Symbol: MKProgram_DetachCommand */
/* Demangled: MKProgram_DetachCommand */
int MKProgram_DetachCommand(void);

/* Symbol: _ZN2MK16clReleaseSamplerEP11_cl_sampler */
/* Demangled: MK::clReleaseSampler(_cl_sampler*) */
int _ZN2MK16clReleaseSamplerEP11_cl_sampler(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiP7_cl_memEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, _cl_mem*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, _cl_mem*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, _cl_mem*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, _cl_mem*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiP7_cl_memEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void);

/* Symbol: _ZN2MK15CCLImportMemory3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLImportMemory::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK15CCLImportMemory3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZNK2MK15CCLRetainKernel15CopyConstructToEv */
/* Demangled: MK::CCLRetainKernel::CopyConstructTo() const */
int _ZNK2MK15CCLRetainKernel15CopyConstructToEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP7_cl_memS3_mjPKvPiENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_mem*, unsigned long, unsigned int, void const*, int*), std::__1::allocator<_cl_mem* (*)(_cl_mem*, unsigned long, unsigned int, void const*, int*)>, _cl_mem* (_cl_mem*, unsigned long, unsigned int, void const*, int*)>::__clone(std::__1::__function::__base<_cl_mem* (_cl_mem*, unsigned long, unsigned int, void const*, int*)>*) const */
int _ZNKSt3__110__function6__funcIPFP7_cl_memS3_mjPKvPiENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE(void);

/* Symbol: _ZNK2MK13CDummyCommand15CopyConstructToEv */
/* Demangled: MK::CDummyCommand::CopyConstructTo() const */
int _ZNK2MK13CDummyCommand15CopyConstructToEv(void);

/* Symbol: CmdL_SetFunc4Fd */
/* Demangled: CmdL_SetFunc4Fd */
int CmdL_SetFunc4Fd(void);

/* Symbol: _ZNK2MK15CCLCreateBuffer13GetMemoryUsedEv */
/* Demangled: MK::CCLCreateBuffer::GetMemoryUsed() const */
int _ZNK2MK15CCLCreateBuffer13GetMemoryUsedEv(void);

/* Symbol: MKProgram_AttachCLFlush */
/* Demangled: MKProgram_AttachCLFlush */
int MKProgram_AttachCLFlush(void);

/* Symbol: _ZNK2MK24CCLEnqueueUnmapMemObject11GetDiskUsedEv */
/* Demangled: MK::CCLEnqueueUnmapMemObject::GetDiskUsed() const */
int _ZNK2MK24CCLEnqueueUnmapMemObject11GetDiskUsedEv(void);

/* Symbol: _ZNK2MK16CCLWaitForEvents3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLWaitForEvents::Log(MK::CJsonLog&) const */
int _ZNK2MK16CCLWaitForEvents3LogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK11CUpdateBool7FactoryERNS_7CStreamE */
/* Demangled: MK::CUpdateBool::Factory(MK::CStream&) */
int _ZN2MK11CUpdateBool7FactoryERNS_7CStreamE(void);

/* Symbol: clEnqueueSVMFree */
/* Demangled: clEnqueueSVMFree */
int clEnqueueSVMFree(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithSourceC2ERKS0_ */
/* Demangled: MK::CCLCreateProgramWithSource::CCLCreateProgramWithSource(MK::CCLCreateProgramWithSource const&) */
int _ZN2MK26CCLCreateProgramWithSourceC2ERKS0_(void);

/* Symbol: _ZNK2MK16CCLEnqueueMarker3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLEnqueueMarker::Log(MK::CJsonLog&) const */
int _ZNK2MK16CCLEnqueueMarker3LogERNS_8CJsonLogE(void);

/* Symbol: MKUtils_MoveCommandsFrom */
/* Demangled: MKUtils_MoveCommandsFrom */
int MKUtils_MoveCommandsFrom(void);

/* Symbol: CmdL_AttachclEnqueueReadImage */
/* Demangled: CmdL_AttachclEnqueueReadImage */
int CmdL_AttachclEnqueueReadImage(void);

/* Symbol: clCreateProgramWithBuiltInKernels */
/* Demangled: clCreateProgramWithBuiltInKernels */
int clCreateProgramWithBuiltInKernels(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP7_cl_memPFvS3_PvES4_ENS_9allocatorIS8_EES7_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*, void (*)(_cl_mem*, void*), void*), std::__1::allocator<int (*)(_cl_mem*, void (*)(_cl_mem*, void*), void*)>, int (_cl_mem*, void (*)(_cl_mem*, void*), void*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP7_cl_memPFvS3_PvES4_ENS_9allocatorIS8_EES7_E7destroyEv(void);

/* Symbol: clGetEventProfilingInfo */
/* Demangled: clGetEventProfilingInfo */
int clGetEventProfilingInfo(void);

/* Symbol: _Z21handleFlushFinishNULLP17_cl_command_queuei */
/* Demangled: handleFlushFinishNULL(_cl_command_queue*, int) */
int _Z21handleFlushFinishNULLP17_cl_command_queuei(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP10_cl_kerneljmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP10_cl_kerneljmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK11CMemoryCopy3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CMemoryCopy::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK11CMemoryCopy3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZN2MK7CStream13ms_szTopLevelE */
/* Demangled: MK::CStream::ms_szTopLevel */
extern void* _ZN2MK7CStream13ms_szTopLevelE;

/* Symbol: CmdL_AttachclSVMAlloc */
/* Demangled: CmdL_AttachclSVMAlloc */
int CmdL_AttachclSVMAlloc(void);

/* Symbol: _ZN2MK21CCLEnqueueWriteBuffer4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLEnqueueWriteBuffer::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK21CCLEnqueueWriteBuffer4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNK2MK11CCLSVMAlloc11GetDiskUsedEv */
/* Demangled: MK::CCLSVMAlloc::GetDiskUsed() const */
int _ZNK2MK11CCLSVMAlloc11GetDiskUsedEv(void);

/* Symbol: _ZN2MK13CCLProfileJob6HandleEv */
/* Demangled: MK::CCLProfileJob::Handle() */
int _ZN2MK13CCLProfileJob6HandleEv(void);

/* Symbol: _ZN2MK7CStream6InsertEPNS_7CObjectE */
/* Demangled: MK::CStream::Insert(MK::CObject*) */
int _ZN2MK7CStream6InsertEPNS_7CObjectE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void);

/* Symbol: _ZN2MK18CCLRetainMemObjectC2Ev */
/* Demangled: MK::CCLRetainMemObject::CCLRetainMemObject() */
int _ZN2MK18CCLRetainMemObjectC2Ev(void);

/* Symbol: _ZN2MK13CCLProfileJob8ms_kRTTIE */
/* Demangled: MK::CCLProfileJob::ms_kRTTI */
extern void* _ZN2MK13CCLProfileJob8ms_kRTTIE;

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejmPvPmENS_9allocatorIS7_EES6_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejmPvPmENS_9allocatorIS7_EES6_E7__cloneEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFimPvENS_9allocatorIS4_EES3_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(unsigned long, void*), std::__1::allocator<int (*)(unsigned long, void*)>, int (unsigned long, void*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFimPvENS_9allocatorIS4_EES3_E7__cloneEv(void);

/* Symbol: clCreateProgramWithBinary */
/* Demangled: clCreateProgramWithBinary */
int clCreateProgramWithBinary(void);

/* Symbol: _ZN2MK18CCLEnqueueSVMUnmapC1Ev */
/* Demangled: MK::CCLEnqueueSVMUnmap::CCLEnqueueSVMUnmap() */
int _ZN2MK18CCLEnqueueSVMUnmapC1Ev(void);

/* Symbol: _ZTVN2MK15CCLBuildProgramE */
/* Demangled: vtable for MK::CCLBuildProgram */
extern void* _ZTVN2MK15CCLBuildProgramE;

/* Symbol: _ZN2MK15CCLReleaseEvent8ms_kRTTIE */
/* Demangled: MK::CCLReleaseEvent::ms_kRTTI */
extern void* _ZN2MK15CCLReleaseEvent8ms_kRTTIE;

/* Symbol: _ZN2MK16CCLRetainContextC2Ev */
/* Demangled: MK::CCLRetainContext::CCLRetainContext() */
int _ZN2MK16CCLRetainContextC2Ev(void);

/* Symbol: _ZNK2MK16CCLEnqueueSVMMap13GetMemoryUsedEv */
/* Demangled: MK::CCLEnqueueSVMMap::GetMemoryUsed() const */
int _ZNK2MK16CCLEnqueueSVMMap13GetMemoryUsedEv(void);

/* Symbol: _ZN2MK20CCLEnqueueReadBufferC1ERKS0_ */
/* Demangled: MK::CCLEnqueueReadBuffer::CCLEnqueueReadBuffer(MK::CCLEnqueueReadBuffer const&) */
int _ZN2MK20CCLEnqueueReadBufferC1ERKS0_(void);

/* Symbol: _ZN2MK11CCLSVMAlloc4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLSVMAlloc::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK11CCLSVMAlloc4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP13_cl_device_idPKljPS3_PjENS_9allocatorIS9_EES8_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*), std::__1::allocator<int (*)(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)>, int (_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP13_cl_device_idPKljPS3_PjENS_9allocatorIS9_EES8_EE;

/* Symbol: _ZN2MK7CStream9RemoveAllEv */
/* Demangled: MK::CStream::RemoveAll() */
int _ZN2MK7CStream9RemoveAllEv(void);

/* Symbol: _ZN2MK15CCLImportMemory4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLImportMemory::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK15CCLImportMemory4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZTVN2MK16CCLWaitForEventsE */
/* Demangled: vtable for MK::CCLWaitForEvents */
extern void* _ZTVN2MK16CCLWaitForEventsE;

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: _ZNK2MK14CCLCreateImage11GetDiskUsedEv */
/* Demangled: MK::CCLCreateImage::GetDiskUsed() const */
int _ZNK2MK14CCLCreateImage11GetDiskUsedEv(void);

/* Symbol: _ZNK2MK20CCLEnqueueReadBuffer13GetMemoryUsedEv */
/* Demangled: MK::CCLEnqueueReadBuffer::GetMemoryUsed() const */
int _ZNK2MK20CCLEnqueueReadBuffer13GetMemoryUsedEv(void);

/* Symbol: _ZN2MK18CCLRetainMemObjectD1Ev */
/* Demangled: MK::CCLRetainMemObject::~CCLRetainMemObject() */
int _ZN2MK18CCLRetainMemObjectD1Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E7__cloneEv(void);

/* Symbol: clCreateSubDevices */
/* Demangled: clCreateSubDevices */
int clCreateSubDevices(void);

/* Symbol: _ZN2MK8CCommand4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCommand::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK8CCommand4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK16CCLRetainContextD1Ev */
/* Demangled: MK::CCLRetainContext::~CCLRetainContext() */
int _ZN2MK16CCLRetainContextD1Ev(void);

/* Symbol: _ZN2MK18CCLEnqueueSVMUnmapD0Ev */
/* Demangled: MK::CCLEnqueueSVMUnmap::~CCLEnqueueSVMUnmap() */
int _ZN2MK18CCLEnqueueSVMUnmapD0Ev(void);

/* Symbol: _ZNK2MK18CCLEnqueueSVMUnmap15CopyConstructToEv */
/* Demangled: MK::CCLEnqueueSVMUnmap::CopyConstructTo() const */
int _ZNK2MK18CCLEnqueueSVMUnmap15CopyConstructToEv(void);

/* Symbol: _ZN2MK11CStaticDataC1Ev */
/* Demangled: MK::CStaticData::CStaticData() */
int _ZN2MK11CStaticDataC1Ev(void);

/* Symbol: clGetDeviceInfo */
/* Demangled: clGetDeviceInfo */
int clGetDeviceInfo(void);

/* Symbol: _ZN2MK19CCLProfileKernelJobC1EP11_cl_programS2_P10_cl_kernelS4_P9_cl_event */
/* Demangled: MK::CCLProfileKernelJob::CCLProfileKernelJob(_cl_program*, _cl_program*, _cl_kernel*, _cl_kernel*, _cl_event*) */
int _ZN2MK19CCLProfileKernelJobC1EP11_cl_programS2_P10_cl_kernelS4_P9_cl_event(void);

/* Symbol: _ZN2MK21CCLEnqueueWriteBufferC1ERKS0_ */
/* Demangled: MK::CCLEnqueueWriteBuffer::CCLEnqueueWriteBuffer(MK::CCLEnqueueWriteBuffer const&) */
int _ZN2MK21CCLEnqueueWriteBufferC1ERKS0_(void);

/* Symbol: _ZNK2MK20CCLEnqueueMemoryCopy13GetMemoryUsedEv */
/* Demangled: MK::CCLEnqueueMemoryCopy::GetMemoryUsed() const */
int _ZNK2MK20CCLEnqueueMemoryCopy13GetMemoryUsedEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePFvPvES4_mjPKP7_cl_memPPKvjPKP9_cl_eventPSF_ENS_9allocatorISK_EESJ_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePFvPvES4_mjPKP7_cl_memPPKvjPKP9_cl_eventPSF_ENS_9allocatorISK_EESJ_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP15_cl_platform_idjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)>::operator()(_cl_platform_id*&&, unsigned int&&, unsigned long&&, void*&&, unsigned long*&&) */
int _ZNSt3__110__function6__funcIPFiP15_cl_platform_idjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_(void);

/* Symbol: _ZN2MK12CDynamicDataD2Ev */
/* Demangled: MK::CDynamicData::~CDynamicData() */
int _ZN2MK12CDynamicDataD2Ev(void);

/* Symbol: _ZNK2MK8CVersionltERKS0_ */
/* Demangled: MK::CVersion::operator<(MK::CVersion const&) const */
int _ZNK2MK8CVersionltERKS0_(void);

/* Symbol: _ZN2MK16CCLRetainContext6RecordEP11_cl_context */
/* Demangled: MK::CCLRetainContext::Record(_cl_context*) */
int _ZN2MK16CCLRetainContext6RecordEP11_cl_context(void);

/* Symbol: _ZN2MK15CCLImportMemoryD2Ev */
/* Demangled: MK::CCLImportMemory::~CCLImportMemory() */
int _ZN2MK15CCLImportMemoryD2Ev(void);

/* Symbol: _ZN2MK20CCLPrepareMemoryCopy8ms_kRTTIE */
/* Demangled: MK::CCLPrepareMemoryCopy::ms_kRTTI */
extern void* _ZN2MK20CCLPrepareMemoryCopy8ms_kRTTIE;

/* Symbol: _ZN2MK16CCLEnqueueSVMMap15RegisterFactoryEv */
/* Demangled: MK::CCLEnqueueSVMMap::RegisterFactory() */
int _ZN2MK16CCLEnqueueSVMMap15RegisterFactoryEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP13_cl_device_idPKljPS3_PjENS_9allocatorIS9_EES8_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*), std::__1::allocator<int (*)(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)>, int (_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP13_cl_device_idPKljPS3_PjENS_9allocatorIS9_EES8_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFviPvENS_9allocatorIS4_EES3_E7destroyEv */
/* Demangled: std::__1::__function::__func<void (*)(int, void*), std::__1::allocator<void (*)(int, void*)>, void (int, void*)>::destroy() */
int _ZNSt3__110__function6__funcIPFviPvENS_9allocatorIS4_EES3_E7destroyEv(void);

/* Symbol: _ZN2MK14CCLCreateImage15RegisterFactoryEv */
/* Demangled: MK::CCLCreateImage::RegisterFactory() */
int _ZN2MK14CCLCreateImage15RegisterFactoryEv(void);

/* Symbol: _ZNSt3__16vectorIP10_cl_kernelNS_9allocatorIS2_EEE8__appendEm */
/* Demangled: std::__1::vector<_cl_kernel*, std::__1::allocator<_cl_kernel*> >::__append(unsigned long) */
int _ZNSt3__16vectorIP10_cl_kernelNS_9allocatorIS2_EEE8__appendEm(void);

/* Symbol: _ZN2MK24CCLEnqueueUnmapMemObject7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueUnmapMemObject::Factory(MK::CStream&) */
int _ZN2MK24CCLEnqueueUnmapMemObject7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK18CCLEnqueueSVMUnmap8ms_kRTTIE */
/* Demangled: MK::CCLEnqueueSVMUnmap::ms_kRTTI */
extern void* _ZN2MK18CCLEnqueueSVMUnmap8ms_kRTTIE;

/* Symbol: _ZN2MK21CCLRetainCommandQueueC1Ev */
/* Demangled: MK::CCLRetainCommandQueue::CCLRetainCommandQueue() */
int _ZN2MK21CCLRetainCommandQueueC1Ev(void);

/* Symbol: _ZN2MK19CCLEnqueueMapBuffer20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueMapBuffer::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK19CCLEnqueueMapBuffer20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFPvP11_cl_contextmmjENS_9allocatorIS6_EES5_EclEOS4_OmSB_Oj */
/* Demangled: std::__1::__function::__func<void* (*)(_cl_context*, unsigned long, unsigned long, unsigned int), std::__1::allocator<void* (*)(_cl_context*, unsigned long, unsigned long, unsigned int)>, void* (_cl_context*, unsigned long, unsigned long, unsigned int)>::operator()(_cl_context*&&, unsigned long&&, unsigned long&&, unsigned int&&) */
int _ZNSt3__110__function6__funcIPFPvP11_cl_contextmmjENS_9allocatorIS6_EES5_EclEOS4_OmSB_Oj(void);

/* Symbol: _ZNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmPKmS8_PmS9_jPKP9_cl_eventPSB_PiENS_9allocatorISH_EESG_E7destroyEv */
/* Demangled: std::__1::__function::__func<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*), std::__1::allocator<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)>, void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmPKmS8_PmS9_jPKP9_cl_eventPSB_PiENS_9allocatorISH_EESG_E7destroyEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EE;

/* Symbol: _ZN2MK7CStream18WriteDynamicStringEPKc */
/* Demangled: MK::CStream::WriteDynamicString(char const*) */
int _ZN2MK7CStream18WriteDynamicStringEPKc(void);

/* Symbol: _ZNK2MK15CCLCreateBuffer11GetDiskUsedEv */
/* Demangled: MK::CCLCreateBuffer::GetDiskUsed() const */
int _ZNK2MK15CCLCreateBuffer11GetDiskUsedEv(void);

/* Symbol: _ZN2MK20CCLEnqueueReadBufferC2Ev */
/* Demangled: MK::CCLEnqueueReadBuffer::CCLEnqueueReadBuffer() */
int _ZN2MK20CCLEnqueueReadBufferC2Ev(void);

/* Symbol: _ZN2MK17CCLReleaseProgram4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLReleaseProgram::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK17CCLReleaseProgram4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK10CCLSVMFreeC2ERKS0_ */
/* Demangled: MK::CCLSVMFree::CCLSVMFree(MK::CCLSVMFree const&) */
int _ZN2MK10CCLSVMFreeC2ERKS0_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP9_cl_eventjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_event*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_event*, unsigned int, unsigned long, void*, unsigned long*)>::operator()(_cl_event*&&, unsigned int&&, unsigned long&&, void*&&, unsigned long*&&) */
int _ZNSt3__110__function6__funcIPFiP9_cl_eventjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_(void);

/* Symbol: _ZN2MK11CStaticDataD0Ev */
/* Demangled: MK::CStaticData::~CStaticData() */
int _ZN2MK11CStaticDataD0Ev(void);

/* Symbol: _ZNK2MK13CInputTensors15CopyConstructToEv */
/* Demangled: MK::CInputTensors::CopyConstructTo() const */
int _ZNK2MK13CInputTensors15CopyConstructToEv(void);

/* Symbol: _ZN2MK11CMemoryCopy20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CMemoryCopy::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK11CMemoryCopy20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZNK2MK15CCLCreateKernel13GetMemoryUsedEv */
/* Demangled: MK::CCLCreateKernel::GetMemoryUsed() const */
int _ZNK2MK15CCLCreateKernel13GetMemoryUsedEv(void);

/* Symbol: _ZN2MK13CInputTensorsC2Ev */
/* Demangled: MK::CInputTensors::CInputTensors() */
int _ZN2MK13CInputTensorsC2Ev(void);

/* Symbol: _ZN2MK11CCLSVMAlloc7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLSVMAlloc::Factory(MK::CStream&) */
int _ZN2MK11CCLSVMAlloc7FactoryERNS_7CStreamE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE;

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE;

/* Symbol: _ZN2MK16CCLCreateContextD2Ev */
/* Demangled: MK::CCLCreateContext::~CCLCreateContext() */
int _ZN2MK16CCLCreateContextD2Ev(void);

/* Symbol: _ZNK2MK20CCLEnqueueReadBuffer15CopyConstructToEv */
/* Demangled: MK::CCLEnqueueReadBuffer::CopyConstructTo() const */
int _ZNK2MK20CCLEnqueueReadBuffer15CopyConstructToEv(void);

/* Symbol: _ZNK2MK17CCLReleaseProgram13GetMemoryUsedEv */
/* Demangled: MK::CCLReleaseProgram::GetMemoryUsed() const */
int _ZNK2MK17CCLReleaseProgram13GetMemoryUsedEv(void);

/* Symbol: _ZN2MK21CCLRetainCommandQueueD0Ev */
/* Demangled: MK::CCLRetainCommandQueue::~CCLRetainCommandQueue() */
int _ZN2MK21CCLRetainCommandQueueD0Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcPiENS_9allocatorISE_EESD_E7__cloneEv */
/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcPiENS_9allocatorISE_EESD_E7__cloneEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS8_PiENS_9allocatorISE_EESD_E7__cloneEv */
/* Demangled: std::__1::__function::__func<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*), std::__1::allocator<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)>, void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS8_PiENS_9allocatorISE_EESD_E7__cloneEv(void);

/* Symbol: _ZN2MK25CCLCreateKernelsInProgram15RegisterFactoryEv */
/* Demangled: MK::CCLCreateKernelsInProgram::RegisterFactory() */
int _ZN2MK25CCLCreateKernelsInProgram15RegisterFactoryEv(void);

/* Symbol: _ZN2MK20CCLEnqueueReadBufferD1Ev */
/* Demangled: MK::CCLEnqueueReadBuffer::~CCLEnqueueReadBuffer() */
int _ZN2MK20CCLEnqueueReadBufferD1Ev(void);

/* Symbol: _ZN2MK15CCLSetKernelArg4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLSetKernelArg::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK15CCLSetKernelArg4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK4CJob8ms_kRTTIE */
/* Demangled: MK::CJob::ms_kRTTI */
extern void* _ZN2MK4CJob8ms_kRTTIE;

/* Symbol: _ZN2MK5CBool8ms_kRTTIE */
/* Demangled: MK::CBool::ms_kRTTI */
extern void* _ZN2MK5CBool8ms_kRTTIE;

/* Symbol: _ZN2MK7CObject12ms_pkFactoryE */
/* Demangled: MK::CObject::ms_pkFactory */
extern void* _ZN2MK7CObject12ms_pkFactoryE;

/* Symbol: _ZN2MK8CCommand7FactoryERNS_7CStreamE */
/* Demangled: MK::CCommand::Factory(MK::CStream&) */
int _ZN2MK8CCommand7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK16CCLWaitForEvents4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLWaitForEvents::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK16CCLWaitForEvents4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP11_cl_contextPKljPKP13_cl_device_idPFvPKcPKvmPvESE_PiENS_9allocatorISJ_EESI_E7__cloneEv */
/* Demangled: std::__1::__function::__func<_cl_context* (*)(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*), std::__1::allocator<_cl_context* (*)(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>, _cl_context* (long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFP11_cl_contextPKljPKP13_cl_device_idPFvPKcPKvmPvESE_PiENS_9allocatorISJ_EESI_E7__cloneEv(void);

/* Symbol: _ZN2MK13CInputTensorsD1Ev */
/* Demangled: MK::CInputTensors::~CInputTensors() */
int _ZN2MK13CInputTensorsD1Ev(void);

/* Symbol: _ZN2MK8CProgramC1E13MKProgramType */
/* Demangled: MK::CProgram::CProgram(MKProgramType) */
int _ZN2MK8CProgramC1E13MKProgramType(void);

/* Symbol: CmdL_AttachclEnqueueMarker */
/* Demangled: CmdL_AttachclEnqueueMarker */
int CmdL_AttachclEnqueueMarker(void);

/* Symbol: clEnqueueBarrierWithWaitList */
/* Demangled: clEnqueueBarrierWithWaitList */
int clEnqueueBarrierWithWaitList(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFijPKP9_cl_eventENS_9allocatorIS7_EES6_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(unsigned int, _cl_event* const*), std::__1::allocator<int (*)(unsigned int, _cl_event* const*)>, int (unsigned int, _cl_event* const*)> */
extern void* _ZTVNSt3__110__function6__funcIPFijPKP9_cl_eventENS_9allocatorIS7_EES6_EE;

/* Symbol: _ZN2MK15clGetDeviceInfoEP13_cl_device_idjmPvPm */
/* Demangled: MK::clGetDeviceInfo(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*) */
int _ZN2MK15clGetDeviceInfoEP13_cl_device_idjmPvPm(void);

/* Symbol: _ZN2MK16CCLRetainProgramD2Ev */
/* Demangled: MK::CCLRetainProgram::~CCLRetainProgram() */
int _ZN2MK16CCLRetainProgramD2Ev(void);

/* Symbol: _ZNK2MK12CDynamicData11GetDiskUsedEv */
/* Demangled: MK::CDynamicData::GetDiskUsed() const */
int _ZNK2MK12CDynamicData11GetDiskUsedEv(void);

/* Symbol: _ZN2MK16clGetContextInfoEP11_cl_contextjmPvPm */
/* Demangled: MK::clGetContextInfo(_cl_context*, unsigned int, unsigned long, void*, unsigned long*) */
int _ZN2MK16clGetContextInfoEP11_cl_contextjmPvPm(void);

/* Symbol: _ZN2MK11CCLSVMAllocC2ERKS0_ */
/* Demangled: MK::CCLSVMAlloc::CCLSVMAlloc(MK::CCLSVMAlloc const&) */
int _ZN2MK11CCLSVMAllocC2ERKS0_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP7_cl_memENS_9allocatorIS5_EES4_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*), std::__1::allocator<int (*)(_cl_mem*)>, int (_cl_mem*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP7_cl_memENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_EE;

/* Symbol: _ZN2MK11CUpdateBoolD1Ev */
/* Demangled: MK::CUpdateBool::~CUpdateBool() */
int _ZN2MK11CUpdateBoolD1Ev(void);

/* Symbol: _ZN2MK17CCLReleaseContextC1Ev */
/* Demangled: MK::CCLReleaseContext::CCLReleaseContext() */
int _ZN2MK17CCLReleaseContextC1Ev(void);

/* Symbol: _ZN2MK15CCLBuildProgram20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLBuildProgram::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK15CCLBuildProgram20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK19CCLEnqueueMapBuffer4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLEnqueueMapBuffer::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK19CCLEnqueueMapBuffer4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK15CCLImportMemory7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLImportMemory::Factory(MK::CStream&) */
int _ZN2MK15CCLImportMemory7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK16CCLReleaseKernelC1Ev */
/* Demangled: MK::CCLReleaseKernel::CCLReleaseKernel() */
int _ZN2MK16CCLReleaseKernelC1Ev(void);

/* Symbol: MKUtils_CompareAsFloat */
/* Demangled: MKUtils_CompareAsFloat */
int MKUtils_CompareAsFloat(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextPKmPiENS_9allocatorISA_EES9_E7destroyEv */
/* Demangled: std::__1::__function::__func<_cl_sampler* (*)(_cl_context*, unsigned long const*, int*), std::__1::allocator<_cl_sampler* (*)(_cl_context*, unsigned long const*, int*)>, _cl_sampler* (_cl_context*, unsigned long const*, int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextPKmPiENS_9allocatorISA_EES9_E7destroyEv(void);

/* Symbol: _ZN2MK20CCLEnqueueReadBuffer20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueReadBuffer::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK20CCLEnqueueReadBuffer20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK16CCLReleaseKernel15RegisterFactoryEv */
/* Demangled: MK::CCLReleaseKernel::RegisterFactory() */
int _ZN2MK16CCLReleaseKernel15RegisterFactoryEv(void);

/* Symbol: _ZN2MK17CCLReleaseProgram15RegisterFactoryEv */
/* Demangled: MK::CCLReleaseProgram::RegisterFactory() */
int _ZN2MK17CCLReleaseProgram15RegisterFactoryEv(void);

/* Symbol: _ZN2MK16CCLCreateContextC1ERKS0_ */
/* Demangled: MK::CCLCreateContext::CCLCreateContext(MK::CCLCreateContext const&) */
int _ZN2MK16CCLCreateContextC1ERKS0_(void);

/* Symbol: _ZN2MK23CCLEnqueueNDRangeKernel4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLEnqueueNDRangeKernel::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK23CCLEnqueueNDRangeKernel4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPPvPFvS3_jS5_S4_ES4_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPPvPFvS3_jS5_S4_ES4_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP10_cl_kerneljmPKvENS_9allocatorIS7_EES6_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned long, void const*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned long, void const*)>, int (_cl_kernel*, unsigned int, unsigned long, void const*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP10_cl_kerneljmPKvENS_9allocatorIS7_EES6_EE;

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EE;

/* Symbol: _ZN2MK14COutputTensors4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::COutputTensors::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK14COutputTensors4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: MKStream_GetObjectOwnership */
/* Demangled: MKStream_GetObjectOwnership */
int MKStream_GetObjectOwnership(void);

/* Symbol: _ZN2MK13clRetainEventEP9_cl_event */
/* Demangled: MK::clRetainEvent(_cl_event*) */
int _ZN2MK13clRetainEventEP9_cl_event(void);

/* Symbol: clEnqueueFillBuffer */
/* Demangled: clEnqueueFillBuffer */
int clEnqueueFillBuffer(void);

/* Symbol: _ZN2MK19CCLEnqueueMapBufferC2ERKS0_ */
/* Demangled: MK::CCLEnqueueMapBuffer::CCLEnqueueMapBuffer(MK::CCLEnqueueMapBuffer const&) */
int _ZN2MK19CCLEnqueueMapBufferC2ERKS0_(void);

/* Symbol: _ZN2MK27CCLEnqueueCopyBufferToImage7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueCopyBufferToImage::Factory(MK::CStream&) */
int _ZN2MK27CCLEnqueueCopyBufferToImage7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK17CCLReleaseContextD0Ev */
/* Demangled: MK::CCLReleaseContext::~CCLReleaseContext() */
int _ZN2MK17CCLReleaseContextD0Ev(void);

/* Symbol: _ZN2MK11CCLSVMAllocC2Ev */
/* Demangled: MK::CCLSVMAlloc::CCLSVMAlloc() */
int _ZN2MK11CCLSVMAllocC2Ev(void);

/* Symbol: _ZN2MK16CCLWaitForEvents4SaveERNS_7CStreamE */
/* Demangled: MK::CCLWaitForEvents::Save(MK::CStream&) */
int _ZN2MK16CCLWaitForEvents4SaveERNS_7CStreamE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP7_cl_memENS_9allocatorIS5_EES4_EclEOS3_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*), std::__1::allocator<int (*)(_cl_mem*)>, int (_cl_mem*)>::operator()(_cl_mem*&&) */
int _ZNSt3__110__function6__funcIPFiP7_cl_memENS_9allocatorIS5_EES4_EclEOS3_(void);

/* Symbol: CmdL_SetFd */
/* Demangled: CmdL_SetFd */
int CmdL_SetFd(void);

/* Symbol: _ZN2MK16clGetPlatformIDsEjPP15_cl_platform_idPj */
/* Demangled: MK::clGetPlatformIDs(unsigned int, _cl_platform_id**, unsigned int*) */
int _ZN2MK16clGetPlatformIDsEjPP15_cl_platform_idPj(void);

/* Symbol: _ZN2MK16CCLReleaseKernelD0Ev */
/* Demangled: MK::CCLReleaseKernel::~CCLReleaseKernel() */
int _ZN2MK16CCLReleaseKernelD0Ev(void);

/* Symbol: _ZNK2MK18CCLRetainMemObject11GetDiskUsedEv */
/* Demangled: MK::CCLRetainMemObject::GetDiskUsed() const */
int _ZNK2MK18CCLRetainMemObject11GetDiskUsedEv(void);

/* Symbol: _ZNK2MK10CCLSVMFree15CopyConstructToEv */
/* Demangled: MK::CCLSVMFree::CopyConstructTo() const */
int _ZNK2MK10CCLSVMFree15CopyConstructToEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP11_cl_programjPP10_cl_kernelPjENS_9allocatorIS9_EES8_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_kernel**, unsigned int*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_kernel**, unsigned int*)>, int (_cl_program*, unsigned int, _cl_kernel**, unsigned int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP11_cl_programjPP10_cl_kernelPjENS_9allocatorIS9_EES8_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFviPvENS_9allocatorIS4_EES3_EclEOiOS2_ */
/* Demangled: std::__1::__function::__func<void (*)(int, void*), std::__1::allocator<void (*)(int, void*)>, void (int, void*)>::operator()(int&&, void*&&) */
int _ZNSt3__110__function6__funcIPFviPvENS_9allocatorIS4_EES3_EclEOiOS2_(void);

/* Symbol: clRetainProgram */
/* Demangled: clRetainProgram */
int clRetainProgram(void);

/* Symbol: _ZN2MK15CCLCreateKernel6RecordEP11_cl_programPKcP10_cl_kernel */
/* Demangled: MK::CCLCreateKernel::Record(_cl_program*, char const*, _cl_kernel*) */
int _ZN2MK15CCLCreateKernel6RecordEP11_cl_programPKcP10_cl_kernel(void);

/* Symbol: _ZN2MK16CCLCreateContext4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLCreateContext::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK16CCLCreateContext4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP10_cl_kerneljmPKvENS_9allocatorIS7_EES6_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned long, void const*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned long, void const*)>, int (_cl_kernel*, unsigned int, unsigned long, void const*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP10_cl_kerneljmPKvENS_9allocatorIS7_EES6_E7destroyEv(void);

/* Symbol: _ZN2MK5CBool7FactoryERNS_7CStreamE */
/* Demangled: MK::CBool::Factory(MK::CStream&) */
int _ZN2MK5CBool7FactoryERNS_7CStreamE(void);

/* Symbol: CmdL_CreateHandle */
/* Demangled: CmdL_CreateHandle */
int CmdL_CreateHandle(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_S7_mmmmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_S7_mmmmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E18destroy_deallocateEv(void);

/* Symbol: _ZNK2MK8CVersion11GetCombinedEv */
/* Demangled: MK::CVersion::GetCombined() const */
int _ZNK2MK8CVersion11GetCombinedEv(void);

/* Symbol: _ZN2MK23clEnqueueReadBufferRectEP17_cl_command_queueP7_cl_memjPKmS5_S5_mmmmPvjPKP9_cl_eventPS8_ */
/* Demangled: MK::clEnqueueReadBufferRect(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK23clEnqueueReadBufferRectEP17_cl_command_queueP7_cl_memjPKmS5_S5_mmmmPvjPKP9_cl_eventPS8_(void);

/* Symbol: clGetKernelWorkGroupInfo */
/* Demangled: clGetKernelWorkGroupInfo */
int clGetKernelWorkGroupInfo(void);

/* Symbol: _ZN2MK15CCLCreateBuffer3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLCreateBuffer::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK15CCLCreateBuffer3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZNK2MK20CCLPrepareMemoryCopy11GetDiskUsedEv */
/* Demangled: MK::CCLPrepareMemoryCopy::GetDiskUsed() const */
int _ZNK2MK20CCLPrepareMemoryCopy11GetDiskUsedEv(void);

/* Symbol: _ZN2MK11CCLSVMAllocD1Ev */
/* Demangled: MK::CCLSVMAlloc::~CCLSVMAlloc() */
int _ZN2MK11CCLSVMAllocD1Ev(void);

/* Symbol: _ZN2MK11CMemoryCopy15RegisterFactoryEv */
/* Demangled: MK::CMemoryCopy::RegisterFactory() */
int _ZN2MK11CMemoryCopy15RegisterFactoryEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP13_cl_device_idEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP13_cl_device_idEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithBinary4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLCreateProgramWithBinary::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK26CCLCreateProgramWithBinary4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcjPKS3_PS9_PFvS3_PvESD_ENS_9allocatorISH_EESG_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)>, int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcjPKS3_PS9_PFvS3_PvESD_ENS_9allocatorISH_EESG_E7destroyEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE(void);

/* Symbol: CmdL_AttachclSVMFree */
/* Demangled: CmdL_AttachclSVMFree */
int CmdL_AttachclSVMFree(void);

/* Symbol: _ZN2MK23CCLEnqueueNDRangeKernelC2ERKS0_ */
/* Demangled: MK::CCLEnqueueNDRangeKernel::CCLEnqueueNDRangeKernel(MK::CCLEnqueueNDRangeKernel const&) */
int _ZN2MK23CCLEnqueueNDRangeKernelC2ERKS0_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPPKcPKmPiENS_9allocatorISD_EESC_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, char const**, unsigned long const*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, char const**, unsigned long const*, int*)>, _cl_program* (_cl_context*, unsigned int, char const**, unsigned long const*, int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPPKcPKmPiENS_9allocatorISD_EESC_E18destroy_deallocateEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP11_cl_samplerENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_sampler*), std::__1::allocator<int (*)(_cl_sampler*)>, int (_cl_sampler*)>::__clone(std::__1::__function::__base<int (_cl_sampler*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP11_cl_samplerENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void);

/* Symbol: _ZN2MK11CMemoryCopyC1ERKS0_ */
/* Demangled: MK::CMemoryCopy::CMemoryCopy(MK::CMemoryCopy const&) */
int _ZN2MK11CMemoryCopyC1ERKS0_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idmPiENS_9allocatorISA_EES9_EclEOS5_OS7_OmOS8_ */
/* Demangled: std::__1::__function::__func<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long, int*), std::__1::allocator<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long, int*)>, _cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long, int*)>::operator()(_cl_context*&&, _cl_device_id*&&, unsigned long&&, int*&&) */
int _ZNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idmPiENS_9allocatorISA_EES9_EclEOS5_OS7_OmOS8_(void);

/* Symbol: _ZN2MK11CThreadJobQ4InitEv */
/* Demangled: MK::CThreadJobQ::Init() */
int _ZN2MK11CThreadJobQ4InitEv(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN2MK17clEnqueueSVMUnmapEP17_cl_command_queuePvjPKP9_cl_eventPS4_ */
/* Demangled: MK::clEnqueueSVMUnmap(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK17clEnqueueSVMUnmapEP17_cl_command_queuePvjPKP9_cl_eventPS4_(void);

/* Symbol: _ZN2MK18CCLRetainMemObjectC1Ev */
/* Demangled: MK::CCLRetainMemObject::CCLRetainMemObject() */
int _ZN2MK18CCLRetainMemObjectC1Ev(void);

/* Symbol: _ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEm */
/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__append(unsigned long) */
int _ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEm(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventENS_9allocatorIS9_EES8_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*)>, int (_cl_command_queue*, unsigned int, _cl_event* const*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventENS_9allocatorIS9_EES8_E7__cloneEv(void);

/* Symbol: _ZN2MK14clBuildProgramEP11_cl_programjPKP13_cl_device_idPKcPFvS1_PvES8_ */
/* Demangled: MK::clBuildProgram(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*) */
int _ZN2MK14clBuildProgramEP11_cl_programjPKP13_cl_device_idPKcPFvS1_PvES8_(void);

/* Symbol: _ZN2MK16CCLRetainContextC1Ev */
/* Demangled: MK::CCLRetainContext::CCLRetainContext() */
int _ZN2MK16CCLRetainContextC1Ev(void);

/* Symbol: _ZN2MK15CCLCreateBufferC1ERKS0_ */
/* Demangled: MK::CCLCreateBuffer::CCLCreateBuffer(MK::CCLCreateBuffer const&) */
int _ZN2MK15CCLCreateBufferC1ERKS0_(void);

/* Symbol: _ZNK2MK19CCLEnqueueMapBuffer11GetDiskUsedEv */
/* Demangled: MK::CCLEnqueueMapBuffer::GetDiskUsed() const */
int _ZNK2MK19CCLEnqueueMapBuffer11GetDiskUsedEv(void);

/* Symbol: _ZN2MK7CStream20GetObjectFromLinkMapEPNS_7CObjectE */
/* Demangled: MK::CStream::GetObjectFromLinkMap(MK::CObject*) */
int _ZN2MK7CStream20GetObjectFromLinkMapEPNS_7CObjectE(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: CmdL_AttachclEnqueueCopyBufferRect */
/* Demangled: CmdL_AttachclEnqueueCopyBufferRect */
int CmdL_AttachclEnqueueCopyBufferRect(void);

/* Symbol: _ZN2MK14CCLCreateImage3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLCreateImage::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK14CCLCreateImage3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZNK2MK21CCLCreateCommandQueue11GetDiskUsedEv */
/* Demangled: MK::CCLCreateCommandQueue::GetDiskUsed() const */
int _ZNK2MK21CCLCreateCommandQueue11GetDiskUsedEv(void);

/* Symbol: _ZNK2MK25CCLCreateKernelsInProgram3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLCreateKernelsInProgram::Log(MK::CJsonLog&) const */
int _ZNK2MK25CCLCreateKernelsInProgram3LogERNS_8CJsonLogE(void);

/* Symbol: _ZTVN2MK20CCLEnqueueMemoryCopyE */
/* Demangled: vtable for MK::CCLEnqueueMemoryCopy */
extern void* _ZTVN2MK20CCLEnqueueMemoryCopyE;

/* Symbol: _ZN2MK12CDynamicDataC2Ev */
/* Demangled: MK::CDynamicData::CDynamicData() */
int _ZN2MK12CDynamicDataC2Ev(void);

/* Symbol: _ZN2MK14CCLCreateImage6RecordEP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvP7_cl_mem */
/* Demangled: MK::CCLCreateImage::Record(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, _cl_mem*) */
int _ZN2MK14CCLCreateImage6RecordEP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvP7_cl_mem(void);

/* Symbol: _ZN2MK15CCLCreateKernelC2ERKS0_ */
/* Demangled: MK::CCLCreateKernel::CCLCreateKernel(MK::CCLCreateKernel const&) */
int _ZN2MK15CCLCreateKernelC2ERKS0_(void);

/* Symbol: _ZN2MK15CCLImportMemoryC2Ev */
/* Demangled: MK::CCLImportMemory::CCLImportMemory() */
int _ZN2MK15CCLImportMemoryC2Ev(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP13_cl_device_idENS_9allocatorIS5_EES4_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_device_id*), std::__1::allocator<int (*)(_cl_device_id*)>, int (_cl_device_id*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP13_cl_device_idENS_9allocatorIS5_EES4_EE;

/* Symbol: _ZN2MK15clCreateImage3DEP11_cl_contextmPK16_cl_image_formatmmmmmPvPi */
/* Demangled: MK::clCreateImage3D(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*) */
int _ZN2MK15clCreateImage3DEP11_cl_contextmPK16_cl_image_formatmmmmmPvPi(void);

/* Symbol: _ZN2MK18CCLRetainMemObjectD0Ev */
/* Demangled: MK::CCLRetainMemObject::~CCLRetainMemObject() */
int _ZN2MK18CCLRetainMemObjectD0Ev(void);

/* Symbol: _ZN2MK16CCLRetainContextD0Ev */
/* Demangled: MK::CCLRetainContext::~CCLRetainContext() */
int _ZN2MK16CCLRetainContextD0Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP13_cl_device_idjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP13_cl_device_idjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK14COutputTensors9AddRecordEiPKvmPKi */
/* Demangled: MK::COutputTensors::AddRecord(int, void const*, unsigned long, int const*) */
int _ZN2MK14COutputTensors9AddRecordEiPKvmPKi(void);

/* Symbol: CmdL_AttachclReleaseProgram */
/* Demangled: CmdL_AttachclReleaseProgram */
int CmdL_AttachclReleaseProgram(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFijPKP9_cl_eventENS_9allocatorIS7_EES6_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(unsigned int, _cl_event* const*), std::__1::allocator<int (*)(unsigned int, _cl_event* const*)>, int (unsigned int, _cl_event* const*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFijPKP9_cl_eventENS_9allocatorIS7_EES6_E7__cloneEv(void);

/* Symbol: _ZN2MK12CDynamicDataD1Ev */
/* Demangled: MK::CDynamicData::~CDynamicData() */
int _ZN2MK12CDynamicDataD1Ev(void);

/* Symbol: _ZN2MK11CUpdateBool4SaveERNS_7CStreamE */
/* Demangled: MK::CUpdateBool::Save(MK::CStream&) */
int _ZN2MK11CUpdateBool4SaveERNS_7CStreamE(void);

/* Symbol: CmdL_AttachclRetainKernel */
/* Demangled: CmdL_AttachclRetainKernel */
int CmdL_AttachclRetainKernel(void);

/* Symbol: _ZN2MK15CCLImportMemoryD1Ev */
/* Demangled: MK::CCLImportMemory::~CCLImportMemory() */
int _ZN2MK15CCLImportMemoryD1Ev(void);

/* Symbol: _ZN2MK19CCLReleaseMemObject7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLReleaseMemObject::Factory(MK::CStream&) */
int _ZN2MK19CCLReleaseMemObject7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK19CCLProfileKernelJobD2Ev */
/* Demangled: MK::CCLProfileKernelJob::~CCLProfileKernelJob() */
int _ZN2MK19CCLProfileKernelJobD2Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmmmPvPiENS_9allocatorISC_EESB_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmmmPvPiENS_9allocatorISC_EESB_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK15CCLCreateBuffer4SaveERNS_7CStreamE */
/* Demangled: MK::CCLCreateBuffer::Save(MK::CStream&) */
int _ZN2MK15CCLCreateBuffer4SaveERNS_7CStreamE(void);

/* Symbol: _ZN2MK8CProgramC2E13MKProgramType */
/* Demangled: MK::CProgram::CProgram(MKProgramType) */
int _ZN2MK8CProgramC2E13MKProgramType(void);

/* Symbol: _ZN2MK7CLUtils28GetOpenCLDriverVersionNumberENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: MK::CLUtils::GetOpenCLDriverVersionNumber(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN2MK7CLUtils28GetOpenCLDriverVersionNumberENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN2MK7CStream4SaveEPKc */
/* Demangled: MK::CStream::Save(char const*) */
int _ZN2MK7CStream4SaveEPKc(void);

/* Symbol: _ZN2MK16CCLCreateContextC2Ev */
/* Demangled: MK::CCLCreateContext::CCLCreateContext() */
int _ZN2MK16CCLCreateContextC2Ev(void);

/* Symbol: _ZN2MK24CCLEnqueueUnmapMemObjectC2ERKS0_ */
/* Demangled: MK::CCLEnqueueUnmapMemObject::CCLEnqueueUnmapMemObject(MK::CCLEnqueueUnmapMemObject const&) */
int _ZN2MK24CCLEnqueueUnmapMemObjectC2ERKS0_(void);

/* Symbol: _ZN2MK13clGetPipeInfoEP7_cl_memjmPvPm */
/* Demangled: MK::clGetPipeInfo(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*) */
int _ZN2MK13clGetPipeInfoEP7_cl_memjmPvPm(void);

/* Symbol: _ZN2MK20CCLEnqueueReadBufferC1Ev */
/* Demangled: MK::CCLEnqueueReadBuffer::CCLEnqueueReadBuffer() */
int _ZN2MK20CCLEnqueueReadBufferC1Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP11_cl_samplerENS_9allocatorIS5_EES4_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_sampler*), std::__1::allocator<int (*)(_cl_sampler*)>, int (_cl_sampler*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP11_cl_samplerENS_9allocatorIS5_EES4_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPiENS_9allocatorISF_EESE_EclEOS5_OmOS8_OSB_OSC_OSD_ */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)>::operator()(_cl_context*&&, unsigned long&&, _cl_image_format const*&&, _cl_image_desc const*&&, void*&&, int*&&) */
int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPiENS_9allocatorISF_EESE_EclEOS5_OmOS8_OSB_OSC_OSD_(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPKvjPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPKvjPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_EE;

/* Symbol: _ZN2MK8CVersionC2EPKc */
/* Demangled: MK::CVersion::CVersion(char const*) */
int _ZN2MK8CVersionC2EPKc(void);

/* Symbol: _ZN2MK13CInputTensorsC1Ev */
/* Demangled: MK::CInputTensors::CInputTensors() */
int _ZN2MK13CInputTensorsC1Ev(void);

/* Symbol: _ZN2MK15clEnqueueMarkerEP17_cl_command_queuePP9_cl_event */
/* Demangled: MK::clEnqueueMarker(_cl_command_queue*, _cl_event**) */
int _ZN2MK15clEnqueueMarkerEP17_cl_command_queuePP9_cl_event(void);

/* Symbol: _ZN2MK15CCLImportMemoryC2ERKS0_ */
/* Demangled: MK::CCLImportMemory::CCLImportMemory(MK::CCLImportMemory const&) */
int _ZN2MK15CCLImportMemoryC2ERKS0_(void);

/* Symbol: _ZN2MK15CCLSetKernelArgC1ERKS0_ */
/* Demangled: MK::CCLSetKernelArg::CCLSetKernelArg(MK::CCLSetKernelArg const&) */
int _ZN2MK15CCLSetKernelArgC1ERKS0_(void);

/* Symbol: _ZNK2MK11CStaticData11GetDiskUsedEv */
/* Demangled: MK::CStaticData::GetDiskUsed() const */
int _ZNK2MK11CStaticData11GetDiskUsedEv(void);

/* Symbol: _ZNSt3__15dequeIN2MK8CPointerINS1_4CJobEEENS_9allocatorIS4_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<MK::CPointer<MK::CJob>, std::__1::allocator<MK::CPointer<MK::CJob> > >::__add_back_capacity() */
int _ZNSt3__15dequeIN2MK8CPointerINS1_4CJobEEENS_9allocatorIS4_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN2MK16CCLCreateContextD1Ev */
/* Demangled: MK::CCLCreateContext::~CCLCreateContext() */
int _ZN2MK16CCLCreateContextD1Ev(void);

/* Symbol: _ZN2MK23CCLEnqueueNDRangeKernel20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueNDRangeKernel::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK23CCLEnqueueNDRangeKernel20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZNK2MK24CCLEnqueueUnmapMemObject3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLEnqueueUnmapMemObject::Log(MK::CJsonLog&) const */
int _ZNK2MK24CCLEnqueueUnmapMemObject3LogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK16CCLRetainProgramC2Ev */
/* Demangled: MK::CCLRetainProgram::CCLRetainProgram() */
int _ZN2MK16CCLRetainProgramC2Ev(void);

/* Symbol: _ZN2MK20CCLEnqueueReadBufferD0Ev */
/* Demangled: MK::CCLEnqueueReadBuffer::~CCLEnqueueReadBuffer() */
int _ZN2MK20CCLEnqueueReadBufferD0Ev(void);

/* Symbol: _ZN2MK16CCLRetainProgramC2ERKS0_ */
/* Demangled: MK::CCLRetainProgram::CCLRetainProgram(MK::CCLRetainProgram const&) */
int _ZN2MK16CCLRetainProgramC2ERKS0_(void);

/* Symbol: _ZN2MK12CDynamicData15RegisterFactoryEv */
/* Demangled: MK::CDynamicData::RegisterFactory() */
int _ZN2MK12CDynamicData15RegisterFactoryEv(void);

/* Symbol: _ZN2MK16CCLRetainContext20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLRetainContext::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK16CCLRetainContext20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_programjPP10_cl_kernelPjENS_9allocatorIS9_EES8_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_kernel**, unsigned int*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_kernel**, unsigned int*)>, int (_cl_program*, unsigned int, _cl_kernel**, unsigned int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP11_cl_programjPP10_cl_kernelPjENS_9allocatorIS9_EES8_E7destroyEv(void);

/* Symbol: _ZNK2MK12CDynamicData3LogERNS_8CJsonLogE */
/* Demangled: MK::CDynamicData::Log(MK::CJsonLog&) const */
int _ZNK2MK12CDynamicData3LogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK13CInputTensorsD0Ev */
/* Demangled: MK::CInputTensors::~CInputTensors() */
int _ZN2MK13CInputTensorsD0Ev(void);

/* Symbol: _ZN2MK18SaveMemObjectsDataEP17_cl_command_queueP7_cl_memPNS_11CStaticDataE */
/* Demangled: MK::SaveMemObjectsData(_cl_command_queue*, _cl_mem*, MK::CStaticData*) */
int _ZN2MK18SaveMemObjectsDataEP17_cl_command_queueP7_cl_memPNS_11CStaticDataE(void);

/* Symbol: _ZN2MK15CCLCreateBuffer4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLCreateBuffer::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK15CCLCreateBuffer4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNK2MK27CCLEnqueueCopyBufferToImage15CopyConstructToEv */
/* Demangled: MK::CCLEnqueueCopyBufferToImage::CopyConstructTo() const */
int _ZNK2MK27CCLEnqueueCopyBufferToImage15CopyConstructToEv(void);

/* Symbol: _ZN2MK20CCLEnqueueMemoryCopy4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLEnqueueMemoryCopy::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK20CCLEnqueueMemoryCopy4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP11_cl_contextPKlmPFvPKcPKvmPvESA_PiENS_9allocatorISF_EESE_EclEOS5_OmOSC_OSA_OSD_ */
/* Demangled: std::__1::__function::__func<_cl_context* (*)(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*), std::__1::allocator<_cl_context* (*)(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>, _cl_context* (long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>::operator()(long const*&&, unsigned long&&, void (*&&)(char const*, void const*, unsigned long, void*), void*&&, int*&&) */
int _ZNSt3__110__function6__funcIPFP11_cl_contextPKlmPFvPKcPKvmPvESA_PiENS_9allocatorISF_EESE_EclEOS5_OmOSC_OSA_OSD_(void);

/* Symbol: _ZN2MK15CCLCreateKernel4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLCreateKernel::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK15CCLCreateKernel4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK16CCLEnqueueMarker7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueMarker::Factory(MK::CStream&) */
int _ZN2MK16CCLEnqueueMarker7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK17CCLReleaseProgram20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLReleaseProgram::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK17CCLReleaseProgram20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK16CCLRetainProgramD1Ev */
/* Demangled: MK::CCLRetainProgram::~CCLRetainProgram() */
int _ZN2MK16CCLRetainProgramD1Ev(void);

/* Symbol: _ZN2MK18CCLEnqueueSVMUnmap15RegisterFactoryEv */
/* Demangled: MK::CCLEnqueueSVMUnmap::RegisterFactory() */
int _ZN2MK18CCLEnqueueSVMUnmap15RegisterFactoryEv(void);

/* Symbol: _ZN2MK7CObject20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CObject::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK7CObject20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIPN2MK7CObjectEPvEENS_19__map_value_compareIS4_S6_NS_4lessIS4_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_S5_EE */
/* Demangled: std::__1::__tree<std::__1::__value_type<MK::CObject*, void*>, std::__1::__map_value_compare<MK::CObject*, std::__1::__value_type<MK::CObject*, void*>, std::__1::less<MK::CObject*>, true>, std::__1::allocator<std::__1::__value_type<MK::CObject*, void*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<MK::CObject*, void*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIPN2MK7CObjectEPvEENS_19__map_value_compareIS4_S6_NS_4lessIS4_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_S5_EE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFviPvENS_9allocatorIS4_EES3_E7__cloneEPNS0_6__baseIS3_EE */
/* Demangled: std::__1::__function::__func<void (*)(int, void*), std::__1::allocator<void (*)(int, void*)>, void (int, void*)>::__clone(std::__1::__function::__base<void (int, void*)>*) const */
int _ZNKSt3__110__function6__funcIPFviPvENS_9allocatorIS4_EES3_E7__cloneEPNS0_6__baseIS3_EE(void);

/* Symbol: _ZN2MK15CProfileDataJob8ms_kRTTIE */
/* Demangled: MK::CProfileDataJob::ms_kRTTI */
extern void* _ZN2MK15CProfileDataJob8ms_kRTTIE;

/* Symbol: _ZN2MK11CUpdateBoolD0Ev */
/* Demangled: MK::CUpdateBool::~CUpdateBool() */
int _ZN2MK11CUpdateBoolD0Ev(void);

/* Symbol: _ZNK2MK23CCLEnqueueNDRangeKernel3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLEnqueueNDRangeKernel::Log(MK::CJsonLog&) const */
int _ZNK2MK23CCLEnqueueNDRangeKernel3LogERNS_8CJsonLogE(void);

/* Symbol: _ZNK2MK15CCLImportMemory13GetMemoryUsedEv */
/* Demangled: MK::CCLImportMemory::GetMemoryUsed() const */
int _ZNK2MK15CCLImportMemory13GetMemoryUsedEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7destroyEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP10_cl_kernelP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP10_cl_kernelP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP13_cl_device_idPKljPS3_PjENS_9allocatorIS9_EES8_EclEOS3_OS5_OjOS6_OS7_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*), std::__1::allocator<int (*)(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)>, int (_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)>::operator()(_cl_device_id*&&, long const*&&, unsigned int&&, _cl_device_id**&&, unsigned int*&&) */
int _ZNSt3__110__function6__funcIPFiP13_cl_device_idPKljPS3_PjENS_9allocatorIS9_EES8_EclEOS3_OS5_OjOS6_OS7_(void);

/* Symbol: _ZNK2MK14CCLCreateImage13GetMemoryUsedEv */
/* Demangled: MK::CCLCreateImage::GetMemoryUsed() const */
int _ZNK2MK14CCLCreateImage13GetMemoryUsedEv(void);

/* Symbol: _ZN2MK23CCLEnqueueNDRangeKernelD2Ev */
/* Demangled: MK::CCLEnqueueNDRangeKernel::~CCLEnqueueNDRangeKernel() */
int _ZN2MK23CCLEnqueueNDRangeKernelD2Ev(void);

/* Symbol: _ZNK2MK15CCLReleaseEvent3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLReleaseEvent::Log(MK::CJsonLog&) const */
int _ZNK2MK15CCLReleaseEvent3LogERNS_8CJsonLogE(void);

/* Symbol: CmdL_AttachclReleaseCommandQueue */
/* Demangled: CmdL_AttachclReleaseCommandQueue */
int CmdL_AttachclReleaseCommandQueue(void);

/* Symbol: CmdL_AttachclSetKernelArg */
/* Demangled: CmdL_AttachclSetKernelArg */
int CmdL_AttachclSetKernelArg(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idPKmPiENS_9allocatorISC_EESB_E7__cloneEv */
/* Demangled: std::__1::__function::__func<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long const*, int*), std::__1::allocator<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long const*, int*)>, _cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long const*, int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idPKmPiENS_9allocatorISC_EESB_E7__cloneEv(void);

/* Symbol: _ZN2MK11CCLSVMAllocC1Ev */
/* Demangled: MK::CCLSVMAlloc::CCLSVMAlloc() */
int _ZN2MK11CCLSVMAllocC1Ev(void);

/* Symbol: _ZN2MK25CCLCreateKernelsInProgram8ms_kRTTIE */
/* Demangled: MK::CCLCreateKernelsInProgram::ms_kRTTI */
extern void* _ZN2MK25CCLCreateKernelsInProgram8ms_kRTTIE;

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmPKmS8_PmS9_jPKP9_cl_eventPSB_PiENS_9allocatorISH_EESG_EclEOS4_OS6_OjOmOS8_SP_OS9_SQ_SN_OSD_OSE_OSF_ */
/* Demangled: std::__1::__function::__func<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*), std::__1::allocator<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)>, void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)>::operator()(_cl_command_queue*&&, _cl_mem*&&, unsigned int&&, unsigned long&&, unsigned long const*&&, unsigned long const*&&, unsigned long*&&, unsigned long*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&, int*&&) */
int _ZNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmPKmS8_PmS9_jPKP9_cl_eventPSB_PiENS_9allocatorISH_EESG_EclEOS4_OS6_OjOmOS8_SP_OS9_SQ_SN_OSD_OSE_OSF_(void);

/* Symbol: CmdL_AttachclEnqueueCopyBuffer */
/* Demangled: CmdL_AttachclEnqueueCopyBuffer */
int CmdL_AttachclEnqueueCopyBuffer(void);

/* Symbol: _ZN2MK15clEnqueueSVMMapEP17_cl_command_queuejmPvmjPKP9_cl_eventPS4_ */
/* Demangled: MK::clEnqueueSVMMap(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK15clEnqueueSVMMapEP17_cl_command_queuejmPvmjPKP9_cl_eventPS4_(void);

/* Symbol: _ZN2MK16CCLRetainProgram6RecordEP11_cl_program */
/* Demangled: MK::CCLRetainProgram::Record(_cl_program*) */
int _ZN2MK16CCLRetainProgram6RecordEP11_cl_program(void);

/* Symbol: _ZNK2MK20CCLPrepareMemoryCopy13GetMemoryUsedEv */
/* Demangled: MK::CCLPrepareMemoryCopy::GetMemoryUsed() const */
int _ZNK2MK20CCLPrepareMemoryCopy13GetMemoryUsedEv(void);

/* Symbol: _ZN2MK16CCLRetainProgram4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLRetainProgram::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK16CCLRetainProgram4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP11_cl_programjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_program*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_program*, unsigned int, unsigned long, void*, unsigned long*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP11_cl_programjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv(void);

/* Symbol: _ZN2MK16CCLEnqueueMarker20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueMarker::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK16CCLEnqueueMarker20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK12CDynamicDataC2ERKS0_ */
/* Demangled: MK::CDynamicData::CDynamicData(MK::CDynamicData const&) */
int _ZN2MK12CDynamicDataC2ERKS0_(void);

/* Symbol: clCreateContext */
/* Demangled: clCreateContext */
int clCreateContext(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcjPKS3_PS9_PFvS3_PvESD_ENS_9allocatorISH_EESG_E7__cloneEPNS0_6__baseISG_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)>, int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)>::__clone(std::__1::__function::__base<int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcjPKS3_PS9_PFvS3_PvESD_ENS_9allocatorISH_EESG_E7__cloneEPNS0_6__baseISG_EE(void);

/* Symbol: CmdL_AttachclCreateCommandQueue */
/* Demangled: CmdL_AttachclCreateCommandQueue */
int CmdL_AttachclCreateCommandQueue(void);

/* Symbol: _ZN2MK19clEnqueueSVMMemFillEP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS6_ */
/* Demangled: MK::clEnqueueSVMMemFill(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK19clEnqueueSVMMemFillEP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS6_(void);

/* Symbol: _ZNK2MK21CCLRetainCommandQueue11GetDiskUsedEv */
/* Demangled: MK::CCLRetainCommandQueue::GetDiskUsed() const */
int _ZNK2MK21CCLRetainCommandQueue11GetDiskUsedEv(void);

/* Symbol: _ZN2MK11CCLSVMAllocD0Ev */
/* Demangled: MK::CCLSVMAlloc::~CCLSVMAlloc() */
int _ZN2MK11CCLSVMAllocD0Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFvP11_cl_contextPvENS_9allocatorIS6_EES5_EclEOS3_OS4_ */
/* Demangled: std::__1::__function::__func<void (*)(_cl_context*, void*), std::__1::allocator<void (*)(_cl_context*, void*)>, void (_cl_context*, void*)>::operator()(_cl_context*&&, void*&&) */
int _ZNSt3__110__function6__funcIPFvP11_cl_contextPvENS_9allocatorIS6_EES5_EclEOS3_OS4_(void);

/* Symbol: _ZNSt3__114__split_bufferIPN2MK8CPointerINS1_4CJobEEERNS_9allocatorIS5_EEE10push_frontERKS5_ */
/* Demangled: std::__1::__split_buffer<MK::CPointer<MK::CJob>*, std::__1::allocator<MK::CPointer<MK::CJob>*>&>::push_front(MK::CPointer<MK::CJob>* const&) */
int _ZNSt3__114__split_bufferIPN2MK8CPointerINS1_4CJobEEERNS_9allocatorIS5_EEE10push_frontERKS5_(void);

/* Symbol: _ZTVN2MK10CCLCommandE */
/* Demangled: vtable for MK::CCLCommand */
extern void* _ZTVN2MK10CCLCommandE;

/* Symbol: _ZN2MK27CCLEnqueueCopyBufferToImage4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLEnqueueCopyBufferToImage::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK27CCLEnqueueCopyBufferToImage4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventENS_9allocatorIS9_EES8_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*)>, int (_cl_command_queue*, unsigned int, _cl_event* const*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventENS_9allocatorIS9_EES8_E7destroyEv(void);

/* Symbol: _ZN2MK11CStaticData15RegisterFactoryEv */
/* Demangled: MK::CStaticData::RegisterFactory() */
int _ZN2MK11CStaticData15RegisterFactoryEv(void);

/* Symbol: _ZN2MK13CInputTensors15RegisterFactoryEv */
/* Demangled: MK::CInputTensors::RegisterFactory() */
int _ZN2MK13CInputTensors15RegisterFactoryEv(void);

/* Symbol: clCreateSampler */
/* Demangled: clCreateSampler */
int clCreateSampler(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuemjPmENS_9allocatorIS6_EES5_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned long, unsigned int, unsigned long*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned long, unsigned int, unsigned long*)>, int (_cl_command_queue*, unsigned long, unsigned int, unsigned long*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuemjPmENS_9allocatorIS6_EES5_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP9_cl_eventiENS_9allocatorIS5_EES4_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, int), std::__1::allocator<int (*)(_cl_event*, int)>, int (_cl_event*, int)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP9_cl_eventiENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmPvPiENS_9allocatorISC_EESB_E7__cloneEPNS0_6__baseISB_EE */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)>::__clone(std::__1::__function::__base<_cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)>*) const */
int _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmPvPiENS_9allocatorISC_EESB_E7__cloneEPNS0_6__baseISB_EE(void);

/* Symbol: MKProgram_AttachProgram */
/* Demangled: MKProgram_AttachProgram */
int MKProgram_AttachProgram(void);

/* Symbol: _ZN2MK11CUpdateBool4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CUpdateBool::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK11CUpdateBool4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFimPvENS_9allocatorIS4_EES3_EclEOmOS2_ */
/* Demangled: std::__1::__function::__func<int (*)(unsigned long, void*), std::__1::allocator<int (*)(unsigned long, void*)>, int (unsigned long, void*)>::operator()(unsigned long&&, void*&&) */
int _ZNSt3__110__function6__funcIPFimPvENS_9allocatorIS4_EES3_EclEOmOS2_(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithSource4SaveERNS_7CStreamE */
/* Demangled: MK::CCLCreateProgramWithSource::Save(MK::CStream&) */
int _ZN2MK26CCLCreateProgramWithSource4SaveERNS_7CStreamE(void);

/* Symbol: _ZN2MK9CCLFinish8ms_kRTTIE */
/* Demangled: MK::CCLFinish::ms_kRTTI */
extern void* _ZN2MK9CCLFinish8ms_kRTTIE;

/* Symbol: _ZN2MK17CCLReleaseContextC1ERKS0_ */
/* Demangled: MK::CCLReleaseContext::CCLReleaseContext(MK::CCLReleaseContext const&) */
int _ZN2MK17CCLReleaseContextC1ERKS0_(void);

/* Symbol: _ZN2MK15CCLReleaseEvent7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLReleaseEvent::Factory(MK::CStream&) */
int _ZN2MK15CCLReleaseEvent7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK8CVersion7CURRENTE */
/* Demangled: MK::CVersion::CURRENT */
extern void* _ZN2MK8CVersion7CURRENTE;

/* Symbol: clReleaseMemObject */
/* Demangled: clReleaseMemObject */
int clReleaseMemObject(void);

/* Symbol: _ZN2MK17CCLReleaseProgram8ms_kRTTIE */
/* Demangled: MK::CCLReleaseProgram::ms_kRTTI */
extern void* _ZN2MK17CCLReleaseProgram8ms_kRTTIE;

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*)>, int (_cl_command_queue*, unsigned int, _cl_event* const*)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, unsigned int, _cl_event* const*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFbiPvENS_9allocatorIS4_EES3_E7__cloneEv */
/* Demangled: std::__1::__function::__func<bool (*)(int, void*), std::__1::allocator<bool (*)(int, void*)>, bool (int, void*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFbiPvENS_9allocatorIS4_EES3_E7__cloneEv(void);

/* Symbol: _ZNK2MK22CCLReleaseCommandQueue15CopyConstructToEv */
/* Demangled: MK::CCLReleaseCommandQueue::CopyConstructTo() const */
int _ZNK2MK22CCLReleaseCommandQueue15CopyConstructToEv(void);

/* Symbol: _ZTVN2MK12CDynamicDataE */
/* Demangled: vtable for MK::CDynamicData */
extern void* _ZTVN2MK12CDynamicDataE;

/* Symbol: _ZN2MK20CCLEnqueueMemoryCopyC2ERKS0_ */
/* Demangled: MK::CCLEnqueueMemoryCopy::CCLEnqueueMemoryCopy(MK::CCLEnqueueMemoryCopy const&) */
int _ZN2MK20CCLEnqueueMemoryCopyC2ERKS0_(void);

/* Symbol: _ZN2MK16CCLRetainContext8ms_kRTTIE */
/* Demangled: MK::CCLRetainContext::ms_kRTTI */
extern void* _ZN2MK16CCLRetainContext8ms_kRTTIE;

/* Symbol: _ZNSt3__110__function6__funcIPFiP10_cl_kerneljjmPvPmENS_9allocatorIS7_EES6_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP10_cl_kerneljjmPvPmENS_9allocatorIS7_EES6_E7destroyEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFP7_cl_memS3_mjPKvPiENS_9allocatorIS8_EES7_EE */
/* Demangled: vtable for std::__1::__function::__func<_cl_mem* (*)(_cl_mem*, unsigned long, unsigned int, void const*, int*), std::__1::allocator<_cl_mem* (*)(_cl_mem*, unsigned long, unsigned int, void const*, int*)>, _cl_mem* (_cl_mem*, unsigned long, unsigned int, void const*, int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFP7_cl_memS3_mjPKvPiENS_9allocatorIS8_EES7_EE;

/* Symbol: _ZN2MK16CCLEnqueueMarker4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLEnqueueMarker::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK16CCLEnqueueMarker4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSF_ENS_9allocatorISH_EESG_E7__cloneEv */
/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSF_ENS_9allocatorISH_EESG_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP10_cl_kerneljmPKvENS_9allocatorIS7_EES6_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned long, void const*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned long, void const*)>, int (_cl_kernel*, unsigned int, unsigned long, void const*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP10_cl_kerneljmPKvENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void);

/* Symbol: clReleaseProgram */
/* Demangled: clReleaseProgram */
int clReleaseProgram(void);

/* Symbol: _ZNK2MK14CCLCreateImage15CopyConstructToEv */
/* Demangled: MK::CCLCreateImage::CopyConstructTo() const */
int _ZNK2MK14CCLCreateImage15CopyConstructToEv(void);

/* Symbol: _ZN2MK9CCLFinish4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLFinish::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK9CCLFinish4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: CmdL_TreeNodeAttachDataCopy */
/* Demangled: CmdL_TreeNodeAttachDataCopy */
int CmdL_TreeNodeAttachDataCopy(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP11_cl_programP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP11_cl_programP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE(void);

/* Symbol: _ZN2MK12CDynamicDataC1Ev */
/* Demangled: MK::CDynamicData::CDynamicData() */
int _ZN2MK12CDynamicDataC1Ev(void);

/* Symbol: _ZN2MK11CStaticData4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CStaticData::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK11CStaticData4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK15CCLImportMemoryC1Ev */
/* Demangled: MK::CCLImportMemory::CCLImportMemory() */
int _ZN2MK15CCLImportMemoryC1Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EclEOS3_OS4_OS6_OmSK_OjOSA_OSB_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, void*&&, void const*&&, unsigned long&&, unsigned long&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EclEOS3_OS4_OS6_OmSK_OjOSA_OSB_(void);

/* Symbol: _ZNK2MK8CCommand13GetMemoryUsedEv */
/* Demangled: MK::CCommand::GetMemoryUsed() const */
int _ZNK2MK8CCommand13GetMemoryUsedEv(void);

/* Symbol: _ZN2MK15CCLCreateKernel4SaveERNS_7CStreamE */
/* Demangled: MK::CCLCreateKernel::Save(MK::CStream&) */
int _ZN2MK15CCLCreateKernel4SaveERNS_7CStreamE(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithSourceD2Ev */
/* Demangled: MK::CCLCreateProgramWithSource::~CCLCreateProgramWithSource() */
int _ZN2MK26CCLCreateProgramWithSourceD2Ev(void);

/* Symbol: _ZN2MK16CCLReleaseKernel7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLReleaseKernel::Factory(MK::CStream&) */
int _ZN2MK16CCLReleaseKernel7FactoryERNS_7CStreamE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueENS_9allocatorIS5_EES4_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*), std::__1::allocator<int (*)(_cl_command_queue*)>, int (_cl_command_queue*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueENS_9allocatorIS5_EES4_E7__cloneEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextjjjPiENS_9allocatorIS8_EES7_EE */
/* Demangled: vtable for std::__1::__function::__func<_cl_sampler* (*)(_cl_context*, unsigned int, unsigned int, unsigned int, int*), std::__1::allocator<_cl_sampler* (*)(_cl_context*, unsigned int, unsigned int, unsigned int, int*)>, _cl_sampler* (_cl_context*, unsigned int, unsigned int, unsigned int, int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextjjjPiENS_9allocatorIS8_EES7_EE;

/* Symbol: _ZN2MK20CCLEnqueueReadBuffer15RegisterFactoryEv */
/* Demangled: MK::CCLEnqueueReadBuffer::RegisterFactory() */
int _ZN2MK20CCLEnqueueReadBuffer15RegisterFactoryEv(void);

/* Symbol: _ZN2MK24CCLEnqueueUnmapMemObject3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLEnqueueUnmapMemObject::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK24CCLEnqueueUnmapMemObject3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _Z15clGetKernelNameP10_cl_kernel */
/* Demangled: clGetKernelName(_cl_kernel*) */
int _Z15clGetKernelNameP10_cl_kernel(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP10_cl_kerneljjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjSC_OmOS4_OS5_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)>::operator()(_cl_kernel*&&, unsigned int&&, unsigned int&&, unsigned long&&, void*&&, unsigned long*&&) */
int _ZNSt3__110__function6__funcIPFiP10_cl_kerneljjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjSC_OmOS4_OS5_(void);

/* Symbol: _ZN2MK12CDynamicDataD0Ev */
/* Demangled: MK::CDynamicData::~CDynamicData() */
int _ZN2MK12CDynamicDataD0Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFbiPvENS_9allocatorIS4_EES3_EclEOiOS2_ */
/* Demangled: std::__1::__function::__func<bool (*)(int, void*), std::__1::allocator<bool (*)(int, void*)>, bool (int, void*)>::operator()(int&&, void*&&) */
int _ZNSt3__110__function6__funcIPFbiPvENS_9allocatorIS4_EES3_EclEOiOS2_(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFbiPvENS_9allocatorIS4_EES3_EE */
/* Demangled: vtable for std::__1::__function::__func<bool (*)(int, void*), std::__1::allocator<bool (*)(int, void*)>, bool (int, void*)> */
extern void* _ZTVNSt3__110__function6__funcIPFbiPvENS_9allocatorIS4_EES3_EE;

/* Symbol: _ZN2MK15CCLImportMemoryD0Ev */
/* Demangled: MK::CCLImportMemory::~CCLImportMemory() */
int _ZN2MK15CCLImportMemoryD0Ev(void);

/* Symbol: _ZN2MK19CCLProfileKernelJobD1Ev */
/* Demangled: MK::CCLProfileKernelJob::~CCLProfileKernelJob() */
int _ZN2MK19CCLProfileKernelJobD1Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP7_cl_memS3_mjPKvPiENS_9allocatorIS8_EES7_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_mem*, unsigned long, unsigned int, void const*, int*), std::__1::allocator<_cl_mem* (*)(_cl_mem*, unsigned long, unsigned int, void const*, int*)>, _cl_mem* (_cl_mem*, unsigned long, unsigned int, void const*, int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFP7_cl_memS3_mjPKvPiENS_9allocatorIS8_EES7_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK10CCLCommand15RegisterFactoryEv */
/* Demangled: MK::CCLCommand::RegisterFactory() */
int _ZN2MK10CCLCommand15RegisterFactoryEv(void);

/* Symbol: _ZNK2MK25CCLCreateKernelsInProgram13GetMemoryUsedEv */
/* Demangled: MK::CCLCreateKernelsInProgram::GetMemoryUsed() const */
int _ZNK2MK25CCLCreateKernelsInProgram13GetMemoryUsedEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPiENS_9allocatorISF_EESE_E7__cloneEv */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPiENS_9allocatorISF_EESE_E7__cloneEv(void);

/* Symbol: _ZN2MK16CCLCreateContextC1Ev */
/* Demangled: MK::CCLCreateContext::CCLCreateContext() */
int _ZN2MK16CCLCreateContextC1Ev(void);

/* Symbol: _ZN2MK19clEnqueueFillBufferEP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS7_ */
/* Demangled: MK::clEnqueueFillBuffer(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK19clEnqueueFillBufferEP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS7_(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP11_cl_programP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP11_cl_programP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E7__cloneEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventENS_9allocatorIS9_EES8_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*)>, int (_cl_command_queue*, unsigned int, _cl_event* const*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventENS_9allocatorIS9_EES8_EE;

/* Symbol: _ZN2MK22CCLReleaseCommandQueue15RegisterFactoryEv */
/* Demangled: MK::CCLReleaseCommandQueue::RegisterFactory() */
int _ZN2MK22CCLReleaseCommandQueue15RegisterFactoryEv(void);

/* Symbol: _ZN2MK7CStream6RemoveEPNS_7CObjectE */
/* Demangled: MK::CStream::Remove(MK::CObject*) */
int _ZN2MK7CStream6RemoveEPNS_7CObjectE(void);

/* Symbol: clLinkProgram */
/* Demangled: clLinkProgram */
int clLinkProgram(void);

/* Symbol: _ZNSt3__16vectorIP13_cl_device_idNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<_cl_device_id*, std::__1::allocator<_cl_device_id*> >::__push_back_slow_path<_cl_device_id*>(_cl_device_id*&&) */
int _ZNSt3__16vectorIP13_cl_device_idNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZN2MK15CCLReleaseEvent4SaveERNS_7CStreamE */
/* Demangled: MK::CCLReleaseEvent::Save(MK::CStream&) */
int _ZN2MK15CCLReleaseEvent4SaveERNS_7CStreamE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextPKmPiENS_9allocatorISA_EES9_E7__cloneEv */
/* Demangled: std::__1::__function::__func<_cl_sampler* (*)(_cl_context*, unsigned long const*, int*), std::__1::allocator<_cl_sampler* (*)(_cl_context*, unsigned long const*, int*)>, _cl_sampler* (_cl_context*, unsigned long const*, int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextPKmPiENS_9allocatorISA_EES9_E7__cloneEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP9_cl_eventENS_9allocatorIS5_EES4_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_event*), std::__1::allocator<int (*)(_cl_event*)>, int (_cl_event*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP9_cl_eventENS_9allocatorIS5_EES4_E7__cloneEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP9_cl_eventiPFvS3_iPvES4_ENS_9allocatorIS8_EES7_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, int, void (*)(_cl_event*, int, void*), void*), std::__1::allocator<int (*)(_cl_event*, int, void (*)(_cl_event*, int, void*), void*)>, int (_cl_event*, int, void (*)(_cl_event*, int, void*), void*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP9_cl_eventiPFvS3_iPvES4_ENS_9allocatorIS8_EES7_E7__cloneEv(void);

/* Symbol: _ZN2MK19clEnqueueWriteImageEP17_cl_command_queueP7_cl_memjPKmS5_mmPKvjPKP9_cl_eventPS9_ */
/* Demangled: MK::clEnqueueWriteImage(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK19clEnqueueWriteImageEP17_cl_command_queueP7_cl_memjPKmS5_mmPKvjPKP9_cl_eventPS9_(void);

/* Symbol: _ZN2MK16CCLRetainProgramC1Ev */
/* Demangled: MK::CCLRetainProgram::CCLRetainProgram() */
int _ZN2MK16CCLRetainProgramC1Ev(void);

/* Symbol: _ZN2MK16CCLCreateContextD0Ev */
/* Demangled: MK::CCLCreateContext::~CCLCreateContext() */
int _ZN2MK16CCLCreateContextD0Ev(void);

/* Symbol: _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZN2MK15CCLImportMemory4SaveERNS_7CStreamE */
/* Demangled: MK::CCLImportMemory::Save(MK::CStream&) */
int _ZN2MK15CCLImportMemory4SaveERNS_7CStreamE(void);

/* Symbol: MKStream_LoadByFile */
/* Demangled: MKStream_LoadByFile */
int MKStream_LoadByFile(void);

/* Symbol: _ZTVN2MK11CUpdateBoolE */
/* Demangled: vtable for MK::CUpdateBool */
extern void* _ZTVN2MK11CUpdateBoolE;

/* Symbol: _ZN2MK25clSetCommandQueuePropertyEP17_cl_command_queuemjPm */
/* Demangled: MK::clSetCommandQueueProperty(_cl_command_queue*, unsigned long, unsigned int, unsigned long*) */
int _ZN2MK25clSetCommandQueuePropertyEP17_cl_command_queuemjPm(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP9_cl_eventP11_cl_contextPiENS_9allocatorIS8_EES7_E7destroyEv */
/* Demangled: std::__1::__function::__func<_cl_event* (*)(_cl_context*, int*), std::__1::allocator<_cl_event* (*)(_cl_context*, int*)>, _cl_event* (_cl_context*, int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFP9_cl_eventP11_cl_contextPiENS_9allocatorIS8_EES7_E7destroyEv(void);

/* Symbol: clRetainCommandQueue */
/* Demangled: clRetainCommandQueue */
int clRetainCommandQueue(void);

/* Symbol: _ZNK2MK15CCLBuildProgram3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLBuildProgram::Log(MK::CJsonLog&) const */
int _ZNK2MK15CCLBuildProgram3LogERNS_8CJsonLogE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP13_cl_device_idEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE4findIS7_EENS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*>, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP13_cl_device_idEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE4findIS7_EENS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEERKT_(void);

/* Symbol: _ZN2MK20CCLEnqueueReadBufferC2ERKS0_ */
/* Demangled: MK::CCLEnqueueReadBuffer::CCLEnqueueReadBuffer(MK::CCLEnqueueReadBuffer const&) */
int _ZN2MK20CCLEnqueueReadBufferC2ERKS0_(void);

/* Symbol: _Z15MKSysTrace_Initv */
/* Demangled: MKSysTrace_Init() */
int _Z15MKSysTrace_Initv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_contextENS_9allocatorIS5_EES4_EclEOS3_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_context*), std::__1::allocator<int (*)(_cl_context*)>, int (_cl_context*)>::operator()(_cl_context*&&) */
int _ZNSt3__110__function6__funcIPFiP11_cl_contextENS_9allocatorIS5_EES4_EclEOS3_(void);

/* Symbol: _ZN2MK23CCLEnqueueNDRangeKernelC2Ev */
/* Demangled: MK::CCLEnqueueNDRangeKernel::CCLEnqueueNDRangeKernel() */
int _ZN2MK23CCLEnqueueNDRangeKernelC2Ev(void);

/* Symbol: _ZN2MK16CCLRetainProgramD0Ev */
/* Demangled: MK::CCLRetainProgram::~CCLRetainProgram() */
int _ZN2MK16CCLRetainProgramD0Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP9_cl_eventP11_cl_contextPiENS_9allocatorIS8_EES7_EclEOS5_OS6_ */
/* Demangled: std::__1::__function::__func<_cl_event* (*)(_cl_context*, int*), std::__1::allocator<_cl_event* (*)(_cl_context*, int*)>, _cl_event* (_cl_context*, int*)>::operator()(_cl_context*&&, int*&&) */
int _ZNSt3__110__function6__funcIPFP9_cl_eventP11_cl_contextPiENS_9allocatorIS8_EES7_EclEOS5_OS6_(void);

/* Symbol: _ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEm */
/* Demangled: std::__1::vector<char, std::__1::allocator<char> >::__append(unsigned long) */
int _ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEm(void);

/* Symbol: clImportMemoryARM */
/* Demangled: clImportMemoryARM */
int clImportMemoryARM(void);

/* Symbol: _ZN2MK15CCLSetKernelArg6RecordEP10_cl_kerneljmPKv */
/* Demangled: MK::CCLSetKernelArg::Record(_cl_kernel*, unsigned int, unsigned long, void const*) */
int _ZN2MK15CCLSetKernelArg6RecordEP10_cl_kerneljmPKv(void);

/* Symbol: _ZN2MK18CCLRetainMemObject15RegisterFactoryEv */
/* Demangled: MK::CCLRetainMemObject::RegisterFactory() */
int _ZN2MK18CCLRetainMemObject15RegisterFactoryEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcPFvS3_PvESA_ENS_9allocatorISE_EESD_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)>, int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcPFvS3_PvESA_ENS_9allocatorISE_EESD_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7destroyEv(void);

/* Symbol: _ZNK2MK5CBool13GetMemoryUsedEv */
/* Demangled: MK::CBool::GetMemoryUsed() const */
int _ZNK2MK5CBool13GetMemoryUsedEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN2MK8CPointerINS1_4CJobEEERNS_9allocatorIS5_EEE9push_backEOS5_ */
/* Demangled: std::__1::__split_buffer<MK::CPointer<MK::CJob>*, std::__1::allocator<MK::CPointer<MK::CJob>*>&>::push_back(MK::CPointer<MK::CJob>*&&) */
int _ZNSt3__114__split_bufferIPN2MK8CPointerINS1_4CJobEEERNS_9allocatorIS5_EEE9push_backEOS5_(void);

/* Symbol: clCompileProgram */
/* Demangled: clCompileProgram */
int clCompileProgram(void);

/* Symbol: _ZN2MK23CCLEnqueueNDRangeKernel15RegisterFactoryEv */
/* Demangled: MK::CCLEnqueueNDRangeKernel::RegisterFactory() */
int _ZN2MK23CCLEnqueueNDRangeKernel15RegisterFactoryEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPPKcPKmPiENS_9allocatorISD_EESC_E7destroyEv */
/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, char const**, unsigned long const*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, char const**, unsigned long const*, int*)>, _cl_program* (_cl_context*, unsigned int, char const**, unsigned long const*, int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPPKcPKmPiENS_9allocatorISD_EESC_E7destroyEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_programjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_program*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_program*, unsigned int, unsigned long, void*, unsigned long*)>::operator()(_cl_program*&&, unsigned int&&, unsigned long&&, void*&&, unsigned long*&&) */
int _ZNSt3__110__function6__funcIPFiP11_cl_programjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN2MK8CPointerINS2_12CDynamicDataEEEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, MK::CPointer<MK::CDynamicData> >, std::__1::__map_value_compare<int, std::__1::__value_type<int, MK::CPointer<MK::CDynamicData> >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, MK::CPointer<MK::CDynamicData> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, MK::CPointer<MK::CDynamicData> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiN2MK8CPointerINS2_12CDynamicDataEEEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void);

/* Symbol: CmdL_AttachclEnqueueFillImage */
/* Demangled: CmdL_AttachclEnqueueFillImage */
int CmdL_AttachclEnqueueFillImage(void);

/* Symbol: _ZN2MK8CCLFlush8ms_kRTTIE */
/* Demangled: MK::CCLFlush::ms_kRTTI */
extern void* _ZN2MK8CCLFlush8ms_kRTTIE;

/* Symbol: _ZTVN2MK22CCLReleaseCommandQueueE */
/* Demangled: vtable for MK::CCLReleaseCommandQueue */
extern void* _ZTVN2MK22CCLReleaseCommandQueueE;

/* Symbol: _ZNKSt3__110__function6__funcIPFivENS_9allocatorIS3_EES2_E7__cloneEPNS0_6__baseIS2_EE */
/* Demangled: std::__1::__function::__func<int (*)(), std::__1::allocator<int (*)()>, int ()>::__clone(std::__1::__function::__base<int ()>*) const */
int _ZNKSt3__110__function6__funcIPFivENS_9allocatorIS3_EES2_E7__cloneEPNS0_6__baseIS2_EE(void);

/* Symbol: CmdL_AttachclEnqueueBarrier */
/* Demangled: CmdL_AttachclEnqueueBarrier */
int CmdL_AttachclEnqueueBarrier(void);

/* Symbol: _ZN2MK23CCLEnqueueNDRangeKernelD1Ev */
/* Demangled: MK::CCLEnqueueNDRangeKernel::~CCLEnqueueNDRangeKernel() */
int _ZN2MK23CCLEnqueueNDRangeKernelD1Ev(void);

/* Symbol: _ZN2MK14CCLRetainEvent4SaveERNS_7CStreamE */
/* Demangled: MK::CCLRetainEvent::Save(MK::CStream&) */
int _ZN2MK14CCLRetainEvent4SaveERNS_7CStreamE(void);

/* Symbol: _ZN2MK19CCLProfileKernelJob8ms_kRTTIE */
/* Demangled: MK::CCLProfileKernelJob::ms_kRTTI */
extern void* _ZN2MK19CCLProfileKernelJob8ms_kRTTIE;

/* Symbol: _ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcjPKS3_PFvS3_PvESE_PiENS_9allocatorISJ_EESI_E7__cloneEPNS0_6__baseISI_EE */
/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)>::__clone(std::__1::__function::__base<_cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)>*) const */
int _ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcjPKS3_PFvS3_PvESE_PiENS_9allocatorISJ_EESI_E7__cloneEPNS0_6__baseISI_EE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSF_ENS_9allocatorISH_EESG_E7__cloneEPNS0_6__baseISG_EE */
/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)>::__clone(std::__1::__function::__base<_cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)>*) const */
int _ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSF_ENS_9allocatorISH_EESG_E7__cloneEPNS0_6__baseISG_EE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mmmjPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mmmjPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E7__cloneEv(void);

/* Symbol: _ZN2MK9CCLFinish6RecordEP17_cl_command_queue */
/* Demangled: MK::CCLFinish::Record(_cl_command_queue*) */
int _ZN2MK9CCLFinish6RecordEP17_cl_command_queue(void);

/* Symbol: _ZNK2MK8CCommand11GetDiskUsedEv */
/* Demangled: MK::CCommand::GetDiskUsed() const */
int _ZNK2MK8CCommand11GetDiskUsedEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePP9_cl_eventENS_9allocatorIS8_EES7_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_event**)>, int (_cl_command_queue*, _cl_event**)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePP9_cl_eventENS_9allocatorIS8_EES7_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPPvPFvS3_jS5_S4_ES4_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OjOS5_OS7_OS4_SJ_OSB_OSC_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, unsigned int&&, void**&&, void (*&&)(_cl_command_queue*, unsigned int, void**, void*), void*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPPvPFvS3_jS5_S4_ES4_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OjOS5_OS7_OS4_SJ_OSB_OSC_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIlN2MK10CBufferMap7_BufferEEENS_19__map_value_compareIlS5_NS_4lessIlEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<long, MK::CBufferMap::_Buffer>, std::__1::__map_value_compare<long, std::__1::__value_type<long, MK::CBufferMap::_Buffer>, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, MK::CBufferMap::_Buffer> > >::destroy(std::__1::__tree_node<std::__1::__value_type<long, MK::CBufferMap::_Buffer>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIlN2MK10CBufferMap7_BufferEEENS_19__map_value_compareIlS5_NS_4lessIlEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: CmdL_AttachclUnloadPlatformCompiler */
/* Demangled: CmdL_AttachclUnloadPlatformCompiler */
int CmdL_AttachclUnloadPlatformCompiler(void);

/* Symbol: _ZN2MK16CCLEnqueueMarker6RecordEP17_cl_command_queueP9_cl_event */
/* Demangled: MK::CCLEnqueueMarker::Record(_cl_command_queue*, _cl_event*) */
int _ZN2MK16CCLEnqueueMarker6RecordEP17_cl_command_queueP9_cl_event(void);

/* Symbol: _ZNK2MK19CCLEnqueueMapBuffer3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLEnqueueMapBuffer::Log(MK::CJsonLog&) const */
int _ZNK2MK19CCLEnqueueMapBuffer3LogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK27CCLEnqueueCopyBufferToImage20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueCopyBufferToImage::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK27CCLEnqueueCopyBufferToImage20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextjjjPiENS_9allocatorIS8_EES7_EclEOS5_OjSD_SD_OS6_ */
/* Demangled: std::__1::__function::__func<_cl_sampler* (*)(_cl_context*, unsigned int, unsigned int, unsigned int, int*), std::__1::allocator<_cl_sampler* (*)(_cl_context*, unsigned int, unsigned int, unsigned int, int*)>, _cl_sampler* (_cl_context*, unsigned int, unsigned int, unsigned int, int*)>::operator()(_cl_context*&&, unsigned int&&, unsigned int&&, unsigned int&&, int*&&) */
int _ZNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextjjjPiENS_9allocatorIS8_EES7_EclEOS5_OjSD_SD_OS6_(void);

/* Symbol: _ZN2MK19clEnqueueCopyBufferEP17_cl_command_queueP7_cl_memS3_mmmjPKP9_cl_eventPS5_ */
/* Demangled: MK::clEnqueueCopyBuffer(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK19clEnqueueCopyBufferEP17_cl_command_queueP7_cl_memS3_mmmjPKP9_cl_eventPS5_(void);

/* Symbol: clCreatePipe */
/* Demangled: clCreatePipe */
int clCreatePipe(void);

/* Symbol: _ZN2MK20CCLEnqueueMemoryCopy8ms_kRTTIE */
/* Demangled: MK::CCLEnqueueMemoryCopy::ms_kRTTI */
extern void* _ZN2MK20CCLEnqueueMemoryCopy8ms_kRTTIE;

/* Symbol: _ZNKSt3__110__function6__funcIPFiP11_cl_programjPP10_cl_kernelPjENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_kernel**, unsigned int*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_kernel**, unsigned int*)>, int (_cl_program*, unsigned int, _cl_kernel**, unsigned int*)>::__clone(std::__1::__function::__base<int (_cl_program*, unsigned int, _cl_kernel**, unsigned int*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP11_cl_programjPP10_cl_kernelPjENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP10_cl_kerneljPKvENS_9allocatorIS7_EES6_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, void const*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, void const*)>, int (_cl_kernel*, unsigned int, void const*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP10_cl_kerneljPKvENS_9allocatorIS7_EES6_E7destroyEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv(void);

/* Symbol: _Z24clEnqueueWriteBufferRectP17_cl_command_queueP7_cl_memjPKmS4_S4_mmmmPvjPKP9_cl_eventPS7_ */
/* Demangled: clEnqueueWriteBufferRect(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**) */
int _Z24clEnqueueWriteBufferRectP17_cl_command_queueP7_cl_memjPKmS4_S4_mmmmPvjPKP9_cl_eventPS7_(void);

/* Symbol: _ZN2MK10CCLCommand4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLCommand::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK10CCLCommand4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP7_cl_memjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP7_cl_memjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void);

/* Symbol: _ZNK2MK16CCLCreateContext13GetMemoryUsedEv */
/* Demangled: MK::CCLCreateContext::GetMemoryUsed() const */
int _ZNK2MK16CCLCreateContext13GetMemoryUsedEv(void);

/* Symbol: _ZNK2MK9CCLFinish13GetMemoryUsedEv */
/* Demangled: MK::CCLFinish::GetMemoryUsed() const */
int _ZNK2MK9CCLFinish13GetMemoryUsedEv(void);

/* Symbol: MKBool_Create */
/* Demangled: MKBool_Create */
int MKBool_Create(void);

/* Symbol: MKProgram_SetInputFd */
/* Demangled: MKProgram_SetInputFd */
int MKProgram_SetInputFd(void);

/* Symbol: _ZN2MK18CCLRetainMemObjectC2ERKS0_ */
/* Demangled: MK::CCLRetainMemObject::CCLRetainMemObject(MK::CCLRetainMemObject const&) */
int _ZN2MK18CCLRetainMemObjectC2ERKS0_(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE;

/* Symbol: _ZN2MK21CCLRetainCommandQueueC1ERKS0_ */
/* Demangled: MK::CCLRetainCommandQueue::CCLRetainCommandQueue(MK::CCLRetainCommandQueue const&) */
int _ZN2MK21CCLRetainCommandQueueC1ERKS0_(void);

/* Symbol: _ZN2MK10CCLSVMFree4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLSVMFree::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK10CCLSVMFree4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNK2MK16CCLWaitForEvents13GetMemoryUsedEv */
/* Demangled: MK::CCLWaitForEvents::GetMemoryUsed() const */
int _ZNK2MK16CCLWaitForEvents13GetMemoryUsedEv(void);

/* Symbol: _Z25handleCreateKernelProfileP10_cl_kernelPKc */
/* Demangled: handleCreateKernelProfile(_cl_kernel*, char const*) */
int _Z25handleCreateKernelProfileP10_cl_kernelPKc(void);

/* Symbol: _ZNK2MK23CCLEnqueueNDRangeKernel13GetMemoryUsedEv */
/* Demangled: MK::CCLEnqueueNDRangeKernel::GetMemoryUsed() const */
int _ZNK2MK23CCLEnqueueNDRangeKernel13GetMemoryUsedEv(void);

/* Symbol: _ZN2MK20CCLPrepareMemoryCopy20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLPrepareMemoryCopy::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK20CCLPrepareMemoryCopy20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: MKProgram_AttachCLEnqueueNDRangeKernel */
/* Demangled: MKProgram_AttachCLEnqueueNDRangeKernel */
int MKProgram_AttachCLEnqueueNDRangeKernel(void);

/* Symbol: _ZN2MK5CBool15RegisterFactoryEv */
/* Demangled: MK::CBool::RegisterFactory() */
int _ZN2MK5CBool15RegisterFactoryEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN2MK8CPointerINS1_8CProgramEEENS_9allocatorIS5_EEE9push_backEOS5_ */
/* Demangled: std::__1::__split_buffer<MK::CPointer<MK::CProgram>*, std::__1::allocator<MK::CPointer<MK::CProgram>*> >::push_back(MK::CPointer<MK::CProgram>*&&) */
int _ZNSt3__114__split_bufferIPN2MK8CPointerINS1_8CProgramEEENS_9allocatorIS5_EEE9push_backEOS5_(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEv(void);

/* Symbol: _ZN2MK12clCreatePipeEP11_cl_contextmjjPKlPi */
/* Demangled: MK::clCreatePipe(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*) */
int _ZN2MK12clCreatePipeEP11_cl_contextmjjPKlPi(void);

/* Symbol: _ZN2MK16CCLEnqueueSVMMap3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLEnqueueSVMMap::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK16CCLEnqueueSVMMap3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuejPPvPFvS3_jS5_S4_ES4_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuejPPvPFvS3_jS5_S4_ES4_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE;

/* Symbol: _ZNK2MK8CProgram15CopyConstructToEv */
/* Demangled: MK::CProgram::CopyConstructTo() const */
int _ZNK2MK8CProgram15CopyConstructToEv(void);

/* Symbol: _ZNK2MK11CUpdateBool13GetMemoryUsedEv */
/* Demangled: MK::CUpdateBool::GetMemoryUsed() const */
int _ZNK2MK11CUpdateBool13GetMemoryUsedEv(void);

/* Symbol: _ZNK2MK16CCLEnqueueMarker13GetMemoryUsedEv */
/* Demangled: MK::CCLEnqueueMarker::GetMemoryUsed() const */
int _ZNK2MK16CCLEnqueueMarker13GetMemoryUsedEv(void);

/* Symbol: MKProgram_AttachCLReleaseMemObject */
/* Demangled: MKProgram_AttachCLReleaseMemObject */
int MKProgram_AttachCLReleaseMemObject(void);

/* Symbol: _Z8callbackPKcmmPv */
/* Demangled: callback(char const*, unsigned long, unsigned long, void*) */
int _Z8callbackPKcmmPv(void);

/* Symbol: _ZNK2MK11CMemoryCopy11GetDiskUsedEv */
/* Demangled: MK::CMemoryCopy::GetDiskUsed() const */
int _ZNK2MK11CMemoryCopy11GetDiskUsedEv(void);

/* Symbol: _ZN2MK8CProgram10GetCommandEi */
/* Demangled: MK::CProgram::GetCommand(int) */
int _ZN2MK8CProgram10GetCommandEi(void);

/* Symbol: _ZN2MK24CCLEnqueueUnmapMemObject4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLEnqueueUnmapMemObject::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK24CCLEnqueueUnmapMemObject4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmPKmS8_PmS9_jPKP9_cl_eventPSB_PiENS_9allocatorISH_EESG_E7__cloneEPNS0_6__baseISG_EE */
/* Demangled: std::__1::__function::__func<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*), std::__1::allocator<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)>, void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)>::__clone(std::__1::__function::__base<void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)>*) const */
int _ZNKSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmPKmS8_PmS9_jPKP9_cl_eventPSB_PiENS_9allocatorISH_EESG_E7__cloneEPNS0_6__baseISG_EE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEv(void);

/* Symbol: _ZN2MK11CThreadJobQD2Ev */
/* Demangled: MK::CThreadJobQ::~CThreadJobQ() */
int _ZN2MK11CThreadJobQD2Ev(void);

/* Symbol: _ZN2MK16CCLEnqueueSVMMap6RecordEP17_cl_command_queuejmPvmjPKP9_cl_eventS5_ */
/* Demangled: MK::CCLEnqueueSVMMap::Record(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event*) */
int _ZN2MK16CCLEnqueueSVMMap6RecordEP17_cl_command_queuejmPvmjPKP9_cl_eventS5_(void);

/* Symbol: _ZN2MK16CCLCreateContextC2ERKS0_ */
/* Demangled: MK::CCLCreateContext::CCLCreateContext(MK::CCLCreateContext const&) */
int _ZN2MK16CCLCreateContextC2ERKS0_(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithSourceC2Ev */
/* Demangled: MK::CCLCreateProgramWithSource::CCLCreateProgramWithSource() */
int _ZN2MK26CCLCreateProgramWithSourceC2Ev(void);

/* Symbol: _ZN2MK14CCLRetainEvent7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLRetainEvent::Factory(MK::CStream&) */
int _ZN2MK14CCLRetainEvent7FactoryERNS_7CStreamE(void);

/* Symbol: clCreateSubBuffer */
/* Demangled: clCreateSubBuffer */
int clCreateSubBuffer(void);

/* Symbol: _ZTVNSt3__110__function6__funcINS_8functionIFimPvEEENS_9allocatorIS5_EEFijS3_EEE */
/* Demangled: vtable for std::__1::__function::__func<std::__1::function<int (unsigned long, void*)>, std::__1::allocator<std::__1::function<int (unsigned long, void*)> >, int (unsigned int, void*)> */
extern void* _ZTVNSt3__110__function6__funcINS_8functionIFimPvEEENS_9allocatorIS5_EEFijS3_EEE;

/* Symbol: MKProgram_AttachDummyCommand */
/* Demangled: MKProgram_AttachDummyCommand */
int MKProgram_AttachDummyCommand(void);

/* Symbol: _ZN2MK25CCLCreateKernelsInProgramC2ERKS0_ */
/* Demangled: MK::CCLCreateKernelsInProgram::CCLCreateKernelsInProgram(MK::CCLCreateKernelsInProgram const&) */
int _ZN2MK25CCLCreateKernelsInProgramC2ERKS0_(void);

/* Symbol: _ZN2MK19CCLReleaseMemObject4SaveERNS_7CStreamE */
/* Demangled: MK::CCLReleaseMemObject::Save(MK::CStream&) */
int _ZN2MK19CCLReleaseMemObject4SaveERNS_7CStreamE(void);

/* Symbol: _ZNK2MK14COutputTensors15CopyConstructToEv */
/* Demangled: MK::COutputTensors::CopyConstructTo() const */
int _ZNK2MK14COutputTensors15CopyConstructToEv(void);

/* Symbol: _ZN2MK21CCLCreateCommandQueue15RegisterFactoryEv */
/* Demangled: MK::CCLCreateCommandQueue::RegisterFactory() */
int _ZN2MK21CCLCreateCommandQueue15RegisterFactoryEv(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithSourceD1Ev */
/* Demangled: MK::CCLCreateProgramWithSource::~CCLCreateProgramWithSource() */
int _ZN2MK26CCLCreateProgramWithSourceD1Ev(void);

/* Symbol: _ZN2MK14CCLRetainEvent4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLRetainEvent::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK14CCLRetainEvent4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmjjPKlPiENS_9allocatorISA_EES9_EE */
/* Demangled: vtable for std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)>, _cl_mem* (_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmjjPKlPiENS_9allocatorISA_EES9_EE;

/* Symbol: clEnqueueNDRangeKernel */
/* Demangled: clEnqueueNDRangeKernel */
int clEnqueueNDRangeKernel(void);

/* Symbol: _ZNK2MK16CCLEnqueueMarker15CopyConstructToEv */
/* Demangled: MK::CCLEnqueueMarker::CopyConstructTo() const */
int _ZNK2MK16CCLEnqueueMarker15CopyConstructToEv(void);

/* Symbol: _ZN2MK21CCLEnqueueWriteBuffer15RegisterFactoryEv */
/* Demangled: MK::CCLEnqueueWriteBuffer::RegisterFactory() */
int _ZN2MK21CCLEnqueueWriteBuffer15RegisterFactoryEv(void);

/* Symbol: _ZNK2MK11CCLSVMAlloc3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLSVMAlloc::Log(MK::CJsonLog&) const */
int _ZNK2MK11CCLSVMAlloc3LogERNS_8CJsonLogE(void);

/* Symbol: CmdL_AttachclCreateKernelsInProgram */
/* Demangled: CmdL_AttachclCreateKernelsInProgram */
int CmdL_AttachclCreateKernelsInProgram(void);

/* Symbol: clReleaseSampler */
/* Demangled: clReleaseSampler */
int clReleaseSampler(void);

/* Symbol: _ZNK2MK14COutputTensors11GetDiskUsedEv */
/* Demangled: MK::COutputTensors::GetDiskUsed() const */
int _ZNK2MK14COutputTensors11GetDiskUsedEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPFPN2MK7CObjectERNS8_7CStreamEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, MK::CObject* (*)(MK::CStream&)>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, MK::CObject* (*)(MK::CStream&)>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, MK::CObject* (*)(MK::CStream&)> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, MK::CObject* (*)(MK::CStream&)>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPFPN2MK7CObjectERNS8_7CStreamEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE(void);

/* Symbol: _ZN2MK16clEnqueueSVMFreeEP17_cl_command_queuejPPvPFvS1_jS3_S2_ES2_jPKP9_cl_eventPS7_ */
/* Demangled: MK::clEnqueueSVMFree(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK16clEnqueueSVMFreeEP17_cl_command_queuejPPvPFvS1_jS3_S2_ES2_jPKP9_cl_eventPS7_(void);

/* Symbol: _ZN2MK17CCLReleaseContext6RecordEP11_cl_context */
/* Demangled: MK::CCLReleaseContext::Record(_cl_context*) */
int _ZN2MK17CCLReleaseContext6RecordEP11_cl_context(void);

/* Symbol: _ZN2MK20CCLPrepareMemoryCopyD2Ev */
/* Demangled: MK::CCLPrepareMemoryCopy::~CCLPrepareMemoryCopy() */
int _ZN2MK20CCLPrepareMemoryCopyD2Ev(void);

/* Symbol: _ZTVN2MK20CCLPrepareMemoryCopyE */
/* Demangled: vtable for MK::CCLPrepareMemoryCopy */
extern void* _ZTVN2MK20CCLPrepareMemoryCopyE;

/* Symbol: _ZN2MK21CCLRetainCommandQueue15RegisterFactoryEv */
/* Demangled: MK::CCLRetainCommandQueue::RegisterFactory() */
int _ZN2MK21CCLRetainCommandQueue15RegisterFactoryEv(void);

/* Symbol: _ZN2MK19CCLProfileKernelJobD0Ev */
/* Demangled: MK::CCLProfileKernelJob::~CCLProfileKernelJob() */
int _ZN2MK19CCLProfileKernelJobD0Ev(void);

/* Symbol: _ZN2MK18clReleaseMemObjectEP7_cl_mem */
/* Demangled: MK::clReleaseMemObject(_cl_mem*) */
int _ZN2MK18clReleaseMemObjectEP7_cl_mem(void);

/* Symbol: _ZN2MK17CCLReleaseContext7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLReleaseContext::Factory(MK::CStream&) */
int _ZN2MK17CCLReleaseContext7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK16CCLEnqueueSVMMap4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLEnqueueSVMMap::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK16CCLEnqueueSVMMap4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK11CMemoryCopyC2ERKS0_ */
/* Demangled: MK::CMemoryCopy::CMemoryCopy(MK::CMemoryCopy const&) */
int _ZN2MK11CMemoryCopyC2ERKS0_(void);

/* Symbol: MKProgram_AttachCLSVMAlloc */
/* Demangled: MKProgram_AttachCLSVMAlloc */
int MKProgram_AttachCLSVMAlloc(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuemjPmENS_9allocatorIS6_EES5_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned long, unsigned int, unsigned long*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned long, unsigned int, unsigned long*)>, int (_cl_command_queue*, unsigned long, unsigned int, unsigned long*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuemjPmENS_9allocatorIS6_EES5_E18destroy_deallocateEv(void);

/* Symbol: _ZNK2MK16CCLRetainProgram13GetMemoryUsedEv */
/* Demangled: MK::CCLRetainProgram::GetMemoryUsed() const */
int _ZNK2MK16CCLRetainProgram13GetMemoryUsedEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP11_cl_contextPKljPKP13_cl_device_idPFvPKcPKvmPvESE_PiENS_9allocatorISJ_EESI_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<_cl_context* (*)(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*), std::__1::allocator<_cl_context* (*)(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>, _cl_context* (long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFP11_cl_contextPKljPKP13_cl_device_idPFvPKcPKvmPvESE_PiENS_9allocatorISJ_EESI_E18destroy_deallocateEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP13_cl_device_idjmPvPmENS_9allocatorIS7_EES6_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP13_cl_device_idjmPvPmENS_9allocatorIS7_EES6_EE;

/* Symbol: _ZN2MK24CCLEnqueueUnmapMemObject8ms_kRTTIE */
/* Demangled: MK::CCLEnqueueUnmapMemObject::ms_kRTTI */
extern void* _ZN2MK24CCLEnqueueUnmapMemObject8ms_kRTTIE;

/* Symbol: _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmjjPKlPiENS_9allocatorISA_EES9_EclEOS5_OmOjSG_OS7_OS8_ */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)>, _cl_mem* (_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)>::operator()(_cl_context*&&, unsigned long&&, unsigned int&&, unsigned int&&, long const*&&, int*&&) */
int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmjjPKlPiENS_9allocatorISA_EES9_EclEOS5_OmOjSG_OS7_OS8_(void);

/* Symbol: MKStream_Release */
/* Demangled: MKStream_Release */
int MKStream_Release(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFimPvENS_9allocatorIS4_EES3_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(unsigned long, void*), std::__1::allocator<int (*)(unsigned long, void*)>, int (unsigned long, void*)> */
extern void* _ZTVNSt3__110__function6__funcIPFimPvENS_9allocatorIS4_EES3_EE;

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_S7_mmmmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E7__cloneEPNS0_6__baseISE_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_S7_mmmmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E7__cloneEPNS0_6__baseISE_EE(void);

/* Symbol: _ZN2MK18CCLRetainMemObject6RecordEP7_cl_mem */
/* Demangled: MK::CCLRetainMemObject::Record(_cl_mem*) */
int _ZN2MK18CCLRetainMemObject6RecordEP7_cl_mem(void);

/* Symbol: _ZN2MK15CCLCreateBufferC2ERKS0_ */
/* Demangled: MK::CCLCreateBuffer::CCLCreateBuffer(MK::CCLCreateBuffer const&) */
int _ZN2MK15CCLCreateBufferC2ERKS0_(void);

/* Symbol: _ZN2MK19CCLProfileKernelJobC2EP11_cl_programS2_P10_cl_kernelS4_P9_cl_event */
/* Demangled: MK::CCLProfileKernelJob::CCLProfileKernelJob(_cl_program*, _cl_program*, _cl_kernel*, _cl_kernel*, _cl_event*) */
int _ZN2MK19CCLProfileKernelJobC2EP11_cl_programS2_P10_cl_kernelS4_P9_cl_event(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP10_cl_kerneljPKvENS_9allocatorIS7_EES6_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, void const*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, void const*)>, int (_cl_kernel*, unsigned int, void const*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP10_cl_kerneljPKvENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void);

/* Symbol: CmdL_AttachclImportMemoryARM */
/* Demangled: CmdL_AttachclImportMemoryARM */
int CmdL_AttachclImportMemoryARM(void);

/* Symbol: clEnqueueReadBufferRect */
/* Demangled: clEnqueueReadBufferRect */
int clEnqueueReadBufferRect(void);

/* Symbol: _ZNK2MK16CCLCreateContext13GetDeviceInfoEjPKP13_cl_device_idRNSt3__13mapINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEES2_NS5_4lessISC_EENSA_INS5_4pairIKSC_S2_EEEEEERNS6_ISC_SC_SE_NSA_INSF_ISG_SC_EEEEEE */
/* Demangled: MK::CCLCreateContext::GetDeviceInfo(unsigned int, _cl_device_id* const*, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, _cl_device_id*> > >&, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >&) const */
int _ZNK2MK16CCLCreateContext13GetDeviceInfoEjPKP13_cl_device_idRNSt3__13mapINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEES2_NS5_4lessISC_EENSA_INS5_4pairIKSC_S2_EEEEEERNS6_ISC_SC_SE_NSA_INSF_ISG_SC_EEEEEE(void);

/* Symbol: _ZTVN2MK10CCLSVMFreeE */
/* Demangled: vtable for MK::CCLSVMFree */
extern void* _ZTVN2MK10CCLSVMFreeE;

/* Symbol: MKProgram_AttachCLPrepareMemoryCopy */
/* Demangled: MKProgram_AttachCLPrepareMemoryCopy */
int MKProgram_AttachCLPrepareMemoryCopy(void);

/* Symbol: _ZN2MK23CCLEnqueueNDRangeKernelC1Ev */
/* Demangled: MK::CCLEnqueueNDRangeKernel::CCLEnqueueNDRangeKernel() */
int _ZN2MK23CCLEnqueueNDRangeKernelC1Ev(void);

/* Symbol: _ZN2MK7CObjectD2Ev */
/* Demangled: MK::CObject::~CObject() */
int _ZN2MK7CObjectD2Ev(void);

/* Symbol: _ZN2MK19CCLEnqueueMapBuffer15RegisterFactoryEv */
/* Demangled: MK::CCLEnqueueMapBuffer::RegisterFactory() */
int _ZN2MK19CCLEnqueueMapBuffer15RegisterFactoryEv(void);

/* Symbol: _ZN2MK19CCLReleaseMemObject4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLReleaseMemObject::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK19CCLReleaseMemObject4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNK2MK16CCLEnqueueSVMMap3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLEnqueueSVMMap::Log(MK::CJsonLog&) const */
int _ZNK2MK16CCLEnqueueSVMMap3LogERNS_8CJsonLogE(void);

/* Symbol: clEnqueueCopyBuffer */
/* Demangled: clEnqueueCopyBuffer */
int clEnqueueCopyBuffer(void);

/* Symbol: _ZN2MK15CCLSetKernelArg15RegisterFactoryEv */
/* Demangled: MK::CCLSetKernelArg::RegisterFactory() */
int _ZN2MK15CCLSetKernelArg15RegisterFactoryEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPKlPvmPiENS_9allocatorISB_EESA_E7__cloneEPNS0_6__baseISA_EE */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, long const*, void*, unsigned long, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, long const*, void*, unsigned long, int*)>, _cl_mem* (_cl_context*, unsigned long, long const*, void*, unsigned long, int*)>::__clone(std::__1::__function::__base<_cl_mem* (_cl_context*, unsigned long, long const*, void*, unsigned long, int*)>*) const */
int _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPKlPvmPiENS_9allocatorISB_EESA_E7__cloneEPNS0_6__baseISA_EE(void);

/* Symbol: _ZN2MK20CCLPrepareMemoryCopy6RecordEP11_cl_contextjPKP13_cl_device_idP10_cl_kernel */
/* Demangled: MK::CCLPrepareMemoryCopy::Record(_cl_context*, unsigned int, _cl_device_id* const*, _cl_kernel*) */
int _ZN2MK20CCLPrepareMemoryCopy6RecordEP11_cl_contextjPKP13_cl_device_idP10_cl_kernel(void);

/* Symbol: _ZN2MK11CUpdateBoolC1ERKS0_ */
/* Demangled: MK::CUpdateBool::CUpdateBool(MK::CUpdateBool const&) */
int _ZN2MK11CUpdateBoolC1ERKS0_(void);

/* Symbol: _ZN2MK29clCreateSamplerWithPropertiesEP11_cl_contextPKmPi */
/* Demangled: MK::clCreateSamplerWithProperties(_cl_context*, unsigned long const*, int*) */
int _ZN2MK29clCreateSamplerWithPropertiesEP11_cl_contextPKmPi(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRA128_cEEEvDpOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__emplace_back_slow_path<char (&) [128]>(char (&) [128]) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRA128_cEEEvDpOT_(void);

/* Symbol: _ZNK2MK23CCLEnqueueNDRangeKernel11GetDiskUsedEv */
/* Demangled: MK::CCLEnqueueNDRangeKernel::GetDiskUsed() const */
int _ZNK2MK23CCLEnqueueNDRangeKernel11GetDiskUsedEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP10_cl_kernelENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*), std::__1::allocator<int (*)(_cl_kernel*)>, int (_cl_kernel*)>::__clone(std::__1::__function::__base<int (_cl_kernel*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP10_cl_kernelENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void);

/* Symbol: _ZN2MK11CUpdateBool3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CUpdateBool::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK11CUpdateBool3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: CmdL_TreeNodePushStack */
/* Demangled: CmdL_TreeNodePushStack */
int CmdL_TreeNodePushStack(void);

/* Symbol: clEnqueueNativeKernel */
/* Demangled: clEnqueueNativeKernel */
int clEnqueueNativeKernel(void);

/* Symbol: _ZN2MK23CCLEnqueueNDRangeKernelD0Ev */
/* Demangled: MK::CCLEnqueueNDRangeKernel::~CCLEnqueueNDRangeKernel() */
int _ZN2MK23CCLEnqueueNDRangeKernelD0Ev(void);

/* Symbol: _ZN2MK10CCLSVMFree20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLSVMFree::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK10CCLSVMFree20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK8CProgram13AttachCommandEPNS_8CCommandE */
/* Demangled: MK::CProgram::AttachCommand(MK::CCommand*) */
int _ZN2MK8CProgram13AttachCommandEPNS_8CCommandE(void);

/* Symbol: CmdL_AttachclSetCommandQueueProperty */
/* Demangled: CmdL_AttachclSetCommandQueueProperty */
int CmdL_AttachclSetCommandQueueProperty(void);

/* Symbol: _ZNK2MK15CCLCreateKernel11GetDiskUsedEv */
/* Demangled: MK::CCLCreateKernel::GetDiskUsed() const */
int _ZNK2MK15CCLCreateKernel11GetDiskUsedEv(void);

/* Symbol: _ZN2MK16CCLWaitForEvents7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLWaitForEvents::Factory(MK::CStream&) */
int _ZN2MK16CCLWaitForEvents7FactoryERNS_7CStreamE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSF_ENS_9allocatorISH_EESG_EE */
/* Demangled: vtable for std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSF_ENS_9allocatorISH_EESG_EE;

/* Symbol: _ZNSt3__15dequeIN2MK8CPointerINS1_8CProgramEEENS_9allocatorIS4_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<MK::CPointer<MK::CProgram>, std::__1::allocator<MK::CPointer<MK::CProgram> > >::__add_back_capacity() */
int _ZNSt3__15dequeIN2MK8CPointerINS1_8CProgramEEENS_9allocatorIS4_EEE19__add_back_capacityEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP11_cl_contextENS_9allocatorIS5_EES4_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_context*), std::__1::allocator<int (*)(_cl_context*)>, int (_cl_context*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP11_cl_contextENS_9allocatorIS5_EES4_E7__cloneEv(void);

/* Symbol: MKObject_Release */
/* Demangled: MKObject_Release */
int MKObject_Release(void);

/* Symbol: _ZTVN2MK8CCLFlushE */
/* Demangled: vtable for MK::CCLFlush */
extern void* _ZTVN2MK8CCLFlushE;

/* Symbol: clGetSamplerInfo */
/* Demangled: clGetSamplerInfo */
int clGetSamplerInfo(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithBinary4SaveERNS_7CStreamE */
/* Demangled: MK::CCLCreateProgramWithBinary::Save(MK::CStream&) */
int _ZN2MK26CCLCreateProgramWithBinary4SaveERNS_7CStreamE(void);

/* Symbol: _ZN2MK15CCLSetKernelArgC2ERKS0_ */
/* Demangled: MK::CCLSetKernelArg::CCLSetKernelArg(MK::CCLSetKernelArg const&) */
int _ZN2MK15CCLSetKernelArgC2ERKS0_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueENS_9allocatorIS5_EES4_EclEOS3_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*), std::__1::allocator<int (*)(_cl_command_queue*)>, int (_cl_command_queue*)>::operator()(_cl_command_queue*&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueENS_9allocatorIS5_EES4_EclEOS3_(void);

/* Symbol: _ZN2MK14COutputTensors3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::COutputTensors::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK14COutputTensors3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: clEnqueueCopyImageToBuffer */
/* Demangled: clEnqueueCopyImageToBuffer */
int clEnqueueCopyImageToBuffer(void);

/* Symbol: clGetImageInfo */
/* Demangled: clGetImageInfo */
int clGetImageInfo(void);

/* Symbol: _ZNK2MK15CCLCreateBuffer15CopyConstructToEv */
/* Demangled: MK::CCLCreateBuffer::CopyConstructTo() const */
int _ZNK2MK15CCLCreateBuffer15CopyConstructToEv(void);

/* Symbol: _ZN2MK16CCLEnqueueSVMMap8ms_kRTTIE */
/* Demangled: MK::CCLEnqueueSVMMap::ms_kRTTI */
extern void* _ZN2MK16CCLEnqueueSVMMap8ms_kRTTIE;

/* Symbol: _ZNSt3__110__function6__funcIPFiP9_cl_eventiENS_9allocatorIS5_EES4_EclEOS3_Oi */
/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, int), std::__1::allocator<int (*)(_cl_event*, int)>, int (_cl_event*, int)>::operator()(_cl_event*&&, int&&) */
int _ZNSt3__110__function6__funcIPFiP9_cl_eventiENS_9allocatorIS5_EES4_EclEOS3_Oi(void);

/* Symbol: _ZN2MK14CCLRetainEventC1ERKS0_ */
/* Demangled: MK::CCLRetainEvent::CCLRetainEvent(MK::CCLRetainEvent const&) */
int _ZN2MK14CCLRetainEventC1ERKS0_(void);

/* Symbol: MKProgram_AttachCLEnqueueMapBuffer */
/* Demangled: MKProgram_AttachCLEnqueueMapBuffer */
int MKProgram_AttachCLEnqueueMapBuffer(void);

/* Symbol: MKProgram_AttachCLReleaseContext */
/* Demangled: MKProgram_AttachCLReleaseContext */
int MKProgram_AttachCLReleaseContext(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcjPKS3_PFvS3_PvESE_PiENS_9allocatorISJ_EESI_E7__cloneEv */
/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcjPKS3_PFvS3_PvESE_PiENS_9allocatorISJ_EESI_E7__cloneEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventPS5_ENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventPS5_ENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idmPiENS_9allocatorISA_EES9_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long, int*), std::__1::allocator<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long, int*)>, _cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long, int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idmPiENS_9allocatorISA_EES9_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZN2MK19CCLEnqueueMapBuffer7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueMapBuffer::Factory(MK::CStream&) */
int _ZN2MK19CCLEnqueueMapBuffer7FactoryERNS_7CStreamE(void);

/* Symbol: _ZNK2MK11CUpdateBool15CopyConstructToEv */
/* Demangled: MK::CUpdateBool::CopyConstructTo() const */
int _ZNK2MK11CUpdateBool15CopyConstructToEv(void);

/* Symbol: _ZN2MK11CUpdateBoolC1EPNS_5CBoolEb */
/* Demangled: MK::CUpdateBool::CUpdateBool(MK::CBool*, bool) */
int _ZN2MK11CUpdateBoolC1EPNS_5CBoolEb(void);

/* Symbol: _ZN2MK14clRetainKernelEP10_cl_kernel */
/* Demangled: MK::clRetainKernel(_cl_kernel*) */
int _ZN2MK14clRetainKernelEP10_cl_kernel(void);

/* Symbol: _ZN2MK15CCLReleaseEvent3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLReleaseEvent::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK15CCLReleaseEvent3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idPKmPiENS_9allocatorISC_EESB_EE */
/* Demangled: vtable for std::__1::__function::__func<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long const*, int*), std::__1::allocator<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long const*, int*)>, _cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long const*, int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idPKmPiENS_9allocatorISC_EESB_EE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPFPN2MK7CObjectERNS8_7CStreamEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE4findIS7_EENS_15__tree_iteratorISF_PNS_11__tree_nodeISF_PvEElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, MK::CObject* (*)(MK::CStream&)>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, MK::CObject* (*)(MK::CStream&)>, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, MK::CObject* (*)(MK::CStream&)>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, MK::CObject* (*)(MK::CStream&)>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, MK::CObject* (*)(MK::CStream&)> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPFPN2MK7CObjectERNS8_7CStreamEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE4findIS7_EENS_15__tree_iteratorISF_PNS_11__tree_nodeISF_PvEElEERKT_(void);

/* Symbol: _ZNK2MK8CVersioneqERKS0_ */
/* Demangled: MK::CVersion::operator==(MK::CVersion const&) const */
int _ZNK2MK8CVersioneqERKS0_(void);

/* Symbol: _ZN2MK7clFlushEP17_cl_command_queue */
/* Demangled: MK::clFlush(_cl_command_queue*) */
int _ZN2MK7clFlushEP17_cl_command_queue(void);

/* Symbol: _ZN2MK8clFinishEP17_cl_command_queue */
/* Demangled: MK::clFinish(_cl_command_queue*) */
int _ZN2MK8clFinishEP17_cl_command_queue(void);

/* Symbol: _ZN2MK15CCLImportMemory4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLImportMemory::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK15CCLImportMemory4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNK2MK11CStaticData13GetMemoryUsedEv */
/* Demangled: MK::CStaticData::GetMemoryUsed() const */
int _ZNK2MK11CStaticData13GetMemoryUsedEv(void);

/* Symbol: _ZN2MK11CThreadJobQC2Ev */
/* Demangled: MK::CThreadJobQ::CThreadJobQ() */
int _ZN2MK11CThreadJobQC2Ev(void);

/* Symbol: _ZN2MK8CCommand8ms_kRTTIE */
/* Demangled: MK::CCommand::ms_kRTTI */
extern void* _ZN2MK8CCommand8ms_kRTTIE;

/* Symbol: _ZNK2MK28CCLEnqueueMarkerWithWaitList15CopyConstructToEv */
/* Demangled: MK::CCLEnqueueMarkerWithWaitList::CopyConstructTo() const */
int _ZNK2MK28CCLEnqueueMarkerWithWaitList15CopyConstructToEv(void);

/* Symbol: _ZNK2MK16CCLReleaseKernel3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLReleaseKernel::Log(MK::CJsonLog&) const */
int _ZNK2MK16CCLReleaseKernel3LogERNS_8CJsonLogE(void);

/* Symbol: _ZNK2MK15CCLRetainKernel13GetMemoryUsedEv */
/* Demangled: MK::CCLRetainKernel::GetMemoryUsed() const */
int _ZNK2MK15CCLRetainKernel13GetMemoryUsedEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFivENS_9allocatorIS3_EES2_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(), std::__1::allocator<int (*)()>, int ()>::__clone() const */
int _ZNKSt3__110__function6__funcIPFivENS_9allocatorIS3_EES2_E7__cloneEv(void);

/* Symbol: CmdL_AttachclReleaseEvent */
/* Demangled: CmdL_AttachclReleaseEvent */
int CmdL_AttachclReleaseEvent(void);

/* Symbol: _ZN2MK8CCommand4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCommand::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK8CCommand4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZTVN2MK15CCLCreateBufferE */
/* Demangled: vtable for MK::CCLCreateBuffer */
extern void* _ZTVN2MK15CCLCreateBufferE;

/* Symbol: _ZNK2MK18CCLEnqueueSVMUnmap3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLEnqueueSVMUnmap::Log(MK::CJsonLog&) const */
int _ZNK2MK18CCLEnqueueSVMUnmap3LogERNS_8CJsonLogE(void);

/* Symbol: _ZTVN2MK18CCLEnqueueSVMUnmapE */
/* Demangled: vtable for MK::CCLEnqueueSVMUnmap */
extern void* _ZTVN2MK18CCLEnqueueSVMUnmapE;

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E7destroyEv(void);

/* Symbol: CmdL_AttachclCreateSubBuffer */
/* Demangled: CmdL_AttachclCreateSubBuffer */
int CmdL_AttachclCreateSubBuffer(void);

/* Symbol: _ZGVZN2MK11CThreadJobQ11GetInstanceEvE14gs_kThreadJobQ */
/* Demangled: guard variable for MK::CThreadJobQ::GetInstance()::gs_kThreadJobQ */
extern void* _ZGVZN2MK11CThreadJobQ11GetInstanceEvE14gs_kThreadJobQ;

/* Symbol: _ZNKSt3__110__function6__funcIPFijPP15_cl_platform_idPjENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE */
/* Demangled: std::__1::__function::__func<int (*)(unsigned int, _cl_platform_id**, unsigned int*), std::__1::allocator<int (*)(unsigned int, _cl_platform_id**, unsigned int*)>, int (unsigned int, _cl_platform_id**, unsigned int*)>::__clone(std::__1::__function::__base<int (unsigned int, _cl_platform_id**, unsigned int*)>*) const */
int _ZNKSt3__110__function6__funcIPFijPP15_cl_platform_idPjENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void);

/* Symbol: _ZN2MK12CDynamicData7FactoryERNS_7CStreamE */
/* Demangled: MK::CDynamicData::Factory(MK::CStream&) */
int _ZN2MK12CDynamicData7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK11CMemoryCopyD2Ev */
/* Demangled: MK::CMemoryCopy::~CMemoryCopy() */
int _ZN2MK11CMemoryCopyD2Ev(void);

/* Symbol: _ZN2MK15CProfileDataJobD2Ev */
/* Demangled: MK::CProfileDataJob::~CProfileDataJob() */
int _ZN2MK15CProfileDataJobD2Ev(void);

/* Symbol: CmdL_AttachclRetainEvent */
/* Demangled: CmdL_AttachclRetainEvent */
int CmdL_AttachclRetainEvent(void);

/* Symbol: _ZN2MK11CThreadJobQD1Ev */
/* Demangled: MK::CThreadJobQ::~CThreadJobQ() */
int _ZN2MK11CThreadJobQD1Ev(void);

/* Symbol: _ZTVN2MK20CCLEnqueueReadBufferE */
/* Demangled: vtable for MK::CCLEnqueueReadBuffer */
extern void* _ZTVN2MK20CCLEnqueueReadBufferE;

/* Symbol: _ZN2MK26CCLCreateProgramWithSourceC1Ev */
/* Demangled: MK::CCLCreateProgramWithSource::CCLCreateProgramWithSource() */
int _ZN2MK26CCLCreateProgramWithSourceC1Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcPFvS3_PvESA_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)>, int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)>::__clone(std::__1::__function::__base<int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcPFvS3_PvESA_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFijPP15_cl_platform_idPjENS_9allocatorIS7_EES6_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(unsigned int, _cl_platform_id**, unsigned int*), std::__1::allocator<int (*)(unsigned int, _cl_platform_id**, unsigned int*)>, int (unsigned int, _cl_platform_id**, unsigned int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFijPP15_cl_platform_idPjENS_9allocatorIS7_EES6_EE;

/* Symbol: _ZN2MK17CCLReleaseProgram4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLReleaseProgram::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK17CCLReleaseProgram4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNK2MK13CInputTensors3LogERNS_8CJsonLogE */
/* Demangled: MK::CInputTensors::Log(MK::CJsonLog&) const */
int _ZNK2MK13CInputTensors3LogERNS_8CJsonLogE(void);

/* Symbol: clCreateContextFromType */
/* Demangled: clCreateContextFromType */
int clCreateContextFromType(void);

/* Symbol: _ZN2MK27CCLEnqueueCopyBufferToImageD2Ev */
/* Demangled: MK::CCLEnqueueCopyBufferToImage::~CCLEnqueueCopyBufferToImage() */
int _ZN2MK27CCLEnqueueCopyBufferToImageD2Ev(void);

/* Symbol: _ZN2MK20CCLPrepareMemoryCopyC2Ev */
/* Demangled: MK::CCLPrepareMemoryCopy::CCLPrepareMemoryCopy() */
int _ZN2MK20CCLPrepareMemoryCopyC2Ev(void);

/* Symbol: _ZNK2MK7CObject13GetMemoryUsedEv */
/* Demangled: MK::CObject::GetMemoryUsed() const */
int _ZNK2MK7CObject13GetMemoryUsedEv(void);

/* Symbol: _Z22handleCreateKernelNULLP10_cl_kernelPKc */
/* Demangled: handleCreateKernelNULL(_cl_kernel*, char const*) */
int _Z22handleCreateKernelNULLP10_cl_kernelPKc(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmjjPKlPiENS_9allocatorISA_EES9_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)>, _cl_mem* (_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmjjPKlPiENS_9allocatorISA_EES9_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP9_cl_eventENS_9allocatorIS5_EES4_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_event*), std::__1::allocator<int (*)(_cl_event*)>, int (_cl_event*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP9_cl_eventENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void);

/* Symbol: _ZNK2MK14COutputTensors13GetMemoryUsedEv */
/* Demangled: MK::COutputTensors::GetMemoryUsed() const */
int _ZNK2MK14COutputTensors13GetMemoryUsedEv(void);

/* Symbol: _ZN2MK14clReleaseEventEP9_cl_event */
/* Demangled: MK::clReleaseEvent(_cl_event*) */
int _ZN2MK14clReleaseEventEP9_cl_event(void);

/* Symbol: _ZNK2MK15CCLBuildProgram13GetMemoryUsedEv */
/* Demangled: MK::CCLBuildProgram::GetMemoryUsed() const */
int _ZNK2MK15CCLBuildProgram13GetMemoryUsedEv(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithSourceD0Ev */
/* Demangled: MK::CCLCreateProgramWithSource::~CCLCreateProgramWithSource() */
int _ZN2MK26CCLCreateProgramWithSourceD0Ev(void);

/* Symbol: _ZN2MK16clReleaseContextEP11_cl_context */
/* Demangled: MK::clReleaseContext(_cl_context*) */
int _ZN2MK16clReleaseContextEP11_cl_context(void);

/* Symbol: _ZN2MK15CCLReleaseEvent6RecordEP9_cl_event */
/* Demangled: MK::CCLReleaseEvent::Record(_cl_event*) */
int _ZN2MK15CCLReleaseEvent6RecordEP9_cl_event(void);

/* Symbol: _ZN2MK28CCLEnqueueMarkerWithWaitList8ms_kRTTIE */
/* Demangled: MK::CCLEnqueueMarkerWithWaitList::ms_kRTTI */
extern void* _ZN2MK28CCLEnqueueMarkerWithWaitList8ms_kRTTIE;

/* Symbol: _ZNK2MK20CCLEnqueueReadBuffer3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLEnqueueReadBuffer::Log(MK::CJsonLog&) const */
int _ZNK2MK20CCLEnqueueReadBuffer3LogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK13CCLProfileJobC2ERKS0_ */
/* Demangled: MK::CCLProfileJob::CCLProfileJob(MK::CCLProfileJob const&) */
int _ZN2MK13CCLProfileJobC2ERKS0_(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_S7_mmmmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_S7_mmmmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePP9_cl_eventENS_9allocatorIS8_EES7_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_event**)>, int (_cl_command_queue*, _cl_event**)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePP9_cl_eventENS_9allocatorIS8_EES7_E18destroy_deallocateEv(void);

/* Symbol: clEnqueueCopyImage */
/* Demangled: clEnqueueCopyImage */
int clEnqueueCopyImage(void);

/* Symbol: _Z18clGetKernelAddressP10_cl_kernel */
/* Demangled: clGetKernelAddress(_cl_kernel*) */
int _Z18clGetKernelAddressP10_cl_kernel(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPPKcPKmPiENS_9allocatorISD_EESC_EE */
/* Demangled: vtable for std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, char const**, unsigned long const*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, char const**, unsigned long const*, int*)>, _cl_program* (_cl_context*, unsigned int, char const**, unsigned long const*, int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPPKcPKmPiENS_9allocatorISD_EESC_EE;

/* Symbol: _ZN2MK14COutputTensorsC2ERKS0_ */
/* Demangled: MK::COutputTensors::COutputTensors(MK::COutputTensors const&) */
int _ZN2MK14COutputTensorsC2ERKS0_(void);

/* Symbol: CmdL_AttachclSetUserEventStatus */
/* Demangled: CmdL_AttachclSetUserEventStatus */
int CmdL_AttachclSetUserEventStatus(void);

/* Symbol: _ZNK2MK26CCLCreateProgramWithSource11GetDiskUsedEv */
/* Demangled: MK::CCLCreateProgramWithSource::GetDiskUsed() const */
int _ZNK2MK26CCLCreateProgramWithSource11GetDiskUsedEv(void);

/* Symbol: _ZN2MK20CCLPrepareMemoryCopyD1Ev */
/* Demangled: MK::CCLPrepareMemoryCopy::~CCLPrepareMemoryCopy() */
int _ZN2MK20CCLPrepareMemoryCopyD1Ev(void);

/* Symbol: _ZN2MK14CCLRetainEventD2Ev */
/* Demangled: MK::CCLRetainEvent::~CCLRetainEvent() */
int _ZN2MK14CCLRetainEventD2Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP10_cl_kerneljmPKvENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned long, void const*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned long, void const*)>, int (_cl_kernel*, unsigned int, unsigned long, void const*)>::__clone(std::__1::__function::__base<int (_cl_kernel*, unsigned int, unsigned long, void const*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP10_cl_kerneljmPKvENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void);

/* Symbol: _ZN2MK13CInputTensorsC1ERKS0_ */
/* Demangled: MK::CInputTensors::CInputTensors(MK::CInputTensors const&) */
int _ZN2MK13CInputTensorsC1ERKS0_(void);

/* Symbol: MKProgram_GetCommandCount */
/* Demangled: MKProgram_GetCommandCount */
int MKProgram_GetCommandCount(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP10_cl_kernelP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP10_cl_kernelP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_EE;

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_mmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_mmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE;

/* Symbol: _ZN2MK24CCLEnqueueUnmapMemObject6RecordEP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventS7_ */
/* Demangled: MK::CCLEnqueueUnmapMemObject::Record(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event*) */
int _ZN2MK24CCLEnqueueUnmapMemObject6RecordEP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventS7_(void);

/* Symbol: _ZN2MK15CCLCreateKernelD2Ev */
/* Demangled: MK::CCLCreateKernel::~CCLCreateKernel() */
int _ZN2MK15CCLCreateKernelD2Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPKvjPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E7__cloneEPNS0_6__baseISF_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPKvjPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E7__cloneEPNS0_6__baseISF_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_mjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_mjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EclEOS3_OS5_OjOmSK_OS6_SJ_OSA_OSB_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, unsigned int&&, unsigned long&&, unsigned long&&, void*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EclEOS3_OS5_OjOmSK_OS6_SJ_OSA_OSB_(void);

/* Symbol: _ZN2MK19CCLEnqueueMapBuffer4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLEnqueueMapBuffer::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK19CCLEnqueueMapBuffer4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idPKmPiENS_9allocatorISC_EESB_E7__cloneEPNS0_6__baseISB_EE */
/* Demangled: std::__1::__function::__func<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long const*, int*), std::__1::allocator<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long const*, int*)>, _cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long const*, int*)>::__clone(std::__1::__function::__base<_cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long const*, int*)>*) const */
int _ZNKSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idPKmPiENS_9allocatorISC_EESB_E7__cloneEPNS0_6__baseISB_EE(void);

/* Symbol: _ZNK2MK13CInputTensors13GetMemoryUsedEv */
/* Demangled: MK::CInputTensors::GetMemoryUsed() const */
int _ZNK2MK13CInputTensors13GetMemoryUsedEv(void);

/* Symbol: CmdL_AttachclReleaseKernel */
/* Demangled: CmdL_AttachclReleaseKernel */
int CmdL_AttachclReleaseKernel(void);

/* Symbol: clEnqueueMarker */
/* Demangled: clEnqueueMarker */
int clEnqueueMarker(void);

/* Symbol: clEnqueueReadBuffer */
/* Demangled: clEnqueueReadBuffer */
int clEnqueueReadBuffer(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmmmPvPiENS_9allocatorISC_EESB_EclEOS5_OmOS8_SH_SH_SH_SH_SH_OS9_OSA_ */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)>::operator()(_cl_context*&&, unsigned long&&, _cl_image_format const*&&, unsigned long&&, unsigned long&&, unsigned long&&, unsigned long&&, unsigned long&&, void*&&, int*&&) */
int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmmmPvPiENS_9allocatorISC_EESB_EclEOS5_OmOS8_SH_SH_SH_SH_SH_OS9_OSA_(void);

/* Symbol: CmdL_Run */
/* Demangled: CmdL_Run */
int CmdL_Run(void);

/* Symbol: _ZN2MK7CObjectC2Ev */
/* Demangled: MK::CObject::CObject() */
int _ZN2MK7CObjectC2Ev(void);

/* Symbol: CmdL_AttachclEnqueueWriteBufferRect */
/* Demangled: CmdL_AttachclEnqueueWriteBufferRect */
int CmdL_AttachclEnqueueWriteBufferRect(void);

/* Symbol: _ZNKSt3__110__function6__funcINS_8functionIFimPvEEENS_9allocatorIS5_EEFijS3_EE7__cloneEv */
/* Demangled: std::__1::__function::__func<std::__1::function<int (unsigned long, void*)>, std::__1::allocator<std::__1::function<int (unsigned long, void*)> >, int (unsigned int, void*)>::__clone() const */
int _ZNKSt3__110__function6__funcINS_8functionIFimPvEEENS_9allocatorIS5_EEFijS3_EE7__cloneEv(void);

/* Symbol: _ZN2MK25CCLCreateKernelsInProgram7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLCreateKernelsInProgram::Factory(MK::CStream&) */
int _ZN2MK25CCLCreateKernelsInProgram7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK9CLSymbols3getEv */
/* Demangled: MK::CLSymbols::get() */
int _ZN2MK9CLSymbols3getEv(void);

/* Symbol: _ZN2MK8CJsonLog3LogEPKcRKNSt3__16vectorIPNS_7CObjectENS3_9allocatorIS6_EEEE */
/* Demangled: MK::CJsonLog::Log(char const*, std::__1::vector<MK::CObject*, std::__1::allocator<MK::CObject*> > const&) */
int _ZN2MK8CJsonLog3LogEPKcRKNSt3__16vectorIPNS_7CObjectENS3_9allocatorIS6_EEEE(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithBinary20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLCreateProgramWithBinary::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK26CCLCreateProgramWithBinary20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK23CCLEnqueueNDRangeKernel4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLEnqueueNDRangeKernel::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK23CCLEnqueueNDRangeKernel4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK19CCLProfileKernelJob6HandleEv */
/* Demangled: MK::CCLProfileKernelJob::Handle() */
int _ZN2MK19CCLProfileKernelJob6HandleEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP11_cl_contextPKlmPFvPKcPKvmPvESA_PiENS_9allocatorISF_EESE_E7destroyEv */
/* Demangled: std::__1::__function::__func<_cl_context* (*)(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*), std::__1::allocator<_cl_context* (*)(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>, _cl_context* (long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFP11_cl_contextPKlmPFvPKcPKvmPvESA_PiENS_9allocatorISF_EESE_E7destroyEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventPS5_ENS_9allocatorISA_EES9_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventPS5_ENS_9allocatorISA_EES9_EE;

/* Symbol: _ZN2MK14COutputTensors4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::COutputTensors::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK14COutputTensors4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNSt3__16vectorIN2MK8CPointerINS1_8CCommandEEENS_9allocatorIS4_EEE8__appendEm */
/* Demangled: std::__1::vector<MK::CPointer<MK::CCommand>, std::__1::allocator<MK::CPointer<MK::CCommand> > >::__append(unsigned long) */
int _ZNSt3__16vectorIN2MK8CPointerINS1_8CCommandEEENS_9allocatorIS4_EEE8__appendEm(void);

/* Symbol: _ZN2MK28CCLEnqueueMarkerWithWaitList15RegisterFactoryEv */
/* Demangled: MK::CCLEnqueueMarkerWithWaitList::RegisterFactory() */
int _ZN2MK28CCLEnqueueMarkerWithWaitList15RegisterFactoryEv(void);

/* Symbol: _ZNK2MK17CCLReleaseContext15CopyConstructToEv */
/* Demangled: MK::CCLReleaseContext::CopyConstructTo() const */
int _ZNK2MK17CCLReleaseContext15CopyConstructToEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP13_cl_device_idENS_9allocatorIS5_EES4_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*), std::__1::allocator<int (*)(_cl_device_id*)>, int (_cl_device_id*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP13_cl_device_idENS_9allocatorIS5_EES4_E7__cloneEv(void);

/* Symbol: _ZN2MK14CContextGlobal16RecordKernelNameEP10_cl_kernelPKc */
/* Demangled: MK::CContextGlobal::RecordKernelName(_cl_kernel*, char const*) */
int _ZN2MK14CContextGlobal16RecordKernelNameEP10_cl_kernelPKc(void);

/* Symbol: _ZNK2MK10CCLSVMFree3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLSVMFree::Log(MK::CJsonLog&) const */
int _ZNK2MK10CCLSVMFree3LogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK8CProgramD2Ev */
/* Demangled: MK::CProgram::~CProgram() */
int _ZN2MK8CProgramD2Ev(void);

/* Symbol: CmdL_AttachclReleaseDevice */
/* Demangled: CmdL_AttachclReleaseDevice */
int CmdL_AttachclReleaseDevice(void);

/* Symbol: _ZN2MK25CCLCreateKernelsInProgram4SaveERNS_7CStreamE */
/* Demangled: MK::CCLCreateKernelsInProgram::Save(MK::CStream&) */
int _ZN2MK25CCLCreateKernelsInProgram4SaveERNS_7CStreamE(void);

/* Symbol: _ZN2MK20CCLEnqueueReadBuffer4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLEnqueueReadBuffer::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK20CCLEnqueueReadBuffer4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK7CObjectD1Ev */
/* Demangled: MK::CObject::~CObject() */
int _ZN2MK7CObjectD1Ev(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithSource6RecordEP11_cl_contextjPPKcPKmP11_cl_program */
/* Demangled: MK::CCLCreateProgramWithSource::Record(_cl_context*, unsigned int, char const**, unsigned long const*, _cl_program*) */
int _ZN2MK26CCLCreateProgramWithSource6RecordEP11_cl_contextjPPKcPKmP11_cl_program(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithSource4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLCreateProgramWithSource::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK26CCLCreateProgramWithSource4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: MKProgram_AttachCLCreateCommandQueue */
/* Demangled: MKProgram_AttachCLCreateCommandQueue */
int MKProgram_AttachCLCreateCommandQueue(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*), std::__1::allocator<int (*)(_cl_command_queue*)>, int (_cl_command_queue*)>::__clone(std::__1::__function::__base<int (_cl_command_queue*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_mjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_mjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithSourceC1ERKS0_ */
/* Demangled: MK::CCLCreateProgramWithSource::CCLCreateProgramWithSource(MK::CCLCreateProgramWithSource const&) */
int _ZN2MK26CCLCreateProgramWithSourceC1ERKS0_(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E7__cloneEPNS0_6__baseISE_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E7__cloneEPNS0_6__baseISE_EE(void);

/* Symbol: _ZN2MK7CStreamD2Ev */
/* Demangled: MK::CStream::~CStream() */
int _ZN2MK7CStreamD2Ev(void);

/* Symbol: CmdL_AttachclEnqueueWriteImage */
/* Demangled: CmdL_AttachclEnqueueWriteImage */
int CmdL_AttachclEnqueueWriteImage(void);

/* Symbol: _ZTVN2MK25CCLCreateKernelsInProgramE */
/* Demangled: vtable for MK::CCLCreateKernelsInProgram */
extern void* _ZTVN2MK25CCLCreateKernelsInProgramE;

/* Symbol: _ZTVN2MK17CCLReleaseContextE */
/* Demangled: vtable for MK::CCLReleaseContext */
extern void* _ZTVN2MK17CCLReleaseContextE;

/* Symbol: _ZNK2MK7CObject11GetRTTINameEv */
/* Demangled: MK::CObject::GetRTTIName() const */
int _ZNK2MK7CObject11GetRTTINameEv(void);

/* Symbol: _ZNK2MK15CCLCreateKernel15CopyConstructToEv */
/* Demangled: MK::CCLCreateKernel::CopyConstructTo() const */
int _ZNK2MK15CCLCreateKernel15CopyConstructToEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP13_cl_device_idENS_9allocatorIS5_EES4_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*), std::__1::allocator<int (*)(_cl_device_id*)>, int (_cl_device_id*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP13_cl_device_idENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void);

/* Symbol: _ZNK2MK7CStream11GetObjectAtEi */
/* Demangled: MK::CStream::GetObjectAt(int) const */
int _ZNK2MK7CStream11GetObjectAtEi(void);

/* Symbol: _ZN2MK16CCLCreateContext22ReplacePropertyContextERP15_cl_platform_id */
/* Demangled: MK::CCLCreateContext::ReplacePropertyContext(_cl_platform_id*&) */
int _ZN2MK16CCLCreateContext22ReplacePropertyContextERP15_cl_platform_id(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP7_cl_memENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*), std::__1::allocator<int (*)(_cl_mem*)>, int (_cl_mem*)>::__clone(std::__1::__function::__base<int (_cl_mem*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP7_cl_memENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void);

/* Symbol: MKProgram_AttachOutputTensor */
/* Demangled: MKProgram_AttachOutputTensor */
int MKProgram_AttachOutputTensor(void);

/* Symbol: _ZN2MK28CCLEnqueueMarkerWithWaitList4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLEnqueueMarkerWithWaitList::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK28CCLEnqueueMarkerWithWaitList4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNK2MK12CDynamicData15CopyConstructToEv */
/* Demangled: MK::CDynamicData::CopyConstructTo() const */
int _ZNK2MK12CDynamicData15CopyConstructToEv(void);

/* Symbol: _ZN2MK15CCLCreateBuffer4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLCreateBuffer::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK15CCLCreateBuffer4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNSt3__16vectorImNS_9allocatorImEEE6assignIPKmEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleImNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
/* Demangled: _ZNSt3__16vectorImNS_9allocatorImEEE6assignIPKmEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleImNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
int _ZNSt3__16vectorImNS_9allocatorImEEE6assignIPKmEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleImNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E7__cloneEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_mjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_mjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE;

/* Symbol: _ZTVN2MK21CCLCreateCommandQueueE */
/* Demangled: vtable for MK::CCLCreateCommandQueue */
extern void* _ZTVN2MK21CCLCreateCommandQueueE;

/* Symbol: _ZN2MK15CCLCreateKernel4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLCreateKernel::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK15CCLCreateKernel4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK8CCommand15RegisterFactoryEv */
/* Demangled: MK::CCommand::RegisterFactory() */
int _ZN2MK8CCommand15RegisterFactoryEv(void);

/* Symbol: _ZTVN2MK21CCLEnqueueWriteBufferE */
/* Demangled: vtable for MK::CCLEnqueueWriteBuffer */
extern void* _ZTVN2MK21CCLEnqueueWriteBufferE;

/* Symbol: _ZN2MK8CCLFlush7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLFlush::Factory(MK::CStream&) */
int _ZN2MK8CCLFlush7FactoryERNS_7CStreamE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventPS5_ENS_9allocatorISA_EES9_EclEOS3_OjOS7_OS8_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventPS5_ENS_9allocatorISA_EES9_EclEOS3_OjOS7_OS8_(void);

/* Symbol: CmdL_AttachclSetKernelArgSVMPointer */
/* Demangled: CmdL_AttachclSetKernelArgSVMPointer */
int CmdL_AttachclSetKernelArgSVMPointer(void);

/* Symbol: _ZNK2MK23CCLEnqueueNDRangeKernel15CopyConstructToEv */
/* Demangled: MK::CCLEnqueueNDRangeKernel::CopyConstructTo() const */
int _ZNK2MK23CCLEnqueueNDRangeKernel15CopyConstructToEv(void);

/* Symbol: _Z8cl_writePc */
/* Demangled: cl_write(char*) */
int _Z8cl_writePc(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEv(void);

/* Symbol: CmdL_AttachclEnqueueTask */
/* Demangled: CmdL_AttachclEnqueueTask */
int CmdL_AttachclEnqueueTask(void);

/* Symbol: _ZN2MK20CCLEnqueueMemoryCopy4SaveERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueMemoryCopy::Save(MK::CStream&) */
int _ZN2MK20CCLEnqueueMemoryCopy4SaveERNS_7CStreamE(void);

/* Symbol: _ZN2MK7CObject8ms_kRTTIE */
/* Demangled: MK::CObject::ms_kRTTI */
extern void* _ZN2MK7CObject8ms_kRTTIE;

/* Symbol: _ZN2MK11CMemoryCopyC2Ev */
/* Demangled: MK::CMemoryCopy::CMemoryCopy() */
int _ZN2MK11CMemoryCopyC2Ev(void);

/* Symbol: _ZN2MK16CCLEnqueueMarker3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLEnqueueMarker::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK16CCLEnqueueMarker3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZN2MK11CThreadJobQC1Ev */
/* Demangled: MK::CThreadJobQ::CThreadJobQ() */
int _ZN2MK11CThreadJobQC1Ev(void);

/* Symbol: _ZN2MK11CMemoryCopy4SaveERNS_7CStreamE */
/* Demangled: MK::CMemoryCopy::Save(MK::CStream&) */
int _ZN2MK11CMemoryCopy4SaveERNS_7CStreamE(void);

/* Symbol: _ZNSt3__16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE8__appendEm */
/* Demangled: std::__1::vector<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::allocator<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > > >::__append(unsigned long) */
int _ZNSt3__16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE8__appendEm(void);

/* Symbol: _ZNK2MK15CCLImportMemory15CopyConstructToEv */
/* Demangled: MK::CCLImportMemory::CopyConstructTo() const */
int _ZNK2MK15CCLImportMemory15CopyConstructToEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvmjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvmjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E7destroyEv(void);

/* Symbol: CmdL_TreeNodeDeAttachNode */
/* Demangled: CmdL_TreeNodeDeAttachNode */
int CmdL_TreeNodeDeAttachNode(void);

/* Symbol: CmdL_AttachclEnqueueSVMMap */
/* Demangled: CmdL_AttachclEnqueueSVMMap */
int CmdL_AttachclEnqueueSVMMap(void);

/* Symbol: CmdL_AttachclRetainContext */
/* Demangled: CmdL_AttachclRetainContext */
int CmdL_AttachclRetainContext(void);

/* Symbol: _ZN2MK28CCLEnqueueMarkerWithWaitList20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueMarkerWithWaitList::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK28CCLEnqueueMarkerWithWaitList20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP15_cl_platform_idmjPP13_cl_device_idPjENS_9allocatorIS9_EES8_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*), std::__1::allocator<int (*)(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)>, int (_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP15_cl_platform_idmjPP13_cl_device_idPjENS_9allocatorIS9_EES8_E7__cloneEv(void);

/* Symbol: CmdL_AttachclEnqueueSVMMemcpy */
/* Demangled: CmdL_AttachclEnqueueSVMMemcpy */
int CmdL_AttachclEnqueueSVMMemcpy(void);

/* Symbol: clGetPlatformInfo */
/* Demangled: clGetPlatformInfo */
int clGetPlatformInfo(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithSource31UpdateCLCreateProgramWithBinaryEPNS_26CCLCreateProgramWithBinaryE */
/* Demangled: MK::CCLCreateProgramWithSource::UpdateCLCreateProgramWithBinary(MK::CCLCreateProgramWithBinary*) */
int _ZN2MK26CCLCreateProgramWithSource31UpdateCLCreateProgramWithBinaryEPNS_26CCLCreateProgramWithBinaryE(void);

/* Symbol: _ZNK2MK18CCLRetainMemObject3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLRetainMemObject::Log(MK::CJsonLog&) const */
int _ZNK2MK18CCLRetainMemObject3LogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK10CCLSVMFreeC1ERKS0_ */
/* Demangled: MK::CCLSVMFree::CCLSVMFree(MK::CCLSVMFree const&) */
int _ZN2MK10CCLSVMFreeC1ERKS0_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mPKmS7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mPKmS7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK11CMemoryCopyD1Ev */
/* Demangled: MK::CMemoryCopy::~CMemoryCopy() */
int _ZN2MK11CMemoryCopyD1Ev(void);

/* Symbol: _ZN2MK15CProfileDataJobD1Ev */
/* Demangled: MK::CProfileDataJob::~CProfileDataJob() */
int _ZN2MK15CProfileDataJobD1Ev(void);

/* Symbol: _ZNK2MK16CCLCreateContext11GetDiskUsedEv */
/* Demangled: MK::CCLCreateContext::GetDiskUsed() const */
int _ZNK2MK16CCLCreateContext11GetDiskUsedEv(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithSource3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLCreateProgramWithSource::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK26CCLCreateProgramWithSource3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZN2MK27CCLEnqueueCopyBufferToImageC2Ev */
/* Demangled: MK::CCLEnqueueCopyBufferToImage::CCLEnqueueCopyBufferToImage() */
int _ZN2MK27CCLEnqueueCopyBufferToImageC2Ev(void);

/* Symbol: _ZN2MK20CCLPrepareMemoryCopy7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLPrepareMemoryCopy::Factory(MK::CStream&) */
int _ZN2MK20CCLPrepareMemoryCopy7FactoryERNS_7CStreamE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP9_cl_eventENS_9allocatorIS5_EES4_EclEOS3_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_event*), std::__1::allocator<int (*)(_cl_event*)>, int (_cl_event*)>::operator()(_cl_event*&&) */
int _ZNSt3__110__function6__funcIPFiP9_cl_eventENS_9allocatorIS5_EES4_EclEOS3_(void);

/* Symbol: _ZN2MK11CThreadJobQD0Ev */
/* Demangled: MK::CThreadJobQ::~CThreadJobQ() */
int _ZN2MK11CThreadJobQD0Ev(void);

/* Symbol: CmdL_AttachclCreateKernel */
/* Demangled: CmdL_AttachclCreateKernel */
int CmdL_AttachclCreateKernel(void);

/* Symbol: _ZNK2MK10CCLCommand15CopyConstructToEv */
/* Demangled: MK::CCLCommand::CopyConstructTo() const */
int _ZNK2MK10CCLCommand15CopyConstructToEv(void);

/* Symbol: MKProgram_AttachCLEnqueueCopyBufferToImage */
/* Demangled: MKProgram_AttachCLEnqueueCopyBufferToImage */
int MKProgram_AttachCLEnqueueCopyBufferToImage(void);

/* Symbol: _ZN2MK25CCLCreateKernelsInProgram6RecordEP11_cl_programjPP10_cl_kernel */
/* Demangled: MK::CCLCreateKernelsInProgram::Record(_cl_program*, unsigned int, _cl_kernel**) */
int _ZN2MK25CCLCreateKernelsInProgram6RecordEP11_cl_programjPP10_cl_kernel(void);

/* Symbol: _ZN2MK10CCLSVMFreeD2Ev */
/* Demangled: MK::CCLSVMFree::~CCLSVMFree() */
int _ZN2MK10CCLSVMFreeD2Ev(void);

/* Symbol: CmdL_TreeNodeAttachNode */
/* Demangled: CmdL_TreeNodeAttachNode */
int CmdL_TreeNodeAttachNode(void);

/* Symbol: clCreateSamplerWithProperties */
/* Demangled: clCreateSamplerWithProperties */
int clCreateSamplerWithProperties(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithBinary6RecordEP11_cl_contextjPKP13_cl_device_idPKmPPKhP11_cl_program */
/* Demangled: MK::CCLCreateProgramWithBinary::Record(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, _cl_program*) */
int _ZN2MK26CCLCreateProgramWithBinary6RecordEP11_cl_contextjPKP13_cl_device_idPKmPPKhP11_cl_program(void);

/* Symbol: _ZN2MK15CCLBuildProgramD2Ev */
/* Demangled: MK::CCLBuildProgram::~CCLBuildProgram() */
int _ZN2MK15CCLBuildProgramD2Ev(void);

/* Symbol: _ZNK2MK8CCLFlush15CopyConstructToEv */
/* Demangled: MK::CCLFlush::CopyConstructTo() const */
int _ZNK2MK8CCLFlush15CopyConstructToEv(void);

/* Symbol: _ZTVN2MK21CCLRetainCommandQueueE */
/* Demangled: vtable for MK::CCLRetainCommandQueue */
extern void* _ZTVN2MK21CCLRetainCommandQueueE;

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void);

/* Symbol: CmdL_AttachclEnqueueBarrierWithWaitList */
/* Demangled: CmdL_AttachclEnqueueBarrierWithWaitList */
int CmdL_AttachclEnqueueBarrierWithWaitList(void);

/* Symbol: _ZN2MK27CCLEnqueueCopyBufferToImageD1Ev */
/* Demangled: MK::CCLEnqueueCopyBufferToImage::~CCLEnqueueCopyBufferToImage() */
int _ZN2MK27CCLEnqueueCopyBufferToImageD1Ev(void);

/* Symbol: _ZN2MK20CCLPrepareMemoryCopyC1Ev */
/* Demangled: MK::CCLPrepareMemoryCopy::CCLPrepareMemoryCopy() */
int _ZN2MK20CCLPrepareMemoryCopyC1Ev(void);

/* Symbol: _ZN2MK14CCLRetainEventC2Ev */
/* Demangled: MK::CCLRetainEvent::CCLRetainEvent() */
int _ZN2MK14CCLRetainEventC2Ev(void);

/* Symbol: _ZN2MK10CCLSVMFree3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLSVMFree::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK10CCLSVMFree3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK19clSetKernelExecInfoEP10_cl_kerneljmPKv */
/* Demangled: MK::clSetKernelExecInfo(_cl_kernel*, unsigned int, unsigned long, void const*) */
int _ZN2MK19clSetKernelExecInfoEP10_cl_kerneljmPKv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP10_cl_kernelENS_9allocatorIS5_EES4_EclEOS3_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*), std::__1::allocator<int (*)(_cl_kernel*)>, int (_cl_kernel*)>::operator()(_cl_kernel*&&) */
int _ZNSt3__110__function6__funcIPFiP10_cl_kernelENS_9allocatorIS5_EES4_EclEOS3_(void);

/* Symbol: _ZNSt3__16vectorINS_4pairIPN2MK8CProgramEPNS2_13CContextLocalEEENS_9allocatorIS7_EEE21__push_back_slow_pathIS7_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::pair<MK::CProgram*, MK::CContextLocal*>, std::__1::allocator<std::__1::pair<MK::CProgram*, MK::CContextLocal*> > >::__push_back_slow_path<std::__1::pair<MK::CProgram*, MK::CContextLocal*> >(std::__1::pair<MK::CProgram*, MK::CContextLocal*>&&) */
int _ZNSt3__16vectorINS_4pairIPN2MK8CProgramEPNS2_13CContextLocalEEENS_9allocatorIS7_EEE21__push_back_slow_pathIS7_EEvOT_(void);

/* Symbol: _ZN2MK16CCLEnqueueSVMMapD2Ev */
/* Demangled: MK::CCLEnqueueSVMMap::~CCLEnqueueSVMMap() */
int _ZN2MK16CCLEnqueueSVMMapD2Ev(void);

/* Symbol: _ZN2MK15CCLCreateKernelC2Ev */
/* Demangled: MK::CCLCreateKernel::CCLCreateKernel() */
int _ZN2MK15CCLCreateKernelC2Ev(void);

/* Symbol: _ZNK2MK28CCLEnqueueMarkerWithWaitList11GetDiskUsedEv */
/* Demangled: MK::CCLEnqueueMarkerWithWaitList::GetDiskUsed() const */
int _ZNK2MK28CCLEnqueueMarkerWithWaitList11GetDiskUsedEv(void);

/* Symbol: _ZN2MK11CCLSVMAllocC1ERKS0_ */
/* Demangled: MK::CCLSVMAlloc::CCLSVMAlloc(MK::CCLSVMAlloc const&) */
int _ZN2MK11CCLSVMAllocC1ERKS0_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP15_cl_platform_idmjPP13_cl_device_idPjENS_9allocatorIS9_EES8_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*), std::__1::allocator<int (*)(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)>, int (_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP15_cl_platform_idmjPP13_cl_device_idPjENS_9allocatorIS9_EES8_E18destroy_deallocateEv(void);

/* Symbol: _ZTVN2MK13CDummyCommandE */
/* Demangled: vtable for MK::CDummyCommand */
extern void* _ZTVN2MK13CDummyCommandE;

/* Symbol: MKDebug_Printf */
/* Demangled: MKDebug_Printf */
int MKDebug_Printf(void);

/* Symbol: CmdL_AttachclEnqueueReadBufferRect */
/* Demangled: CmdL_AttachclEnqueueReadBufferRect */
int CmdL_AttachclEnqueueReadBufferRect(void);

/* Symbol: _ZN2MK20CCLPrepareMemoryCopyD0Ev */
/* Demangled: MK::CCLPrepareMemoryCopy::~CCLPrepareMemoryCopy() */
int _ZN2MK20CCLPrepareMemoryCopyD0Ev(void);

/* Symbol: _ZN2MK14CCLRetainEventD1Ev */
/* Demangled: MK::CCLRetainEvent::~CCLRetainEvent() */
int _ZN2MK14CCLRetainEventD1Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_contextmjjP16_cl_image_formatPjENS_9allocatorIS8_EES7_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*), std::__1::allocator<int (*)(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)>, int (_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP11_cl_contextmjjP16_cl_image_formatPjENS_9allocatorIS8_EES7_E7destroyEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFimPvENS_9allocatorIS4_EES3_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(unsigned long, void*), std::__1::allocator<int (*)(unsigned long, void*)>, int (unsigned long, void*)>::destroy() */
int _ZNSt3__110__function6__funcIPFimPvENS_9allocatorIS4_EES3_E7destroyEv(void);

/* Symbol: _ZN2MK8CCLFlush4SaveERNS_7CStreamE */
/* Demangled: MK::CCLFlush::Save(MK::CStream&) */
int _ZN2MK8CCLFlush4SaveERNS_7CStreamE(void);

/* Symbol: _ZN2MK20CCLEnqueueMemoryCopy4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLEnqueueMemoryCopy::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK20CCLEnqueueMemoryCopy4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcPFvS3_PvESA_ENS_9allocatorISE_EESD_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)>, int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcPFvS3_PvESA_ENS_9allocatorISE_EESD_EE;

/* Symbol: _ZN2MK16CCLEnqueueMarker4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLEnqueueMarker::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK16CCLEnqueueMarker4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSF_ENS_9allocatorISH_EESG_E7destroyEv */
/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSF_ENS_9allocatorISH_EESG_E7destroyEv(void);

/* Symbol: _ZN2MK15CCLCreateKernelD1Ev */
/* Demangled: MK::CCLCreateKernel::~CCLCreateKernel() */
int _ZN2MK15CCLCreateKernelD1Ev(void);

/* Symbol: _ZZN2MK11CThreadJobQ11GetInstanceEvE14gs_kThreadJobQ */
/* Demangled: MK::CThreadJobQ::GetInstance()::gs_kThreadJobQ */
extern void* _ZZN2MK11CThreadJobQ11GetInstanceEvE14gs_kThreadJobQ;

/* Symbol: _ZNKSt3__110__function6__funcIPFP10_cl_kernelP11_cl_programPKcPiENS_9allocatorISA_EES9_E7__cloneEv */
/* Demangled: std::__1::__function::__func<_cl_kernel* (*)(_cl_program*, char const*, int*), std::__1::allocator<_cl_kernel* (*)(_cl_program*, char const*, int*)>, _cl_kernel* (_cl_program*, char const*, int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFP10_cl_kernelP11_cl_programPKcPiENS_9allocatorISA_EES9_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextjjjPiENS_9allocatorIS8_EES7_E7destroyEv */
/* Demangled: std::__1::__function::__func<_cl_sampler* (*)(_cl_context*, unsigned int, unsigned int, unsigned int, int*), std::__1::allocator<_cl_sampler* (*)(_cl_context*, unsigned int, unsigned int, unsigned int, int*)>, _cl_sampler* (_cl_context*, unsigned int, unsigned int, unsigned int, int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextjjjPiENS_9allocatorIS8_EES7_E7destroyEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_contextmjjP16_cl_image_formatPjENS_9allocatorIS8_EES7_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*), std::__1::allocator<int (*)(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)>, int (_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP11_cl_contextmjjP16_cl_image_formatPjENS_9allocatorIS8_EES7_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_S7_mmmmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_S7_mmmmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E7destroyEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP11_cl_contextjmPvPmENS_9allocatorIS7_EES6_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_context*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_context*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_context*, unsigned int, unsigned long, void*, unsigned long*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP11_cl_contextjmPvPmENS_9allocatorIS7_EES6_EE;

/* Symbol: _ZN2MK7CStream18WriteDynamicStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: MK::CStream::WriteDynamicString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN2MK7CStream18WriteDynamicStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16vectorIP13_cl_device_idNS_9allocatorIS2_EEE8__appendEm */
/* Demangled: std::__1::vector<_cl_device_id*, std::__1::allocator<_cl_device_id*> >::__append(unsigned long) */
int _ZNSt3__16vectorIP13_cl_device_idNS_9allocatorIS2_EEE8__appendEm(void);

/* Symbol: _ZN2MK8CProgram10SetCommandEiPNS_8CCommandE */
/* Demangled: MK::CProgram::SetCommand(int, MK::CCommand*) */
int _ZN2MK8CProgram10SetCommandEiPNS_8CCommandE(void);

/* Symbol: _ZN2MK11CStaticData4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CStaticData::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK11CStaticData4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePFvPvES4_mjPKP7_cl_memPPKvjPKP9_cl_eventPSF_ENS_9allocatorISK_EESJ_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePFvPvES4_mjPKP7_cl_memPPKvjPKP9_cl_eventPSF_ENS_9allocatorISK_EESJ_E18destroy_deallocateEv(void);

/* Symbol: _Z20clClearKernelNameMapv */
/* Demangled: clClearKernelNameMap() */
int _Z20clClearKernelNameMapv(void);

/* Symbol: _ZN2MK7CObjectC1Ev */
/* Demangled: MK::CObject::CObject() */
int _ZN2MK7CObjectC1Ev(void);

/* Symbol: CmdL_AttachclCreateCommandQueueWithProperties */
/* Demangled: CmdL_AttachclCreateCommandQueueWithProperties */
int CmdL_AttachclCreateCommandQueueWithProperties(void);

/* Symbol: _ZN2MK25CCLCreateKernelsInProgram4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLCreateKernelsInProgram::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK25CCLCreateKernelsInProgram4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK27CCLEnqueueCopyBufferToImageC2ERKS0_ */
/* Demangled: MK::CCLEnqueueCopyBufferToImage::CCLEnqueueCopyBufferToImage(MK::CCLEnqueueCopyBufferToImage const&) */
int _ZN2MK27CCLEnqueueCopyBufferToImageC2ERKS0_(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP11_cl_contextmjjP16_cl_image_formatPjENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*), std::__1::allocator<int (*)(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)>, int (_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)>::__clone(std::__1::__function::__base<int (_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP11_cl_contextmjjP16_cl_image_formatPjENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_programjmPvPmENS_9allocatorIS7_EES6_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_program*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_program*, unsigned int, unsigned long, void*, unsigned long*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP11_cl_programjmPvPmENS_9allocatorIS7_EES6_E7destroyEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPbRNS_9allocatorIS1_EEE10push_frontERKS1_ */
/* Demangled: std::__1::__split_buffer<bool*, std::__1::allocator<bool*>&>::push_front(bool* const&) */
int _ZNSt3__114__split_bufferIPbRNS_9allocatorIS1_EEE10push_frontERKS1_(void);

/* Symbol: _ZNK2MK7CObject11DynamicCastEPKNS_5CRTTIE */
/* Demangled: MK::CObject::DynamicCast(MK::CRTTI const*) const */
int _ZNK2MK7CObject11DynamicCastEPKNS_5CRTTIE(void);

/* Symbol: _ZTVN2MK19CCLReleaseMemObjectE */
/* Demangled: vtable for MK::CCLReleaseMemObject */
extern void* _ZTVN2MK19CCLReleaseMemObjectE;

/* Symbol: _ZNSt3__110__function6__funcIPFPvP11_cl_contextmmjENS_9allocatorIS6_EES5_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<void* (*)(_cl_context*, unsigned long, unsigned long, unsigned int), std::__1::allocator<void* (*)(_cl_context*, unsigned long, unsigned long, unsigned int)>, void* (_cl_context*, unsigned long, unsigned long, unsigned int)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFPvP11_cl_contextmmjENS_9allocatorIS6_EES5_E18destroy_deallocateEv(void);

/* Symbol: _ZTVN2MK8CProgramE */
/* Demangled: vtable for MK::CProgram */
extern void* _ZTVN2MK8CProgramE;

/* Symbol: _ZN2MK7CStreamC2Ev */
/* Demangled: MK::CStream::CStream() */
int _ZN2MK7CStreamC2Ev(void);

/* Symbol: clCreateCommandQueueWithProperties */
/* Demangled: clCreateCommandQueueWithProperties */
int clCreateCommandQueueWithProperties(void);

/* Symbol: _ZN2MK16CCLRetainProgram4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLRetainProgram::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK16CCLRetainProgram4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP13_cl_device_idjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::operator()(_cl_device_id*&&, unsigned int&&, unsigned long&&, void*&&, unsigned long*&&) */
int _ZNSt3__110__function6__funcIPFiP13_cl_device_idjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_(void);

/* Symbol: _ZN2MK8CProgramD1Ev */
/* Demangled: MK::CProgram::~CProgram() */
int _ZN2MK8CProgramD1Ev(void);

/* Symbol: _ZTVN2MK8CJsonLogE */
/* Demangled: vtable for MK::CJsonLog */
extern void* _ZTVN2MK8CJsonLogE;

/* Symbol: _ZN2MK14CCLCreateImageC1ERKS0_ */
/* Demangled: MK::CCLCreateImage::CCLCreateImage(MK::CCLCreateImage const&) */
int _ZN2MK14CCLCreateImageC1ERKS0_(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP7_cl_memPFvS3_PvES4_ENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*, void (*)(_cl_mem*, void*), void*), std::__1::allocator<int (*)(_cl_mem*, void (*)(_cl_mem*, void*), void*)>, int (_cl_mem*, void (*)(_cl_mem*, void*), void*)>::__clone(std::__1::__function::__base<int (_cl_mem*, void (*)(_cl_mem*, void*), void*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP7_cl_memPFvS3_PvES4_ENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE(void);

/* Symbol: _ZN2MK12CDynamicData4SaveERNS_7CStreamE */
/* Demangled: MK::CDynamicData::Save(MK::CStream&) */
int _ZN2MK12CDynamicData4SaveERNS_7CStreamE(void);

/* Symbol: _ZN2MK7CObjectD0Ev */
/* Demangled: MK::CObject::~CObject() */
int _ZN2MK7CObjectD0Ev(void);

/* Symbol: CmdL_AttachclFinish */
/* Demangled: CmdL_AttachclFinish */
int CmdL_AttachclFinish(void);

/* Symbol: _ZNK2MK21CCLRetainCommandQueue15CopyConstructToEv */
/* Demangled: MK::CCLRetainCommandQueue::CopyConstructTo() const */
int _ZNK2MK21CCLRetainCommandQueue15CopyConstructToEv(void);

/* Symbol: _ZN2MK21CCLRetainCommandQueue6RecordEP17_cl_command_queue */
/* Demangled: MK::CCLRetainCommandQueue::Record(_cl_command_queue*) */
int _ZN2MK21CCLRetainCommandQueue6RecordEP17_cl_command_queue(void);

/* Symbol: _ZN2MK28CCLEnqueueMarkerWithWaitListC2ERKS0_ */
/* Demangled: MK::CCLEnqueueMarkerWithWaitList::CCLEnqueueMarkerWithWaitList(MK::CCLEnqueueMarkerWithWaitList const&) */
int _ZN2MK28CCLEnqueueMarkerWithWaitListC2ERKS0_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7destroyEv(void);

/* Symbol: MKConfig_EnableRecord */
/* Demangled: MKConfig_EnableRecord */
int MKConfig_EnableRecord(void);

/* Symbol: _ZN2MK7CStreamD1Ev */
/* Demangled: MK::CStream::~CStream() */
int _ZN2MK7CStreamD1Ev(void);

/* Symbol: CmdL_TreeNodeAttachCommands */
/* Demangled: CmdL_TreeNodeAttachCommands */
int CmdL_TreeNodeAttachCommands(void);

/* Symbol: _ZN2MK27CCLEnqueueCopyBufferToImage4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLEnqueueCopyBufferToImage::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK27CCLEnqueueCopyBufferToImage4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK18CCLEnqueueSVMUnmap4SaveERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueSVMUnmap::Save(MK::CStream&) */
int _ZN2MK18CCLEnqueueSVMUnmap4SaveERNS_7CStreamE(void);

/* Symbol: _ZN2MK15CCLRetainKernel8ms_kRTTIE */
/* Demangled: MK::CCLRetainKernel::ms_kRTTI */
extern void* _ZN2MK15CCLRetainKernel8ms_kRTTIE;

/* Symbol: _ZN2MK18CCLRetainMemObject7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLRetainMemObject::Factory(MK::CStream&) */
int _ZN2MK18CCLRetainMemObject7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK5CBool20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CBool::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK5CBool20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZZN2MK7CConfig11GetInstanceEvE12gs_kInstance */
/* Demangled: MK::CConfig::GetInstance()::gs_kInstance */
extern void* _ZZN2MK7CConfig11GetInstanceEvE12gs_kInstance;

/* Symbol: clRetainMemObject */
/* Demangled: clRetainMemObject */
int clRetainMemObject(void);

/* Symbol: _ZN2MK15CCLImportMemory20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLImportMemory::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK15CCLImportMemory20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK17CCLReleaseContext4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLReleaseContext::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK17CCLReleaseContext4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK15CCLRetainKernel4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLRetainKernel::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK15CCLRetainKernel4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP7_cl_memENS_9allocatorIS5_EES4_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*), std::__1::allocator<int (*)(_cl_mem*)>, int (_cl_mem*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP7_cl_memENS_9allocatorIS5_EES4_E7__cloneEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuemjPmENS_9allocatorIS6_EES5_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned long, unsigned int, unsigned long*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned long, unsigned int, unsigned long*)>, int (_cl_command_queue*, unsigned long, unsigned int, unsigned long*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuemjPmENS_9allocatorIS6_EES5_EE;

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNK2MK27CCLEnqueueCopyBufferToImage11GetDiskUsedEv */
/* Demangled: MK::CCLEnqueueCopyBufferToImage::GetDiskUsed() const */
int _ZNK2MK27CCLEnqueueCopyBufferToImage11GetDiskUsedEv(void);

/* Symbol: _ZNK2MK15CCLImportMemory16GetPropertyCountEPKl */
/* Demangled: MK::CCLImportMemory::GetPropertyCount(long const*) const */
int _ZNK2MK15CCLImportMemory16GetPropertyCountEPKl(void);

/* Symbol: _ZNK2MK22CCLReleaseCommandQueue3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLReleaseCommandQueue::Log(MK::CJsonLog&) const */
int _ZNK2MK22CCLReleaseCommandQueue3LogERNS_8CJsonLogE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_programjPP10_cl_kernelPjENS_9allocatorIS9_EES8_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_kernel**, unsigned int*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_kernel**, unsigned int*)>, int (_cl_program*, unsigned int, _cl_kernel**, unsigned int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP11_cl_programjPP10_cl_kernelPjENS_9allocatorIS9_EES8_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP15_cl_platform_idjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP15_cl_platform_idjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmjjPKlPiENS_9allocatorISA_EES9_E7destroyEv */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)>, _cl_mem* (_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmjjPKlPiENS_9allocatorISA_EES9_E7destroyEv(void);

/* Symbol: MKSysTrace_Begin */
/* Demangled: MKSysTrace_Begin */
int MKSysTrace_Begin(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextPKmPiENS_9allocatorISA_EES9_EclEOS5_OS7_OS8_ */
/* Demangled: std::__1::__function::__func<_cl_sampler* (*)(_cl_context*, unsigned long const*, int*), std::__1::allocator<_cl_sampler* (*)(_cl_context*, unsigned long const*, int*)>, _cl_sampler* (_cl_context*, unsigned long const*, int*)>::operator()(_cl_context*&&, unsigned long const*&&, int*&&) */
int _ZNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextPKmPiENS_9allocatorISA_EES9_EclEOS5_OS7_OS8_(void);

/* Symbol: _ZN2MK13CDummyCommand4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CDummyCommand::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK13CDummyCommand4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK11CMemoryCopyC1Ev */
/* Demangled: MK::CMemoryCopy::CMemoryCopy() */
int _ZN2MK11CMemoryCopyC1Ev(void);

/* Symbol: _ZN2MK16CCLRetainContextC2ERKS0_ */
/* Demangled: MK::CCLRetainContext::CCLRetainContext(MK::CCLRetainContext const&) */
int _ZN2MK16CCLRetainContextC2ERKS0_(void);

/* Symbol: CmdL_AttachclCreateContextFromType */
/* Demangled: CmdL_AttachclCreateContextFromType */
int CmdL_AttachclCreateContextFromType(void);

/* Symbol: CmdL_AttachclEnqueueFillBuffer */
/* Demangled: CmdL_AttachclEnqueueFillBuffer */
int CmdL_AttachclEnqueueFillBuffer(void);

/* Symbol: _ZN2MK11CThreadJobQ10EnqueueJobEPNS_4CJobE */
/* Demangled: MK::CThreadJobQ::EnqueueJob(MK::CJob*) */
int _ZN2MK11CThreadJobQ10EnqueueJobEPNS_4CJobE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS8_PiENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE */
/* Demangled: std::__1::__function::__func<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*), std::__1::allocator<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)>, void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)>::__clone(std::__1::__function::__base<void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)>*) const */
int _ZNKSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS8_PiENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_contextjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_context*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_context*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_context*, unsigned int, unsigned long, void*, unsigned long*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP11_cl_contextjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP7_cl_memENS_9allocatorIS5_EES4_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*), std::__1::allocator<int (*)(_cl_mem*)>, int (_cl_mem*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP7_cl_memENS_9allocatorIS5_EES4_E7destroyEv(void);

/* Symbol: _ZN2MK15CCLReleaseEventC2ERKS0_ */
/* Demangled: MK::CCLReleaseEvent::CCLReleaseEvent(MK::CCLReleaseEvent const&) */
int _ZN2MK15CCLReleaseEventC2ERKS0_(void);

/* Symbol: _ZN2MK13CInputTensors4SaveERNS_7CStreamE */
/* Demangled: MK::CInputTensors::Save(MK::CStream&) */
int _ZN2MK13CInputTensors4SaveERNS_7CStreamE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFviPvENS_9allocatorIS4_EES3_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<void (*)(int, void*), std::__1::allocator<void (*)(int, void*)>, void (int, void*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFviPvENS_9allocatorIS4_EES3_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK8CCommand20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCommand::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK8CCommand20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK10CCLSVMFreeC2Ev */
/* Demangled: MK::CCLSVMFree::CCLSVMFree() */
int _ZN2MK10CCLSVMFreeC2Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_samplerENS_9allocatorIS5_EES4_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_sampler*), std::__1::allocator<int (*)(_cl_sampler*)>, int (_cl_sampler*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP11_cl_samplerENS_9allocatorIS5_EES4_E7destroyEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_OjOmSL_OS7_SK_OSB_OSC_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, unsigned int&&, unsigned long&&, unsigned long&&, void const*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_OjOmSL_OS7_SK_OSB_OSC_(void);

/* Symbol: _ZNSt3__114__split_bufferIPbNS_9allocatorIS1_EEE9push_backEOS1_ */
/* Demangled: std::__1::__split_buffer<bool*, std::__1::allocator<bool*> >::push_back(bool*&&) */
int _ZNSt3__114__split_bufferIPbNS_9allocatorIS1_EEE9push_backEOS1_(void);

/* Symbol: _ZN2MK15CCLBuildProgramC2Ev */
/* Demangled: MK::CCLBuildProgram::CCLBuildProgram() */
int _ZN2MK15CCLBuildProgramC2Ev(void);

/* Symbol: _ZNK2MK26CCLCreateProgramWithSource15CopyConstructToEv */
/* Demangled: MK::CCLCreateProgramWithSource::CopyConstructTo() const */
int _ZNK2MK26CCLCreateProgramWithSource15CopyConstructToEv(void);

/* Symbol: _Z33handleEnqueueNDRangeKernelProfileP10_cl_kernelj */
/* Demangled: handleEnqueueNDRangeKernelProfile(_cl_kernel*, unsigned int) */
int _Z33handleEnqueueNDRangeKernelProfileP10_cl_kernelj(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mmmjPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mmmjPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_EE;

/* Symbol: _ZN2MK14COutputTensors20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::COutputTensors::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK14COutputTensors20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK11CMemoryCopyD0Ev */
/* Demangled: MK::CMemoryCopy::~CMemoryCopy() */
int _ZN2MK11CMemoryCopyD0Ev(void);

/* Symbol: _ZN2MK15CProfileDataJobD0Ev */
/* Demangled: MK::CProfileDataJob::~CProfileDataJob() */
int _ZN2MK15CProfileDataJobD0Ev(void);

/* Symbol: _ZN2MK27CCLEnqueueCopyBufferToImageC1Ev */
/* Demangled: MK::CCLEnqueueCopyBufferToImage::CCLEnqueueCopyBufferToImage() */
int _ZN2MK27CCLEnqueueCopyBufferToImageC1Ev(void);

/* Symbol: _ZN2MK10CCLCommand4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLCommand::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK10CCLCommand4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK18CCLEnqueueSVMUnmap6RecordEP17_cl_command_queuePvjPKP9_cl_eventS5_ */
/* Demangled: MK::CCLEnqueueSVMUnmap::Record(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event*) */
int _ZN2MK18CCLEnqueueSVMUnmap6RecordEP17_cl_command_queuePvjPKP9_cl_eventS5_(void);

/* Symbol: _ZNK2MK10CCLCommand11GetDiskUsedEv */
/* Demangled: MK::CCLCommand::GetDiskUsed() const */
int _ZNK2MK10CCLCommand11GetDiskUsedEv(void);

/* Symbol: _ZN2MK15CCLImportMemoryC1ERKS0_ */
/* Demangled: MK::CCLImportMemory::CCLImportMemory(MK::CCLImportMemory const&) */
int _ZN2MK15CCLImportMemoryC1ERKS0_(void);

/* Symbol: _ZNK2MK20CCLPrepareMemoryCopy3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLPrepareMemoryCopy::Log(MK::CJsonLog&) const */
int _ZNK2MK20CCLPrepareMemoryCopy3LogERNS_8CJsonLogE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventENS_9allocatorIS9_EES8_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*)>, int (_cl_command_queue*, unsigned int, _cl_event* const*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventENS_9allocatorIS9_EES8_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK7CStream15InsertInOrderedEPNS_7CObjectE */
/* Demangled: MK::CStream::InsertInOrdered(MK::CObject*) */
int _ZN2MK7CStream15InsertInOrderedEPNS_7CObjectE(void);

/* Symbol: CmdL_AttachclEnqueueCopyBufferToImage */
/* Demangled: CmdL_AttachclEnqueueCopyBufferToImage */
int CmdL_AttachclEnqueueCopyBufferToImage(void);

/* Symbol: clGetContextInfo */
/* Demangled: clGetContextInfo */
int clGetContextInfo(void);

/* Symbol: _ZN2MK10CCLSVMFreeD1Ev */
/* Demangled: MK::CCLSVMFree::~CCLSVMFree() */
int _ZN2MK10CCLSVMFreeD1Ev(void);

/* Symbol: _ZN2MK16CCLEnqueueSVMMapC2Ev */
/* Demangled: MK::CCLEnqueueSVMMap::CCLEnqueueSVMMap() */
int _ZN2MK16CCLEnqueueSVMMapC2Ev(void);

/* Symbol: MKProgram_AttachCLRetainProgram */
/* Demangled: MKProgram_AttachCLRetainProgram */
int MKProgram_AttachCLRetainProgram(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP10_cl_kernelP11_cl_programPKcPiENS_9allocatorISA_EES9_E7destroyEv */
/* Demangled: std::__1::__function::__func<_cl_kernel* (*)(_cl_program*, char const*, int*), std::__1::allocator<_cl_kernel* (*)(_cl_program*, char const*, int*)>, _cl_kernel* (_cl_program*, char const*, int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFP10_cl_kernelP11_cl_programPKcPiENS_9allocatorISA_EES9_E7destroyEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueENS_9allocatorIS5_EES4_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*), std::__1::allocator<int (*)(_cl_command_queue*)>, int (_cl_command_queue*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueENS_9allocatorIS5_EES4_EE;

/* Symbol: CmdL_AttachclEnqueueSVMFree */
/* Demangled: CmdL_AttachclEnqueueSVMFree */
int CmdL_AttachclEnqueueSVMFree(void);

/* Symbol: _ZN2MK15CCLBuildProgramD1Ev */
/* Demangled: MK::CCLBuildProgram::~CCLBuildProgram() */
int _ZN2MK15CCLBuildProgramD1Ev(void);

/* Symbol: _ZN2MK16CCLRetainProgramC1ERKS0_ */
/* Demangled: MK::CCLRetainProgram::CCLRetainProgram(MK::CCLRetainProgram const&) */
int _ZN2MK16CCLRetainProgramC1ERKS0_(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idmPiENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE */
/* Demangled: std::__1::__function::__func<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long, int*), std::__1::allocator<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long, int*)>, _cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long, int*)>::__clone(std::__1::__function::__base<_cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long, int*)>*) const */
int _ZNKSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idmPiENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP10_cl_kerneljPKvENS_9allocatorIS7_EES6_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, void const*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, void const*)>, int (_cl_kernel*, unsigned int, void const*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP10_cl_kerneljPKvENS_9allocatorIS7_EES6_E7__cloneEv(void);

/* Symbol: _ZN2MK18clEnqueueReadImageEP17_cl_command_queueP7_cl_memjPKmS5_mmPvjPKP9_cl_eventPS8_ */
/* Demangled: MK::clEnqueueReadImage(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK18clEnqueueReadImageEP17_cl_command_queueP7_cl_memjPKmS5_mmPvjPKP9_cl_eventPS8_(void);

/* Symbol: clGetSupportedImageFormats */
/* Demangled: clGetSupportedImageFormats */
int clGetSupportedImageFormats(void);

/* Symbol: _ZN2MK14CCLRetainEventC1Ev */
/* Demangled: MK::CCLRetainEvent::CCLRetainEvent() */
int _ZN2MK14CCLRetainEventC1Ev(void);

/* Symbol: _ZN2MK27CCLEnqueueCopyBufferToImageD0Ev */
/* Demangled: MK::CCLEnqueueCopyBufferToImage::~CCLEnqueueCopyBufferToImage() */
int _ZN2MK27CCLEnqueueCopyBufferToImageD0Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP9_cl_eventjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_event*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_event*, unsigned int, unsigned long, void*, unsigned long*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP9_cl_eventjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void);

/* Symbol: _ZTVN2MK11CCLSVMAllocE */
/* Demangled: vtable for MK::CCLSVMAlloc */
extern void* _ZTVN2MK11CCLSVMAllocE;

/* Symbol: MKProgram_GetCLContext */
/* Demangled: MKProgram_GetCLContext */
int MKProgram_GetCLContext(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmmmPvPiENS_9allocatorISC_EESB_EE */
/* Demangled: vtable for std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmmmPvPiENS_9allocatorISC_EESB_EE;

/* Symbol: _ZN2MK26clGetSupportedImageFormatsEP11_cl_contextmjjP16_cl_image_formatPj */
/* Demangled: MK::clGetSupportedImageFormats(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*) */
int _ZN2MK26clGetSupportedImageFormatsEP11_cl_contextmjjP16_cl_image_formatPj(void);

/* Symbol: _ZN2MK20CCLEnqueueReadBuffer7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueReadBuffer::Factory(MK::CStream&) */
int _ZN2MK20CCLEnqueueReadBuffer7FactoryERNS_7CStreamE(void);

/* Symbol: _ZNK2MK17CCLReleaseProgram11GetDiskUsedEv */
/* Demangled: MK::CCLReleaseProgram::GetDiskUsed() const */
int _ZNK2MK17CCLReleaseProgram11GetDiskUsedEv(void);

/* Symbol: _ZN2MK16CCLEnqueueSVMMapD1Ev */
/* Demangled: MK::CCLEnqueueSVMMap::~CCLEnqueueSVMMap() */
int _ZN2MK16CCLEnqueueSVMMapD1Ev(void);

/* Symbol: MKProgram_AttachCLRetainMemObject */
/* Demangled: MKProgram_AttachCLRetainMemObject */
int MKProgram_AttachCLRetainMemObject(void);

/* Symbol: _ZN2MK21clReleaseCommandQueueEP17_cl_command_queue */
/* Demangled: MK::clReleaseCommandQueue(_cl_command_queue*) */
int _ZN2MK21clReleaseCommandQueueEP17_cl_command_queue(void);

/* Symbol: _ZN2MK15CCLCreateKernelC1Ev */
/* Demangled: MK::CCLCreateKernel::CCLCreateKernel() */
int _ZN2MK15CCLCreateKernelC1Ev(void);

/* Symbol: _ZN2MK15CCLCreateKernel3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLCreateKernel::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK15CCLCreateKernel3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZN2MK27CCLEnqueueCopyBufferToImage15RegisterFactoryEv */
/* Demangled: MK::CCLEnqueueCopyBufferToImage::RegisterFactory() */
int _ZN2MK27CCLEnqueueCopyBufferToImage15RegisterFactoryEv(void);

/* Symbol: _ZNK2MK17CCLReleaseProgram15CopyConstructToEv */
/* Demangled: MK::CCLReleaseProgram::CopyConstructTo() const */
int _ZNK2MK17CCLReleaseProgram15CopyConstructToEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP15_cl_platform_idENS_9allocatorIS5_EES4_EclEOS3_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*), std::__1::allocator<int (*)(_cl_platform_id*)>, int (_cl_platform_id*)>::operator()(_cl_platform_id*&&) */
int _ZNSt3__110__function6__funcIPFiP15_cl_platform_idENS_9allocatorIS5_EES4_EclEOS3_(void);

/* Symbol: CmdL_AttachclCreateSubDevices */
/* Demangled: CmdL_AttachclCreateSubDevices */
int CmdL_AttachclCreateSubDevices(void);

/* Symbol: _ZNK2MK28CCLEnqueueMarkerWithWaitList13GetMemoryUsedEv */
/* Demangled: MK::CCLEnqueueMarkerWithWaitList::GetMemoryUsed() const */
int _ZNK2MK28CCLEnqueueMarkerWithWaitList13GetMemoryUsedEv(void);

/* Symbol: _ZTVN2MK16CCLRetainProgramE */
/* Demangled: vtable for MK::CCLRetainProgram */
extern void* _ZTVN2MK16CCLRetainProgramE;

/* Symbol: _ZN2MK14CCLRetainEventD0Ev */
/* Demangled: MK::CCLRetainEvent::~CCLRetainEvent() */
int _ZN2MK14CCLRetainEventD0Ev(void);

/* Symbol: _ZN2MK11CCLSVMAlloc8ms_kRTTIE */
/* Demangled: MK::CCLSVMAlloc::ms_kRTTI */
extern void* _ZN2MK11CCLSVMAlloc8ms_kRTTIE;

/* Symbol: _ZNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idPKmPiENS_9allocatorISC_EESB_E7destroyEv */
/* Demangled: std::__1::__function::__func<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long const*, int*), std::__1::allocator<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long const*, int*)>, _cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long const*, int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idPKmPiENS_9allocatorISC_EESB_E7destroyEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPiENS_9allocatorISF_EESE_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPiENS_9allocatorISF_EESE_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP10_cl_kerneljPKvENS_9allocatorIS7_EES6_EclEOS3_OjOS5_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, void const*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, void const*)>, int (_cl_kernel*, unsigned int, void const*)>::operator()(_cl_kernel*&&, unsigned int&&, void const*&&) */
int _ZNSt3__110__function6__funcIPFiP10_cl_kerneljPKvENS_9allocatorIS7_EES6_EclEOS3_OjOS5_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_mjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_mjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFvP11_cl_contextPvENS_9allocatorIS6_EES5_E7destroyEv */
/* Demangled: std::__1::__function::__func<void (*)(_cl_context*, void*), std::__1::allocator<void (*)(_cl_context*, void*)>, void (_cl_context*, void*)>::destroy() */
int _ZNSt3__110__function6__funcIPFvP11_cl_contextPvENS_9allocatorIS6_EES5_E7destroyEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_samplerjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP11_cl_samplerjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK21CCLEnqueueWriteBufferD2Ev */
/* Demangled: MK::CCLEnqueueWriteBuffer::~CCLEnqueueWriteBuffer() */
int _ZN2MK21CCLEnqueueWriteBufferD2Ev(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP9_cl_eventiPFvS3_iPvES4_ENS_9allocatorIS8_EES7_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_event*, int, void (*)(_cl_event*, int, void*), void*), std::__1::allocator<int (*)(_cl_event*, int, void (*)(_cl_event*, int, void*), void*)>, int (_cl_event*, int, void (*)(_cl_event*, int, void*), void*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP9_cl_eventiPFvS3_iPvES4_ENS_9allocatorIS8_EES7_EE;

/* Symbol: _ZN2MK16CCLCreateContext8ms_kRTTIE */
/* Demangled: MK::CCLCreateContext::ms_kRTTI */
extern void* _ZN2MK16CCLCreateContext8ms_kRTTIE;

/* Symbol: clGetCommandQueueInfo */
/* Demangled: clGetCommandQueueInfo */
int clGetCommandQueueInfo(void);

/* Symbol: _ZN2MK21CCLCreateCommandQueueD2Ev */
/* Demangled: MK::CCLCreateCommandQueue::~CCLCreateCommandQueue() */
int _ZN2MK21CCLCreateCommandQueueD2Ev(void);

/* Symbol: _ZN2MK15CCLCreateKernelD0Ev */
/* Demangled: MK::CCLCreateKernel::~CCLCreateKernel() */
int _ZN2MK15CCLCreateKernelD0Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP7_cl_memS3_mjPKvPiENS_9allocatorIS8_EES7_E7destroyEv */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_mem*, unsigned long, unsigned int, void const*, int*), std::__1::allocator<_cl_mem* (*)(_cl_mem*, unsigned long, unsigned int, void const*, int*)>, _cl_mem* (_cl_mem*, unsigned long, unsigned int, void const*, int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFP7_cl_memS3_mjPKvPiENS_9allocatorIS8_EES7_E7destroyEv(void);

/* Symbol: _ZN2MK10CCLCommand4SaveERNS_7CStreamE */
/* Demangled: MK::CCLCommand::Save(MK::CStream&) */
int _ZN2MK10CCLCommand4SaveERNS_7CStreamE(void);

/* Symbol: _ZNK2MK19CCLReleaseMemObject11GetDiskUsedEv */
/* Demangled: MK::CCLReleaseMemObject::GetDiskUsed() const */
int _ZNK2MK19CCLReleaseMemObject11GetDiskUsedEv(void);

/* Symbol: _ZNK2MK19CCLReleaseMemObject13GetMemoryUsedEv */
/* Demangled: MK::CCLReleaseMemObject::GetMemoryUsed() const */
int _ZNK2MK19CCLReleaseMemObject13GetMemoryUsedEv(void);

/* Symbol: _ZN2MK4CJobC2ERKS0_ */
/* Demangled: MK::CJob::CJob(MK::CJob const&) */
int _ZN2MK4CJobC2ERKS0_(void);

/* Symbol: _ZN2MK15CCLCreateBuffer8ms_kRTTIE */
/* Demangled: MK::CCLCreateBuffer::ms_kRTTI */
extern void* _ZN2MK15CCLCreateBuffer8ms_kRTTIE;

/* Symbol: _ZN2MK15CCLImportMemory8ms_kRTTIE */
/* Demangled: MK::CCLImportMemory::ms_kRTTI */
extern void* _ZN2MK15CCLImportMemory8ms_kRTTIE;

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_mjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_mjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE(void);

/* Symbol: _ZN2MK25CCLCreateKernelsInProgramD2Ev */
/* Demangled: MK::CCLCreateKernelsInProgram::~CCLCreateKernelsInProgram() */
int _ZN2MK25CCLCreateKernelsInProgramD2Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP10_cl_kerneljmPvPmENS_9allocatorIS7_EES6_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP10_cl_kerneljmPvPmENS_9allocatorIS7_EES6_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcjPKS3_PFvS3_PvESE_PiENS_9allocatorISJ_EESI_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcjPKS3_PFvS3_PvESE_PiENS_9allocatorISJ_EESI_E18destroy_deallocateEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_EE;

/* Symbol: _ZN2MK12CDynamicDataC1ERKS0_ */
/* Demangled: MK::CDynamicData::CDynamicData(MK::CDynamicData const&) */
int _ZN2MK12CDynamicDataC1ERKS0_(void);

/* Symbol: _ZN2MK11CUpdateBool20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CUpdateBool::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK11CUpdateBool20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: clCreateBuffer */
/* Demangled: clCreateBuffer */
int clCreateBuffer(void);

/* Symbol: clEnqueueWriteImage */
/* Demangled: clEnqueueWriteImage */
int clEnqueueWriteImage(void);

/* Symbol: _ZN2MK22CCLReleaseCommandQueue4SaveERNS_7CStreamE */
/* Demangled: MK::CCLReleaseCommandQueue::Save(MK::CStream&) */
int _ZN2MK22CCLReleaseCommandQueue4SaveERNS_7CStreamE(void);

/* Symbol: _ZN2MK16CCLReleaseKernel4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLReleaseKernel::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK16CCLReleaseKernel4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK15CCLSetKernelArg20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLSetKernelArg::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK15CCLSetKernelArg20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK16CCLWaitForEvents8ms_kRTTIE */
/* Demangled: MK::CCLWaitForEvents::ms_kRTTI */
extern void* _ZN2MK16CCLWaitForEvents8ms_kRTTIE;

/* Symbol: _ZN2MK7CStreamC1Ev */
/* Demangled: MK::CStream::CStream() */
int _ZN2MK7CStreamC1Ev(void);

/* Symbol: clUnloadPlatformCompiler */
/* Demangled: clUnloadPlatformCompiler */
int clUnloadPlatformCompiler(void);

/* Symbol: clEnqueueSVMMemFill */
/* Demangled: clEnqueueSVMMemFill */
int clEnqueueSVMMemFill(void);

/* Symbol: _ZTVN2MK7CObjectE */
/* Demangled: vtable for MK::CObject */
extern void* _ZTVN2MK7CObjectE;

/* Symbol: _ZN2MK8CProgramD0Ev */
/* Demangled: MK::CProgram::~CProgram() */
int _ZN2MK8CProgramD0Ev(void);

/* Symbol: _ZN2MK7CStream4LoadEPKc */
/* Demangled: MK::CStream::Load(char const*) */
int _ZN2MK7CStream4LoadEPKc(void);

/* Symbol: _ZNK2MK26CCLCreateProgramWithBinary11GetDiskUsedEv */
/* Demangled: MK::CCLCreateProgramWithBinary::GetDiskUsed() const */
int _ZNK2MK26CCLCreateProgramWithBinary11GetDiskUsedEv(void);

/* Symbol: _ZNK2MK15CCLSetKernelArg13GetMemoryUsedEv */
/* Demangled: MK::CCLSetKernelArg::GetMemoryUsed() const */
int _ZNK2MK15CCLSetKernelArg13GetMemoryUsedEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP7_cl_memjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP7_cl_memjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_samplerjmPvPmENS_9allocatorIS7_EES6_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP11_cl_samplerjmPvPmENS_9allocatorIS7_EES6_E7destroyEv(void);

/* Symbol: _ZNK2MK8CCLFlush13GetMemoryUsedEv */
/* Demangled: MK::CCLFlush::GetMemoryUsed() const */
int _ZNK2MK8CCLFlush13GetMemoryUsedEv(void);

/* Symbol: MKSysTrace_End */
/* Demangled: MKSysTrace_End */
int MKSysTrace_End(void);

/* Symbol: _ZN2MK9CLSymbols12load_defaultEv */
/* Demangled: MK::CLSymbols::load_default() */
int _ZN2MK9CLSymbols12load_defaultEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvPKmS9_jPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvPKmS9_jPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK7CStreamD0Ev */
/* Demangled: MK::CStream::~CStream() */
int _ZN2MK7CStreamD0Ev(void);

/* Symbol: _ZGVZN2MK14CContextGlobal11GetInstanceEvE12ms_kInstance */
/* Demangled: guard variable for MK::CContextGlobal::GetInstance()::ms_kInstance */
extern void* _ZGVZN2MK14CContextGlobal11GetInstanceEvE12ms_kInstance;

/* Symbol: _ZN2MK15CCLCreateKernel7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLCreateKernel::Factory(MK::CStream&) */
int _ZN2MK15CCLCreateKernel7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK9CLSymbols12met_systraceEv */
/* Demangled: MK::CLSymbols::met_systrace() */
int _ZN2MK9CLSymbols12met_systraceEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP10_cl_kernelP11_cl_programPKcPiENS_9allocatorISA_EES9_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<_cl_kernel* (*)(_cl_program*, char const*, int*), std::__1::allocator<_cl_kernel* (*)(_cl_program*, char const*, int*)>, _cl_kernel* (_cl_program*, char const*, int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFP10_cl_kernelP11_cl_programPKcPiENS_9allocatorISA_EES9_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPKvjPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_EclEOS3_OS5_OjOS7_SN_OmSO_OS9_SM_OSD_OSE_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, unsigned int&&, unsigned long const*&&, unsigned long const*&&, unsigned long&&, unsigned long&&, void const*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPKvjPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_EclEOS3_OS5_OjOS7_SN_OmSO_OS9_SM_OSD_OSE_(void);

/* Symbol: _ZTVN2MK11CContextTlsE */
/* Demangled: vtable for MK::CContextTls */
extern void* _ZTVN2MK11CContextTlsE;

/* Symbol: CmdL_AttachclRetainMemObject */
/* Demangled: CmdL_AttachclRetainMemObject */
int CmdL_AttachclRetainMemObject(void);

/* Symbol: _ZN2MK18CCLRetainMemObject4SaveERNS_7CStreamE */
/* Demangled: MK::CCLRetainMemObject::Save(MK::CStream&) */
int _ZN2MK18CCLRetainMemObject4SaveERNS_7CStreamE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mPKmS7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mPKmS7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE;

/* Symbol: _ZNK2MK15CCLBuildProgram11GetDiskUsedEv */
/* Demangled: MK::CCLBuildProgram::GetDiskUsed() const */
int _ZNK2MK15CCLBuildProgram11GetDiskUsedEv(void);

/* Symbol: _ZN2MK23CCLEnqueueNDRangeKernel4SaveERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueNDRangeKernel::Save(MK::CStream&) */
int _ZN2MK23CCLEnqueueNDRangeKernel4SaveERNS_7CStreamE(void);

/* Symbol: _ZN2MK20CCLEnqueueMemoryCopyC1ERKS0_ */
/* Demangled: MK::CCLEnqueueMemoryCopy::CCLEnqueueMemoryCopy(MK::CCLEnqueueMemoryCopy const&) */
int _ZN2MK20CCLEnqueueMemoryCopyC1ERKS0_(void);

/* Symbol: CmdL_AttachclCreateProgramWithSource */
/* Demangled: CmdL_AttachclCreateProgramWithSource */
int CmdL_AttachclCreateProgramWithSource(void);

/* Symbol: _ZN2MK15CCLBuildProgram6RecordEP11_cl_programjPKP13_cl_device_idPKc */
/* Demangled: MK::CCLBuildProgram::Record(_cl_program*, unsigned int, _cl_device_id* const*, char const*) */
int _ZN2MK15CCLBuildProgram6RecordEP11_cl_programjPKP13_cl_device_idPKc(void);

/* Symbol: _ZN2MK18CCLRetainMemObject3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLRetainMemObject::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK18CCLRetainMemObject3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZNK2MK20CCLEnqueueReadBuffer11GetDiskUsedEv */
/* Demangled: MK::CCLEnqueueReadBuffer::GetDiskUsed() const */
int _ZNK2MK20CCLEnqueueReadBuffer11GetDiskUsedEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP15_cl_platform_idjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP15_cl_platform_idjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPKlPvmPiENS_9allocatorISB_EESA_EclEOS5_OmOS7_OS8_SG_OS9_ */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, long const*, void*, unsigned long, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, long const*, void*, unsigned long, int*)>, _cl_mem* (_cl_context*, unsigned long, long const*, void*, unsigned long, int*)>::operator()(_cl_context*&&, unsigned long&&, long const*&&, void*&&, unsigned long&&, int*&&) */
int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPKlPvmPiENS_9allocatorISB_EESA_EclEOS5_OmOS7_OS8_SG_OS9_(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvmjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvmjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_EE;

/* Symbol: MKProgram_SetInputHostPtr */
/* Demangled: MKProgram_SetInputHostPtr */
int MKProgram_SetInputHostPtr(void);

/* Symbol: _ZN2MK14clGetDeviceIDsEP15_cl_platform_idmjPP13_cl_device_idPj */
/* Demangled: MK::clGetDeviceIDs(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*) */
int _ZN2MK14clGetDeviceIDsEP15_cl_platform_idmjPP13_cl_device_idPj(void);

/* Symbol: _ZN2MK15CCLBuildProgram3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLBuildProgram::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK15CCLBuildProgram3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZNK2MK8CVersiongtERKS0_ */
/* Demangled: MK::CVersion::operator>(MK::CVersion const&) const */
int _ZNK2MK8CVersiongtERKS0_(void);

/* Symbol: _ZN2MK7CStream14GetObjectCountEv */
/* Demangled: MK::CStream::GetObjectCount() */
int _ZN2MK7CStream14GetObjectCountEv(void);

/* Symbol: _ZTVN2MK15CCLCreateKernelE */
/* Demangled: vtable for MK::CCLCreateKernel */
extern void* _ZTVN2MK15CCLCreateKernelE;

/* Symbol: _ZN2MK19CCLReleaseMemObject4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLReleaseMemObject::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK19CCLReleaseMemObject4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNK2MK16CCLEnqueueSVMMap15CopyConstructToEv */
/* Demangled: MK::CCLEnqueueSVMMap::CopyConstructTo() const */
int _ZNK2MK16CCLEnqueueSVMMap15CopyConstructToEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_contextjmPvPmENS_9allocatorIS7_EES6_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_context*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_context*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_context*, unsigned int, unsigned long, void*, unsigned long*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP11_cl_contextjmPvPmENS_9allocatorIS7_EES6_E7destroyEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_programjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_program*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_program*, unsigned int, unsigned long, void*, unsigned long*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP11_cl_programjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPPvPFvS3_jS5_S4_ES4_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPPvPFvS3_jS5_S4_ES4_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSF_ENS_9allocatorISH_EESG_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSF_ENS_9allocatorISH_EESG_E18destroy_deallocateEv(void);

/* Symbol: clBuildProgram */
/* Demangled: clBuildProgram */
int clBuildProgram(void);

/* Symbol: clSetKernelExecInfo */
/* Demangled: clSetKernelExecInfo */
int clSetKernelExecInfo(void);

/* Symbol: _ZN2MK19CCLEnqueueMapBuffer6RecordEP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventS6_Pv */
/* Demangled: MK::CCLEnqueueMapBuffer::Record(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event*, void*) */
int _ZN2MK19CCLEnqueueMapBuffer6RecordEP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventS6_Pv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP11_cl_samplerjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP11_cl_samplerjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void);

/* Symbol: CmdL_AttachclLinkProgram */
/* Demangled: CmdL_AttachclLinkProgram */
int CmdL_AttachclLinkProgram(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP10_cl_kernelP11_cl_programPKcPiENS_9allocatorISA_EES9_EclEOS5_OS7_OS8_ */
/* Demangled: std::__1::__function::__func<_cl_kernel* (*)(_cl_program*, char const*, int*), std::__1::allocator<_cl_kernel* (*)(_cl_program*, char const*, int*)>, _cl_kernel* (_cl_program*, char const*, int*)>::operator()(_cl_program*&&, char const*&&, int*&&) */
int _ZNSt3__110__function6__funcIPFP10_cl_kernelP11_cl_programPKcPiENS_9allocatorISA_EES9_EclEOS5_OS7_OS8_(void);

/* Symbol: _ZNK2MK14COutputTensors3LogERNS_8CJsonLogE */
/* Demangled: MK::COutputTensors::Log(MK::CJsonLog&) const */
int _ZNK2MK14COutputTensors3LogERNS_8CJsonLogE(void);

/* Symbol: CmdL_AttachclCreateContext */
/* Demangled: CmdL_AttachclCreateContext */
int CmdL_AttachclCreateContext(void);

/* Symbol: _ZN2MK20clRetainCommandQueueEP17_cl_command_queue */
/* Demangled: MK::clRetainCommandQueue(_cl_command_queue*) */
int _ZN2MK20clRetainCommandQueueEP17_cl_command_queue(void);

/* Symbol: MKStream_LoadByBuffer */
/* Demangled: MKStream_LoadByBuffer */
int MKStream_LoadByBuffer(void);

/* Symbol: _ZN2MK10CCLSVMFreeC1Ev */
/* Demangled: MK::CCLSVMFree::CCLSVMFree() */
int _ZN2MK10CCLSVMFreeC1Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_EclEOS3_OS5_OjOS7_SM_OmSN_OS8_SL_OSC_OSD_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, unsigned int&&, unsigned long const*&&, unsigned long const*&&, unsigned long&&, unsigned long&&, void*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_EclEOS3_OS5_OjOS7_SM_OmSN_OS8_SL_OSC_OSD_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EclEOS3_OjOS4_OS6_OmSI_OSA_OSB_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, unsigned int&&, void*&&, void const*&&, unsigned long&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EclEOS3_OjOS4_OS6_OmSI_OSA_OSB_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIlN2MK12CResourceMap5_DataEEENS_19__map_value_compareIlS5_NS_4lessIlEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<long, MK::CResourceMap::_Data>, std::__1::__map_value_compare<long, std::__1::__value_type<long, MK::CResourceMap::_Data>, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, MK::CResourceMap::_Data> > >::destroy(std::__1::__tree_node<std::__1::__value_type<long, MK::CResourceMap::_Data>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIlN2MK12CResourceMap5_DataEEENS_19__map_value_compareIlS5_NS_4lessIlEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: clCreateKernelsInProgram */
/* Demangled: clCreateKernelsInProgram */
int clCreateKernelsInProgram(void);

/* Symbol: _ZN2MK15CCLBuildProgramC1Ev */
/* Demangled: MK::CCLBuildProgram::CCLBuildProgram() */
int _ZN2MK15CCLBuildProgramC1Ev(void);

/* Symbol: _ZN2MK10CCLSVMFree15RegisterFactoryEv */
/* Demangled: MK::CCLSVMFree::RegisterFactory() */
int _ZN2MK10CCLSVMFree15RegisterFactoryEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E7__cloneEPNS0_6__baseISB_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E7__cloneEPNS0_6__baseISB_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmmPvPiENS_9allocatorIS9_EES8_E7destroyEv */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, unsigned long, void*, int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmmPvPiENS_9allocatorIS9_EES8_E7destroyEv(void);

/* Symbol: _ZN2MK5CBool4SaveERNS_7CStreamE */
/* Demangled: MK::CBool::Save(MK::CStream&) */
int _ZN2MK5CBool4SaveERNS_7CStreamE(void);

/* Symbol: CmdL_AttachclCreateSampler */
/* Demangled: CmdL_AttachclCreateSampler */
int CmdL_AttachclCreateSampler(void);

/* Symbol: _ZNK2MK16CCLCreateContext16GetPropertyCountEPKl */
/* Demangled: MK::CCLCreateContext::GetPropertyCount(long const*) const */
int _ZNK2MK16CCLCreateContext16GetPropertyCountEPKl(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP10_cl_kernelP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP10_cl_kernelP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E7__cloneEv(void);

/* Symbol: _ZN2MK13CInputTensors7FactoryERNS_7CStreamE */
/* Demangled: MK::CInputTensors::Factory(MK::CStream&) */
int _ZN2MK13CInputTensors7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK8CJsonLog10AddNewLineEv */
/* Demangled: MK::CJsonLog::AddNewLine() */
int _ZN2MK8CJsonLog10AddNewLineEv(void);

/* Symbol: _ZNK2MK11CUpdateBool11GetDiskUsedEv */
/* Demangled: MK::CUpdateBool::GetDiskUsed() const */
int _ZNK2MK11CUpdateBool11GetDiskUsedEv(void);

/* Symbol: _ZN2MK15clReleaseKernelEP10_cl_kernel */
/* Demangled: MK::clReleaseKernel(_cl_kernel*) */
int _ZN2MK15clReleaseKernelEP10_cl_kernel(void);

/* Symbol: _ZTVN2MK16CCLCreateContextE */
/* Demangled: vtable for MK::CCLCreateContext */
extern void* _ZTVN2MK16CCLCreateContextE;

/* Symbol: _ZN2MK18clSetEventCallbackEP9_cl_eventiPFvS1_iPvES2_ */
/* Demangled: MK::clSetEventCallback(_cl_event*, int, void (*)(_cl_event*, int, void*), void*) */
int _ZN2MK18clSetEventCallbackEP9_cl_eventiPFvS1_iPvES2_(void);

/* Symbol: _ZN2MK23clCreateContextFromTypeEPKlmPFvPKcPKvmPvES6_Pi */
/* Demangled: MK::clCreateContextFromType(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*) */
int _ZN2MK23clCreateContextFromTypeEPKlmPFvPKcPKvmPvES6_Pi(void);

/* Symbol: _ZN2MK16CCLEnqueueSVMMapC1Ev */
/* Demangled: MK::CCLEnqueueSVMMap::CCLEnqueueSVMMap() */
int _ZN2MK16CCLEnqueueSVMMapC1Ev(void);

/* Symbol: _ZN2MK24CCLEnqueueUnmapMemObject4SaveERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueUnmapMemObject::Save(MK::CStream&) */
int _ZN2MK24CCLEnqueueUnmapMemObject4SaveERNS_7CStreamE(void);

/* Symbol: _ZN2MK10CCLSVMFreeD0Ev */
/* Demangled: MK::CCLSVMFree::~CCLSVMFree() */
int _ZN2MK10CCLSVMFreeD0Ev(void);

/* Symbol: _ZN2MK16CCLEnqueueSVMMap4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLEnqueueSVMMap::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK16CCLEnqueueSVMMap4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_samplerENS_9allocatorIS5_EES4_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_sampler*), std::__1::allocator<int (*)(_cl_sampler*)>, int (_cl_sampler*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP11_cl_samplerENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP7_cl_memjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP7_cl_memjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void);

/* Symbol: clEnqueueUnmapMemObject */
/* Demangled: clEnqueueUnmapMemObject */
int clEnqueueUnmapMemObject(void);

/* Symbol: _ZN2MK15CCLBuildProgramD0Ev */
/* Demangled: MK::CCLBuildProgram::~CCLBuildProgram() */
int _ZN2MK15CCLBuildProgramD0Ev(void);

/* Symbol: MKProgram_AttachCLCreateContext */
/* Demangled: MKProgram_AttachCLCreateContext */
int MKProgram_AttachCLCreateContext(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextjjjPiENS_9allocatorIS8_EES7_E7__cloneEv */
/* Demangled: std::__1::__function::__func<_cl_sampler* (*)(_cl_context*, unsigned int, unsigned int, unsigned int, int*), std::__1::allocator<_cl_sampler* (*)(_cl_context*, unsigned int, unsigned int, unsigned int, int*)>, _cl_sampler* (_cl_context*, unsigned int, unsigned int, unsigned int, int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextjjjPiENS_9allocatorIS8_EES7_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmPvPiENS_9allocatorISC_EESB_E7destroyEv */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmPvPiENS_9allocatorISC_EESB_E7destroyEv(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP10_cl_kerneljPKvENS_9allocatorIS7_EES6_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, void const*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, void const*)>, int (_cl_kernel*, unsigned int, void const*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP10_cl_kerneljPKvENS_9allocatorIS7_EES6_EE;

/* Symbol: _ZN2MK23clEnqueueCopyBufferRectEP17_cl_command_queueP7_cl_memS3_PKmS5_S5_mmmmjPKP9_cl_eventPS7_ */
/* Demangled: MK::clEnqueueCopyBufferRect(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK23clEnqueueCopyBufferRectEP17_cl_command_queueP7_cl_memS3_PKmS5_S5_mmmmjPKP9_cl_eventPS7_(void);

/* Symbol: _ZN2MK16CCLRetainContext4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLRetainContext::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK16CCLRetainContext4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP10_cl_kernelP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP10_cl_kernelP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E7destroyEv(void);

/* Symbol: _ZN2MK11CCLSVMAlloc6RecordEP11_cl_contextmmjPv */
/* Demangled: MK::CCLSVMAlloc::Record(_cl_context*, unsigned long, unsigned long, unsigned int, void*) */
int _ZN2MK11CCLSVMAlloc6RecordEP11_cl_contextmmjPv(void);

/* Symbol: _ZN2MK7CObject19GetObjectByNameRTTIEPKcPKNS_5CRTTIEb */
/* Demangled: MK::CObject::GetObjectByNameRTTI(char const*, MK::CRTTI const*, bool) */
int _ZN2MK7CObject19GetObjectByNameRTTIEPKcPKNS_5CRTTIEb(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmmPvPiENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, unsigned long, void*, int*)>::__clone(std::__1::__function::__base<_cl_mem* (_cl_context*, unsigned long, unsigned long, void*, int*)>*) const */
int _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmmPvPiENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP10_cl_kerneljjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP10_cl_kerneljjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFbiPvENS_9allocatorIS4_EES3_E7destroyEv */
/* Demangled: std::__1::__function::__func<bool (*)(int, void*), std::__1::allocator<bool (*)(int, void*)>, bool (int, void*)>::destroy() */
int _ZNSt3__110__function6__funcIPFbiPvENS_9allocatorIS4_EES3_E7destroyEv(void);

/* Symbol: _ZN2MK21CCLEnqueueWriteBufferC2Ev */
/* Demangled: MK::CCLEnqueueWriteBuffer::CCLEnqueueWriteBuffer() */
int _ZN2MK21CCLEnqueueWriteBufferC2Ev(void);

/* Symbol: _ZNK2MK16CCLReleaseKernel15CopyConstructToEv */
/* Demangled: MK::CCLReleaseKernel::CopyConstructTo() const */
int _ZNK2MK16CCLReleaseKernel15CopyConstructToEv(void);

/* Symbol: _ZN2MK16CCLEnqueueSVMMapD0Ev */
/* Demangled: MK::CCLEnqueueSVMMap::~CCLEnqueueSVMMap() */
int _ZN2MK16CCLEnqueueSVMMapD0Ev(void);

/* Symbol: _ZTVN2MK19CCLProfileKernelJobE */
/* Demangled: vtable for MK::CCLProfileKernelJob */
extern void* _ZTVN2MK19CCLProfileKernelJobE;

/* Symbol: _ZNSt3__110__function6__funcIPFiP15_cl_platform_idjmPvPmENS_9allocatorIS7_EES6_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP15_cl_platform_idjmPvPmENS_9allocatorIS7_EES6_E7destroyEv(void);

/* Symbol: _ZN2MK15clCreateSamplerEP11_cl_contextjjjPi */
/* Demangled: MK::clCreateSampler(_cl_context*, unsigned int, unsigned int, unsigned int, int*) */
int _ZN2MK15clCreateSamplerEP11_cl_contextjjjPi(void);

/* Symbol: _ZN2MK21CCLCreateCommandQueueC2Ev */
/* Demangled: MK::CCLCreateCommandQueue::CCLCreateCommandQueue() */
int _ZN2MK21CCLCreateCommandQueueC2Ev(void);

/* Symbol: _ZNSt3__16vectorIlNS_9allocatorIlEEE6insertINS_11__wrap_iterIPlEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKlEES9_S9_ */
/* Demangled: _ZNSt3__16vectorIlNS_9allocatorIlEEE6insertINS_11__wrap_iterIPlEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKlEES9_S9_ */
int _ZNSt3__16vectorIlNS_9allocatorIlEEE6insertINS_11__wrap_iterIPlEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKlEES9_S9_(void);

/* Symbol: _ZN2MK23clEnqueueUnmapMemObjectEP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS6_ */
/* Demangled: MK::clEnqueueUnmapMemObject(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK23clEnqueueUnmapMemObjectEP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS6_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK13CInputTensors8ms_kRTTIE */
/* Demangled: MK::CInputTensors::ms_kRTTI */
extern void* _ZN2MK13CInputTensors8ms_kRTTIE;

/* Symbol: _ZTVN2MK14CContextGlobalE */
/* Demangled: vtable for MK::CContextGlobal */
extern void* _ZTVN2MK14CContextGlobalE;

/* Symbol: _ZN2MK16CCLEnqueueMarker8ms_kRTTIE */
/* Demangled: MK::CCLEnqueueMarker::ms_kRTTI */
extern void* _ZN2MK16CCLEnqueueMarker8ms_kRTTIE;

/* Symbol: _ZN2MK25CCLCreateKernelsInProgramC2Ev */
/* Demangled: MK::CCLCreateKernelsInProgram::CCLCreateKernelsInProgram() */
int _ZN2MK25CCLCreateKernelsInProgramC2Ev(void);

/* Symbol: _ZN2MK21CCLEnqueueWriteBufferD1Ev */
/* Demangled: MK::CCLEnqueueWriteBuffer::~CCLEnqueueWriteBuffer() */
int _ZN2MK21CCLEnqueueWriteBufferD1Ev(void);

/* Symbol: _ZNK2MK17CCLReleaseContext13GetMemoryUsedEv */
/* Demangled: MK::CCLReleaseContext::GetMemoryUsed() const */
int _ZNK2MK17CCLReleaseContext13GetMemoryUsedEv(void);

/* Symbol: _ZN2MK16CCLRetainContext7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLRetainContext::Factory(MK::CStream&) */
int _ZN2MK16CCLRetainContext7FactoryERNS_7CStreamE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP9_cl_eventiPFvS3_iPvES4_ENS_9allocatorIS8_EES7_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, int, void (*)(_cl_event*, int, void*), void*), std::__1::allocator<int (*)(_cl_event*, int, void (*)(_cl_event*, int, void*), void*)>, int (_cl_event*, int, void (*)(_cl_event*, int, void*), void*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP9_cl_eventiPFvS3_iPvES4_ENS_9allocatorIS8_EES7_E7destroyEv(void);

/* Symbol: _ZN2MK21CCLCreateCommandQueueD1Ev */
/* Demangled: MK::CCLCreateCommandQueue::~CCLCreateCommandQueue() */
int _ZN2MK21CCLCreateCommandQueueD1Ev(void);

/* Symbol: _ZN2MK15CCLReleaseEvent15RegisterFactoryEv */
/* Demangled: MK::CCLReleaseEvent::RegisterFactory() */
int _ZN2MK15CCLReleaseEvent15RegisterFactoryEv(void);

/* Symbol: _ZN2MK21CCLRetainCommandQueue4SaveERNS_7CStreamE */
/* Demangled: MK::CCLRetainCommandQueue::Save(MK::CStream&) */
int _ZN2MK21CCLRetainCommandQueue4SaveERNS_7CStreamE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP10_cl_kerneljjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP10_cl_kerneljjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePvjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePvjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E7__cloneEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuePFvPvES4_mjPKP7_cl_memPPKvjPKP9_cl_eventPSF_ENS_9allocatorISK_EESJ_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuePFvPvES4_mjPKP7_cl_memPPKvjPKP9_cl_eventPSF_ENS_9allocatorISK_EESJ_EE;

/* Symbol: _ZN2MK14clCreateBufferEP11_cl_contextmmPvPi */
/* Demangled: MK::clCreateBuffer(_cl_context*, unsigned long, unsigned long, void*, int*) */
int _ZN2MK14clCreateBufferEP11_cl_contextmmPvPi(void);

/* Symbol: _ZN2MK16CCLEnqueueSVMMap20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueSVMMap::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK16CCLEnqueueSVMMap20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPPKcPKmPiENS_9allocatorISD_EESC_EclEOS5_OjOS8_OSA_OSB_ */
/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, char const**, unsigned long const*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, char const**, unsigned long const*, int*)>, _cl_program* (_cl_context*, unsigned int, char const**, unsigned long const*, int*)>::operator()(_cl_context*&&, unsigned int&&, char const**&&, unsigned long const*&&, int*&&) */
int _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPPKcPKmPiENS_9allocatorISD_EESC_EclEOS5_OjOS8_OSA_OSB_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmPvPiENS_9allocatorISC_EESB_EE */
/* Demangled: vtable for std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmPvPiENS_9allocatorISC_EESB_EE;

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP11_cl_programENS_9allocatorIS5_EES4_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_program*), std::__1::allocator<int (*)(_cl_program*)>, int (_cl_program*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP11_cl_programENS_9allocatorIS5_EES4_EE;

/* Symbol: clEnqueueTask */
/* Demangled: clEnqueueTask */
int clEnqueueTask(void);

/* Symbol: _ZN2MK15CCLCreateBuffer7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLCreateBuffer::Factory(MK::CStream&) */
int _ZN2MK15CCLCreateBuffer7FactoryERNS_7CStreamE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv(void);

/* Symbol: clGetProgramInfo */
/* Demangled: clGetProgramInfo */
int clGetProgramInfo(void);

/* Symbol: clSetMemObjectDestructorCallback */
/* Demangled: clSetMemObjectDestructorCallback */
int clSetMemObjectDestructorCallback(void);

/* Symbol: _ZNK2MK10CCLCommand13GetMemoryUsedEv */
/* Demangled: MK::CCLCommand::GetMemoryUsed() const */
int _ZNK2MK10CCLCommand13GetMemoryUsedEv(void);

/* Symbol: _ZN2MK25CCLCreateKernelsInProgramD1Ev */
/* Demangled: MK::CCLCreateKernelsInProgram::~CCLCreateKernelsInProgram() */
int _ZN2MK25CCLCreateKernelsInProgramD1Ev(void);

/* Symbol: _ZN2MK16CCLReleaseKernelC2ERKS0_ */
/* Demangled: MK::CCLReleaseKernel::CCLReleaseKernel(MK::CCLReleaseKernel const&) */
int _ZN2MK16CCLReleaseKernelC2ERKS0_(void);

/* Symbol: _ZNK2MK16CCLRetainContext15CopyConstructToEv */
/* Demangled: MK::CCLRetainContext::CopyConstructTo() const */
int _ZNK2MK16CCLRetainContext15CopyConstructToEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_S7_mmmmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_S7_mmmmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_EE;

/* Symbol: CmdL_SetControl */
/* Demangled: CmdL_SetControl */
int CmdL_SetControl(void);

/* Symbol: _ZN2MK15CCLRetainKernel6RecordEP10_cl_kernel */
/* Demangled: MK::CCLRetainKernel::Record(_cl_kernel*) */
int _ZN2MK15CCLRetainKernel6RecordEP10_cl_kernel(void);

/* Symbol: _ZN2MK8CCLFlushD2Ev */
/* Demangled: MK::CCLFlush::~CCLFlush() */
int _ZN2MK8CCLFlushD2Ev(void);

/* Symbol: _ZN2MK9CLSymbols4loadERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: MK::CLSymbols::load(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN2MK9CLSymbols4loadERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mmmjPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mmmjPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E7destroyEv(void);

/* Symbol: _ZN2MK13CDummyCommand20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CDummyCommand::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK13CDummyCommand20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: CmdL_TreeNodeCreate */
/* Demangled: CmdL_TreeNodeCreate */
int CmdL_TreeNodeCreate(void);

/* Symbol: clGetPipeInfo */
/* Demangled: clGetPipeInfo */
int clGetPipeInfo(void);

/* Symbol: _ZN2MK18CCLRetainMemObjectC1ERKS0_ */
/* Demangled: MK::CCLRetainMemObject::CCLRetainMemObject(MK::CCLRetainMemObject const&) */
int _ZN2MK18CCLRetainMemObjectC1ERKS0_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__16vectorIPKhNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<unsigned char const*, std::__1::allocator<unsigned char const*> >::__push_back_slow_path<unsigned char const*>(unsigned char const*&&) */
int _ZNSt3__16vectorIPKhNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZN2MK18CCLRetainMemObject8ms_kRTTIE */
/* Demangled: MK::CCLRetainMemObject::ms_kRTTI */
extern void* _ZN2MK18CCLRetainMemObject8ms_kRTTIE;

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_mmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_mmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E18destroy_deallocateEv(void);

/* Symbol: _ZNK2MK11CMemoryCopy15CopyConstructToEv */
/* Demangled: MK::CMemoryCopy::CopyConstructTo() const */
int _ZNK2MK11CMemoryCopy15CopyConstructToEv(void);

/* Symbol: clGetKernelInfo */
/* Demangled: clGetKernelInfo */
int clGetKernelInfo(void);

/* Symbol: _ZNK2MK15CCLCreateBuffer3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLCreateBuffer::Log(MK::CJsonLog&) const */
int _ZNK2MK15CCLCreateBuffer3LogERNS_8CJsonLogE(void);

/* Symbol: _ZNSt3__16vectorIcNS_9allocatorIcEEE6assignIPcEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIcNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIcNS_9allocatorIcEEE6assignIPcEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIcNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIcNS_9allocatorIcEEE6assignIPcEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIcNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZN2MK16CCLWaitForEventsD2Ev */
/* Demangled: MK::CCLWaitForEvents::~CCLWaitForEvents() */
int _ZN2MK16CCLWaitForEventsD2Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS8_PiENS_9allocatorISE_EESD_EclEOS4_OS6_OjOmSL_SL_SK_OSA_OSB_OSC_ */
/* Demangled: std::__1::__function::__func<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*), std::__1::allocator<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)>, void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)>::operator()(_cl_command_queue*&&, _cl_mem*&&, unsigned int&&, unsigned long&&, unsigned long&&, unsigned long&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&, int*&&) */
int _ZNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS8_PiENS_9allocatorISE_EESD_EclEOS4_OS6_OjOmSL_SL_SK_OSA_OSB_OSC_(void);

/* Symbol: _ZN2MK19CCLEnqueueMapBuffer4SaveERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueMapBuffer::Save(MK::CStream&) */
int _ZN2MK19CCLEnqueueMapBuffer4SaveERNS_7CStreamE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP11_cl_contextENS_9allocatorIS5_EES4_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_context*), std::__1::allocator<int (*)(_cl_context*)>, int (_cl_context*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP11_cl_contextENS_9allocatorIS5_EES4_EE;

/* Symbol: _ZNK2MK11CUpdateBool3LogERNS_8CJsonLogE */
/* Demangled: MK::CUpdateBool::Log(MK::CJsonLog&) const */
int _ZNK2MK11CUpdateBool3LogERNS_8CJsonLogE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFijPKP9_cl_eventENS_9allocatorIS7_EES6_EclEOjOS5_ */
/* Demangled: std::__1::__function::__func<int (*)(unsigned int, _cl_event* const*), std::__1::allocator<int (*)(unsigned int, _cl_event* const*)>, int (unsigned int, _cl_event* const*)>::operator()(unsigned int&&, _cl_event* const*&&) */
int _ZNSt3__110__function6__funcIPFijPKP9_cl_eventENS_9allocatorIS7_EES6_EclEOjOS5_(void);

/* Symbol: _ZN2MK21CCLCreateCommandQueue6RecordEP11_cl_contextP13_cl_device_idmP17_cl_command_queue */
/* Demangled: MK::CCLCreateCommandQueue::Record(_cl_context*, _cl_device_id*, unsigned long, _cl_command_queue*) */
int _ZN2MK21CCLCreateCommandQueue6RecordEP11_cl_contextP13_cl_device_idmP17_cl_command_queue(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv(void);

/* Symbol: _ZN2MK10clSVMAllocEP11_cl_contextmmj */
/* Demangled: MK::clSVMAlloc(_cl_context*, unsigned long, unsigned long, unsigned int) */
int _ZN2MK10clSVMAllocEP11_cl_contextmmj(void);

/* Symbol: clGetProgramBuildInfo */
/* Demangled: clGetProgramBuildInfo */
int clGetProgramBuildInfo(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPFPN2MK7CObjectERNS8_7CStreamEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISQ_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, MK::CObject* (*)(MK::CStream&)>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, MK::CObject* (*)(MK::CStream&)>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, MK::CObject* (*)(MK::CStream&)> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPFPN2MK7CObjectERNS8_7CStreamEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISQ_EERKT_(void);

/* Symbol: _ZNK2MK28CCLEnqueueMarkerWithWaitList3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLEnqueueMarkerWithWaitList::Log(MK::CJsonLog&) const */
int _ZNK2MK28CCLEnqueueMarkerWithWaitList3LogERNS_8CJsonLogE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmjjPKlPiENS_9allocatorISA_EES9_E7__cloneEv */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)>, _cl_mem* (_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmjjPKlPiENS_9allocatorISA_EES9_E7__cloneEv(void);

/* Symbol: _ZNK2MK13CDummyCommand11GetDiskUsedEv */
/* Demangled: MK::CDummyCommand::GetDiskUsed() const */
int _ZNK2MK13CDummyCommand11GetDiskUsedEv(void);

/* Symbol: _ZNK2MK22CCLReleaseCommandQueue11GetDiskUsedEv */
/* Demangled: MK::CCLReleaseCommandQueue::GetDiskUsed() const */
int _ZNK2MK22CCLReleaseCommandQueue11GetDiskUsedEv(void);

/* Symbol: MKProgram_AttachCLCreateImage */
/* Demangled: MKProgram_AttachCLCreateImage */
int MKProgram_AttachCLCreateImage(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP11_cl_programENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*), std::__1::allocator<int (*)(_cl_program*)>, int (_cl_program*)>::__clone(std::__1::__function::__base<int (_cl_program*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP11_cl_programENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventPS5_ENS_9allocatorISA_EES9_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventPS5_ENS_9allocatorISA_EES9_E7__cloneEv(void);

/* Symbol: _ZN2MK25CCLCreateKernelsInProgramC1ERKS0_ */
/* Demangled: MK::CCLCreateKernelsInProgram::CCLCreateKernelsInProgram(MK::CCLCreateKernelsInProgram const&) */
int _ZN2MK25CCLCreateKernelsInProgramC1ERKS0_(void);

/* Symbol: _ZN2MK16CCLEnqueueMarker4SaveERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueMarker::Save(MK::CStream&) */
int _ZN2MK16CCLEnqueueMarker4SaveERNS_7CStreamE(void);

/* Symbol: _ZTVN2MK5CBoolE */
/* Demangled: vtable for MK::CBool */
extern void* _ZTVN2MK5CBoolE;

/* Symbol: clEnqueueWriteBuffer */
/* Demangled: clEnqueueWriteBuffer */
int clEnqueueWriteBuffer(void);

/* Symbol: _ZN2MK20CCLEnqueueReadBuffer4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLEnqueueReadBuffer::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK20CCLEnqueueReadBuffer4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPPKcPKmPiENS_9allocatorISD_EESC_E7__cloneEv */
/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, char const**, unsigned long const*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, char const**, unsigned long const*, int*)>, _cl_program* (_cl_context*, unsigned int, char const**, unsigned long const*, int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPPKcPKmPiENS_9allocatorISD_EESC_E7__cloneEv(void);

/* Symbol: MKStream_Insert */
/* Demangled: MKStream_Insert */
int MKStream_Insert(void);

/* Symbol: _ZNK2MK26CCLCreateProgramWithBinary15CopyConstructToEv */
/* Demangled: MK::CCLCreateProgramWithBinary::CopyConstructTo() const */
int _ZNK2MK26CCLCreateProgramWithBinary15CopyConstructToEv(void);

/* Symbol: _ZN2MK11CMemoryCopy4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CMemoryCopy::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK11CMemoryCopy4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK20CCLEnqueueMemoryCopy3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLEnqueueMemoryCopy::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK20CCLEnqueueMemoryCopy3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: MKProgram_AttachCLReleaseCommandQueue */
/* Demangled: MKProgram_AttachCLReleaseCommandQueue */
int MKProgram_AttachCLReleaseCommandQueue(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK28CCLEnqueueMarkerWithWaitList3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLEnqueueMarkerWithWaitList::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK28CCLEnqueueMarkerWithWaitList3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFP10_cl_kernelP11_cl_programPKcPiENS_9allocatorISA_EES9_EE */
/* Demangled: vtable for std::__1::__function::__func<_cl_kernel* (*)(_cl_program*, char const*, int*), std::__1::allocator<_cl_kernel* (*)(_cl_program*, char const*, int*)>, _cl_kernel* (_cl_program*, char const*, int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFP10_cl_kernelP11_cl_programPKcPiENS_9allocatorISA_EES9_EE;

/* Symbol: MKProgram_AttachInputTensor */
/* Demangled: MKProgram_AttachInputTensor */
int MKProgram_AttachInputTensor(void);

/* Symbol: MKProgram_Create */
/* Demangled: MKProgram_Create */
int MKProgram_Create(void);

/* Symbol: _ZTVN2MK15CProfileDataJobE */
/* Demangled: vtable for MK::CProfileDataJob */
extern void* _ZTVN2MK15CProfileDataJobE;

/* Symbol: _ZN2MK11CContextTls11GetInstanceEv */
/* Demangled: MK::CContextTls::GetInstance() */
int _ZN2MK11CContextTls11GetInstanceEv(void);

/* Symbol: _ZN2MK14CCLCreateImageC2ERKS0_ */
/* Demangled: MK::CCLCreateImage::CCLCreateImage(MK::CCLCreateImage const&) */
int _ZN2MK14CCLCreateImageC2ERKS0_(void);

/* Symbol: _ZN2MK16CCLRetainContext15RegisterFactoryEv */
/* Demangled: MK::CCLRetainContext::RegisterFactory() */
int _ZN2MK16CCLRetainContext15RegisterFactoryEv(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRS6_EEEvDpOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRS6_EEEvDpOT_(void);

/* Symbol: CmdL_CheckDriverCompatibility */
/* Demangled: CmdL_CheckDriverCompatibility */
int CmdL_CheckDriverCompatibility(void);

/* Symbol: clRetainKernel */
/* Demangled: clRetainKernel */
int clRetainKernel(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN2MK15CCLSetKernelArg3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLSetKernelArg::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK15CCLSetKernelArg3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP9_cl_eventENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_event*), std::__1::allocator<int (*)(_cl_event*)>, int (_cl_event*)>::__clone(std::__1::__function::__base<int (_cl_event*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP9_cl_eventENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP11_cl_samplerENS_9allocatorIS5_EES4_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_sampler*), std::__1::allocator<int (*)(_cl_sampler*)>, int (_cl_sampler*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP11_cl_samplerENS_9allocatorIS5_EES4_EE;

/* Symbol: _ZN2MK20CCLEnqueueReadBuffer3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLEnqueueReadBuffer::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK20CCLEnqueueReadBuffer3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZN2MK8CJsonLog16LeaveObjectScopeEv */
/* Demangled: MK::CJsonLog::LeaveObjectScope() */
int _ZN2MK8CJsonLog16LeaveObjectScopeEv(void);

/* Symbol: _ZNK2MK7CObject7GetRTTIEv */
/* Demangled: MK::CObject::GetRTTI() const */
int _ZNK2MK7CObject7GetRTTIEv(void);

/* Symbol: _ZN2MK28CCLEnqueueMarkerWithWaitList4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLEnqueueMarkerWithWaitList::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK28CCLEnqueueMarkerWithWaitList4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK27CCLEnqueueCopyBufferToImage8ms_kRTTIE */
/* Demangled: MK::CCLEnqueueCopyBufferToImage::ms_kRTTI */
extern void* _ZN2MK27CCLEnqueueCopyBufferToImage8ms_kRTTIE;

/* Symbol: _ZN2MK15CCLReleaseEventD2Ev */
/* Demangled: MK::CCLReleaseEvent::~CCLReleaseEvent() */
int _ZN2MK15CCLReleaseEventD2Ev(void);

/* Symbol: _ZN2MK7CObject4SaveERNS_7CStreamE */
/* Demangled: MK::CObject::Save(MK::CStream&) */
int _ZN2MK7CObject4SaveERNS_7CStreamE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idmPiENS_9allocatorISA_EES9_EE */
/* Demangled: vtable for std::__1::__function::__func<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long, int*), std::__1::allocator<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long, int*)>, _cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long, int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idmPiENS_9allocatorISA_EES9_EE;

/* Symbol: _ZNSt3__114__split_bufferIPN2MK8CPointerINS1_4CJobEEENS_9allocatorIS5_EEE9push_backEOS5_ */
/* Demangled: std::__1::__split_buffer<MK::CPointer<MK::CJob>*, std::__1::allocator<MK::CPointer<MK::CJob>*> >::push_back(MK::CPointer<MK::CJob>*&&) */
int _ZNSt3__114__split_bufferIPN2MK8CPointerINS1_4CJobEEENS_9allocatorIS5_EEE9push_backEOS5_(void);

/* Symbol: CmdL_AttachclReleaseMemObject */
/* Demangled: CmdL_AttachclReleaseMemObject */
int CmdL_AttachclReleaseMemObject(void);

/* Symbol: _ZNK2MK20CCLEnqueueMemoryCopy15CopyConstructToEv */
/* Demangled: MK::CCLEnqueueMemoryCopy::CopyConstructTo() const */
int _ZNK2MK20CCLEnqueueMemoryCopy15CopyConstructToEv(void);

/* Symbol: MKProgram_AttachCLWaitForEvents */
/* Demangled: MKProgram_AttachCLWaitForEvents */
int MKProgram_AttachCLWaitForEvents(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFvP11_cl_contextPvENS_9allocatorIS6_EES5_E7__cloneEv */
/* Demangled: std::__1::__function::__func<void (*)(_cl_context*, void*), std::__1::allocator<void (*)(_cl_context*, void*)>, void (_cl_context*, void*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFvP11_cl_contextPvENS_9allocatorIS6_EES5_E7__cloneEv(void);

/* Symbol: _ZN2MK7CStream12SaveToBufferEPci */
/* Demangled: MK::CStream::SaveToBuffer(char*, int) */
int _ZN2MK7CStream12SaveToBufferEPci(void);

/* Symbol: _ZN2MK17clCreateSubBufferEP7_cl_memmjPKvPi */
/* Demangled: MK::clCreateSubBuffer(_cl_mem*, unsigned long, unsigned int, void const*, int*) */
int _ZN2MK17clCreateSubBufferEP7_cl_memmjPKvPi(void);

/* Symbol: _ZNK2MK18CCLRetainMemObject13GetMemoryUsedEv */
/* Demangled: MK::CCLRetainMemObject::GetMemoryUsed() const */
int _ZNK2MK18CCLRetainMemObject13GetMemoryUsedEv(void);

/* Symbol: _Z25clSetCommandQueuePropertyP17_cl_command_queuemjPm */
/* Demangled: clSetCommandQueueProperty(_cl_command_queue*, unsigned long, unsigned int, unsigned long*) */
int _Z25clSetCommandQueuePropertyP17_cl_command_queuemjPm(void);

/* Symbol: clSVMAlloc */
/* Demangled: clSVMAlloc */
int clSVMAlloc(void);

/* Symbol: _ZNSt3__110__function6__funcIPFijPP15_cl_platform_idPjENS_9allocatorIS7_EES6_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(unsigned int, _cl_platform_id**, unsigned int*), std::__1::allocator<int (*)(unsigned int, _cl_platform_id**, unsigned int*)>, int (unsigned int, _cl_platform_id**, unsigned int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFijPP15_cl_platform_idPjENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK8CProgram15RegisterFactoryEv */
/* Demangled: MK::CProgram::RegisterFactory() */
int _ZN2MK8CProgram15RegisterFactoryEv(void);

/* Symbol: _ZN2MK17clImportMemoryARMEP11_cl_contextmPKlPvmPi */
/* Demangled: MK::clImportMemoryARM(_cl_context*, unsigned long, long const*, void*, unsigned long, int*) */
int _ZN2MK17clImportMemoryARMEP11_cl_contextmPKlPvmPi(void);

/* Symbol: _ZN2MK27clEnqueueMarkerWithWaitListEP17_cl_command_queuejPKP9_cl_eventPS3_ */
/* Demangled: MK::clEnqueueMarkerWithWaitList(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK27clEnqueueMarkerWithWaitListEP17_cl_command_queuejPKP9_cl_eventPS3_(void);

/* Symbol: _ZN2MK22CCLReleaseCommandQueue20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLReleaseCommandQueue::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK22CCLReleaseCommandQueue20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: MKProgram_AttachCLEnqueueMarkerWithWaitList */
/* Demangled: MKProgram_AttachCLEnqueueMarkerWithWaitList */
int MKProgram_AttachCLEnqueueMarkerWithWaitList(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EclEOS3_OS5_OS6_OjOSA_OSB_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, void*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EclEOS3_OS5_OS6_OjOSA_OSB_(void);

/* Symbol: _ZN2MK15CCLBuildProgram15RegisterFactoryEv */
/* Demangled: MK::CCLBuildProgram::RegisterFactory() */
int _ZN2MK15CCLBuildProgram15RegisterFactoryEv(void);

/* Symbol: _ZNK2MK14CCLRetainEvent13GetMemoryUsedEv */
/* Demangled: MK::CCLRetainEvent::GetMemoryUsed() const */
int _ZNK2MK14CCLRetainEvent13GetMemoryUsedEv(void);

/* Symbol: _ZN2MK14CContextGlobal21GetProgramBuildOptionEP11_cl_program */
/* Demangled: MK::CContextGlobal::GetProgramBuildOption(_cl_program*) */
int _ZN2MK14CContextGlobal21GetProgramBuildOptionEP11_cl_program(void);

/* Symbol: _ZN2MK8CJsonLog3LogEPKcRKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: MK::CJsonLog::Log(char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN2MK8CJsonLog3LogEPKcRKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: MKProgram_CheckInputTensors */
/* Demangled: MKProgram_CheckInputTensors */
int MKProgram_CheckInputTensors(void);

/* Symbol: CmdL_GetEnable */
/* Demangled: CmdL_GetEnable */
int CmdL_GetEnable(void);

/* Symbol: CmdL_TreeNodeAttachHostPtr */
/* Demangled: CmdL_TreeNodeAttachHostPtr */
int CmdL_TreeNodeAttachHostPtr(void);

/* Symbol: _ZN2MK21CCLEnqueueWriteBufferC1Ev */
/* Demangled: MK::CCLEnqueueWriteBuffer::CCLEnqueueWriteBuffer() */
int _ZN2MK21CCLEnqueueWriteBufferC1Ev(void);

/* Symbol: _ZN2MK20CCLPrepareMemoryCopyC1ERKS0_ */
/* Demangled: MK::CCLPrepareMemoryCopy::CCLPrepareMemoryCopy(MK::CCLPrepareMemoryCopy const&) */
int _ZN2MK20CCLPrepareMemoryCopyC1ERKS0_(void);

/* Symbol: _ZNK2MK16CCLReleaseKernel11GetDiskUsedEv */
/* Demangled: MK::CCLReleaseKernel::GetDiskUsed() const */
int _ZNK2MK16CCLReleaseKernel11GetDiskUsedEv(void);

/* Symbol: _ZN2MK10CCLSVMFree8ms_kRTTIE */
/* Demangled: MK::CCLSVMFree::ms_kRTTI */
extern void* _ZN2MK10CCLSVMFree8ms_kRTTIE;

/* Symbol: _ZNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idPKmPiENS_9allocatorISC_EESB_EclEOS5_OS7_OS9_OSA_ */
/* Demangled: std::__1::__function::__func<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long const*, int*), std::__1::allocator<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long const*, int*)>, _cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long const*, int*)>::operator()(_cl_context*&&, _cl_device_id*&&, unsigned long const*&&, int*&&) */
int _ZNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idPKmPiENS_9allocatorISC_EESB_EclEOS5_OS7_OS9_OSA_(void);

/* Symbol: _ZN2MK16clGetSamplerInfoEP11_cl_samplerjmPvPm */
/* Demangled: MK::clGetSamplerInfo(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*) */
int _ZN2MK16clGetSamplerInfoEP11_cl_samplerjmPvPm(void);

/* Symbol: _ZN2MK21CCLCreateCommandQueueC1Ev */
/* Demangled: MK::CCLCreateCommandQueue::CCLCreateCommandQueue() */
int _ZN2MK21CCLCreateCommandQueueC1Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvPKmS9_jPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvPKmS9_jPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_EclEOS3_OS5_OjOS9_OSA_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_kernel*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_EclEOS3_OS5_OjOS9_OSA_(void);

/* Symbol: _ZN2MK13clCreateImageEP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPi */
/* Demangled: MK::clCreateImage(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*) */
int _ZN2MK13clCreateImageEP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPi(void);

/* Symbol: clFinish */
/* Demangled: clFinish */
int clFinish(void);

/* Symbol: _ZNK2MK16CCLCreateContext15CopyConstructToEv */
/* Demangled: MK::CCLCreateContext::CopyConstructTo() const */
int _ZNK2MK16CCLCreateContext15CopyConstructToEv(void);

/* Symbol: _ZNK2MK17CCLReleaseContext3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLReleaseContext::Log(MK::CJsonLog&) const */
int _ZNK2MK17CCLReleaseContext3LogERNS_8CJsonLogE(void);

/* Symbol: _ZNK2MK18CCLRetainMemObject15CopyConstructToEv */
/* Demangled: MK::CCLRetainMemObject::CopyConstructTo() const */
int _ZNK2MK18CCLRetainMemObject15CopyConstructToEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP10_cl_kerneljmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)>::operator()(_cl_kernel*&&, unsigned int&&, unsigned long&&, void*&&, unsigned long*&&) */
int _ZNSt3__110__function6__funcIPFiP10_cl_kerneljmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_samplerENS_9allocatorIS5_EES4_EclEOS3_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_sampler*), std::__1::allocator<int (*)(_cl_sampler*)>, int (_cl_sampler*)>::operator()(_cl_sampler*&&) */
int _ZNSt3__110__function6__funcIPFiP11_cl_samplerENS_9allocatorIS5_EES4_EclEOS3_(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextPKmPiENS_9allocatorISA_EES9_EE */
/* Demangled: vtable for std::__1::__function::__func<_cl_sampler* (*)(_cl_context*, unsigned long const*, int*), std::__1::allocator<_cl_sampler* (*)(_cl_context*, unsigned long const*, int*)>, _cl_sampler* (_cl_context*, unsigned long const*, int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextPKmPiENS_9allocatorISA_EES9_EE;

/* Symbol: clReleaseKernel */
/* Demangled: clReleaseKernel */
int clReleaseKernel(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP15_cl_platform_idjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP15_cl_platform_idjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void);

/* Symbol: _ZN2MK25CCLCreateKernelsInProgramC1Ev */
/* Demangled: MK::CCLCreateKernelsInProgram::CCLCreateKernelsInProgram() */
int _ZN2MK25CCLCreateKernelsInProgramC1Ev(void);

/* Symbol: _ZN2MK21CCLEnqueueWriteBufferD0Ev */
/* Demangled: MK::CCLEnqueueWriteBuffer::~CCLEnqueueWriteBuffer() */
int _ZN2MK21CCLEnqueueWriteBufferD0Ev(void);

/* Symbol: _ZN2MK17CCLReleaseContext3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLReleaseContext::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK17CCLReleaseContext3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP13_cl_device_idjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP13_cl_device_idjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv(void);

/* Symbol: _ZN2MK17clCreateUserEventEP11_cl_contextPi */
/* Demangled: MK::clCreateUserEvent(_cl_context*, int*) */
int _ZN2MK17clCreateUserEventEP11_cl_contextPi(void);

/* Symbol: _ZNSt3__110__function6__funcINS_8functionIFimPvEEENS_9allocatorIS5_EEFijS3_EEclEOjOS3_ */
/* Demangled: std::__1::__function::__func<std::__1::function<int (unsigned long, void*)>, std::__1::allocator<std::__1::function<int (unsigned long, void*)> >, int (unsigned int, void*)>::operator()(unsigned int&&, void*&&) */
int _ZNSt3__110__function6__funcINS_8functionIFimPvEEENS_9allocatorIS5_EEFijS3_EEclEOjOS3_(void);

/* Symbol: _ZN2MK21CCLCreateCommandQueueD0Ev */
/* Demangled: MK::CCLCreateCommandQueue::~CCLCreateCommandQueue() */
int _ZN2MK21CCLCreateCommandQueueD0Ev(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithSource4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLCreateProgramWithSource::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK26CCLCreateProgramWithSource4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK8CCLFlushC2Ev */
/* Demangled: MK::CCLFlush::CCLFlush() */
int _ZN2MK8CCLFlushC2Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP15_cl_platform_idENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*), std::__1::allocator<int (*)(_cl_platform_id*)>, int (_cl_platform_id*)>::__clone(std::__1::__function::__base<int (_cl_platform_id*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP15_cl_platform_idENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_contextENS_9allocatorIS5_EES4_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_context*), std::__1::allocator<int (*)(_cl_context*)>, int (_cl_context*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP11_cl_contextENS_9allocatorIS5_EES4_E7destroyEv(void);

/* Symbol: _ZN2MK8CVersion6LENGTHE */
/* Demangled: MK::CVersion::LENGTH */
extern void* _ZN2MK8CVersion6LENGTHE;

/* Symbol: clEnqueueWaitForEvents */
/* Demangled: clEnqueueWaitForEvents */
int clEnqueueWaitForEvents(void);

/* Symbol: clSetKernelArg */
/* Demangled: clSetKernelArg */
int clSetKernelArg(void);

/* Symbol: _ZN2MK15CCLSetKernelArg8ms_kRTTIE */
/* Demangled: MK::CCLSetKernelArg::ms_kRTTI */
extern void* _ZN2MK15CCLSetKernelArg8ms_kRTTIE;

/* Symbol: _ZN2MK13CDummyCommandC2ERKS0_ */
/* Demangled: MK::CDummyCommand::CDummyCommand(MK::CDummyCommand const&) */
int _ZN2MK13CDummyCommandC2ERKS0_(void);

/* Symbol: _ZN2MK14COutputTensors15RegisterFactoryEv */
/* Demangled: MK::COutputTensors::RegisterFactory() */
int _ZN2MK14COutputTensors15RegisterFactoryEv(void);

/* Symbol: _ZN2MK18clEnqueueFillImageEP17_cl_command_queueP7_cl_memPKvPKmS7_jPKP9_cl_eventPS9_ */
/* Demangled: MK::clEnqueueFillImage(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK18clEnqueueFillImageEP17_cl_command_queueP7_cl_memPKvPKmS7_jPKP9_cl_eventPS9_(void);

/* Symbol: _ZNK2MK27CCLEnqueueCopyBufferToImage13GetMemoryUsedEv */
/* Demangled: MK::CCLEnqueueCopyBufferToImage::GetMemoryUsed() const */
int _ZNK2MK27CCLEnqueueCopyBufferToImage13GetMemoryUsedEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mPKmS7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_SJ_OmOS7_SL_OjOSB_OSC_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, _cl_mem*&&, unsigned long&&, unsigned long const*&&, unsigned long const*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mPKmS7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_SJ_OmOS7_SL_OjOSB_OSC_(void);

/* Symbol: CmdL_AttachclRetainDevice */
/* Demangled: CmdL_AttachclRetainDevice */
int CmdL_AttachclRetainDevice(void);

/* Symbol: _ZN2MK25CCLCreateKernelsInProgramD0Ev */
/* Demangled: MK::CCLCreateKernelsInProgram::~CCLCreateKernelsInProgram() */
int _ZN2MK25CCLCreateKernelsInProgramD0Ev(void);

/* Symbol: _ZNK2MK11CMemoryCopy13GetMemoryUsedEv */
/* Demangled: MK::CMemoryCopy::GetMemoryUsed() const */
int _ZNK2MK11CMemoryCopy13GetMemoryUsedEv(void);

/* Symbol: _ZN2MK15clCreateImage2DEP11_cl_contextmPK16_cl_image_formatmmmPvPi */
/* Demangled: MK::clCreateImage2D(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*) */
int _ZN2MK15clCreateImage2DEP11_cl_contextmPK16_cl_image_formatmmmPvPi(void);

/* Symbol: _ZNK2MK15CCLCreateKernel3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLCreateKernel::Log(MK::CJsonLog&) const */
int _ZNK2MK15CCLCreateKernel3LogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK8CCLFlushD1Ev */
/* Demangled: MK::CCLFlush::~CCLFlush() */
int _ZN2MK8CCLFlushD1Ev(void);

/* Symbol: _ZN2MK15CCLReleaseEvent20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLReleaseEvent::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK15CCLReleaseEvent20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK16CCLWaitForEventsC2Ev */
/* Demangled: MK::CCLWaitForEvents::CCLWaitForEvents() */
int _ZN2MK16CCLWaitForEventsC2Ev(void);

/* Symbol: _ZNK2MK7CObject15CopyConstructToEv */
/* Demangled: MK::CObject::CopyConstructTo() const */
int _ZNK2MK7CObject15CopyConstructToEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvPmENS_9allocatorIS7_EES6_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvPmENS_9allocatorIS7_EES6_E7destroyEv(void);

/* Symbol: CmdL_GetBufferSize */
/* Demangled: CmdL_GetBufferSize */
int CmdL_GetBufferSize(void);

/* Symbol: _ZN2MK8CJsonLog3LogEPKcRKNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE */
/* Demangled: MK::CJsonLog::Log(char const*, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN2MK8CJsonLog3LogEPKcRKNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE(void);

/* Symbol: _ZN2MK17clRetainMemObjectEP7_cl_mem */
/* Demangled: MK::clRetainMemObject(_cl_mem*) */
int _ZN2MK17clRetainMemObjectEP7_cl_mem(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRA64_cEEEvDpOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__emplace_back_slow_path<char (&) [64]>(char (&) [64]) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRA64_cEEEvDpOT_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventPS5_ENS_9allocatorISA_EES9_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventPS5_ENS_9allocatorISA_EES9_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFijPP15_cl_platform_idPjENS_9allocatorIS7_EES6_EclEOjOS4_OS5_ */
/* Demangled: std::__1::__function::__func<int (*)(unsigned int, _cl_platform_id**, unsigned int*), std::__1::allocator<int (*)(unsigned int, _cl_platform_id**, unsigned int*)>, int (unsigned int, _cl_platform_id**, unsigned int*)>::operator()(unsigned int&&, _cl_platform_id**&&, unsigned int*&&) */
int _ZNSt3__110__function6__funcIPFijPP15_cl_platform_idPjENS_9allocatorIS7_EES6_EclEOjOS4_OS5_(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFviPvENS_9allocatorIS4_EES3_EE */
/* Demangled: vtable for std::__1::__function::__func<void (*)(int, void*), std::__1::allocator<void (*)(int, void*)>, void (int, void*)> */
extern void* _ZTVNSt3__110__function6__funcIPFviPvENS_9allocatorIS4_EES3_EE;

/* Symbol: _ZN2MK16clReleaseProgramEP11_cl_program */
/* Demangled: MK::clReleaseProgram(_cl_program*) */
int _ZN2MK16clReleaseProgramEP11_cl_program(void);

/* Symbol: _Z21handleFlushFinishRealP17_cl_command_queuei */
/* Demangled: handleFlushFinishReal(_cl_command_queue*, int) */
int _Z21handleFlushFinishRealP17_cl_command_queuei(void);

/* Symbol: _ZNSt3__114__split_bufferIPbRNS_9allocatorIS1_EEE9push_backEOS1_ */
/* Demangled: std::__1::__split_buffer<bool*, std::__1::allocator<bool*>&>::push_back(bool*&&) */
int _ZNSt3__114__split_bufferIPbRNS_9allocatorIS1_EEE9push_backEOS1_(void);

/* Symbol: CmdL_SaveToFile */
/* Demangled: CmdL_SaveToFile */
int CmdL_SaveToFile(void);

/* Symbol: _ZN2MK28CCLEnqueueMarkerWithWaitList4SaveERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueMarkerWithWaitList::Save(MK::CStream&) */
int _ZN2MK28CCLEnqueueMarkerWithWaitList4SaveERNS_7CStreamE(void);

/* Symbol: _ZN2MK20CCLEnqueueMemoryCopy6RecordEP17_cl_command_queueP10_cl_kerneljP7_cl_memS6_jPjS7_S7_ */
/* Demangled: MK::CCLEnqueueMemoryCopy::Record(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_mem*, _cl_mem*, unsigned int, unsigned int*, unsigned int*, unsigned int*) */
int _ZN2MK20CCLEnqueueMemoryCopy6RecordEP17_cl_command_queueP10_cl_kerneljP7_cl_memS6_jPjS7_S7_(void);

/* Symbol: _ZN2MK16CCLWaitForEventsD1Ev */
/* Demangled: MK::CCLWaitForEvents::~CCLWaitForEvents() */
int _ZN2MK16CCLWaitForEventsD1Ev(void);

/* Symbol: _ZN2MK12CDynamicData20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CDynamicData::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK12CDynamicData20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZNK2MK11CStaticData15CopyConstructToEv */
/* Demangled: MK::CStaticData::CopyConstructTo() const */
int _ZNK2MK11CStaticData15CopyConstructToEv(void);

/* Symbol: _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIlEEvOT_ */
/* Demangled: void std::__1::vector<long, std::__1::allocator<long> >::__push_back_slow_path<long>(long&&) */
int _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIlEEvOT_(void);

/* Symbol: _ZN2MK15CCLBuildProgramC2ERKS0_ */
/* Demangled: MK::CCLBuildProgram::CCLBuildProgram(MK::CCLBuildProgram const&) */
int _ZN2MK15CCLBuildProgramC2ERKS0_(void);

/* Symbol: _ZN2MK19CCLEnqueueMapBufferD2Ev */
/* Demangled: MK::CCLEnqueueMapBuffer::~CCLEnqueueMapBuffer() */
int _ZN2MK19CCLEnqueueMapBufferD2Ev(void);

/* Symbol: _ZN2MK22CCLReleaseCommandQueue8ms_kRTTIE */
/* Demangled: MK::CCLReleaseCommandQueue::ms_kRTTI */
extern void* _ZN2MK22CCLReleaseCommandQueue8ms_kRTTIE;

/* Symbol: _ZTVNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPKlPvmPiENS_9allocatorISB_EESA_EE */
/* Demangled: vtable for std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, long const*, void*, unsigned long, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, long const*, void*, unsigned long, int*)>, _cl_mem* (_cl_context*, unsigned long, long const*, void*, unsigned long, int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPKlPvmPiENS_9allocatorISB_EESA_EE;

/* Symbol: clSetKernelArgSVMPointer */
/* Demangled: clSetKernelArgSVMPointer */
int clSetKernelArgSVMPointer(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIP10_cl_kernelNS_3mapIiP7_cl_memNS_4lessIiEENS_9allocatorINS_4pairIKiS6_EEEEEEEENS_19__map_value_compareIS3_SF_NS7_IS3_EELb1EEENS9_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<_cl_kernel*, std::__1::map<int, _cl_mem*, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, _cl_mem*> > > >, std::__1::__map_value_compare<_cl_kernel*, std::__1::__value_type<_cl_kernel*, std::__1::map<int, _cl_mem*, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, _cl_mem*> > > >, std::__1::less<_cl_kernel*>, true>, std::__1::allocator<std::__1::__value_type<_cl_kernel*, std::__1::map<int, _cl_mem*, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, _cl_mem*> > > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<_cl_kernel*, std::__1::map<int, _cl_mem*, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, _cl_mem*> > > >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIP10_cl_kernelNS_3mapIiP7_cl_memNS_4lessIiEENS_9allocatorINS_4pairIKiS6_EEEEEEEENS_19__map_value_compareIS3_SF_NS7_IS3_EELb1EEENS9_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP10_cl_kernelENS_9allocatorIS5_EES4_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*), std::__1::allocator<int (*)(_cl_kernel*)>, int (_cl_kernel*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP10_cl_kernelENS_9allocatorIS5_EES4_E7__cloneEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP9_cl_eventiPFvS3_iPvES4_ENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, int, void (*)(_cl_event*, int, void*), void*), std::__1::allocator<int (*)(_cl_event*, int, void (*)(_cl_event*, int, void*), void*)>, int (_cl_event*, int, void (*)(_cl_event*, int, void*), void*)>::__clone(std::__1::__function::__base<int (_cl_event*, int, void (*)(_cl_event*, int, void*), void*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP9_cl_eventiPFvS3_iPvES4_ENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP13_cl_device_idPKljPS3_PjENS_9allocatorIS9_EES8_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*), std::__1::allocator<int (*)(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)>, int (_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP13_cl_device_idPKljPS3_PjENS_9allocatorIS9_EES8_E7destroyEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvmjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_EclEOS3_OjOmOS4_SH_SG_OS8_OS9_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, unsigned int&&, unsigned long&&, void*&&, unsigned long&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvmjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_EclEOS3_OjOmOS4_SH_SG_OS8_OS9_(void);

/* Symbol: _ZN2MK22CCLReleaseCommandQueue3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLReleaseCommandQueue::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK22CCLReleaseCommandQueue3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZN2MK14CCLRetainEvent8ms_kRTTIE */
/* Demangled: MK::CCLRetainEvent::ms_kRTTI */
extern void* _ZN2MK14CCLRetainEvent8ms_kRTTIE;

/* Symbol: _ZN2MK15CCLSetKernelArg7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLSetKernelArg::Factory(MK::CStream&) */
int _ZN2MK15CCLSetKernelArg7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK7CObjectC2ERKS0_ */
/* Demangled: MK::CObject::CObject(MK::CObject const&) */
int _ZN2MK7CObjectC2ERKS0_(void);

/* Symbol: clCreateProgramWithSource */
/* Demangled: clCreateProgramWithSource */
int clCreateProgramWithSource(void);

/* Symbol: clSetEventCallback */
/* Demangled: clSetEventCallback */
int clSetEventCallback(void);

/* Symbol: _ZNK2MK15CCLImportMemory3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLImportMemory::Log(MK::CJsonLog&) const */
int _ZNK2MK15CCLImportMemory3LogERNS_8CJsonLogE(void);

/* Symbol: MKProgram_SetOutputHostPtr */
/* Demangled: MKProgram_SetOutputHostPtr */
int MKProgram_SetOutputHostPtr(void);

/* Symbol: clGetMemObjectInfo */
/* Demangled: clGetMemObjectInfo */
int clGetMemObjectInfo(void);

/* Symbol: _ZN2MK16CCLCreateContext15RegisterFactoryEv */
/* Demangled: MK::CCLCreateContext::RegisterFactory() */
int _ZN2MK16CCLCreateContext15RegisterFactoryEv(void);

/* Symbol: _ZNK2MK19CCLEnqueueMapBuffer13GetMemoryUsedEv */
/* Demangled: MK::CCLEnqueueMapBuffer::GetMemoryUsed() const */
int _ZNK2MK19CCLEnqueueMapBuffer13GetMemoryUsedEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP7_cl_memENS_9allocatorIS5_EES4_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_mem*), std::__1::allocator<int (*)(_cl_mem*)>, int (_cl_mem*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP7_cl_memENS_9allocatorIS5_EES4_EE;

/* Symbol: CmdL_AttachclCompileProgram */
/* Demangled: CmdL_AttachclCompileProgram */
int CmdL_AttachclCompileProgram(void);

/* Symbol: _ZN2MK11CCLSVMAlloc15RegisterFactoryEv */
/* Demangled: MK::CCLSVMAlloc::RegisterFactory() */
int _ZN2MK11CCLSVMAlloc15RegisterFactoryEv(void);

/* Symbol: _ZN2MK8CProgram13ClearCommandsEv */
/* Demangled: MK::CProgram::ClearCommands() */
int _ZN2MK8CProgram13ClearCommandsEv(void);

/* Symbol: _ZN2MK14CContextGlobal21RecordKernelMemObjectEP10_cl_kerneliP7_cl_mem */
/* Demangled: MK::CContextGlobal::RecordKernelMemObject(_cl_kernel*, int, _cl_mem*) */
int _ZN2MK14CContextGlobal21RecordKernelMemObjectEP10_cl_kerneliP7_cl_mem(void);

/* Symbol: _ZTVN2MK8CCommandE */
/* Demangled: vtable for MK::CCommand */
extern void* _ZTVN2MK8CCommandE;

/* Symbol: CmdL_AttachclEnqueueMapBuffer */
/* Demangled: CmdL_AttachclEnqueueMapBuffer */
int CmdL_AttachclEnqueueMapBuffer(void);

/* Symbol: clEnqueueSVMMap */
/* Demangled: clEnqueueSVMMap */
int clEnqueueSVMMap(void);

/* Symbol: clRetainContext */
/* Demangled: clRetainContext */
int clRetainContext(void);

/* Symbol: _ZN2MK13CCLProfileJobC1ERKS0_ */
/* Demangled: MK::CCLProfileJob::CCLProfileJob(MK::CCLProfileJob const&) */
int _ZN2MK13CCLProfileJobC1ERKS0_(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: CmdL_AttachclEnqueueUnmapMemObject */
/* Demangled: CmdL_AttachclEnqueueUnmapMemObject */
int CmdL_AttachclEnqueueUnmapMemObject(void);

/* Symbol: _ZN2MK8CCommand4SaveERNS_7CStreamE */
/* Demangled: MK::CCommand::Save(MK::CStream&) */
int _ZN2MK8CCommand4SaveERNS_7CStreamE(void);

/* Symbol: _ZNK2MK8CCLFlush3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLFlush::Log(MK::CJsonLog&) const */
int _ZNK2MK8CCLFlush3LogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK15CCLReleaseEventC2Ev */
/* Demangled: MK::CCLReleaseEvent::CCLReleaseEvent() */
int _ZN2MK15CCLReleaseEventC2Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP11_cl_contextPKlmPFvPKcPKvmPvESA_PiENS_9allocatorISF_EESE_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<_cl_context* (*)(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*), std::__1::allocator<_cl_context* (*)(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>, _cl_context* (long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFP11_cl_contextPKlmPFvPKcPKvmPvESA_PiENS_9allocatorISF_EESE_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK14COutputTensorsC1ERKS0_ */
/* Demangled: MK::COutputTensors::COutputTensors(MK::COutputTensors const&) */
int _ZN2MK14COutputTensorsC1ERKS0_(void);

/* Symbol: _ZN2MK22CCLReleaseCommandQueue4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLReleaseCommandQueue::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK22CCLReleaseCommandQueue4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK17CCLReleaseProgramC2ERKS0_ */
/* Demangled: MK::CCLReleaseProgram::CCLReleaseProgram(MK::CCLReleaseProgram const&) */
int _ZN2MK17CCLReleaseProgramC2ERKS0_(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPPKcPKmPiENS_9allocatorISD_EESC_E7__cloneEPNS0_6__baseISC_EE */
/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, char const**, unsigned long const*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, char const**, unsigned long const*, int*)>, _cl_program* (_cl_context*, unsigned int, char const**, unsigned long const*, int*)>::__clone(std::__1::__function::__base<_cl_program* (_cl_context*, unsigned int, char const**, unsigned long const*, int*)>*) const */
int _ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPPKcPKmPiENS_9allocatorISD_EESC_E7__cloneEPNS0_6__baseISC_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP15_cl_platform_idENS_9allocatorIS5_EES4_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*), std::__1::allocator<int (*)(_cl_platform_id*)>, int (_cl_platform_id*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP15_cl_platform_idENS_9allocatorIS5_EES4_E7destroyEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN2MK8CPointerINS1_4CJobEEENS_9allocatorIS5_EEE10push_frontEOS5_ */
/* Demangled: std::__1::__split_buffer<MK::CPointer<MK::CJob>*, std::__1::allocator<MK::CPointer<MK::CJob>*> >::push_front(MK::CPointer<MK::CJob>*&&) */
int _ZNSt3__114__split_bufferIPN2MK8CPointerINS1_4CJobEEENS_9allocatorIS5_EEE10push_frontEOS5_(void);

/* Symbol: clRetainSampler */
/* Demangled: clRetainSampler */
int clRetainSampler(void);

/* Symbol: _ZNSt3__16vectorIP13_cl_device_idNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<_cl_device_id*, std::__1::allocator<_cl_device_id*> >::__push_back_slow_path<_cl_device_id* const&>(_cl_device_id* const&) */
int _ZNSt3__16vectorIP13_cl_device_idNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZN2MK19CCLReleaseMemObjectC1ERKS0_ */
/* Demangled: MK::CCLReleaseMemObject::CCLReleaseMemObject(MK::CCLReleaseMemObject const&) */
int _ZN2MK19CCLReleaseMemObjectC1ERKS0_(void);

/* Symbol: _ZN2MK16CCLEnqueueSVMMapC1ERKS0_ */
/* Demangled: MK::CCLEnqueueSVMMap::CCLEnqueueSVMMap(MK::CCLEnqueueSVMMap const&) */
int _ZN2MK16CCLEnqueueSVMMapC1ERKS0_(void);

/* Symbol: MKProgram_AttachCLFinish */
/* Demangled: MKProgram_AttachCLFinish */
int MKProgram_AttachCLFinish(void);

/* Symbol: _ZN2MK11CStaticData8ms_kRTTIE */
/* Demangled: MK::CStaticData::ms_kRTTI */
extern void* _ZN2MK11CStaticData8ms_kRTTIE;

/* Symbol: _ZN2MK8CProgram15PickCommandFromEPS0_PKcPKNS_5CRTTIEb */
/* Demangled: MK::CProgram::PickCommandFrom(MK::CProgram*, char const*, MK::CRTTI const*, bool) */
int _ZN2MK8CProgram15PickCommandFromEPS0_PKcPKNS_5CRTTIEb(void);

/* Symbol: _ZN2MK11CStaticData20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CStaticData::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK11CStaticData20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: CmdL_TreeNodeGetTop */
/* Demangled: CmdL_TreeNodeGetTop */
int CmdL_TreeNodeGetTop(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithSource8ms_kRTTIE */
/* Demangled: MK::CCLCreateProgramWithSource::ms_kRTTI */
extern void* _ZN2MK26CCLCreateProgramWithSource8ms_kRTTIE;

/* Symbol: _ZN2MK15CCLReleaseEventD1Ev */
/* Demangled: MK::CCLReleaseEvent::~CCLReleaseEvent() */
int _ZN2MK15CCLReleaseEventD1Ev(void);

/* Symbol: _ZN2MK15CCLRetainKernel4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLRetainKernel::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK15CCLRetainKernel4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK18CCLEnqueueSVMUnmap3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLEnqueueSVMUnmap::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK18CCLEnqueueSVMUnmap3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP7_cl_memPFvS3_PvES4_ENS_9allocatorIS8_EES7_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*, void (*)(_cl_mem*, void*), void*), std::__1::allocator<int (*)(_cl_mem*, void (*)(_cl_mem*, void*), void*)>, int (_cl_mem*, void (*)(_cl_mem*, void*), void*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP7_cl_memPFvS3_PvES4_ENS_9allocatorIS8_EES7_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_samplerjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)>::operator()(_cl_sampler*&&, unsigned int&&, unsigned long&&, void*&&, unsigned long*&&) */
int _ZNSt3__110__function6__funcIPFiP11_cl_samplerjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK5CBool4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CBool::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK5CBool4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: MKProgramStack_Pop */
/* Demangled: MKProgramStack_Pop */
int MKProgramStack_Pop(void);

/* Symbol: _ZN2MK8CProgram4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CProgram::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK8CProgram4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK14clSetKernelArgEP10_cl_kerneljmPKv */
/* Demangled: MK::clSetKernelArg(_cl_kernel*, unsigned int, unsigned long, void const*) */
int _ZN2MK14clSetKernelArgEP10_cl_kerneljmPKv(void);

/* Symbol: _ZN2MK9CCLFinishC2ERKS0_ */
/* Demangled: MK::CCLFinish::CCLFinish(MK::CCLFinish const&) */
int _ZN2MK9CCLFinishC2ERKS0_(void);

/* Symbol: _ZN2MK16CCLRetainProgram20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLRetainProgram::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK16CCLRetainProgram20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK21CCLRetainCommandQueue4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLRetainCommandQueue::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK21CCLRetainCommandQueue4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK16CCLReleaseKernel3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLReleaseKernel::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK16CCLReleaseKernel3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZN2MK17CCLReleaseProgramD2Ev */
/* Demangled: MK::CCLReleaseProgram::~CCLReleaseProgram() */
int _ZN2MK17CCLReleaseProgramD2Ev(void);

/* Symbol: MKProgram_AttachCLRetainEvent */
/* Demangled: MKProgram_AttachCLRetainEvent */
int MKProgram_AttachCLRetainEvent(void);

/* Symbol: _ZN2MK13CDummyCommand4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CDummyCommand::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK13CDummyCommand4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP11_cl_contextENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_context*), std::__1::allocator<int (*)(_cl_context*)>, int (_cl_context*)>::__clone(std::__1::__function::__base<int (_cl_context*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP11_cl_contextENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcjPKS3_PFvS3_PvESE_PiENS_9allocatorISJ_EESI_E7destroyEv */
/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcjPKS3_PFvS3_PvESE_PiENS_9allocatorISJ_EESI_E7destroyEv(void);

/* Symbol: _ZN2MK17clEnqueueMapImageEP17_cl_command_queueP7_cl_memjmPKmS5_PmS6_jPKP9_cl_eventPS8_Pi */
/* Demangled: MK::clEnqueueMapImage(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*) */
int _ZN2MK17clEnqueueMapImageEP17_cl_command_queueP7_cl_memjmPKmS5_PmS6_jPKP9_cl_eventPS8_Pi(void);

/* Symbol: clCreateImage2D */
/* Demangled: clCreateImage2D */
int clCreateImage2D(void);

/* Symbol: clEnqueueSVMUnmap */
/* Demangled: clEnqueueSVMUnmap */
int clEnqueueSVMUnmap(void);

/* Symbol: _ZN2MK10CCLSVMFree6RecordEP11_cl_contextPv */
/* Demangled: MK::CCLSVMFree::Record(_cl_context*, void*) */
int _ZN2MK10CCLSVMFree6RecordEP11_cl_contextPv(void);

/* Symbol: _ZNK2MK24CCLEnqueueUnmapMemObject13GetMemoryUsedEv */
/* Demangled: MK::CCLEnqueueUnmapMemObject::GetMemoryUsed() const */
int _ZNK2MK24CCLEnqueueUnmapMemObject13GetMemoryUsedEv(void);

/* Symbol: _ZNK2MK16CCLRetainProgram15CopyConstructToEv */
/* Demangled: MK::CCLRetainProgram::CopyConstructTo() const */
int _ZNK2MK16CCLRetainProgram15CopyConstructToEv(void);

/* Symbol: MKProgram_AttachCLRetainCommandQueue */
/* Demangled: MKProgram_AttachCLRetainCommandQueue */
int MKProgram_AttachCLRetainCommandQueue(void);

/* Symbol: CmdL_AttachclBuildProgram */
/* Demangled: CmdL_AttachclBuildProgram */
int CmdL_AttachclBuildProgram(void);

/* Symbol: clFlush */
/* Demangled: clFlush */
int clFlush(void);

/* Symbol: _ZN2MK16CCLRetainContext3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLRetainContext::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK16CCLRetainContext3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_mmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_mmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFvP11_cl_contextPvENS_9allocatorIS6_EES5_EE */
/* Demangled: vtable for std::__1::__function::__func<void (*)(_cl_context*, void*), std::__1::allocator<void (*)(_cl_context*, void*)>, void (_cl_context*, void*)> */
extern void* _ZTVNSt3__110__function6__funcIPFvP11_cl_contextPvENS_9allocatorIS6_EES5_EE;

/* Symbol: _ZNK2MK8CVersion7IsValidEv */
/* Demangled: MK::CVersion::IsValid() const */
int _ZNK2MK8CVersion7IsValidEv(void);

/* Symbol: CmdL_SetEnable */
/* Demangled: CmdL_SetEnable */
int CmdL_SetEnable(void);

/* Symbol: _ZN2MK25CCLCreateKernelsInProgram4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLCreateKernelsInProgram::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK25CCLCreateKernelsInProgram4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK21CCLEnqueueWriteBuffer20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueWriteBuffer::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK21CCLEnqueueWriteBuffer20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv(void);

/* Symbol: MKProgram_GetDummyCommand */
/* Demangled: MKProgram_GetDummyCommand */
int MKProgram_GetDummyCommand(void);

/* Symbol: _ZN2MK7CObject23GetAllObjectsByNameRTTIERNSt3__16vectorIPS0_NS1_9allocatorIS3_EEEEPKcPKNS_5CRTTIEb */
/* Demangled: MK::CObject::GetAllObjectsByNameRTTI(std::__1::vector<MK::CObject*, std::__1::allocator<MK::CObject*> >&, char const*, MK::CRTTI const*, bool) */
int _ZN2MK7CObject23GetAllObjectsByNameRTTIERNSt3__16vectorIPS0_NS1_9allocatorIS3_EEEEPKcPKNS_5CRTTIEb(void);

/* Symbol: _ZNK2MK21CCLCreateCommandQueue3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLCreateCommandQueue::Log(MK::CJsonLog&) const */
int _ZNK2MK21CCLCreateCommandQueue3LogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK9CCLFinish15RegisterFactoryEv */
/* Demangled: MK::CCLFinish::RegisterFactory() */
int _ZN2MK9CCLFinish15RegisterFactoryEv(void);

/* Symbol: MKProgram_AttachCLEnqueueReadBuffer */
/* Demangled: MKProgram_AttachCLEnqueueReadBuffer */
int MKProgram_AttachCLEnqueueReadBuffer(void);

/* Symbol: _ZN2MK15CProfileDataJobC2ERKS0_ */
/* Demangled: MK::CProfileDataJob::CProfileDataJob(MK::CProfileDataJob const&) */
int _ZN2MK15CProfileDataJobC2ERKS0_(void);

/* Symbol: _ZNK2MK21CCLEnqueueWriteBuffer3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLEnqueueWriteBuffer::Log(MK::CJsonLog&) const */
int _ZNK2MK21CCLEnqueueWriteBuffer3LogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK20CCLEnqueueMemoryCopyD2Ev */
/* Demangled: MK::CCLEnqueueMemoryCopy::~CCLEnqueueMemoryCopy() */
int _ZN2MK20CCLEnqueueMemoryCopyD2Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv(void);

/* Symbol: CmdL_AttachclReleaseContext */
/* Demangled: CmdL_AttachclReleaseContext */
int CmdL_AttachclReleaseContext(void);

/* Symbol: CmdL_RemoveTreeNode */
/* Demangled: CmdL_RemoveTreeNode */
int CmdL_RemoveTreeNode(void);

/* Symbol: _ZNSt3__110__function6__funcINS_8functionIFimPvEEENS_9allocatorIS5_EEFijS3_EE18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<std::__1::function<int (unsigned long, void*)>, std::__1::allocator<std::__1::function<int (unsigned long, void*)> >, int (unsigned int, void*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcINS_8functionIFimPvEEENS_9allocatorIS5_EEFijS3_EE18destroy_deallocateEv(void);

/* Symbol: _ZNK2MK20CCLPrepareMemoryCopy15CopyConstructToEv */
/* Demangled: MK::CCLPrepareMemoryCopy::CopyConstructTo() const */
int _ZNK2MK20CCLPrepareMemoryCopy15CopyConstructToEv(void);

/* Symbol: _ZN2MK15CCLRetainKernel15RegisterFactoryEv */
/* Demangled: MK::CCLRetainKernel::RegisterFactory() */
int _ZN2MK15CCLRetainKernel15RegisterFactoryEv(void);

/* Symbol: _ZN2MK9clSVMFreeEP11_cl_contextPv */
/* Demangled: MK::clSVMFree(_cl_context*, void*) */
int _ZN2MK9clSVMFreeEP11_cl_contextPv(void);

/* Symbol: clSetUserEventStatus */
/* Demangled: clSetUserEventStatus */
int clSetUserEventStatus(void);

/* Symbol: _ZN2MK8CCLFlushC1Ev */
/* Demangled: MK::CCLFlush::CCLFlush() */
int _ZN2MK8CCLFlushC1Ev(void);

/* Symbol: _ZN2MK16CCLCreateContext3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLCreateContext::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK16CCLCreateContext3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZNK2MK21CCLRetainCommandQueue3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLRetainCommandQueue::Log(MK::CJsonLog&) const */
int _ZNK2MK21CCLRetainCommandQueue3LogERNS_8CJsonLogE(void);

/* Symbol: _ZTVN2MK14CCLRetainEventE */
/* Demangled: vtable for MK::CCLRetainEvent */
extern void* _ZTVN2MK14CCLRetainEventE;

/* Symbol: _ZN2MK7CStream10IsTopLevelEPNS_7CObjectE */
/* Demangled: MK::CStream::IsTopLevel(MK::CObject*) */
int _ZN2MK7CStream10IsTopLevelEPNS_7CObjectE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP11_cl_contextPKljPKP13_cl_device_idPFvPKcPKvmPvESE_PiENS_9allocatorISJ_EESI_E7__cloneEPNS0_6__baseISI_EE */
/* Demangled: std::__1::__function::__func<_cl_context* (*)(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*), std::__1::allocator<_cl_context* (*)(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>, _cl_context* (long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>::__clone(std::__1::__function::__base<_cl_context* (long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>*) const */
int _ZNKSt3__110__function6__funcIPFP11_cl_contextPKljPKP13_cl_device_idPFvPKcPKvmPvESE_PiENS_9allocatorISJ_EESI_E7__cloneEPNS0_6__baseISI_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuemjPmENS_9allocatorIS6_EES5_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned long, unsigned int, unsigned long*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned long, unsigned int, unsigned long*)>, int (_cl_command_queue*, unsigned long, unsigned int, unsigned long*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuemjPmENS_9allocatorIS6_EES5_E7destroyEv(void);

/* Symbol: _ZNK2MK8CVersiongeERKS0_ */
/* Demangled: MK::CVersion::operator>=(MK::CVersion const&) const */
int _ZNK2MK8CVersiongeERKS0_(void);

/* Symbol: CmdL_AttachclReleaseSampler */
/* Demangled: CmdL_AttachclReleaseSampler */
int CmdL_AttachclReleaseSampler(void);

/* Symbol: clEnqueueMarkerWithWaitList */
/* Demangled: clEnqueueMarkerWithWaitList */
int clEnqueueMarkerWithWaitList(void);

/* Symbol: _ZN2MK23CCLEnqueueNDRangeKernel6RecordEP17_cl_command_queueP10_cl_kerneljPKmS6_S6_jPKP9_cl_eventS8_ */
/* Demangled: MK::CCLEnqueueNDRangeKernel::Record(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event*) */
int _ZN2MK23CCLEnqueueNDRangeKernel6RecordEP17_cl_command_queueP10_cl_kerneljPKmS6_S6_jPKP9_cl_eventS8_(void);

/* Symbol: _ZNK2MK14CCLRetainEvent15CopyConstructToEv */
/* Demangled: MK::CCLRetainEvent::CopyConstructTo() const */
int _ZNK2MK14CCLRetainEvent15CopyConstructToEv(void);

/* Symbol: _ZNK2MK5CBool3LogERNS_8CJsonLogE */
/* Demangled: MK::CBool::Log(MK::CJsonLog&) const */
int _ZNK2MK5CBool3LogERNS_8CJsonLogE(void);

/* Symbol: _ZTVN2MK7CStreamE */
/* Demangled: vtable for MK::CStream */
extern void* _ZTVN2MK7CStreamE;

/* Symbol: _ZN2MK19clEnqueueReadBufferEP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS6_ */
/* Demangled: MK::clEnqueueReadBuffer(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK19clEnqueueReadBufferEP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS6_(void);

/* Symbol: _ZN2MK16CCLEnqueueMarkerC2ERKS0_ */
/* Demangled: MK::CCLEnqueueMarker::CCLEnqueueMarker(MK::CCLEnqueueMarker const&) */
int _ZN2MK16CCLEnqueueMarkerC2ERKS0_(void);

/* Symbol: _ZN2MK23CCLEnqueueNDRangeKernel7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueNDRangeKernel::Factory(MK::CStream&) */
int _ZN2MK23CCLEnqueueNDRangeKernel7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK22CCLReleaseCommandQueueC2ERKS0_ */
/* Demangled: MK::CCLReleaseCommandQueue::CCLReleaseCommandQueue(MK::CCLReleaseCommandQueue const&) */
int _ZN2MK22CCLReleaseCommandQueueC2ERKS0_(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP10_cl_kernelP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP10_cl_kernelP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE(void);

/* Symbol: _ZN2MK16CCLWaitForEventsC1Ev */
/* Demangled: MK::CCLWaitForEvents::CCLWaitForEvents() */
int _ZN2MK16CCLWaitForEventsC1Ev(void);

/* Symbol: _ZNSt3__16vectorIP13_cl_device_idNS_9allocatorIS2_EEE6assignIPKS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
/* Demangled: _ZNSt3__16vectorIP13_cl_device_idNS_9allocatorIS2_EEE6assignIPKS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
int _ZNSt3__16vectorIP13_cl_device_idNS_9allocatorIS2_EEE6assignIPKS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void);

/* Symbol: _ZN2MK8CCLFlushD0Ev */
/* Demangled: MK::CCLFlush::~CCLFlush() */
int _ZN2MK8CCLFlushD0Ev(void);

/* Symbol: MKProgram_AttachCLCreateKernelsInProgram */
/* Demangled: MKProgram_AttachCLCreateKernelsInProgram */
int MKProgram_AttachCLCreateKernelsInProgram(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcjPKS3_PFvS3_PvESE_PiENS_9allocatorISJ_EESI_EE */
/* Demangled: vtable for std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcjPKS3_PFvS3_PvESE_PiENS_9allocatorISJ_EESI_EE;

/* Symbol: clUnloadCompiler */
/* Demangled: clUnloadCompiler */
int clUnloadCompiler(void);

/* Symbol: _ZN2MK19CCLEnqueueMapBufferC2Ev */
/* Demangled: MK::CCLEnqueueMapBuffer::CCLEnqueueMapBuffer() */
int _ZN2MK19CCLEnqueueMapBufferC2Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePFvPvES4_mjPKP7_cl_memPPKvjPKP9_cl_eventPSF_ENS_9allocatorISK_EESJ_E7__cloneEPNS0_6__baseISJ_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePFvPvES4_mjPKP7_cl_memPPKvjPKP9_cl_eventPSF_ENS_9allocatorISK_EESJ_E7__cloneEPNS0_6__baseISJ_EE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEPNS0_6__baseISC_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEPNS0_6__baseISC_EE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP9_cl_eventiENS_9allocatorIS5_EES4_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_event*, int), std::__1::allocator<int (*)(_cl_event*, int)>, int (_cl_event*, int)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP9_cl_eventiENS_9allocatorIS5_EES4_EE;

/* Symbol: _ZN2MK22clEnqueueNDRangeKernelEP17_cl_command_queueP10_cl_kerneljPKmS5_S5_jPKP9_cl_eventPS7_ */
/* Demangled: MK::clEnqueueNDRangeKernel(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK22clEnqueueNDRangeKernelEP17_cl_command_queueP10_cl_kerneljPKmS5_S5_jPKP9_cl_eventPS7_(void);

/* Symbol: _ZN2MK15CCLCreateBufferD2Ev */
/* Demangled: MK::CCLCreateBuffer::~CCLCreateBuffer() */
int _ZN2MK15CCLCreateBufferD2Ev(void);

/* Symbol: _ZN2MK17CCLReleaseContext4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLReleaseContext::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK17CCLReleaseContext4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK16CCLWaitForEventsC2ERKS0_ */
/* Demangled: MK::CCLWaitForEvents::CCLWaitForEvents(MK::CCLWaitForEvents const&) */
int _ZN2MK16CCLWaitForEventsC2ERKS0_(void);

/* Symbol: MKProgram_AttachCLCreateProgramWithSource */
/* Demangled: MKProgram_AttachCLCreateProgramWithSource */
int MKProgram_AttachCLCreateProgramWithSource(void);

/* Symbol: _ZTVN2MK4CJobE */
/* Demangled: vtable for MK::CJob */
extern void* _ZTVN2MK4CJobE;

/* Symbol: _ZN2MK7CObject4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CObject::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK7CObject4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK16CCLWaitForEventsD0Ev */
/* Demangled: MK::CCLWaitForEvents::~CCLWaitForEvents() */
int _ZN2MK16CCLWaitForEventsD0Ev(void);

/* Symbol: CmdL_AttachclEnqueueReadBuffer */
/* Demangled: CmdL_AttachclEnqueueReadBuffer */
int CmdL_AttachclEnqueueReadBuffer(void);

/* Symbol: _ZN2MK19CCLEnqueueMapBufferD1Ev */
/* Demangled: MK::CCLEnqueueMapBuffer::~CCLEnqueueMapBuffer() */
int _ZN2MK19CCLEnqueueMapBufferD1Ev(void);

/* Symbol: _ZTVN2MK24CCLEnqueueUnmapMemObjectE */
/* Demangled: vtable for MK::CCLEnqueueUnmapMemObject */
extern void* _ZTVN2MK24CCLEnqueueUnmapMemObjectE;

/* Symbol: _ZTVNSt3__110__function6__funcIPFPvP11_cl_contextmmjENS_9allocatorIS6_EES5_EE */
/* Demangled: vtable for std::__1::__function::__func<void* (*)(_cl_context*, unsigned long, unsigned long, unsigned int), std::__1::allocator<void* (*)(_cl_context*, unsigned long, unsigned long, unsigned int)>, void* (_cl_context*, unsigned long, unsigned long, unsigned int)> */
extern void* _ZTVNSt3__110__function6__funcIPFPvP11_cl_contextmmjENS_9allocatorIS6_EES5_EE;

/* Symbol: _ZTVNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS8_PiENS_9allocatorISE_EESD_EE */
/* Demangled: vtable for std::__1::__function::__func<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*), std::__1::allocator<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)>, void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS8_PiENS_9allocatorISE_EESD_EE;

/* Symbol: MKProgramStack_Push */
/* Demangled: MKProgramStack_Push */
int MKProgramStack_Push(void);

/* Symbol: _ZN2MK21clGetProgramBuildInfoEP11_cl_programP13_cl_device_idjmPvPm */
/* Demangled: MK::clGetProgramBuildInfo(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*) */
int _ZN2MK21clGetProgramBuildInfoEP11_cl_programP13_cl_device_idjmPvPm(void);

/* Symbol: MKProgram_AttachCLEnqueueSVMUnmap */
/* Demangled: MKProgram_AttachCLEnqueueSVMUnmap */
int MKProgram_AttachCLEnqueueSVMUnmap(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcjPKS3_PS9_PFvS3_PvESD_ENS_9allocatorISH_EESG_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)>, int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcjPKS3_PS9_PFvS3_PvESD_ENS_9allocatorISH_EESG_EE;

/* Symbol: MKProgram_Release */
/* Demangled: MKProgram_Release */
int MKProgram_Release(void);

/* Symbol: _ZN2MK28CCLEnqueueMarkerWithWaitList7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueMarkerWithWaitList::Factory(MK::CStream&) */
int _ZN2MK28CCLEnqueueMarkerWithWaitList7FactoryERNS_7CStreamE(void);

/* Symbol: _ZN2MK16CCLRetainProgram15RegisterFactoryEv */
/* Demangled: MK::CCLRetainProgram::RegisterFactory() */
int _ZN2MK16CCLRetainProgram15RegisterFactoryEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFijPP15_cl_platform_idPjENS_9allocatorIS7_EES6_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(unsigned int, _cl_platform_id**, unsigned int*), std::__1::allocator<int (*)(unsigned int, _cl_platform_id**, unsigned int*)>, int (unsigned int, _cl_platform_id**, unsigned int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFijPP15_cl_platform_idPjENS_9allocatorIS7_EES6_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mmmjPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mmmjPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E18destroy_deallocateEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP13_cl_device_idPKljPS3_PjENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*), std::__1::allocator<int (*)(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)>, int (_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)>::__clone(std::__1::__function::__base<int (_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)>*) const */
int _ZNKSt3__110__function6__funcIPFiP13_cl_device_idPKljPS3_PjENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP10_cl_kernelENS_9allocatorIS5_EES4_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*), std::__1::allocator<int (*)(_cl_kernel*)>, int (_cl_kernel*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP10_cl_kernelENS_9allocatorIS5_EES4_E7destroyEv(void);

/* Symbol: _ZN2MK16CCLReleaseKernel20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLReleaseKernel::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK16CCLReleaseKernel20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK19CCLReleaseMemObjectD2Ev */
/* Demangled: MK::CCLReleaseMemObject::~CCLReleaseMemObject() */
int _ZN2MK19CCLReleaseMemObjectD2Ev(void);

/* Symbol: MKProgram_AttachCLEnqueueMarker */
/* Demangled: MKProgram_AttachCLEnqueueMarker */
int MKProgram_AttachCLEnqueueMarker(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP10_cl_kerneljjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP10_cl_kerneljjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvPKmS9_jPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_EclEOS3_OS5_OS7_OS9_SN_OjOSD_OSE_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, void const*&&, unsigned long const*&&, unsigned long const*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvPKmS9_jPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_EclEOS3_OS5_OS7_OS9_SN_OjOSD_OSE_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)>::operator()(_cl_command_queue*&&, unsigned int&&, unsigned long&&, void*&&, unsigned long*&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_(void);

/* Symbol: clWaitForEvents */
/* Demangled: clWaitForEvents */
int clWaitForEvents(void);

/* Symbol: MKProgram_AttachCLEnqueueUnmapMemObject */
/* Demangled: MKProgram_AttachCLEnqueueUnmapMemObject */
int MKProgram_AttachCLEnqueueUnmapMemObject(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP13_cl_device_idENS_9allocatorIS5_EES4_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*), std::__1::allocator<int (*)(_cl_device_id*)>, int (_cl_device_id*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP13_cl_device_idENS_9allocatorIS5_EES4_E7destroyEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP7_cl_memPFvS3_PvES4_ENS_9allocatorIS8_EES7_EclEOS3_OS6_OS4_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*, void (*)(_cl_mem*, void*), void*), std::__1::allocator<int (*)(_cl_mem*, void (*)(_cl_mem*, void*), void*)>, int (_cl_mem*, void (*)(_cl_mem*, void*), void*)>::operator()(_cl_mem*&&, void (*&&)(_cl_mem*, void*), void*&&) */
int _ZNSt3__110__function6__funcIPFiP7_cl_memPFvS3_PvES4_ENS_9allocatorIS8_EES7_EclEOS3_OS6_OS4_(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EE;

/* Symbol: _ZN2MK21CCLCreateCommandQueue4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLCreateCommandQueue::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK21CCLCreateCommandQueue4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNK2MK26CCLCreateProgramWithSource3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLCreateProgramWithSource::Log(MK::CJsonLog&) const */
int _ZNK2MK26CCLCreateProgramWithSource3LogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK15CCLReleaseEvent4LoadERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLReleaseEvent::Load(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK15CCLReleaseEvent4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNK2MK16CCLWaitForEvents11GetDiskUsedEv */
/* Demangled: MK::CCLWaitForEvents::GetDiskUsed() const */
int _ZNK2MK16CCLWaitForEvents11GetDiskUsedEv(void);

/* Symbol: MKProgram_AttachCLSVMFree */
/* Demangled: MKProgram_AttachCLSVMFree */
int MKProgram_AttachCLSVMFree(void);

/* Symbol: _ZN2MK8CJsonLog16EnterObjectScopeEv */
/* Demangled: MK::CJsonLog::EnterObjectScope() */
int _ZN2MK8CJsonLog16EnterObjectScopeEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_contextmjjP16_cl_image_formatPjENS_9allocatorIS8_EES7_EclEOS3_OmOjSE_OS5_OS6_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*), std::__1::allocator<int (*)(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)>, int (_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)>::operator()(_cl_context*&&, unsigned long&&, unsigned int&&, unsigned int&&, _cl_image_format*&&, unsigned int*&&) */
int _ZNSt3__110__function6__funcIPFiP11_cl_contextmjjP16_cl_image_formatPjENS_9allocatorIS8_EES7_EclEOS3_OmOjSE_OS5_OS6_(void);

/* Symbol: MKObject_CastToProgram */
/* Demangled: MKObject_CastToProgram */
int MKObject_CastToProgram(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithBinary3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CCLCreateProgramWithBinary::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK26CCLCreateProgramWithBinary3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZN2MK20CCLEnqueueMemoryCopy15RegisterFactoryEv */
/* Demangled: MK::CCLEnqueueMemoryCopy::RegisterFactory() */
int _ZN2MK20CCLEnqueueMemoryCopy15RegisterFactoryEv(void);

/* Symbol: _ZNK2MK20CCLEnqueueMemoryCopy11GetDiskUsedEv */
/* Demangled: MK::CCLEnqueueMemoryCopy::GetDiskUsed() const */
int _ZNK2MK20CCLEnqueueMemoryCopy11GetDiskUsedEv(void);

/* Symbol: _ZNK2MK17CCLReleaseContext11GetDiskUsedEv */
/* Demangled: MK::CCLReleaseContext::GetDiskUsed() const */
int _ZNK2MK17CCLReleaseContext11GetDiskUsedEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE;

/* Symbol: MKProgram_AttachUpdateBool */
/* Demangled: MKProgram_AttachUpdateBool */
int MKProgram_AttachUpdateBool(void);

/* Symbol: MKProgram_DumpJsonFile */
/* Demangled: MKProgram_DumpJsonFile */
int MKProgram_DumpJsonFile(void);

/* Symbol: _ZN2MK16CCLRetainProgram7FactoryERNS_7CStreamE */
/* Demangled: MK::CCLRetainProgram::Factory(MK::CStream&) */
int _ZN2MK16CCLRetainProgram7FactoryERNS_7CStreamE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFivENS_9allocatorIS3_EES2_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(), std::__1::allocator<int (*)()>, int ()>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFivENS_9allocatorIS3_EES2_E18destroy_deallocateEv(void);

/* Symbol: MKProgramStack_GetTop */
/* Demangled: MKProgramStack_GetTop */
int MKProgramStack_GetTop(void);

/* Symbol: _ZNK2MK8CVersionleERKS0_ */
/* Demangled: MK::CVersion::operator<=(MK::CVersion const&) const */
int _ZNK2MK8CVersionleERKS0_(void);

/* Symbol: _ZN2MK15clGetKernelInfoEP10_cl_kerneljmPvPm */
/* Demangled: MK::clGetKernelInfo(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*) */
int _ZN2MK15clGetKernelInfoEP10_cl_kerneljmPvPm(void);

/* Symbol: _ZN2MK15CCLReleaseEventC1Ev */
/* Demangled: MK::CCLReleaseEvent::CCLReleaseEvent() */
int _ZN2MK15CCLReleaseEventC1Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextjjjPiENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE */
/* Demangled: std::__1::__function::__func<_cl_sampler* (*)(_cl_context*, unsigned int, unsigned int, unsigned int, int*), std::__1::allocator<_cl_sampler* (*)(_cl_context*, unsigned int, unsigned int, unsigned int, int*)>, _cl_sampler* (_cl_context*, unsigned int, unsigned int, unsigned int, int*)>::__clone(std::__1::__function::__base<_cl_sampler* (_cl_context*, unsigned int, unsigned int, unsigned int, int*)>*) const */
int _ZNKSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextjjjPiENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventENS_9allocatorIS9_EES8_EclEOS3_OjOS7_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*)>, int (_cl_command_queue*, unsigned int, _cl_event* const*)>::operator()(_cl_command_queue*&&, unsigned int&&, _cl_event* const*&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventENS_9allocatorIS9_EES8_EclEOS3_OjOS7_(void);

/* Symbol: _ZN2MK8CCLFlushC2ERKS0_ */
/* Demangled: MK::CCLFlush::CCLFlush(MK::CCLFlush const&) */
int _ZN2MK8CCLFlushC2ERKS0_(void);

/* Symbol: MKProgram_AttachCLCreateProgramWithBinary */
/* Demangled: MKProgram_AttachCLCreateProgramWithBinary */
int MKProgram_AttachCLCreateProgramWithBinary(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZN2MK8CProgram19GetObjectByNameRTTIEPKcPKNS_5CRTTIEb */
/* Demangled: MK::CProgram::GetObjectByNameRTTI(char const*, MK::CRTTI const*, bool) */
int _ZN2MK8CProgram19GetObjectByNameRTTIEPKcPKNS_5CRTTIEb(void);

/* Symbol: CmdL_AttachclEnqueueNDRangeKernel */
/* Demangled: CmdL_AttachclEnqueueNDRangeKernel */
int CmdL_AttachclEnqueueNDRangeKernel(void);

/* Symbol: _ZN2MK13clEnqueueTaskEP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS5_ */
/* Demangled: MK::clEnqueueTask(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**) */
int _ZN2MK13clEnqueueTaskEP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS5_(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPKlPvmPiENS_9allocatorISB_EESA_E7__cloneEv */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, long const*, void*, unsigned long, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, long const*, void*, unsigned long, int*)>, _cl_mem* (_cl_context*, unsigned long, long const*, void*, unsigned long, int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPKlPvmPiENS_9allocatorISB_EESA_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePP9_cl_eventENS_9allocatorIS8_EES7_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_event**)>, int (_cl_command_queue*, _cl_event**)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePP9_cl_eventENS_9allocatorIS8_EES7_E7destroyEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP10_cl_kernelENS_9allocatorIS5_EES4_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_kernel*), std::__1::allocator<int (*)(_cl_kernel*)>, int (_cl_kernel*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP10_cl_kernelENS_9allocatorIS5_EES4_EE;

/* Symbol: clEnqueueReadImage */
/* Demangled: clEnqueueReadImage */
int clEnqueueReadImage(void);

/* Symbol: _ZN2MK20CCLEnqueueReadBuffer6RecordEP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventS7_ */
/* Demangled: MK::CCLEnqueueReadBuffer::Record(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event*) */
int _ZN2MK20CCLEnqueueReadBuffer6RecordEP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventS7_(void);

/* Symbol: _ZN2MK17CCLReleaseProgramC2Ev */
/* Demangled: MK::CCLReleaseProgram::CCLReleaseProgram() */
int _ZN2MK17CCLReleaseProgramC2Ev(void);

/* Symbol: _ZN2MK15CCLBuildProgram8ms_kRTTIE */
/* Demangled: MK::CCLBuildProgram::ms_kRTTI */
extern void* _ZN2MK15CCLBuildProgram8ms_kRTTIE;

/* Symbol: _ZNK2MK17CCLReleaseProgram3LogERNS_8CJsonLogE */
/* Demangled: MK::CCLReleaseProgram::Log(MK::CJsonLog&) const */
int _ZNK2MK17CCLReleaseProgram3LogERNS_8CJsonLogE(void);

/* Symbol: _ZN2MK15CCLReleaseEventD0Ev */
/* Demangled: MK::CCLReleaseEvent::~CCLReleaseEvent() */
int _ZN2MK15CCLReleaseEventD0Ev(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmmPvPiENS_9allocatorIS9_EES8_EE */
/* Demangled: vtable for std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, unsigned long, void*, int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmmPvPiENS_9allocatorIS9_EES8_EE;

/* Symbol: _ZN2MK11CStaticData3RunE13MKProgramTypePNS_13CContextLocalE */
/* Demangled: MK::CStaticData::Run(MKProgramType, MK::CContextLocal*) */
int _ZN2MK11CStaticData3RunE13MKProgramTypePNS_13CContextLocalE(void);

/* Symbol: _ZN2MK14clGetEventInfoEP9_cl_eventjmPvPm */
/* Demangled: MK::clGetEventInfo(_cl_event*, unsigned int, unsigned long, void*, unsigned long*) */
int _ZN2MK14clGetEventInfoEP9_cl_eventjmPvPm(void);

/* Symbol: _ZN2MK17CCLReleaseContext20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLReleaseContext::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK17CCLReleaseContext20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK17CCLReleaseContext4SaveERNS_7CStreamE */
/* Demangled: MK::CCLReleaseContext::Save(MK::CStream&) */
int _ZN2MK17CCLReleaseContext4SaveERNS_7CStreamE(void);

/* Symbol: MKProgram_SetOutputFd */
/* Demangled: MKProgram_SetOutputFd */
int MKProgram_SetOutputFd(void);

/* Symbol: _ZN2MK14CCLCreateImage8ms_kRTTIE */
/* Demangled: MK::CCLCreateImage::ms_kRTTI */
extern void* _ZN2MK14CCLCreateImage8ms_kRTTIE;

/* Symbol: _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: CmdL_ReleaseHandle */
/* Demangled: CmdL_ReleaseHandle */
int CmdL_ReleaseHandle(void);

/* Symbol: CmdL_AttachclEnqueueSVMUnmap */
/* Demangled: CmdL_AttachclEnqueueSVMUnmap */
int CmdL_AttachclEnqueueSVMUnmap(void);

/* Symbol: _ZN2MK17CCLReleaseProgramD1Ev */
/* Demangled: MK::CCLReleaseProgram::~CCLReleaseProgram() */
int _ZN2MK17CCLReleaseProgramD1Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP9_cl_eventiENS_9allocatorIS5_EES4_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, int), std::__1::allocator<int (*)(_cl_event*, int)>, int (_cl_event*, int)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP9_cl_eventiENS_9allocatorIS5_EES4_E7destroyEv(void);

/* Symbol: clCreateImage3D */
/* Demangled: clCreateImage3D */
int clCreateImage3D(void);

/* Symbol: _ZN2MK27CCLEnqueueCopyBufferToImageC1ERKS0_ */
/* Demangled: MK::CCLEnqueueCopyBufferToImage::CCLEnqueueCopyBufferToImage(MK::CCLEnqueueCopyBufferToImage const&) */
int _ZN2MK27CCLEnqueueCopyBufferToImageC1ERKS0_(void);

/* Symbol: MKProgram_AttachCLCreateBuffer */
/* Demangled: MKProgram_AttachCLCreateBuffer */
int MKProgram_AttachCLCreateBuffer(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP9_cl_eventP11_cl_contextPiENS_9allocatorIS8_EES7_E7__cloneEv */
/* Demangled: std::__1::__function::__func<_cl_event* (*)(_cl_context*, int*), std::__1::allocator<_cl_event* (*)(_cl_context*, int*)>, _cl_event* (_cl_context*, int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFP9_cl_eventP11_cl_contextPiENS_9allocatorIS8_EES7_E7__cloneEv(void);

/* Symbol: _ZN2MK20CCLEnqueueMemoryCopy20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueMemoryCopy::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK20CCLEnqueueMemoryCopy20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK15CCLRetainKernelD2Ev */
/* Demangled: MK::CCLRetainKernel::~CCLRetainKernel() */
int _ZN2MK15CCLRetainKernelD2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_(void);

/* Symbol: clReleaseContext */
/* Demangled: clReleaseContext */
int clReleaseContext(void);

/* Symbol: _ZN2MK15CCLCreateKernel20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLCreateKernel::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK15CCLCreateKernel20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK20CCLEnqueueMemoryCopyC2Ev */
/* Demangled: MK::CCLEnqueueMemoryCopy::CCLEnqueueMemoryCopy() */
int _ZN2MK20CCLEnqueueMemoryCopyC2Ev(void);

/* Symbol: _ZNK2MK14CCLRetainEvent11GetDiskUsedEv */
/* Demangled: MK::CCLRetainEvent::GetDiskUsed() const */
int _ZNK2MK14CCLRetainEvent11GetDiskUsedEv(void);

/* Symbol: _ZNK2MK15CCLSetKernelArg15CopyConstructToEv */
/* Demangled: MK::CCLSetKernelArg::CopyConstructTo() const */
int _ZNK2MK15CCLSetKernelArg15CopyConstructToEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP13_cl_device_idPKljPS3_PjENS_9allocatorIS9_EES8_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*), std::__1::allocator<int (*)(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)>, int (_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP13_cl_device_idPKljPS3_PjENS_9allocatorIS9_EES8_E18destroy_deallocateEv(void);

/* Symbol: CmdL_TreeNodeAttachStaticData */
/* Demangled: CmdL_TreeNodeAttachStaticData */
int CmdL_TreeNodeAttachStaticData(void);

/* Symbol: _ZTVN2MK9CCLFinishE */
/* Demangled: vtable for MK::CCLFinish */
extern void* _ZTVN2MK9CCLFinishE;

/* Symbol: _ZN2MK15CCLImportMemory11IsImportDMAEPKl */
/* Demangled: MK::CCLImportMemory::IsImportDMA(long const*) */
int _ZN2MK15CCLImportMemory11IsImportDMAEPKl(void);

/* Symbol: _ZN2MK8CCLFlush15RegisterFactoryEv */
/* Demangled: MK::CCLFlush::RegisterFactory() */
int _ZN2MK8CCLFlush15RegisterFactoryEv(void);

/* Symbol: _ZN2MK16CCLReleaseKernel4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLReleaseKernel::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK16CCLReleaseKernel4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_OjOS7_SL_SL_SK_OSB_OSC_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_kernel*&&, unsigned int&&, unsigned long const*&&, unsigned long const*&&, unsigned long const*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_OjOS7_SL_SL_SK_OSB_OSC_(void);

/* Symbol: _ZN2MK16CCLWaitForEvents6RecordEjPKP9_cl_event */
/* Demangled: MK::CCLWaitForEvents::Record(unsigned int, _cl_event* const*) */
int _ZN2MK16CCLWaitForEvents6RecordEjPKP9_cl_event(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP13_cl_device_idEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP13_cl_device_idEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void);

/* Symbol: _ZN2MK28CCLEnqueueMarkerWithWaitListC1ERKS0_ */
/* Demangled: MK::CCLEnqueueMarkerWithWaitList::CCLEnqueueMarkerWithWaitList(MK::CCLEnqueueMarkerWithWaitList const&) */
int _ZN2MK28CCLEnqueueMarkerWithWaitListC1ERKS0_(void);

/* Symbol: _ZTVN2MK15CCLImportMemoryE */
/* Demangled: vtable for MK::CCLImportMemory */
extern void* _ZTVN2MK15CCLImportMemoryE;

/* Symbol: _ZNK2MK16CCLRetainContext13GetMemoryUsedEv */
/* Demangled: MK::CCLRetainContext::GetMemoryUsed() const */
int _ZNK2MK16CCLRetainContext13GetMemoryUsedEv(void);

/* Symbol: _ZN2MK18CCLRetainMemObject4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLRetainMemObject::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK18CCLRetainMemObject4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP9_cl_eventiENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, int), std::__1::allocator<int (*)(_cl_event*, int)>, int (_cl_event*, int)>::__clone(std::__1::__function::__base<int (_cl_event*, int)>*) const */
int _ZNKSt3__110__function6__funcIPFiP9_cl_eventiENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP13_cl_device_idjmPvPmENS_9allocatorIS7_EES6_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP13_cl_device_idjmPvPmENS_9allocatorIS7_EES6_E7destroyEv(void);

/* Symbol: CmdL_AttachclEnqueueCopyImage */
/* Demangled: CmdL_AttachclEnqueueCopyImage */
int CmdL_AttachclEnqueueCopyImage(void);

/* Symbol: _ZN2MK25clCreateProgramWithBinaryEP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSB_ */
/* Demangled: MK::clCreateProgramWithBinary(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*) */
int _ZN2MK25clCreateProgramWithBinaryEP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSB_(void);

/* Symbol: _ZN2MK21CCLEnqueueWriteBuffer8ms_kRTTIE */
/* Demangled: MK::CCLEnqueueWriteBuffer::ms_kRTTI */
extern void* _ZN2MK21CCLEnqueueWriteBuffer8ms_kRTTIE;

/* Symbol: _ZNK2MK15CCLImportMemory11GetDiskUsedEv */
/* Demangled: MK::CCLImportMemory::GetDiskUsed() const */
int _ZNK2MK15CCLImportMemory11GetDiskUsedEv(void);

/* Symbol: _ZN2MK20CCLEnqueueMemoryCopyD1Ev */
/* Demangled: MK::CCLEnqueueMemoryCopy::~CCLEnqueueMemoryCopy() */
int _ZN2MK20CCLEnqueueMemoryCopyD1Ev(void);

/* Symbol: _ZN2MK8CProgram15GetCommandIndexEPNS_8CCommandE */
/* Demangled: MK::CProgram::GetCommandIndex(MK::CCommand*) */
int _ZN2MK8CProgram15GetCommandIndexEPNS_8CCommandE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP15_cl_platform_idmjPP13_cl_device_idPjENS_9allocatorIS9_EES8_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*), std::__1::allocator<int (*)(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)>, int (_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP15_cl_platform_idmjPP13_cl_device_idPjENS_9allocatorIS9_EES8_E7destroyEv(void);

/* Symbol: _ZNK2MK5CBool11GetDiskUsedEv */
/* Demangled: MK::CBool::GetDiskUsed() const */
int _ZNK2MK5CBool11GetDiskUsedEv(void);

/* Symbol: _ZN2MK8CProgram8ms_kRTTIE */
/* Demangled: MK::CProgram::ms_kRTTI */
extern void* _ZN2MK8CProgram8ms_kRTTIE;

/* Symbol: _ZN2MK27CCLEnqueueCopyBufferToImage4SaveERNS_7CStreamE */
/* Demangled: MK::CCLEnqueueCopyBufferToImage::Save(MK::CStream&) */
int _ZN2MK27CCLEnqueueCopyBufferToImage4SaveERNS_7CStreamE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFP9_cl_eventP11_cl_contextPiENS_9allocatorIS8_EES7_EE */
/* Demangled: vtable for std::__1::__function::__func<_cl_event* (*)(_cl_context*, int*), std::__1::allocator<_cl_event* (*)(_cl_context*, int*)>, _cl_event* (_cl_context*, int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFP9_cl_eventP11_cl_contextPiENS_9allocatorIS8_EES7_EE;

/* Symbol: CmdL_GetTreeNode */
/* Demangled: CmdL_GetTreeNode */
int CmdL_GetTreeNode(void);

/* Symbol: _ZTVN2MK16CCLReleaseKernelE */
/* Demangled: vtable for MK::CCLReleaseKernel */
extern void* _ZTVN2MK16CCLReleaseKernelE;

/* Symbol: _ZNKSt3__110__function6__funcIPFP7_cl_memS3_mjPKvPiENS_9allocatorIS8_EES7_E7__cloneEv */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_mem*, unsigned long, unsigned int, void const*, int*), std::__1::allocator<_cl_mem* (*)(_cl_mem*, unsigned long, unsigned int, void const*, int*)>, _cl_mem* (_cl_mem*, unsigned long, unsigned int, void const*, int*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFP7_cl_memS3_mjPKvPiENS_9allocatorIS8_EES7_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_mmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_mmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv(void);

/* Symbol: _ZN2MK12CDynamicData4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CDynamicData::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK12CDynamicData4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK12CDynamicData6RecordEiPKvmPKi */
/* Demangled: MK::CDynamicData::Record(int, void const*, unsigned long, int const*) */
int _ZN2MK12CDynamicData6RecordEiPKvmPKi(void);

/* Symbol: MKUtils_DumpCLProgramSources */
/* Demangled: MKUtils_DumpCLProgramSources */
int MKUtils_DumpCLProgramSources(void);

/* Symbol: _ZN2MK8CCommandC2ERKS0_ */
/* Demangled: MK::CCommand::CCommand(MK::CCommand const&) */
int _ZN2MK8CCommandC2ERKS0_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcjPKS3_PS9_PFvS3_PvESD_ENS_9allocatorISH_EESG_EclEOS3_OjOS7_OS9_SM_OSB_OSC_OSF_OSD_ */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)>, int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)>::operator()(_cl_program*&&, unsigned int&&, _cl_device_id* const*&&, char const*&&, unsigned int&&, _cl_program* const*&&, char const**&&, void (*&&)(_cl_program*, void*), void*&&) */
int _ZNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcjPKS3_PS9_PFvS3_PvESD_ENS_9allocatorISH_EESG_EclEOS3_OjOS7_OS9_SM_OSB_OSC_OSF_OSD_(void);

/* Symbol: MKProgram_DetachProgram */
/* Demangled: MKProgram_DetachProgram */
int MKProgram_DetachProgram(void);

/* Symbol: _ZN2MK7CStream4SizeEv */
/* Demangled: MK::CStream::Size() */
int _ZN2MK7CStream4SizeEv(void);

/* Symbol: _ZN2MK15CCLCreateBufferC2Ev */
/* Demangled: MK::CCLCreateBuffer::CCLCreateBuffer() */
int _ZN2MK15CCLCreateBufferC2Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmmPvPiENS_9allocatorIS9_EES8_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, unsigned long, void*, int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmmPvPiENS_9allocatorIS9_EES8_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK13CDummyCommand15RegisterFactoryEv */
/* Demangled: MK::CDummyCommand::RegisterFactory() */
int _ZN2MK13CDummyCommand15RegisterFactoryEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFbiPvENS_9allocatorIS4_EES3_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<bool (*)(int, void*), std::__1::allocator<bool (*)(int, void*)>, bool (int, void*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFbiPvENS_9allocatorIS4_EES3_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK14clRetainDeviceEP13_cl_device_id */
/* Demangled: MK::clRetainDevice(_cl_device_id*) */
int _ZN2MK14clRetainDeviceEP13_cl_device_id(void);

/* Symbol: _ZN2MK15clCreateContextEPKljPKP13_cl_device_idPFvPKcPKvmPvESA_Pi */
/* Demangled: MK::clCreateContext(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*) */
int _ZN2MK15clCreateContextEPKljPKP13_cl_device_idPFvPKcPKvmPvESA_Pi(void);

/* Symbol: _ZN2MK24clUnloadPlatformCompilerEP15_cl_platform_id */
/* Demangled: MK::clUnloadPlatformCompiler(_cl_platform_id*) */
int _ZN2MK24clUnloadPlatformCompilerEP15_cl_platform_id(void);

/* Symbol: _ZN2MK26CCLCreateProgramWithBinaryC1ERKS0_ */
/* Demangled: MK::CCLCreateProgramWithBinary::CCLCreateProgramWithBinary(MK::CCLCreateProgramWithBinary const&) */
int _ZN2MK26CCLCreateProgramWithBinaryC1ERKS0_(void);

/* Symbol: _ZN2MK18CCLEnqueueSVMUnmapC2ERKS0_ */
/* Demangled: MK::CCLEnqueueSVMUnmap::CCLEnqueueSVMUnmap(MK::CCLEnqueueSVMUnmap const&) */
int _ZN2MK18CCLEnqueueSVMUnmapC2ERKS0_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP11_cl_programP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP11_cl_programP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPKvjPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPKvjPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK16clCompileProgramEP11_cl_programjPKP13_cl_device_idPKcjPKS1_PS7_PFvS1_PvESB_ */
/* Demangled: MK::clCompileProgram(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*) */
int _ZN2MK16clCompileProgramEP11_cl_programjPKP13_cl_device_idPKcjPKS1_PS7_PFvS1_PvESB_(void);

/* Symbol: _ZN2MK19CCLEnqueueMapBufferC1Ev */
/* Demangled: MK::CCLEnqueueMapBuffer::CCLEnqueueMapBuffer() */
int _ZN2MK19CCLEnqueueMapBufferC1Ev(void);

/* Symbol: _ZN2MK8CCLFlush20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLFlush::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK8CCLFlush20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK20CCLPrepareMemoryCopy15GetCLKernelCodeEv */
/* Demangled: MK::CCLPrepareMemoryCopy::GetCLKernelCode() */
int _ZN2MK20CCLPrepareMemoryCopy15GetCLKernelCodeEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP11_cl_contextmjjP16_cl_image_formatPjENS_9allocatorIS8_EES7_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*), std::__1::allocator<int (*)(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)>, int (_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP11_cl_contextmjjP16_cl_image_formatPjENS_9allocatorIS8_EES7_EE;

/* Symbol: MKConfig_EndProfileCL */
/* Demangled: MKConfig_EndProfileCL */
int MKConfig_EndProfileCL(void);

/* Symbol: _ZN2MK24clSetKernelArgSVMPointerEP10_cl_kerneljPKv */
/* Demangled: MK::clSetKernelArgSVMPointer(_cl_kernel*, unsigned int, void const*) */
int _ZN2MK24clSetKernelArgSVMPointerEP10_cl_kerneljPKv(void);

/* Symbol: _ZN2MK15CCLCreateBufferD1Ev */
/* Demangled: MK::CCLCreateBuffer::~CCLCreateBuffer() */
int _ZN2MK15CCLCreateBufferD1Ev(void);

/* Symbol: _ZNK2MK19CCLReleaseMemObject15CopyConstructToEv */
/* Demangled: MK::CCLReleaseMemObject::CopyConstructTo() const */
int _ZNK2MK19CCLReleaseMemObject15CopyConstructToEv(void);

/* Symbol: MKProgram_AttachCLBuildProgram */
/* Demangled: MKProgram_AttachCLBuildProgram */
int MKProgram_AttachCLBuildProgram(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextjjjPiENS_9allocatorIS8_EES7_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<_cl_sampler* (*)(_cl_context*, unsigned int, unsigned int, unsigned int, int*), std::__1::allocator<_cl_sampler* (*)(_cl_context*, unsigned int, unsigned int, unsigned int, int*)>, _cl_sampler* (_cl_context*, unsigned int, unsigned int, unsigned int, int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextjjjPiENS_9allocatorIS8_EES7_E18destroy_deallocateEv(void);

/* Symbol: _ZN2MK8CJsonLog3LogEPKcPKNS_7CObjectE */
/* Demangled: MK::CJsonLog::Log(char const*, MK::CObject const*) */
int _ZN2MK8CJsonLog3LogEPKcPKNS_7CObjectE(void);

/* Symbol: _ZN2MK11CMemoryCopy7FactoryERNS_7CStreamE */
/* Demangled: MK::CMemoryCopy::Factory(MK::CStream&) */
int _ZN2MK11CMemoryCopy7FactoryERNS_7CStreamE(void);

/* Symbol: MKConfig_DebugBitTrue */
/* Demangled: MKConfig_DebugBitTrue */
int MKConfig_DebugBitTrue(void);

/* Symbol: _ZN2MK15CCLBuildProgram18GetDeviceCLVersionEP11_cl_programRNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE */
/* Demangled: MK::CCLBuildProgram::GetDeviceCLVersion(_cl_program*, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
int _ZN2MK15CCLBuildProgram18GetDeviceCLVersionEP11_cl_programRNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE(void);

/* Symbol: _ZN2MK15CCLBuildProgram4LinkERNS_7CStreamEPNS1_11CMemberLinkE */
/* Demangled: MK::CCLBuildProgram::Link(MK::CStream&, MK::CStream::CMemberLink*) */
int _ZN2MK15CCLBuildProgram4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void);

/* Symbol: _ZN2MK16CCLCreateContext20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLCreateContext::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK16CCLCreateContext20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK16CCLRetainContextC1ERKS0_ */
/* Demangled: MK::CCLRetainContext::CCLRetainContext(MK::CCLRetainContext const&) */
int _ZN2MK16CCLRetainContextC1ERKS0_(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmjjPKlPiENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)>, _cl_mem* (_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)>::__clone(std::__1::__function::__base<_cl_mem* (_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)>*) const */
int _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmjjPKlPiENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuePP9_cl_eventENS_9allocatorIS8_EES7_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_event**)>, int (_cl_command_queue*, _cl_event**)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuePP9_cl_eventENS_9allocatorIS8_EES7_EE;

/* Symbol: _ZN2MK20CCLPrepareMemoryCopyC2ERKS0_ */
/* Demangled: MK::CCLPrepareMemoryCopy::CCLPrepareMemoryCopy(MK::CCLPrepareMemoryCopy const&) */
int _ZN2MK20CCLPrepareMemoryCopyC2ERKS0_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS8_PiENS_9allocatorISE_EESD_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*), std::__1::allocator<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)>, void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS8_PiENS_9allocatorISE_EESD_E18destroy_deallocateEv(void);

/* Symbol: _ZNK2MK7CObject18IsDerivedFromClassEPKNS_5CRTTIE */
/* Demangled: MK::CObject::IsDerivedFromClass(MK::CRTTI const*) const */
int _ZNK2MK7CObject18IsDerivedFromClassEPKNS_5CRTTIE(void);

/* Symbol: CmdL_InsertTreeNode */
/* Demangled: CmdL_InsertTreeNode */
int CmdL_InsertTreeNode(void);

/* Symbol: _ZN2MK19CCLEnqueueMapBufferD0Ev */
/* Demangled: MK::CCLEnqueueMapBuffer::~CCLEnqueueMapBuffer() */
int _ZN2MK19CCLEnqueueMapBufferD0Ev(void);

/* Symbol: _ZN2MK19CCLReleaseMemObjectC2Ev */
/* Demangled: MK::CCLReleaseMemObject::CCLReleaseMemObject() */
int _ZN2MK19CCLReleaseMemObjectC2Ev(void);

/* Symbol: _ZN2MK15CCLReleaseEventC1ERKS0_ */
/* Demangled: MK::CCLReleaseEvent::CCLReleaseEvent(MK::CCLReleaseEvent const&) */
int _ZN2MK15CCLReleaseEventC1ERKS0_(void);

/* Symbol: _ZNK2MK15CCLReleaseEvent13GetMemoryUsedEv */
/* Demangled: MK::CCLReleaseEvent::GetMemoryUsed() const */
int _ZNK2MK15CCLReleaseEvent13GetMemoryUsedEv(void);

/* Symbol: _ZN2MK16clUnloadCompilerEv */
/* Demangled: MK::clUnloadCompiler() */
int _ZN2MK16clUnloadCompilerEv(void);

/* Symbol: clReleaseEvent */
/* Demangled: clReleaseEvent */
int clReleaseEvent(void);

/* Symbol: _ZNK2MK21CCLEnqueueWriteBuffer11GetDiskUsedEv */
/* Demangled: MK::CCLEnqueueWriteBuffer::GetDiskUsed() const */
int _ZNK2MK21CCLEnqueueWriteBuffer11GetDiskUsedEv(void);

/* Symbol: MKProgram_ReplaceWithCLCreateProgramWithBinary */
/* Demangled: MKProgram_ReplaceWithCLCreateProgramWithBinary */
int MKProgram_ReplaceWithCLCreateProgramWithBinary(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPKlPvmPiENS_9allocatorISB_EESA_E7destroyEv */
/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, long const*, void*, unsigned long, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, long const*, void*, unsigned long, int*)>, _cl_mem* (_cl_context*, unsigned long, long const*, void*, unsigned long, int*)>::destroy() */
int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPKlPvmPiENS_9allocatorISB_EESA_E7destroyEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP10_cl_kerneljjmPvPmENS_9allocatorIS7_EES6_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP10_cl_kerneljjmPvPmENS_9allocatorIS7_EES6_EE;

/* Symbol: _ZN2MK19CCLReleaseMemObjectD1Ev */
/* Demangled: MK::CCLReleaseMemObject::~CCLReleaseMemObject() */
int _ZN2MK19CCLReleaseMemObjectD1Ev(void);

/* Symbol: _ZN2MK21CCLRetainCommandQueue20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLRetainCommandQueue::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK21CCLRetainCommandQueue20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZNSt3__16vectorIN2MK8CPointerINS1_26CCLCreateProgramWithSourceEEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_ */
/* Demangled: void std::__1::vector<MK::CPointer<MK::CCLCreateProgramWithSource>, std::__1::allocator<MK::CPointer<MK::CCLCreateProgramWithSource> > >::__push_back_slow_path<MK::CPointer<MK::CCLCreateProgramWithSource> >(MK::CPointer<MK::CCLCreateProgramWithSource>&&) */
int _ZNSt3__16vectorIN2MK8CPointerINS1_26CCLCreateProgramWithSourceEEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvPKmS9_jPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_EE */
/* Demangled: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)> */
extern void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvPKmS9_jPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_EE;

/* Symbol: _ZNK2MK8CProgram13GetMemoryUsedEv */
/* Demangled: MK::CProgram::GetMemoryUsed() const */
int _ZNK2MK8CProgram13GetMemoryUsedEv(void);

/* Symbol: _ZNSt3__16vectorIP10_cl_kernelNS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
/* Demangled: _ZNSt3__16vectorIP10_cl_kernelNS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
int _ZNSt3__16vectorIP10_cl_kernelNS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void);

/* Symbol: _ZN2MK19CCLReleaseMemObject20RegisterUniqueObjectERNS_7CStreamE */
/* Demangled: MK::CCLReleaseMemObject::RegisterUniqueObject(MK::CStream&) */
int _ZN2MK19CCLReleaseMemObject20RegisterUniqueObjectERNS_7CStreamE(void);

/* Symbol: _ZN2MK13CInputTensors9AddRecordEiPKvmPKi */
/* Demangled: MK::CInputTensors::AddRecord(int, void const*, unsigned long, int const*) */
int _ZN2MK13CInputTensors9AddRecordEiPKvmPKi(void);

/* Symbol: _ZN2MK11CStaticData6RecordEPKvm */
/* Demangled: MK::CStaticData::Record(void const*, unsigned long) */
int _ZN2MK11CStaticData6RecordEPKvm(void);

/* Symbol: _ZN2MK8CProgram13DetachCommandEPNS_8CCommandE */
/* Demangled: MK::CProgram::DetachCommand(MK::CCommand*) */
int _ZN2MK8CProgram13DetachCommandEPNS_8CCommandE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePP9_cl_eventENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_event**)>, int (_cl_command_queue*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_event**)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePP9_cl_eventENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPPvPFvS3_jS5_S4_ES4_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE */
/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPPvPFvS3_jS5_S4_ES4_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE(void);

/* Symbol: _ZN2MK14CContextGlobal24RecordProgramBuildOptionEP11_cl_programPKc */
/* Demangled: MK::CContextGlobal::RecordProgramBuildOption(_cl_program*, char const*) */
int _ZN2MK14CContextGlobal24RecordProgramBuildOptionEP11_cl_programPKc(void);

/* Symbol: _ZN2MK28CCLEnqueueMarkerWithWaitListD2Ev */
/* Demangled: MK::CCLEnqueueMarkerWithWaitList::~CCLEnqueueMarkerWithWaitList() */
int _ZN2MK28CCLEnqueueMarkerWithWaitListD2Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFvP11_cl_contextPvENS_9allocatorIS6_EES5_E7__cloneEPNS0_6__baseIS5_EE */
/* Demangled: std::__1::__function::__func<void (*)(_cl_context*, void*), std::__1::allocator<void (*)(_cl_context*, void*)>, void (_cl_context*, void*)>::__clone(std::__1::__function::__base<void (_cl_context*, void*)>*) const */
int _ZNKSt3__110__function6__funcIPFvP11_cl_contextPvENS_9allocatorIS6_EES5_E7__cloneEPNS0_6__baseIS5_EE(void);

/* Symbol: _ZN2MK25clCreateProgramWithSourceEP11_cl_contextjPPKcPKmPi */
/* Demangled: MK::clCreateProgramWithSource(_cl_context*, unsigned int, char const**, unsigned long const*, int*) */
int _ZN2MK25clCreateProgramWithSourceEP11_cl_contextjPPKcPKmPi(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCMDL_H */
