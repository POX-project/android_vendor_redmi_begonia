/*
 * Reverse-Engineered ABI Specification for: android.hardware.renderscript@1.0-impl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: android.hardware.renderscript@1.0-impl.so
 */

#ifndef BEGONIA_RE_ANDROID_HARDWARE_RENDERSCRIPT_1_0_IMPL_H
#define BEGONIA_RE_ANDROID_HARDWARE_RENDERSCRIPT_1_0_IMPL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context18contextSendMessageEjRKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextSendMessage(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context18contextSendMessageEjRKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context14contextDestroyEv */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextDestroy() */
int _ZN7android8hardware12renderscript4V1_014implementation7Context14contextDestroyEv(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context17scriptGroupCreateERKNS0_8hidl_vecImEES8_S8_S8_S8_ */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptGroupCreate(android::hardware::hidl_vec<unsigned long> const&, android::hardware::hidl_vec<unsigned long> const&, android::hardware::hidl_vec<unsigned long> const&, android::hardware::hidl_vec<unsigned long> const&, android::hardware::hidl_vec<unsigned long> const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context17scriptGroupCreateERKNS0_8hidl_vecImEES8_S8_S8_S8_(void);

/* Symbol: _ZTCN7android8hardware12renderscript4V1_014implementation6DeviceE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::renderscript::V1_0::implementation::Device */
extern void* _ZTCN7android8hardware12renderscript4V1_014implementation6DeviceE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context10typeCreateEmjjjbbNS2_9YuvFormatE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::typeCreate(unsigned long, unsigned int, unsigned int, unsigned int, bool, bool, android::hardware::renderscript::V1_0::YuvFormat) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context10typeCreateEmjjjbbNS2_9YuvFormatE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context16allocation1DReadEmjjjPvm */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocation1DRead(unsigned long, unsigned int, unsigned int, unsigned int, void*, unsigned long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context16allocation1DReadEmjjjPvm(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context16closureSetGlobalEmmli */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::closureSetGlobal(unsigned long, unsigned long, long, int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context16closureSetGlobalEmmli(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context19invokeClosureCreateEmRKNS0_8hidl_vecIhEERKNS5_ImEERKNS5_IlEERKNS5_IiEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::invokeClosureCreate(unsigned long, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned long> const&, android::hardware::hidl_vec<long> const&, android::hardware::hidl_vec<int> const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context19invokeClosureCreateEmRKNS0_8hidl_vecIhEERKNS5_ImEERKNS5_IlEERKNS5_IiEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context20scriptBindAllocationEmmj */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptBindAllocation(unsigned long, unsigned long, unsigned int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context20scriptBindAllocationEmmj(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context21allocationCopy2DRangeEmjjjNS2_21AllocationCubemapFaceEjjmjjjS5_ */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationCopy2DRange(unsigned long, unsigned int, unsigned int, unsigned int, android::hardware::renderscript::V1_0::AllocationCubemapFace, unsigned int, unsigned int, unsigned long, unsigned int, unsigned int, unsigned int, android::hardware::renderscript::V1_0::AllocationCubemapFace) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context21allocationCopy2DRangeEmjjjNS2_21AllocationCubemapFaceEjjmjjjS5_(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarDEmjd */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarD(unsigned long, unsigned int, double) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarDEmjd(void);

/* Symbol: _ZTCN7android8hardware12renderscript4V1_014implementation7ContextE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::renderscript::V1_0::implementation::Context */
extern void* _ZTCN7android8hardware12renderscript4V1_014implementation7ContextE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation6DeviceC2Ev */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Device::Device() */
int _ZN7android8hardware12renderscript4V1_014implementation6DeviceC2Ev(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptGetVarVEmjmNSt3__18functionIFvRKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptGetVarV(unsigned long, unsigned int, unsigned long, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptGetVarVEmjmNSt3__18functionIFvRKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarJEmjl */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarJ(unsigned long, unsigned int, long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarJEmjl(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context18contextPeekMessageENSt3__18functionIFvNS2_19MessageToClientTypeEmjEEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextPeekMessage(std::__1::function<void (android::hardware::renderscript::V1_0::MessageToClientType, unsigned long, unsigned int)>) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context18contextPeekMessageENSt3__18functionIFvNS2_19MessageToClientTypeEmjEEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context25allocationGenerateMipmapsEm */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationGenerateMipmaps(unsigned long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context25allocationGenerateMipmapsEm(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptCCreateERKNS0_11hidl_stringES7_RKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptCCreate(android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptCCreateERKNS0_11hidl_stringES7_RKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context16allocation3DReadEmjjjjjjjPvmm */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocation3DRead(unsigned long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, void*, unsigned long, unsigned long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context16allocation3DReadEmjjjjjjjPvmm(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation6Device12mDispatchHalE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Device::mDispatchHal */
extern void* _ZN7android8hardware12renderscript4V1_014implementation6Device12mDispatchHalE;

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarIEmji */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarI(unsigned long, unsigned int, int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarIEmji(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context17allocation2DWriteEmjjjNS2_21AllocationCubemapFaceEjjRKNS0_8hidl_vecIhEEm */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocation2DWrite(unsigned long, unsigned int, unsigned int, unsigned int, android::hardware::renderscript::V1_0::AllocationCubemapFace, unsigned int, unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context17allocation2DWriteEmjjjNS2_21AllocationCubemapFaceEjjRKNS0_8hidl_vecIhEEm(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context17allocationSyncAllEmNS2_19AllocationUsageTypeE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationSyncAll(unsigned long, android::hardware::renderscript::V1_0::AllocationUsageType) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context17allocationSyncAllEmNS2_19AllocationUsageTypeE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13closureSetArgEmjPvi */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::closureSetArg(unsigned long, unsigned int, void*, int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13closureSetArgEmjPvi(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context17allocation1DWriteEmjjjRKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocation1DWrite(unsigned long, unsigned int, unsigned int, unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context17allocation1DWriteEmjjjRKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context18allocationResize1DEmj */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationResize1D(unsigned long, unsigned int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context18allocationResize1DEmj(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context18scriptGroup2CreateERKNS0_11hidl_stringES7_RKNS0_8hidl_vecImEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptGroup2Create(android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_vec<unsigned long> const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context18scriptGroup2CreateERKNS0_11hidl_stringES7_RKNS0_8hidl_vecImEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context19scriptFieldIDCreateEmi */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptFieldIDCreate(unsigned long, int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context19scriptFieldIDCreateEmi(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context21allocationCreateTypedEmNS2_23AllocationMipmapControlEiPv */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationCreateTyped(unsigned long, android::hardware::renderscript::V1_0::AllocationMipmapControl, int, void*) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context21allocationCreateTypedEmNS2_23AllocationMipmapControlEiPv(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context21contextDeinitToClientEv */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextDeinitToClient() */
int _ZN7android8hardware12renderscript4V1_014implementation7Context21contextDeinitToClientEv(void);

/* Symbol: HIDL_FETCH_IDevice */
/* Demangled: HIDL_FETCH_IDevice */
int HIDL_FETCH_IDevice(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context17allocation3DWriteEmjjjjjjjRKNS0_8hidl_vecIhEEm */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocation3DWrite(unsigned long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context17allocation3DWriteEmjjjjjjjRKNS0_8hidl_vecIhEEm(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context22allocationCopyToBitmapEmPvm */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationCopyToBitmap(unsigned long, void*, unsigned long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context22allocationCopyToBitmapEmPvm(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context25allocationGetNativeWindowEm */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationGetNativeWindow(unsigned long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context25allocationGetNativeWindowEm(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context26allocationShareBufferQueueEmm */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationShareBufferQueue(unsigned long, unsigned long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context26allocationShareBufferQueueEmm(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context7getNameEmNSt3__18functionIFvRKNS0_11hidl_stringEEEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::getName(unsigned long, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context7getNameEmNSt3__18functionIFvRKNS0_11hidl_stringEEEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context10contextLogEv */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextLog() */
int _ZN7android8hardware12renderscript4V1_014implementation7Context10contextLogEv(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptInvokeVEmjRKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptInvokeV(unsigned long, unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptInvokeVEmjRKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context14scriptSetVarVEEmjRKNS0_8hidl_vecIhEEmRKNS5_IjEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarVE(unsigned long, unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned long, android::hardware::hidl_vec<unsigned int> const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context14scriptSetVarVEEmjRKNS0_8hidl_vecIhEEmRKNS5_IjEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context17allocationGetTypeEm */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationGetType(unsigned long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context17allocationGetTypeEm(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context18scriptGroupExecuteEm */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptGroupExecute(unsigned long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context18scriptGroupExecuteEm(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7ContextC1EjNS2_11ContextTypeEi */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::Context(unsigned int, android::hardware::renderscript::V1_0::ContextType, int) */
int _ZN7android8hardware12renderscript4V1_014implementation7ContextC1EjNS2_11ContextTypeEi(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context21allocationElementReadEmjjjjPvmm */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationElementRead(unsigned long, unsigned int, unsigned int, unsigned int, unsigned int, void*, unsigned long, unsigned long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context21allocationElementReadEmjjjjPvmm(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13elementCreateENS2_8DataTypeENS2_8DataKindEbj */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::elementCreate(android::hardware::renderscript::V1_0::DataType, android::hardware::renderscript::V1_0::DataKind, bool, unsigned int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13elementCreateENS2_8DataTypeENS2_8DataKindEbj(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context14allocationReadEmPvm */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationRead(unsigned long, void*, unsigned long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context14allocationReadEmPvm(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context17contextGetMessageEPvmNSt3__18functionIFvNS2_19MessageToClientTypeEmEEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextGetMessage(void*, unsigned long, std::__1::function<void (android::hardware::renderscript::V1_0::MessageToClientType, unsigned long)>) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context17contextGetMessageEPvmNSt3__18functionIFvNS2_19MessageToClientTypeEmEEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context17scriptSetTimeZoneEmRKNS0_11hidl_stringE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetTimeZone(unsigned long, android::hardware::hidl_string const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context17scriptSetTimeZoneEmRKNS0_11hidl_stringE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context18contextSetCacheDirERKNS0_11hidl_stringE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextSetCacheDir(android::hardware::hidl_string const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context18contextSetCacheDirERKNS0_11hidl_stringE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context19contextInitToClientEv */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextInitToClient() */
int _ZN7android8hardware12renderscript4V1_014implementation7Context19contextInitToClientEv(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13closureCreateEmmRKNS0_8hidl_vecImEERKNS5_IlEERKNS5_IiEES8_S8_ */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::closureCreate(unsigned long, unsigned long, android::hardware::hidl_vec<unsigned long> const&, android::hardware::hidl_vec<long> const&, android::hardware::hidl_vec<int> const&, android::hardware::hidl_vec<unsigned long> const&, android::hardware::hidl_vec<unsigned long> const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13closureCreateEmmRKNS0_8hidl_vecImEERKNS5_IlEERKNS5_IiEES8_S8_(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context15scriptSetVarObjEmjm */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarObj(unsigned long, unsigned int, unsigned long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context15scriptSetVarObjEmjm(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context16allocation2DReadEmjjjNS2_21AllocationCubemapFaceEjjPvmm */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocation2DRead(unsigned long, unsigned int, unsigned int, unsigned int, android::hardware::renderscript::V1_0::AllocationCubemapFace, unsigned int, unsigned int, void*, unsigned long, unsigned long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context16allocation2DReadEmjjjNS2_21AllocationCubemapFaceEjjPvmm(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context10objDestroyEm */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::objDestroy(unsigned long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context10objDestroyEm(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context20scriptInvokeIDCreateEmi */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptInvokeIDCreate(unsigned long, int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context20scriptInvokeIDCreateEmi(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context20scriptKernelIDCreateEmii */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptKernelIDCreate(unsigned long, int, int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context20scriptKernelIDCreateEmii(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context21scriptIntrinsicCreateENS2_17ScriptIntrinsicIDEm */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptIntrinsicCreate(android::hardware::renderscript::V1_0::ScriptIntrinsicID, unsigned long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context21scriptIntrinsicCreateENS2_17ScriptIntrinsicIDEm(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context26allocationCreateFromBitmapEmNS2_23AllocationMipmapControlERKNS0_8hidl_vecIhEEi */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationCreateFromBitmap(unsigned long, android::hardware::renderscript::V1_0::AllocationMipmapControl, android::hardware::hidl_vec<unsigned char> const&, int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context26allocationCreateFromBitmapEmNS2_23AllocationMipmapControlERKNS0_8hidl_vecIhEEi(void);

/* Symbol: _ZTCN7android8hardware12renderscript4V1_014implementation7ContextE0_NS2_8IContextE */
/* Demangled: construction vtable for android::hardware::renderscript::V1_0::IContext-in-android::hardware::renderscript::V1_0::implementation::Context */
extern void* _ZTCN7android8hardware12renderscript4V1_014implementation7ContextE0_NS2_8IContextE;

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarVEmjRKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarV(unsigned long, unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarVEmjRKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7ContextC2EjNS2_11ContextTypeEi */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::Context(unsigned int, android::hardware::renderscript::V1_0::ContextType, int) */
int _ZN7android8hardware12renderscript4V1_014implementation7ContextC2EjNS2_11ContextTypeEi(void);

/* Symbol: _ZTVN7android8hardware12renderscript4V1_014implementation6DeviceE */
/* Demangled: vtable for android::hardware::renderscript::V1_0::implementation::Device */
extern void* _ZTVN7android8hardware12renderscript4V1_014implementation6DeviceE;

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context10assignNameEmRKNS0_11hidl_stringE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::assignName(unsigned long, android::hardware::hidl_string const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context10assignNameEmRKNS0_11hidl_stringE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context16allocationIoSendEm */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationIoSend(unsigned long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context16allocationIoSendEm(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13contextFinishEv */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextFinish() */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13contextFinishEv(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13samplerCreateENS2_12SamplerValueES5_S5_S5_S5_f */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::samplerCreate(android::hardware::renderscript::V1_0::SamplerValue, android::hardware::renderscript::V1_0::SamplerValue, android::hardware::renderscript::V1_0::SamplerValue, android::hardware::renderscript::V1_0::SamplerValue, android::hardware::renderscript::V1_0::SamplerValue, float) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13samplerCreateENS2_12SamplerValueES5_S5_S5_S5_f(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context25allocationSetNativeWindowEmm */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationSetNativeWindow(unsigned long, unsigned long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context25allocationSetNativeWindowEmm(void);

/* Symbol: _ZTCN7android8hardware12renderscript4V1_014implementation6DeviceE0_NS2_7IDeviceE */
/* Demangled: construction vtable for android::hardware::renderscript::V1_0::IDevice-in-android::hardware::renderscript::V1_0::implementation::Device */
extern void* _ZTCN7android8hardware12renderscript4V1_014implementation6DeviceE0_NS2_7IDeviceE;

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarFEmjf */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarF(unsigned long, unsigned int, float) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarFEmjf(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context21typeGetNativeMetadataEmNSt3__18functionIFvRKNS0_8hidl_vecImEEEEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::typeGetNativeMetadata(unsigned long, std::__1::function<void (android::hardware::hidl_vec<unsigned long> const&)>) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context21typeGetNativeMetadataEmNSt3__18functionIFvRKNS0_8hidl_vecImEEEEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context22allocationElementWriteEmjjjjRKNS0_8hidl_vecIhEEm */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationElementWrite(unsigned long, unsigned int, unsigned int, unsigned int, unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context22allocationElementWriteEmjjjjRKNS0_8hidl_vecIhEEm(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context30allocationCubeCreateFromBitmapEmNS2_23AllocationMipmapControlERKNS0_8hidl_vecIhEEi */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationCubeCreateFromBitmap(unsigned long, android::hardware::renderscript::V1_0::AllocationMipmapControl, android::hardware::hidl_vec<unsigned char> const&, int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context30allocationCubeCreateFromBitmapEmNS2_23AllocationMipmapControlERKNS0_8hidl_vecIhEEi(void);

/* Symbol: _ZTVN7android8hardware12renderscript4V1_014implementation7ContextE */
/* Demangled: vtable for android::hardware::renderscript::V1_0::implementation::Context */
extern void* _ZTVN7android8hardware12renderscript4V1_014implementation7ContextE;

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation6DeviceC1Ev */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Device::Device() */
int _ZN7android8hardware12renderscript4V1_014implementation6DeviceC1Ev(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context12scriptInvokeEmj */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptInvoke(unsigned long, unsigned int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context12scriptInvokeEmj(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptForEachEmjRKNS0_8hidl_vecImEEmRKNS5_IhEEPv */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptForEach(unsigned long, unsigned int, android::hardware::hidl_vec<unsigned long> const&, unsigned long, android::hardware::hidl_vec<unsigned char> const&, void*) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptForEachEmjRKNS0_8hidl_vecImEEmRKNS5_IhEEPv(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context20allocationGetPointerEmjNS2_21AllocationCubemapFaceEjNSt3__18functionIFvPvmEEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationGetPointer(unsigned long, unsigned int, android::hardware::renderscript::V1_0::AllocationCubemapFace, unsigned int, std::__1::function<void (void*, unsigned long)>) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context20allocationGetPointerEmjNS2_21AllocationCubemapFaceEjNSt3__18functionIFvPvmEEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context20scriptGroupSetOutputEmmm */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptGroupSetOutput(unsigned long, unsigned long, unsigned long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context20scriptGroupSetOutputEmmm(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context21allocationCopy3DRangeEmjjjjjjjmjjjj */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationCopy3DRange(unsigned long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned long, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context21allocationCopy3DRangeEmjjjjjjjmjjjj(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context23allocationAdapterOffsetEmRKNS0_8hidl_vecIjEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationAdapterOffset(unsigned long, android::hardware::hidl_vec<unsigned int> const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context23allocationAdapterOffsetEmRKNS0_8hidl_vecIjEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context24elementGetNativeMetadataEmNSt3__18functionIFvRKNS0_8hidl_vecIjEEEEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::elementGetNativeMetadata(unsigned long, std::__1::function<void (android::hardware::hidl_vec<unsigned int> const&)>) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context24elementGetNativeMetadataEmNSt3__18functionIFvRKNS0_8hidl_vecIjEEEEE(void);

/* Symbol: _ZTTN7android8hardware12renderscript4V1_014implementation6DeviceE */
/* Demangled: VTT for android::hardware::renderscript::V1_0::implementation::Device */
extern void* _ZTTN7android8hardware12renderscript4V1_014implementation6DeviceE;

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context12scriptReduceEmjRKNS0_8hidl_vecImEEmPv */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptReduce(unsigned long, unsigned int, android::hardware::hidl_vec<unsigned long> const&, unsigned long, void*) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context12scriptReduceEmjRKNS0_8hidl_vecImEEmPv(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context19allocationIoReceiveEm */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationIoReceive(unsigned long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context19allocationIoReceiveEm(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context20elementComplexCreateERKNS0_8hidl_vecImEERKNS5_INS0_11hidl_stringEEES8_ */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::elementComplexCreate(android::hardware::hidl_vec<unsigned long> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&, android::hardware::hidl_vec<unsigned long> const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context20elementComplexCreateERKNS0_8hidl_vecImEERKNS5_INS0_11hidl_stringEEES8_(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context21elementGetSubElementsEmmNSt3__18functionIFvRKNS0_8hidl_vecImEERKNS7_INS0_11hidl_stringEEESA_EEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::elementGetSubElements(unsigned long, unsigned long, std::__1::function<void (android::hardware::hidl_vec<unsigned long> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&, android::hardware::hidl_vec<unsigned long> const&)>) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context21elementGetSubElementsEmmNSt3__18functionIFvRKNS0_8hidl_vecImEERKNS7_INS0_11hidl_stringEEESA_EEE(void);

/* Symbol: _ZTTN7android8hardware12renderscript4V1_014implementation7ContextE */
/* Demangled: VTT for android::hardware::renderscript::V1_0::implementation::Context */
extern void* _ZTTN7android8hardware12renderscript4V1_014implementation7ContextE;

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation6Device13contextCreateEjNS2_11ContextTypeEi */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Device::contextCreate(unsigned int, android::hardware::renderscript::V1_0::ContextType, int) */
int _ZN7android8hardware12renderscript4V1_014implementation6Device13contextCreateEjNS2_11ContextTypeEi(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation6Device6getHalEv */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Device::getHal() */
int _ZN7android8hardware12renderscript4V1_014implementation6Device6getHalEv(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context19scriptGroupSetInputEmmm */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptGroupSetInput(unsigned long, unsigned long, unsigned long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context19scriptGroupSetInputEmmm(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context26allocationSetupBufferQueueEmj */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationSetupBufferQueue(unsigned long, unsigned int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context26allocationSetupBufferQueueEmj(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context18contextSetPriorityENS2_16ThreadPrioritiesE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextSetPriority(android::hardware::renderscript::V1_0::ThreadPriorities) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context18contextSetPriorityENS2_16ThreadPrioritiesE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context23allocationAdapterCreateEmm */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationAdapterCreate(unsigned long, unsigned long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context23allocationAdapterCreateEmm(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

__END_DECLS

#endif /* BEGONIA_RE_ANDROID_HARDWARE_RENDERSCRIPT_1_0_IMPL_H */
