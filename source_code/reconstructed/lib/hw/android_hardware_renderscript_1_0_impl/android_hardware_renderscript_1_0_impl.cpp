/*
 * Reverse-Engineered Source for: android.hardware.renderscript@1.0-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
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

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::typeCreate(unsigned long long, unsigned int, unsigned int, unsigned int, bool, bool, android::hardware::renderscript::V1_0::YuvFormat) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context10typeCreateEyjjjbbNS2_9YuvFormatE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context10typeCreateEyjjjbbNS2_9YuvFormatE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocation2DRead(unsigned long long, unsigned int, unsigned int, unsigned int, android::hardware::renderscript::V1_0::AllocationCubemapFace, unsigned int, unsigned int, void*, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context16allocation2DReadEyjjjNS2_21AllocationCubemapFaceEjjPvyy(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context16allocation2DReadEyjjjNS2_21AllocationCubemapFaceEjjPvyy() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationSyncAll(unsigned long long, android::hardware::renderscript::V1_0::AllocationUsageType) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context17allocationSyncAllEyNS2_19AllocationUsageTypeE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context17allocationSyncAllEyNS2_19AllocationUsageTypeE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextSendMessage(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context18contextSendMessageEjRKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context18contextSendMessageEjRKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptInvoke(unsigned long long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context12scriptInvokeEyj(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context12scriptInvokeEyj() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextDestroy() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context14contextDestroyEv(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context14contextDestroyEv() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::elementGetNativeMetadata(unsigned long long, std::__1::function<void (android::hardware::hidl_vec<unsigned int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context24elementGetNativeMetadataEyNSt3__18functionIFvRKNS0_8hidl_vecIjEEEEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context24elementGetNativeMetadataEyNSt3__18functionIFvRKNS0_8hidl_vecIjEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::renderscript::V1_0::implementation::Device */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware12renderscript4V1_014implementation6DeviceE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::objDestroy(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context10objDestroyEy(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context10objDestroyEy() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocation3DWrite(unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context17allocation3DWriteEyjjjjjjjRKNS0_8hidl_vecIhEEy(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context17allocation3DWriteEyjjjjjjjRKNS0_8hidl_vecIhEEy() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::elementGetSubElements(unsigned long long, unsigned long long, std::__1::function<void (android::hardware::hidl_vec<unsigned long long> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&, android::hardware::hidl_vec<unsigned long long> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context21elementGetSubElementsEyyNSt3__18functionIFvRKNS0_8hidl_vecIyEERKNS7_INS0_11hidl_stringEEESA_EEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context21elementGetSubElementsEyyNSt3__18functionIFvRKNS0_8hidl_vecIyEERKNS7_INS0_11hidl_stringEEESA_EEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptIntrinsicCreate(android::hardware::renderscript::V1_0::ScriptIntrinsicID, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context21scriptIntrinsicCreateENS2_17ScriptIntrinsicIDEy(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context21scriptIntrinsicCreateENS2_17ScriptIntrinsicIDEy() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationAdapterOffset(unsigned long long, android::hardware::hidl_vec<unsigned int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context23allocationAdapterOffsetEyRKNS0_8hidl_vecIjEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context23allocationAdapterOffsetEyRKNS0_8hidl_vecIjEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationShareBufferQueue(unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context26allocationShareBufferQueueEyy(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context26allocationShareBufferQueueEyy() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationSetupBufferQueue(unsigned long long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context26allocationSetupBufferQueueEyj(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context26allocationSetupBufferQueueEyj() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::renderscript::V1_0::implementation::Context */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware12renderscript4V1_014implementation7ContextE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::renderscript::V1_0::implementation::Device::Device() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation6DeviceC2Ev(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation6DeviceC2Ev() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationGetPointer(unsigned long long, unsigned int, android::hardware::renderscript::V1_0::AllocationCubemapFace, unsigned int, std::__1::function<void (void*, unsigned long long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context20allocationGetPointerEyjNS2_21AllocationCubemapFaceEjNSt3__18functionIFvPvyEEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context20allocationGetPointerEyjNS2_21AllocationCubemapFaceEjNSt3__18functionIFvPvyEEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationCreateFromBitmap(unsigned long long, android::hardware::renderscript::V1_0::AllocationMipmapControl, android::hardware::hidl_vec<unsigned char> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context26allocationCreateFromBitmapEyNS2_23AllocationMipmapControlERKNS0_8hidl_vecIhEEi(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context26allocationCreateFromBitmapEyNS2_23AllocationMipmapControlERKNS0_8hidl_vecIhEEi() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptCCreate(android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptCCreateERKNS0_11hidl_stringES7_RKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13scriptCCreateERKNS0_11hidl_stringES7_RKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarObj(unsigned long long, unsigned int, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context15scriptSetVarObjEyjy(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context15scriptSetVarObjEyjy() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationIoSend(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context16allocationIoSendEy(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context16allocationIoSendEy() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::closureSetGlobal(unsigned long long, unsigned long long, long long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context16closureSetGlobalEyyxi(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context16closureSetGlobalEyyxi() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationElementWrite(unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context22allocationElementWriteEyjjjjRKNS0_8hidl_vecIhEEy(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context22allocationElementWriteEyjjjjRKNS0_8hidl_vecIhEEy() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::getName(unsigned long long, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context7getNameEyNSt3__18functionIFvRKNS0_11hidl_stringEEEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context7getNameEyNSt3__18functionIFvRKNS0_11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: android::hardware::renderscript::V1_0::implementation::Device::mDispatchHal */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware12renderscript4V1_014implementation6Device12mDispatchHalE = NULL;

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptInvokeV(unsigned long long, unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptInvokeVEyjRKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13scriptInvokeVEyjRKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarD(unsigned long long, unsigned int, double) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarDEyjd(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarDEyjd() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocation2DWrite(unsigned long long, unsigned int, unsigned int, unsigned int, android::hardware::renderscript::V1_0::AllocationCubemapFace, unsigned int, unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context17allocation2DWriteEyjjjNS2_21AllocationCubemapFaceEjjRKNS0_8hidl_vecIhEEy(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context17allocation2DWriteEyjjjNS2_21AllocationCubemapFaceEjjRKNS0_8hidl_vecIhEEy() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::invokeClosureCreate(unsigned long long, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned long long> const&, android::hardware::hidl_vec<long long> const&, android::hardware::hidl_vec<int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context19invokeClosureCreateEyRKNS0_8hidl_vecIhEERKNS5_IyEERKNS5_IxEERKNS5_IiEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context19invokeClosureCreateEyRKNS0_8hidl_vecIhEERKNS5_IyEERKNS5_IxEERKNS5_IiEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationElementRead(unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, void*, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context21allocationElementReadEyjjjjPvyy(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context21allocationElementReadEyjjjjPvyy() called");
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

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptReduce(unsigned long long, unsigned int, android::hardware::hidl_vec<unsigned long long> const&, unsigned long long, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context12scriptReduceEyjRKNS0_8hidl_vecIyEEyPv(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context12scriptReduceEyjRKNS0_8hidl_vecIyEEyPv() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocation1DWrite(unsigned long long, unsigned int, unsigned int, unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context17allocation1DWriteEyjjjRKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context17allocation1DWriteEyjjjRKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextLog() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context10contextLogEv(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context10contextLogEv() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetTimeZone(unsigned long long, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context17scriptSetTimeZoneEyRKNS0_11hidl_stringE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context17scriptSetTimeZoneEyRKNS0_11hidl_stringE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationIoReceive(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context19allocationIoReceiveEy(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context19allocationIoReceiveEy() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::elementComplexCreate(android::hardware::hidl_vec<unsigned long long> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&, android::hardware::hidl_vec<unsigned long long> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context20elementComplexCreateERKNS0_8hidl_vecIyEERKNS5_INS0_11hidl_stringEEES8_(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context20elementComplexCreateERKNS0_8hidl_vecIyEERKNS5_INS0_11hidl_stringEEES8_() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::Context(unsigned int, android::hardware::renderscript::V1_0::ContextType, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7ContextC1EjNS2_11ContextTypeEi(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7ContextC1EjNS2_11ContextTypeEi() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarI(unsigned long long, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarIEyji(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarIEyji() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::elementCreate(android::hardware::renderscript::V1_0::DataType, android::hardware::renderscript::V1_0::DataKind, bool, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13elementCreateENS2_8DataTypeENS2_8DataKindEbj(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13elementCreateENS2_8DataTypeENS2_8DataKindEbj() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarVE(unsigned long long, unsigned int, android::hardware::hidl_vec<unsigned char> const&, unsigned long long, android::hardware::hidl_vec<unsigned int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context14scriptSetVarVEEyjRKNS0_8hidl_vecIhEEyRKNS5_IjEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context14scriptSetVarVEEyjRKNS0_8hidl_vecIhEEyRKNS5_IjEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextSetCacheDir(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context18contextSetCacheDirERKNS0_11hidl_stringE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context18contextSetCacheDirERKNS0_11hidl_stringE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptGroup2Create(android::hardware::hidl_string const&, android::hardware::hidl_string const&, android::hardware::hidl_vec<unsigned long long> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context18scriptGroup2CreateERKNS0_11hidl_stringES7_RKNS0_8hidl_vecIyEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context18scriptGroup2CreateERKNS0_11hidl_stringES7_RKNS0_8hidl_vecIyEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextInitToClient() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context19contextInitToClientEv(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context19contextInitToClientEv() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptBindAllocation(unsigned long long, unsigned long long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context20scriptBindAllocationEyyj(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context20scriptBindAllocationEyyj() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationCopy3DRange(unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context21allocationCopy3DRangeEyjjjjjjjyjjjj(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context21allocationCopy3DRangeEyjjjjjjjyjjjj() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationSetNativeWindow(unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context25allocationSetNativeWindowEyy(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context25allocationSetNativeWindowEyy() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptGetVarV(unsigned long long, unsigned int, unsigned long long, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptGetVarVEyjyNSt3__18functionIFvRKNS0_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13scriptGetVarVEyjyNSt3__18functionIFvRKNS0_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationResize1D(unsigned long long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context18allocationResize1DEyj(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context18allocationResize1DEyj() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptFieldIDCreate(unsigned long long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context19scriptFieldIDCreateEyi(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context19scriptFieldIDCreateEyi() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarV(unsigned long long, unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarVEyjRKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarVEyjRKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextPeekMessage(std::__1::function<void (android::hardware::renderscript::V1_0::MessageToClientType, unsigned long long, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context18contextPeekMessageENSt3__18functionIFvNS2_19MessageToClientTypeEyjEEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context18contextPeekMessageENSt3__18functionIFvNS2_19MessageToClientTypeEyjEEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::assignName(unsigned long long, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context10assignNameEyRKNS0_11hidl_stringE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context10assignNameEyRKNS0_11hidl_stringE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextGetMessage(void*, unsigned long long, std::__1::function<void (android::hardware::renderscript::V1_0::MessageToClientType, unsigned long long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context17contextGetMessageEPvyNSt3__18functionIFvNS2_19MessageToClientTypeEyEEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context17contextGetMessageEPvyNSt3__18functionIFvNS2_19MessageToClientTypeEyEEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationCopyToBitmap(unsigned long long, void*, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context22allocationCopyToBitmapEyPvy(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context22allocationCopyToBitmapEyPvy() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::renderscript::V1_0::IContext-in-android::hardware::renderscript::V1_0::implementation::Context */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware12renderscript4V1_014implementation7ContextE0_NS2_8IContextE = NULL;

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptForEach(unsigned long long, unsigned int, android::hardware::hidl_vec<unsigned long long> const&, unsigned long long, android::hardware::hidl_vec<unsigned char> const&, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptForEachEyjRKNS0_8hidl_vecIyEEyRKNS5_IhEEPv(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13scriptForEachEyjRKNS0_8hidl_vecIyEEyRKNS5_IhEEPv() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocation1DRead(unsigned long long, unsigned int, unsigned int, unsigned int, void*, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context16allocation1DReadEyjjjPvy(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context16allocation1DReadEyjjjPvy() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationCreateTyped(unsigned long long, android::hardware::renderscript::V1_0::AllocationMipmapControl, int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context21allocationCreateTypedEyNS2_23AllocationMipmapControlEiPv(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context21allocationCreateTypedEyNS2_23AllocationMipmapControlEiPv() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::Context(unsigned int, android::hardware::renderscript::V1_0::ContextType, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7ContextC2EjNS2_11ContextTypeEi(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7ContextC2EjNS2_11ContextTypeEi() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::renderscript::V1_0::implementation::Device */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware12renderscript4V1_014implementation6DeviceE = NULL;

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::closureSetArg(unsigned long long, unsigned int, void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13closureSetArgEyjPvi(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13closureSetArgEyjPvi() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationCopy2DRange(unsigned long long, unsigned int, unsigned int, unsigned int, android::hardware::renderscript::V1_0::AllocationCubemapFace, unsigned int, unsigned int, unsigned long long, unsigned int, unsigned int, unsigned int, android::hardware::renderscript::V1_0::AllocationCubemapFace) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context21allocationCopy2DRangeEyjjjNS2_21AllocationCubemapFaceEjjyjjjS5_(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context21allocationCopy2DRangeEyjjjNS2_21AllocationCubemapFaceEjjyjjjS5_() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationAdapterCreate(unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context23allocationAdapterCreateEyy(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context23allocationAdapterCreateEyy() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationGenerateMipmaps(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context25allocationGenerateMipmapsEy(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context25allocationGenerateMipmapsEy() called");
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

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationRead(unsigned long long, void*, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context14allocationReadEyPvy(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context14allocationReadEyPvy() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptGroupCreate(android::hardware::hidl_vec<unsigned long long> const&, android::hardware::hidl_vec<unsigned long long> const&, android::hardware::hidl_vec<unsigned long long> const&, android::hardware::hidl_vec<unsigned long long> const&, android::hardware::hidl_vec<unsigned long long> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context17scriptGroupCreateERKNS0_8hidl_vecIyEES8_S8_S8_S8_(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context17scriptGroupCreateERKNS0_8hidl_vecIyEES8_S8_S8_S8_() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptGroupSetOutput(unsigned long long, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context20scriptGroupSetOutputEyyy(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context20scriptGroupSetOutputEyyy() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptKernelIDCreate(unsigned long long, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context20scriptKernelIDCreateEyii(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context20scriptKernelIDCreateEyii() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::renderscript::V1_0::IDevice-in-android::hardware::renderscript::V1_0::implementation::Device */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware12renderscript4V1_014implementation6DeviceE0_NS2_7IDeviceE = NULL;

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::closureCreate(unsigned long long, unsigned long long, android::hardware::hidl_vec<unsigned long long> const&, android::hardware::hidl_vec<long long> const&, android::hardware::hidl_vec<int> const&, android::hardware::hidl_vec<unsigned long long> const&, android::hardware::hidl_vec<unsigned long long> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13closureCreateEyyRKNS0_8hidl_vecIyEERKNS5_IxEERKNS5_IiEES8_S8_(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13closureCreateEyyRKNS0_8hidl_vecIyEERKNS5_IxEERKNS5_IiEES8_S8_() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocation3DRead(unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, void*, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context16allocation3DReadEyjjjjjjjPvyy(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context16allocation3DReadEyjjjjjjjPvyy() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptInvokeIDCreate(unsigned long long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context20scriptInvokeIDCreateEyi(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context20scriptInvokeIDCreateEyi() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::renderscript::V1_0::implementation::Context */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware12renderscript4V1_014implementation7ContextE = NULL;

/* Demangled: android::hardware::renderscript::V1_0::implementation::Device::Device() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation6DeviceC1Ev(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation6DeviceC1Ev() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptGroupSetInput(unsigned long long, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context19scriptGroupSetInputEyyy(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context19scriptGroupSetInputEyyy() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationCubeCreateFromBitmap(unsigned long long, android::hardware::renderscript::V1_0::AllocationMipmapControl, android::hardware::hidl_vec<unsigned char> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context30allocationCubeCreateFromBitmapEyNS2_23AllocationMipmapControlERKNS0_8hidl_vecIhEEi(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context30allocationCubeCreateFromBitmapEyNS2_23AllocationMipmapControlERKNS0_8hidl_vecIhEEi() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::renderscript::V1_0::implementation::Device */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware12renderscript4V1_014implementation6DeviceE = NULL;

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarJ(unsigned long long, unsigned int, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarJEyjx(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarJEyjx() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationGetNativeWindow(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context25allocationGetNativeWindowEy(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context25allocationGetNativeWindowEy() called");
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

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::allocationGetType(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context17allocationGetTypeEy(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context17allocationGetTypeEy() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptGroupExecute(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context18scriptGroupExecuteEy(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context18scriptGroupExecuteEy() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::typeGetNativeMetadata(unsigned long long, std::__1::function<void (android::hardware::hidl_vec<unsigned long long> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context21typeGetNativeMetadataEyNSt3__18functionIFvRKNS0_8hidl_vecIyEEEEE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context21typeGetNativeMetadataEyNSt3__18functionIFvRKNS0_8hidl_vecIyEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::scriptSetVarF(unsigned long long, unsigned int, float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarFEyjf(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context13scriptSetVarFEyjf() called");
    return 0;
}

/* Demangled: android::hardware::renderscript::V1_0::implementation::Context::contextSetPriority(android::hardware::renderscript::V1_0::ThreadPriorities) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12renderscript4V1_014implementation7Context18contextSetPriorityENS2_16ThreadPrioritiesE(void) {
    ALOGD("_ZN7android8hardware12renderscript4V1_014implementation7Context18contextSetPriorityENS2_16ThreadPrioritiesE() called");
    return 0;
}
