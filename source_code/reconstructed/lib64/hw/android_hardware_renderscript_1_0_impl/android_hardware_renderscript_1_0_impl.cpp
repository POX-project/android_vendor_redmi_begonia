/*
 * Reverse-Engineered Source for: android.hardware.renderscript@1.0-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "android_hardware_renderscript_1_0_impl"

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
#include "android_hardware_renderscript_1_0_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextSendMessage(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context18contextSendMessageEjRKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context18contextSendMessageEjRKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextDestroy() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context14contextDestroyEv(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context14contextDestroyEv() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptGroupCreate(android::hardware::hidl_vec<unsigned long> const&, android::hardware::hidl_vec<unsigned long> const&, android::hardware::hidl_vec<unsigned long> const&, android::hardware::hidl_vec<unsigned long> const&, android::hardware::hidl_vec<unsigned long> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context17scriptGroupCreateERKNS0_8hidl_vecImEES8_S8_S8_S8_(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context17scriptGroupCreateERKNS0_8hidl_vecImEES8_S8_S8_S8_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::renderscript::V1_0::implementation::Device */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware12renderscript4V1_014implementation6DeviceE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::typeCreate(unsigned long, unsigned int, unsigned int, unsigned int, bool, bool, android::hardware::renderscript::V1_0::YuvFormat) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context10typeCreateEmjjjbbNS2_9YuvFormatE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context10typeCreateEmjjjbbNS2_9YuvFormatE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocation1DRead(unsigned long, unsigned int, unsigned int, unsigned int, void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context16allocation1DReadEmjjjPvm(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context16allocation1DReadEmjjjPvm() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::closureSetGlobal(unsigned long, unsigned long, long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context16closureSetGlobalEmmli(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context16closureSetGlobalEmmli() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::invokeClosureCreate(unsigned long, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned long> const&, android::hardware::hidl_vec<long> const&, android::hardware::hidl_vec<int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context19invokeClosureCreateEmRKNS0_8hidl_vecIhEERKNS5_ImEERKNS5_IlEERKNS5_IiEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context19invokeClosureCreateEmRKNS0_8hidl_vecIhEERKNS5_ImEERKNS5_IlEERKNS5_IiEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptBindAllocation(unsigned long, unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context20scriptBindAllocationEmmj(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context20scriptBindAllocationEmmj() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationCopy2DRange(unsigned long, unsigned int, unsigned int, unsigned int, android::hardware::renderscript::V1_0::AllocationCubemapFace, unsigned int, unsigned int, unsigned long, unsigned int, unsigned int, unsigned int, android::hardware::renderscript::V1_0::AllocationCubemapFace) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context21allocationCopy2DRangeEmjjjNS2_21AllocationCubemapFaceEjjmjjjS5_(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context21allocationCopy2DRangeEmjjjNS2_21AllocationCubemapFaceEjjmjjjS5_() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarD(unsigned long, unsigned int, double) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarDEmjd(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarDEmjd() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::renderscript::V1_0::implementation::Context */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware12renderscript4V1_014implementation7ContextE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::renderscript::V1_0::implementation::Device::Device() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation6DeviceC2Ev(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation6DeviceC2Ev() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptGetVarV(unsigned long, unsigned int, unsigned long, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptGetVarVEmjmNSt3__18functionIFvRKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13scriptGetVarVEmjmNSt3__18functionIFvRKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarJ(unsigned long, unsigned int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarJEmjl(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarJEmjl() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextPeekMessage(std::__1::function<void (android::hardware::renderscript::V1_0::MessageToClientType, unsigned long, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context18contextPeekMessageENSt3__18functionIFvNS2_19MessageToClientTypeEmjEEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context18contextPeekMessageENSt3__18functionIFvNS2_19MessageToClientTypeEmjEEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationGenerateMipmaps(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context25allocationGenerateMipmapsEm(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context25allocationGenerateMipmapsEm() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptCCreate(android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptCCreateERKNS0_11hidl_stringES7_RKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13scriptCCreateERKNS0_11hidl_stringES7_RKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocation3DRead(unsigned long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, void*, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context16allocation3DReadEmjjjjjjjPvmm(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context16allocation3DReadEmjjjjjjjPvmm() called");
    return 0;
}

/* Exported Object: android::hardware::renderscript::V1_0::implementation::Device::mDispatchHal */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware12renderscript4V1_014implementation6Device12mDispatchHalE = NULL;

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarI(unsigned long, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarIEmji(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarIEmji() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocation2DWrite(unsigned long, unsigned int, unsigned int, unsigned int, android::hardware::renderscript::V1_0::AllocationCubemapFace, unsigned int, unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context17allocation2DWriteEmjjjNS2_21AllocationCubemapFaceEjjRKNS0_8hidl_vecIhEEm(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context17allocation2DWriteEmjjjNS2_21AllocationCubemapFaceEjjRKNS0_8hidl_vecIhEEm() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationSyncAll(unsigned long, android::hardware::renderscript::V1_0::AllocationUsageType) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context17allocationSyncAllEmNS2_19AllocationUsageTypeE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context17allocationSyncAllEmNS2_19AllocationUsageTypeE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::closureSetArg(unsigned long, unsigned int, void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13closureSetArgEmjPvi(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13closureSetArgEmjPvi() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocation1DWrite(unsigned long, unsigned int, unsigned int, unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context17allocation1DWriteEmjjjRKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context17allocation1DWriteEmjjjRKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationResize1D(unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context18allocationResize1DEmj(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context18allocationResize1DEmj() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptGroup2Create(android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_vec<unsigned long> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context18scriptGroup2CreateERKNS0_11hidl_stringES7_RKNS0_8hidl_vecImEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context18scriptGroup2CreateERKNS0_11hidl_stringES7_RKNS0_8hidl_vecImEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptFieldIDCreate(unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context19scriptFieldIDCreateEmi(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context19scriptFieldIDCreateEmi() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationCreateTyped(unsigned long, android::hardware::renderscript::V1_0::AllocationMipmapControl, int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context21allocationCreateTypedEmNS2_23AllocationMipmapControlEiPv(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context21allocationCreateTypedEmNS2_23AllocationMipmapControlEiPv() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextDeinitToClient() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context21contextDeinitToClientEv(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context21contextDeinitToClientEv() called");
    return 0;
}

/* Demangled: HIDL_FETCH_IDevice */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IDevice(void) {
    ALOGD("HIDL_FETCH_IDevice() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocation3DWrite(unsigned long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context17allocation3DWriteEmjjjjjjjRKNS0_8hidl_vecIhEEm(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context17allocation3DWriteEmjjjjjjjRKNS0_8hidl_vecIhEEm() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationCopyToBitmap(unsigned long, void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context22allocationCopyToBitmapEmPvm(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context22allocationCopyToBitmapEmPvm() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationGetNativeWindow(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context25allocationGetNativeWindowEm(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context25allocationGetNativeWindowEm() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationShareBufferQueue(unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context26allocationShareBufferQueueEmm(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context26allocationShareBufferQueueEmm() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::getName(unsigned long, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context7getNameEmNSt3__18functionIFvRKNS0_11hidl_stringEEEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context7getNameEmNSt3__18functionIFvRKNS0_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextLog() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context10contextLogEv(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context10contextLogEv() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptInvokeV(unsigned long, unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptInvokeVEmjRKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13scriptInvokeVEmjRKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarVE(unsigned long, unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned long, android::hardware::hidl_vec<unsigned int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context14scriptSetVarVEEmjRKNS0_8hidl_vecIhEEmRKNS5_IjEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context14scriptSetVarVEEmjRKNS0_8hidl_vecIhEEmRKNS5_IjEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationGetType(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context17allocationGetTypeEm(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context17allocationGetTypeEm() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptGroupExecute(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context18scriptGroupExecuteEm(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context18scriptGroupExecuteEm() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::Context(unsigned int, android::hardware::renderscript::V1_0::ContextType, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7ContextC1EjNS2_11ContextTypeEi(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7ContextC1EjNS2_11ContextTypeEi() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationElementRead(unsigned long, unsigned int, unsigned int, unsigned int, unsigned int, void*, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context21allocationElementReadEmjjjjPvmm(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context21allocationElementReadEmjjjjPvmm() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::elementCreate(android::hardware::renderscript::V1_0::DataType, android::hardware::renderscript::V1_0::DataKind, bool, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13elementCreateENS2_8DataTypeENS2_8DataKindEbj(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13elementCreateENS2_8DataTypeENS2_8DataKindEbj() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationRead(unsigned long, void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context14allocationReadEmPvm(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context14allocationReadEmPvm() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextGetMessage(void*, unsigned long, std::__1::function<void (android::hardware::renderscript::V1_0::MessageToClientType, unsigned long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context17contextGetMessageEPvmNSt3__18functionIFvNS2_19MessageToClientTypeEmEEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context17contextGetMessageEPvmNSt3__18functionIFvNS2_19MessageToClientTypeEmEEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetTimeZone(unsigned long, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context17scriptSetTimeZoneEmRKNS0_11hidl_stringE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context17scriptSetTimeZoneEmRKNS0_11hidl_stringE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextSetCacheDir(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context18contextSetCacheDirERKNS0_11hidl_stringE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context18contextSetCacheDirERKNS0_11hidl_stringE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextInitToClient() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context19contextInitToClientEv(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context19contextInitToClientEv() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::closureCreate(unsigned long, unsigned long, android::hardware::hidl_vec<unsigned long> const&, android::hardware::hidl_vec<long> const&, android::hardware::hidl_vec<int> const&, android::hardware::hidl_vec<unsigned long> const&, android::hardware::hidl_vec<unsigned long> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13closureCreateEmmRKNS0_8hidl_vecImEERKNS5_IlEERKNS5_IiEES8_S8_(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13closureCreateEmmRKNS0_8hidl_vecImEERKNS5_IlEERKNS5_IiEES8_S8_() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarObj(unsigned long, unsigned int, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context15scriptSetVarObjEmjm(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context15scriptSetVarObjEmjm() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocation2DRead(unsigned long, unsigned int, unsigned int, unsigned int, android::hardware::renderscript::V1_0::AllocationCubemapFace, unsigned int, unsigned int, void*, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context16allocation2DReadEmjjjNS2_21AllocationCubemapFaceEjjPvmm(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context16allocation2DReadEmjjjNS2_21AllocationCubemapFaceEjjPvmm() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::objDestroy(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context10objDestroyEm(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context10objDestroyEm() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptInvokeIDCreate(unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context20scriptInvokeIDCreateEmi(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context20scriptInvokeIDCreateEmi() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptKernelIDCreate(unsigned long, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context20scriptKernelIDCreateEmii(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context20scriptKernelIDCreateEmii() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptIntrinsicCreate(android::hardware::renderscript::V1_0::ScriptIntrinsicID, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context21scriptIntrinsicCreateENS2_17ScriptIntrinsicIDEm(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context21scriptIntrinsicCreateENS2_17ScriptIntrinsicIDEm() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationCreateFromBitmap(unsigned long, android::hardware::renderscript::V1_0::AllocationMipmapControl, android::hardware::hidl_vec<unsigned char> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context26allocationCreateFromBitmapEmNS2_23AllocationMipmapControlERKNS0_8hidl_vecIhEEi(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context26allocationCreateFromBitmapEmNS2_23AllocationMipmapControlERKNS0_8hidl_vecIhEEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::renderscript::V1_0::IContext-in-android::hardware::renderscript::V1_0::implementation::Context */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware12renderscript4V1_014implementation7ContextE0_NS2_8IContextE = NULL;

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarV(unsigned long, unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarVEmjRKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarVEmjRKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::Context(unsigned int, android::hardware::renderscript::V1_0::ContextType, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7ContextC2EjNS2_11ContextTypeEi(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7ContextC2EjNS2_11ContextTypeEi() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::renderscript::V1_0::implementation::Device */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware12renderscript4V1_014implementation6DeviceE = NULL;

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::assignName(unsigned long, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context10assignNameEmRKNS0_11hidl_stringE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context10assignNameEmRKNS0_11hidl_stringE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationIoSend(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context16allocationIoSendEm(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context16allocationIoSendEm() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextFinish() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13contextFinishEv(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13contextFinishEv() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::samplerCreate(android::hardware::renderscript::V1_0::SamplerValue, android::hardware::renderscript::V1_0::SamplerValue, android::hardware::renderscript::V1_0::SamplerValue, android::hardware::renderscript::V1_0::SamplerValue, android::hardware::renderscript::V1_0::SamplerValue, float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13samplerCreateENS2_12SamplerValueES5_S5_S5_S5_f(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13samplerCreateENS2_12SamplerValueES5_S5_S5_S5_f() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationSetNativeWindow(unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context25allocationSetNativeWindowEmm(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context25allocationSetNativeWindowEmm() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::renderscript::V1_0::IDevice-in-android::hardware::renderscript::V1_0::implementation::Device */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware12renderscript4V1_014implementation6DeviceE0_NS2_7IDeviceE = NULL;

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarF(unsigned long, unsigned int, float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarFEmjf(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarFEmjf() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::typeGetNativeMetadata(unsigned long, std::__1::function<void (android::hardware::hidl_vec<unsigned long> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context21typeGetNativeMetadataEmNSt3__18functionIFvRKNS0_8hidl_vecImEEEEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context21typeGetNativeMetadataEmNSt3__18functionIFvRKNS0_8hidl_vecImEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationElementWrite(unsigned long, unsigned int, unsigned int, unsigned int, unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context22allocationElementWriteEmjjjjRKNS0_8hidl_vecIhEEm(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context22allocationElementWriteEmjjjjRKNS0_8hidl_vecIhEEm() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationCubeCreateFromBitmap(unsigned long, android::hardware::renderscript::V1_0::AllocationMipmapControl, android::hardware::hidl_vec<unsigned char> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context30allocationCubeCreateFromBitmapEmNS2_23AllocationMipmapControlERKNS0_8hidl_vecIhEEi(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context30allocationCubeCreateFromBitmapEmNS2_23AllocationMipmapControlERKNS0_8hidl_vecIhEEi() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::renderscript::V1_0::implementation::Context */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware12renderscript4V1_014implementation7ContextE = NULL;

/* Demangled: android::hardware::renderscript::V1_0::implementation::Device::Device() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation6DeviceC1Ev(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation6DeviceC1Ev() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptInvoke(unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context12scriptInvokeEmj(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context12scriptInvokeEmj() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptForEach(unsigned long, unsigned int, android::hardware::hidl_vec<unsigned long> const&, unsigned long, android::hardware::hidl_vec<unsigned char> const&, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptForEachEmjRKNS0_8hidl_vecImEEmRKNS5_IhEEPv(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13scriptForEachEmjRKNS0_8hidl_vecImEEmRKNS5_IhEEPv() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationGetPointer(unsigned long, unsigned int, android::hardware::renderscript::V1_0::AllocationCubemapFace, unsigned int, std::__1::function<void (void*, unsigned long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context20allocationGetPointerEmjNS2_21AllocationCubemapFaceEjNSt3__18functionIFvPvmEEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context20allocationGetPointerEmjNS2_21AllocationCubemapFaceEjNSt3__18functionIFvPvmEEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptGroupSetOutput(unsigned long, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context20scriptGroupSetOutputEmmm(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context20scriptGroupSetOutputEmmm() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationCopy3DRange(unsigned long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned long, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context21allocationCopy3DRangeEmjjjjjjjmjjjj(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context21allocationCopy3DRangeEmjjjjjjjmjjjj() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationAdapterOffset(unsigned long, android::hardware::hidl_vec<unsigned int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context23allocationAdapterOffsetEmRKNS0_8hidl_vecIjEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context23allocationAdapterOffsetEmRKNS0_8hidl_vecIjEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::elementGetNativeMetadata(unsigned long, std::__1::function<void (android::hardware::hidl_vec<unsigned int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context24elementGetNativeMetadataEmNSt3__18functionIFvRKNS0_8hidl_vecIjEEEEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context24elementGetNativeMetadataEmNSt3__18functionIFvRKNS0_8hidl_vecIjEEEEE() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::renderscript::V1_0::implementation::Device */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware12renderscript4V1_014implementation6DeviceE = NULL;

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptReduce(unsigned long, unsigned int, android::hardware::hidl_vec<unsigned long> const&, unsigned long, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context12scriptReduceEmjRKNS0_8hidl_vecImEEmPv(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context12scriptReduceEmjRKNS0_8hidl_vecImEEmPv() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationIoReceive(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context19allocationIoReceiveEm(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context19allocationIoReceiveEm() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::elementComplexCreate(android::hardware::hidl_vec<unsigned long> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&, android::hardware::hidl_vec<unsigned long> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context20elementComplexCreateERKNS0_8hidl_vecImEERKNS5_INS0_11hidl_stringEEES8_(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context20elementComplexCreateERKNS0_8hidl_vecImEERKNS5_INS0_11hidl_stringEEES8_() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::elementGetSubElements(unsigned long, unsigned long, std::__1::function<void (android::hardware::hidl_vec<unsigned long> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&, android::hardware::hidl_vec<unsigned long> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context21elementGetSubElementsEmmNSt3__18functionIFvRKNS0_8hidl_vecImEERKNS7_INS0_11hidl_stringEEESA_EEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context21elementGetSubElementsEmmNSt3__18functionIFvRKNS0_8hidl_vecImEERKNS7_INS0_11hidl_stringEEESA_EEE() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::renderscript::V1_0::implementation::Context */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware12renderscript4V1_014implementation7ContextE = NULL;

/* Demangled: android::hardware::renderscript::V1_0::implementation::Device::contextCreate(unsigned int, android::hardware::renderscript::V1_0::ContextType, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation6Device13contextCreateEjNS2_11ContextTypeEi(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation6Device13contextCreateEjNS2_11ContextTypeEi() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Device::getHal() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation6Device6getHalEv(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation6Device6getHalEv() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptGroupSetInput(unsigned long, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context19scriptGroupSetInputEmmm(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context19scriptGroupSetInputEmmm() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationSetupBufferQueue(unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context26allocationSetupBufferQueueEmj(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context26allocationSetupBufferQueueEmj() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextSetPriority(android::hardware::renderscript::V1_0::ThreadPriorities) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context18contextSetPriorityENS2_16ThreadPrioritiesE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context18contextSetPriorityENS2_16ThreadPrioritiesE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationAdapterCreate(unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context23allocationAdapterCreateEmm(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context23allocationAdapterCreateEmm() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}
