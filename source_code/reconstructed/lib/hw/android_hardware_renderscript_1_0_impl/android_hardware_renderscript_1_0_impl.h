/*
 * Reverse-Engineered ABI Specification for: android.hardware.renderscript@1.0-impl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
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

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context10typeCreateEyjjjbbNS2_9YuvFormatE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::typeCreate(unsigned long long, unsigned int, unsigned int, unsigned int, bool, bool, android::hardware::renderscript::V1_0::YuvFormat) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context10typeCreateEyjjjbbNS2_9YuvFormatE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context16allocation2DReadEyjjjNS2_21AllocationCubemapFaceEjjPvyy */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocation2DRead(unsigned long long, unsigned int, unsigned int, unsigned int, android::hardware::renderscript::V1_0::AllocationCubemapFace, unsigned int, unsigned int, void*, unsigned long long, unsigned long long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context16allocation2DReadEyjjjNS2_21AllocationCubemapFaceEjjPvyy(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context17allocationSyncAllEyNS2_19AllocationUsageTypeE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationSyncAll(unsigned long long, android::hardware::renderscript::V1_0::AllocationUsageType) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context17allocationSyncAllEyNS2_19AllocationUsageTypeE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context18contextSendMessageEjRKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextSendMessage(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context18contextSendMessageEjRKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context12scriptInvokeEyj */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptInvoke(unsigned long long, unsigned int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context12scriptInvokeEyj(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context14contextDestroyEv */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextDestroy() */
int _ZN7android8hardware12renderscript4V1_014implementation7Context14contextDestroyEv(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context24elementGetNativeMetadataEyNSt3__18functionIFvRKNS0_8hidl_vecIjEEEEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::elementGetNativeMetadata(unsigned long long, std::__1::function<void (android::hardware::hidl_vec<unsigned int> const&)>) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context24elementGetNativeMetadataEyNSt3__18functionIFvRKNS0_8hidl_vecIjEEEEE(void);

/* Symbol: _ZTCN7android8hardware12renderscript4V1_014implementation6DeviceE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::renderscript::V1_0::implementation::Device */
extern void* _ZTCN7android8hardware12renderscript4V1_014implementation6DeviceE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context10objDestroyEy */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::objDestroy(unsigned long long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context10objDestroyEy(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context17allocation3DWriteEyjjjjjjjRKNS0_8hidl_vecIhEEy */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocation3DWrite(unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned long long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context17allocation3DWriteEyjjjjjjjRKNS0_8hidl_vecIhEEy(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context21elementGetSubElementsEyyNSt3__18functionIFvRKNS0_8hidl_vecIyEERKNS7_INS0_11hidl_stringEEESA_EEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::elementGetSubElements(unsigned long long, unsigned long long, std::__1::function<void (android::hardware::hidl_vec<unsigned long long> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&, android::hardware::hidl_vec<unsigned long long> const&)>) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context21elementGetSubElementsEyyNSt3__18functionIFvRKNS0_8hidl_vecIyEERKNS7_INS0_11hidl_stringEEESA_EEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context21scriptIntrinsicCreateENS2_17ScriptIntrinsicIDEy */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptIntrinsicCreate(android::hardware::renderscript::V1_0::ScriptIntrinsicID, unsigned long long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context21scriptIntrinsicCreateENS2_17ScriptIntrinsicIDEy(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context23allocationAdapterOffsetEyRKNS0_8hidl_vecIjEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationAdapterOffset(unsigned long long, android::hardware::hidl_vec<unsigned int> const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context23allocationAdapterOffsetEyRKNS0_8hidl_vecIjEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context26allocationShareBufferQueueEyy */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationShareBufferQueue(unsigned long long, unsigned long long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context26allocationShareBufferQueueEyy(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context26allocationSetupBufferQueueEyj */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationSetupBufferQueue(unsigned long long, unsigned int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context26allocationSetupBufferQueueEyj(void);

/* Symbol: _ZTCN7android8hardware12renderscript4V1_014implementation7ContextE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::renderscript::V1_0::implementation::Context */
extern void* _ZTCN7android8hardware12renderscript4V1_014implementation7ContextE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation6DeviceC2Ev */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Device::Device() */
int _ZN7android8hardware12renderscript4V1_014implementation6DeviceC2Ev(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context20allocationGetPointerEyjNS2_21AllocationCubemapFaceEjNSt3__18functionIFvPvyEEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationGetPointer(unsigned long long, unsigned int, android::hardware::renderscript::V1_0::AllocationCubemapFace, unsigned int, std::__1::function<void (void*, unsigned long long)>) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context20allocationGetPointerEyjNS2_21AllocationCubemapFaceEjNSt3__18functionIFvPvyEEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context26allocationCreateFromBitmapEyNS2_23AllocationMipmapControlERKNS0_8hidl_vecIhEEi */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationCreateFromBitmap(unsigned long long, android::hardware::renderscript::V1_0::AllocationMipmapControl, android::hardware::hidl_vec<unsigned char> const&, int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context26allocationCreateFromBitmapEyNS2_23AllocationMipmapControlERKNS0_8hidl_vecIhEEi(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptCCreateERKNS0_11hidl_stringES7_RKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptCCreate(android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptCCreateERKNS0_11hidl_stringES7_RKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context15scriptSetVarObjEyjy */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarObj(unsigned long long, unsigned int, unsigned long long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context15scriptSetVarObjEyjy(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context16allocationIoSendEy */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationIoSend(unsigned long long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context16allocationIoSendEy(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context16closureSetGlobalEyyxi */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::closureSetGlobal(unsigned long long, unsigned long long, long long, int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context16closureSetGlobalEyyxi(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context22allocationElementWriteEyjjjjRKNS0_8hidl_vecIhEEy */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationElementWrite(unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned long long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context22allocationElementWriteEyjjjjRKNS0_8hidl_vecIhEEy(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context7getNameEyNSt3__18functionIFvRKNS0_11hidl_stringEEEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::getName(unsigned long long, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context7getNameEyNSt3__18functionIFvRKNS0_11hidl_stringEEEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation6Device12mDispatchHalE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Device::mDispatchHal */
extern void* _ZN7android8hardware12renderscript4V1_014implementation6Device12mDispatchHalE;

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptInvokeVEyjRKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptInvokeV(unsigned long long, unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptInvokeVEyjRKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarDEyjd */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarD(unsigned long long, unsigned int, double) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarDEyjd(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context17allocation2DWriteEyjjjNS2_21AllocationCubemapFaceEjjRKNS0_8hidl_vecIhEEy */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocation2DWrite(unsigned long long, unsigned int, unsigned int, unsigned int, android::hardware::renderscript::V1_0::AllocationCubemapFace, unsigned int, unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned long long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context17allocation2DWriteEyjjjNS2_21AllocationCubemapFaceEjjRKNS0_8hidl_vecIhEEy(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context19invokeClosureCreateEyRKNS0_8hidl_vecIhEERKNS5_IyEERKNS5_IxEERKNS5_IiEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::invokeClosureCreate(unsigned long long, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned long long> const&, android::hardware::hidl_vec<long long> const&, android::hardware::hidl_vec<int> const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context19invokeClosureCreateEyRKNS0_8hidl_vecIhEERKNS5_IyEERKNS5_IxEERKNS5_IiEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context21allocationElementReadEyjjjjPvyy */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationElementRead(unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, void*, unsigned long long, unsigned long long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context21allocationElementReadEyjjjjPvyy(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context21contextDeinitToClientEv */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextDeinitToClient() */
int _ZN7android8hardware12renderscript4V1_014implementation7Context21contextDeinitToClientEv(void);

/* Symbol: HIDL_FETCH_IDevice */
/* Demangled: HIDL_FETCH_IDevice */
int HIDL_FETCH_IDevice(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context12scriptReduceEyjRKNS0_8hidl_vecIyEEyPv */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptReduce(unsigned long long, unsigned int, android::hardware::hidl_vec<unsigned long long> const&, unsigned long long, void*) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context12scriptReduceEyjRKNS0_8hidl_vecIyEEyPv(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context17allocation1DWriteEyjjjRKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocation1DWrite(unsigned long long, unsigned int, unsigned int, unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context17allocation1DWriteEyjjjRKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context10contextLogEv */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextLog() */
int _ZN7android8hardware12renderscript4V1_014implementation7Context10contextLogEv(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context17scriptSetTimeZoneEyRKNS0_11hidl_stringE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetTimeZone(unsigned long long, android::hardware::hidl_string const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context17scriptSetTimeZoneEyRKNS0_11hidl_stringE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context19allocationIoReceiveEy */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationIoReceive(unsigned long long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context19allocationIoReceiveEy(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context20elementComplexCreateERKNS0_8hidl_vecIyEERKNS5_INS0_11hidl_stringEEES8_ */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::elementComplexCreate(android::hardware::hidl_vec<unsigned long long> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&, android::hardware::hidl_vec<unsigned long long> const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context20elementComplexCreateERKNS0_8hidl_vecIyEERKNS5_INS0_11hidl_stringEEES8_(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7ContextC1EjNS2_11ContextTypeEi */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::Context(unsigned int, android::hardware::renderscript::V1_0::ContextType, int) */
int _ZN7android8hardware12renderscript4V1_014implementation7ContextC1EjNS2_11ContextTypeEi(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarIEyji */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarI(unsigned long long, unsigned int, int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarIEyji(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13elementCreateENS2_8DataTypeENS2_8DataKindEbj */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::elementCreate(android::hardware::renderscript::V1_0::DataType, android::hardware::renderscript::V1_0::DataKind, bool, unsigned int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13elementCreateENS2_8DataTypeENS2_8DataKindEbj(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context14scriptSetVarVEEyjRKNS0_8hidl_vecIhEEyRKNS5_IjEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarVE(unsigned long long, unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned long long, android::hardware::hidl_vec<unsigned int> const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context14scriptSetVarVEEyjRKNS0_8hidl_vecIhEEyRKNS5_IjEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context18contextSetCacheDirERKNS0_11hidl_stringE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextSetCacheDir(android::hardware::hidl_string const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context18contextSetCacheDirERKNS0_11hidl_stringE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context18scriptGroup2CreateERKNS0_11hidl_stringES7_RKNS0_8hidl_vecIyEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptGroup2Create(android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_vec<unsigned long long> const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context18scriptGroup2CreateERKNS0_11hidl_stringES7_RKNS0_8hidl_vecIyEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context19contextInitToClientEv */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextInitToClient() */
int _ZN7android8hardware12renderscript4V1_014implementation7Context19contextInitToClientEv(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context20scriptBindAllocationEyyj */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptBindAllocation(unsigned long long, unsigned long long, unsigned int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context20scriptBindAllocationEyyj(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context21allocationCopy3DRangeEyjjjjjjjyjjjj */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationCopy3DRange(unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context21allocationCopy3DRangeEyjjjjjjjyjjjj(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context25allocationSetNativeWindowEyy */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationSetNativeWindow(unsigned long long, unsigned long long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context25allocationSetNativeWindowEyy(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptGetVarVEyjyNSt3__18functionIFvRKNS0_8hidl_vecIhEEEEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptGetVarV(unsigned long long, unsigned int, unsigned long long, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptGetVarVEyjyNSt3__18functionIFvRKNS0_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context18allocationResize1DEyj */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationResize1D(unsigned long long, unsigned int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context18allocationResize1DEyj(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context19scriptFieldIDCreateEyi */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptFieldIDCreate(unsigned long long, int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context19scriptFieldIDCreateEyi(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarVEyjRKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarV(unsigned long long, unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarVEyjRKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context18contextPeekMessageENSt3__18functionIFvNS2_19MessageToClientTypeEyjEEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextPeekMessage(std::__1::function<void (android::hardware::renderscript::V1_0::MessageToClientType, unsigned long long, unsigned int)>) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context18contextPeekMessageENSt3__18functionIFvNS2_19MessageToClientTypeEyjEEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context10assignNameEyRKNS0_11hidl_stringE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::assignName(unsigned long long, android::hardware::hidl_string const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context10assignNameEyRKNS0_11hidl_stringE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context17contextGetMessageEPvyNSt3__18functionIFvNS2_19MessageToClientTypeEyEEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextGetMessage(void*, unsigned long long, std::__1::function<void (android::hardware::renderscript::V1_0::MessageToClientType, unsigned long long)>) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context17contextGetMessageEPvyNSt3__18functionIFvNS2_19MessageToClientTypeEyEEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context22allocationCopyToBitmapEyPvy */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationCopyToBitmap(unsigned long long, void*, unsigned long long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context22allocationCopyToBitmapEyPvy(void);

/* Symbol: _ZTCN7android8hardware12renderscript4V1_014implementation7ContextE0_NS2_8IContextE */
/* Demangled: construction vtable for android::hardware::renderscript::V1_0::IContext-in-android::hardware::renderscript::V1_0::implementation::Context */
extern void* _ZTCN7android8hardware12renderscript4V1_014implementation7ContextE0_NS2_8IContextE;

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptForEachEyjRKNS0_8hidl_vecIyEEyRKNS5_IhEEPv */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptForEach(unsigned long long, unsigned int, android::hardware::hidl_vec<unsigned long long> const&, unsigned long long, android::hardware::hidl_vec<unsigned char> const&, void*) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptForEachEyjRKNS0_8hidl_vecIyEEyRKNS5_IhEEPv(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context16allocation1DReadEyjjjPvy */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocation1DRead(unsigned long long, unsigned int, unsigned int, unsigned int, void*, unsigned long long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context16allocation1DReadEyjjjPvy(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context21allocationCreateTypedEyNS2_23AllocationMipmapControlEiPv */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationCreateTyped(unsigned long long, android::hardware::renderscript::V1_0::AllocationMipmapControl, int, void*) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context21allocationCreateTypedEyNS2_23AllocationMipmapControlEiPv(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7ContextC2EjNS2_11ContextTypeEi */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::Context(unsigned int, android::hardware::renderscript::V1_0::ContextType, int) */
int _ZN7android8hardware12renderscript4V1_014implementation7ContextC2EjNS2_11ContextTypeEi(void);

/* Symbol: _ZTVN7android8hardware12renderscript4V1_014implementation6DeviceE */
/* Demangled: vtable for android::hardware::renderscript::V1_0::implementation::Device */
extern void* _ZTVN7android8hardware12renderscript4V1_014implementation6DeviceE;

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13closureSetArgEyjPvi */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::closureSetArg(unsigned long long, unsigned int, void*, int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13closureSetArgEyjPvi(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context21allocationCopy2DRangeEyjjjNS2_21AllocationCubemapFaceEjjyjjjS5_ */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationCopy2DRange(unsigned long long, unsigned int, unsigned int, unsigned int, android::hardware::renderscript::V1_0::AllocationCubemapFace, unsigned int, unsigned int, unsigned long long, unsigned int, unsigned int, unsigned int, android::hardware::renderscript::V1_0::AllocationCubemapFace) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context21allocationCopy2DRangeEyjjjNS2_21AllocationCubemapFaceEjjyjjjS5_(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context23allocationAdapterCreateEyy */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationAdapterCreate(unsigned long long, unsigned long long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context23allocationAdapterCreateEyy(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context25allocationGenerateMipmapsEy */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationGenerateMipmaps(unsigned long long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context25allocationGenerateMipmapsEy(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13contextFinishEv */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextFinish() */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13contextFinishEv(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13samplerCreateENS2_12SamplerValueES5_S5_S5_S5_f */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::samplerCreate(android::hardware::renderscript::V1_0::SamplerValue, android::hardware::renderscript::V1_0::SamplerValue, android::hardware::renderscript::V1_0::SamplerValue, android::hardware::renderscript::V1_0::SamplerValue, android::hardware::renderscript::V1_0::SamplerValue, float) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13samplerCreateENS2_12SamplerValueES5_S5_S5_S5_f(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context14allocationReadEyPvy */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationRead(unsigned long long, void*, unsigned long long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context14allocationReadEyPvy(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context17scriptGroupCreateERKNS0_8hidl_vecIyEES8_S8_S8_S8_ */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptGroupCreate(android::hardware::hidl_vec<unsigned long long> const&, android::hardware::hidl_vec<unsigned long long> const&, android::hardware::hidl_vec<unsigned long long> const&, android::hardware::hidl_vec<unsigned long long> const&, android::hardware::hidl_vec<unsigned long long> const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context17scriptGroupCreateERKNS0_8hidl_vecIyEES8_S8_S8_S8_(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context20scriptGroupSetOutputEyyy */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptGroupSetOutput(unsigned long long, unsigned long long, unsigned long long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context20scriptGroupSetOutputEyyy(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context20scriptKernelIDCreateEyii */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptKernelIDCreate(unsigned long long, int, int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context20scriptKernelIDCreateEyii(void);

/* Symbol: _ZTCN7android8hardware12renderscript4V1_014implementation6DeviceE0_NS2_7IDeviceE */
/* Demangled: construction vtable for android::hardware::renderscript::V1_0::IDevice-in-android::hardware::renderscript::V1_0::implementation::Device */
extern void* _ZTCN7android8hardware12renderscript4V1_014implementation6DeviceE0_NS2_7IDeviceE;

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13closureCreateEyyRKNS0_8hidl_vecIyEERKNS5_IxEERKNS5_IiEES8_S8_ */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::closureCreate(unsigned long long, unsigned long long, android::hardware::hidl_vec<unsigned long long> const&, android::hardware::hidl_vec<long long> const&, android::hardware::hidl_vec<int> const&, android::hardware::hidl_vec<unsigned long long> const&, android::hardware::hidl_vec<unsigned long long> const&) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13closureCreateEyyRKNS0_8hidl_vecIyEERKNS5_IxEERKNS5_IiEES8_S8_(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context16allocation3DReadEyjjjjjjjPvyy */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocation3DRead(unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, void*, unsigned long long, unsigned long long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context16allocation3DReadEyjjjjjjjPvyy(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context20scriptInvokeIDCreateEyi */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptInvokeIDCreate(unsigned long long, int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context20scriptInvokeIDCreateEyi(void);

/* Symbol: _ZTVN7android8hardware12renderscript4V1_014implementation7ContextE */
/* Demangled: vtable for android::hardware::renderscript::V1_0::implementation::Context */
extern void* _ZTVN7android8hardware12renderscript4V1_014implementation7ContextE;

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation6DeviceC1Ev */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Device::Device() */
int _ZN7android8hardware12renderscript4V1_014implementation6DeviceC1Ev(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context19scriptGroupSetInputEyyy */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptGroupSetInput(unsigned long long, unsigned long long, unsigned long long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context19scriptGroupSetInputEyyy(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context30allocationCubeCreateFromBitmapEyNS2_23AllocationMipmapControlERKNS0_8hidl_vecIhEEi */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationCubeCreateFromBitmap(unsigned long long, android::hardware::renderscript::V1_0::AllocationMipmapControl, android::hardware::hidl_vec<unsigned char> const&, int) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context30allocationCubeCreateFromBitmapEyNS2_23AllocationMipmapControlERKNS0_8hidl_vecIhEEi(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void);

/* Symbol: _ZTTN7android8hardware12renderscript4V1_014implementation6DeviceE */
/* Demangled: VTT for android::hardware::renderscript::V1_0::implementation::Device */
extern void* _ZTTN7android8hardware12renderscript4V1_014implementation6DeviceE;

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarJEyjx */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarJ(unsigned long long, unsigned int, long long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarJEyjx(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context25allocationGetNativeWindowEy */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationGetNativeWindow(unsigned long long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context25allocationGetNativeWindowEy(void);

/* Symbol: _ZTTN7android8hardware12renderscript4V1_014implementation7ContextE */
/* Demangled: VTT for android::hardware::renderscript::V1_0::implementation::Context */
extern void* _ZTTN7android8hardware12renderscript4V1_014implementation7ContextE;

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation6Device13contextCreateEjNS2_11ContextTypeEi */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Device::contextCreate(unsigned int, android::hardware::renderscript::V1_0::ContextType, int) */
int _ZN7android8hardware12renderscript4V1_014implementation6Device13contextCreateEjNS2_11ContextTypeEi(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation6Device6getHalEv */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Device::getHal() */
int _ZN7android8hardware12renderscript4V1_014implementation6Device6getHalEv(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context17allocationGetTypeEy */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationGetType(unsigned long long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context17allocationGetTypeEy(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context18scriptGroupExecuteEy */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptGroupExecute(unsigned long long) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context18scriptGroupExecuteEy(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context21typeGetNativeMetadataEyNSt3__18functionIFvRKNS0_8hidl_vecIyEEEEE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::typeGetNativeMetadata(unsigned long long, std::__1::function<void (android::hardware::hidl_vec<unsigned long long> const&)>) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context21typeGetNativeMetadataEyNSt3__18functionIFvRKNS0_8hidl_vecIyEEEEE(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarFEyjf */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarF(unsigned long long, unsigned int, float) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarFEyjf(void);

/* Symbol: _ZN7android8hardware12renderscript4V1_014implementation7Context18contextSetPriorityENS2_16ThreadPrioritiesE */
/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextSetPriority(android::hardware::renderscript::V1_0::ThreadPriorities) */
int _ZN7android8hardware12renderscript4V1_014implementation7Context18contextSetPriorityENS2_16ThreadPrioritiesE(void);

__END_DECLS

#endif /* BEGONIA_RE_ANDROID_HARDWARE_RENDERSCRIPT_1_0_IMPL_H */
