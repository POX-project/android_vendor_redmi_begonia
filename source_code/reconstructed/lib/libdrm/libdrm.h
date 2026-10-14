/*
 * Reverse-Engineered ABI Specification for: libdrm.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libdrm.so
 */

#ifndef BEGONIA_RE_LIBDRM_H
#define BEGONIA_RE_LIBDRM_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: drmAgpUnbind */
/* Demangled: drmAgpUnbind */
int drmAgpUnbind(void);

/* Symbol: drmIsMaster */
/* Demangled: drmIsMaster */
int drmIsMaster(void);

/* Symbol: drmSetMaster */
/* Demangled: drmSetMaster */
int drmSetMaster(void);

/* Symbol: drmModeAddFB2 */
/* Demangled: drmModeAddFB2 */
int drmModeAddFB2(void);

/* Symbol: drmGetBufInfo */
/* Demangled: drmGetBufInfo */
int drmGetBufInfo(void);

/* Symbol: drmHashInsert */
/* Demangled: drmHashInsert */
int drmHashInsert(void);

/* Symbol: drmSLLookup */
/* Demangled: drmSLLookup */
int drmSLLookup(void);

/* Symbol: drmSwitchToContext */
/* Demangled: drmSwitchToContext */
int drmSwitchToContext(void);

/* Symbol: drmModeMoveCursor */
/* Demangled: drmModeMoveCursor */
int drmModeMoveCursor(void);

/* Symbol: drmCommandRead */
/* Demangled: drmCommandRead */
int drmCommandRead(void);

/* Symbol: drmMarkBufs */
/* Demangled: drmMarkBufs */
int drmMarkBufs(void);

/* Symbol: drmSyncobjReset */
/* Demangled: drmSyncobjReset */
int drmSyncobjReset(void);

/* Symbol: drmRandomDestroy */
/* Demangled: drmRandomDestroy */
int drmRandomDestroy(void);

/* Symbol: drmModeFreePropertyBlob */
/* Demangled: drmModeFreePropertyBlob */
int drmModeFreePropertyBlob(void);

/* Symbol: drmGetContextPrivateMapping */
/* Demangled: drmGetContextPrivateMapping */
int drmGetContextPrivateMapping(void);

/* Symbol: drmSyncobjCreate */
/* Demangled: drmSyncobjCreate */
int drmSyncobjCreate(void);

/* Symbol: drmModeFreeProperty */
/* Demangled: drmModeFreeProperty */
int drmModeFreeProperty(void);

/* Symbol: drmModeRmFB */
/* Demangled: drmModeRmFB */
int drmModeRmFB(void);

/* Symbol: drmAgpGetMode */
/* Demangled: drmAgpGetMode */
int drmAgpGetMode(void);

/* Symbol: drmRmMap */
/* Demangled: drmRmMap */
int drmRmMap(void);

/* Symbol: drmModeAtomicAlloc */
/* Demangled: drmModeAtomicAlloc */
int drmModeAtomicAlloc(void);

/* Symbol: drmHashLookup */
/* Demangled: drmHashLookup */
int drmHashLookup(void);

/* Symbol: drmMap */
/* Demangled: drmMap */
int drmMap(void);

/* Symbol: drmSLNext */
/* Demangled: drmSLNext */
int drmSLNext(void);

/* Symbol: drmHandleEvent */
/* Demangled: drmHandleEvent */
int drmHandleEvent(void);

/* Symbol: drmAgpEnable */
/* Demangled: drmAgpEnable */
int drmAgpEnable(void);

/* Symbol: drmCommandNone */
/* Demangled: drmCommandNone */
int drmCommandNone(void);

/* Symbol: drmGetRenderDeviceNameFromFd */
/* Demangled: drmGetRenderDeviceNameFromFd */
int drmGetRenderDeviceNameFromFd(void);

/* Symbol: drmGetStats */
/* Demangled: drmGetStats */
int drmGetStats(void);

/* Symbol: drmSetClientCap */
/* Demangled: drmSetClientCap */
int drmSetClientCap(void);

/* Symbol: drmModeFreeFB */
/* Demangled: drmModeFreeFB */
int drmModeFreeFB(void);

/* Symbol: drmGetDevice */
/* Demangled: drmGetDevice */
int drmGetDevice(void);

/* Symbol: drmOpenWithType */
/* Demangled: drmOpenWithType */
int drmOpenWithType(void);

/* Symbol: drmModeAtomicAddProperty */
/* Demangled: drmModeAtomicAddProperty */
int drmModeAtomicAddProperty(void);

/* Symbol: drmModeAtomicGetCursor */
/* Demangled: drmModeAtomicGetCursor */
int drmModeAtomicGetCursor(void);

/* Symbol: drmModeGetConnector */
/* Demangled: drmModeGetConnector */
int drmModeGetConnector(void);

/* Symbol: drmAvailable */
/* Demangled: drmAvailable */
int drmAvailable(void);

/* Symbol: drmFinish */
/* Demangled: drmFinish */
int drmFinish(void);

/* Symbol: drmGetContextTag */
/* Demangled: drmGetContextTag */
int drmGetContextTag(void);

/* Symbol: drmGetDeviceNameFromFd2 */
/* Demangled: drmGetDeviceNameFromFd2 */
int drmGetDeviceNameFromFd2(void);

/* Symbol: drmGetMagic */
/* Demangled: drmGetMagic */
int drmGetMagic(void);

/* Symbol: drmGetReservedContextList */
/* Demangled: drmGetReservedContextList */
int drmGetReservedContextList(void);

/* Symbol: drmUnmapBufs */
/* Demangled: drmUnmapBufs */
int drmUnmapBufs(void);

/* Symbol: drmAgpAcquire */
/* Demangled: drmAgpAcquire */
int drmAgpAcquire(void);

/* Symbol: drmAgpMemoryUsed */
/* Demangled: drmAgpMemoryUsed */
int drmAgpMemoryUsed(void);

/* Symbol: drmCtlUninstHandler */
/* Demangled: drmCtlUninstHandler */
int drmCtlUninstHandler(void);

/* Symbol: drmDMA */
/* Demangled: drmDMA */
int drmDMA(void);

/* Symbol: drmFreeBufs */
/* Demangled: drmFreeBufs */
int drmFreeBufs(void);

/* Symbol: drmFreeDevice */
/* Demangled: drmFreeDevice */
int drmFreeDevice(void);

/* Symbol: drmGetEntry */
/* Demangled: drmGetEntry */
int drmGetEntry(void);

/* Symbol: drmSyncobjDestroy */
/* Demangled: drmSyncobjDestroy */
int drmSyncobjDestroy(void);

/* Symbol: drmModeAtomicMerge */
/* Demangled: drmModeAtomicMerge */
int drmModeAtomicMerge(void);

/* Symbol: drmAgpAlloc */
/* Demangled: drmAgpAlloc */
int drmAgpAlloc(void);

/* Symbol: drmAgpVendorId */
/* Demangled: drmAgpVendorId */
int drmAgpVendorId(void);

/* Symbol: drmGetDevices */
/* Demangled: drmGetDevices */
int drmGetDevices(void);

/* Symbol: drmOpenControl */
/* Demangled: drmOpenControl */
int drmOpenControl(void);

/* Symbol: drmSetBusid */
/* Demangled: drmSetBusid */
int drmSetBusid(void);

/* Symbol: drmHashNext */
/* Demangled: drmHashNext */
int drmHashNext(void);

/* Symbol: drmSLCreate */
/* Demangled: drmSLCreate */
int drmSLCreate(void);

/* Symbol: drmModeGetConnectorCurrent */
/* Demangled: drmModeGetConnectorCurrent */
int drmModeGetConnectorCurrent(void);

/* Symbol: drmSyncobjTimelineWait */
/* Demangled: drmSyncobjTimelineWait */
int drmSyncobjTimelineWait(void);

/* Symbol: drmModeAtomicFree */
/* Demangled: drmModeAtomicFree */
int drmModeAtomicFree(void);

/* Symbol: drmModeCrtcGetGamma */
/* Demangled: drmModeCrtcGetGamma */
int drmModeCrtcGetGamma(void);

/* Symbol: drmModePageFlipTarget */
/* Demangled: drmModePageFlipTarget */
int drmModePageFlipTarget(void);

/* Symbol: drmAddContextPrivateMapping */
/* Demangled: drmAddContextPrivateMapping */
int drmAddContextPrivateMapping(void);

/* Symbol: drmModeListLessees */
/* Demangled: drmModeListLessees */
int drmModeListLessees(void);

/* Symbol: drmCommandWriteRead */
/* Demangled: drmCommandWriteRead */
int drmCommandWriteRead(void);

/* Symbol: drmDelContextTag */
/* Demangled: drmDelContextTag */
int drmDelContextTag(void);

/* Symbol: drmPrimeFDToHandle */
/* Demangled: drmPrimeFDToHandle */
int drmPrimeFDToHandle(void);

/* Symbol: drmSyncobjSignal */
/* Demangled: drmSyncobjSignal */
int drmSyncobjSignal(void);

/* Symbol: drmAgpVersionMajor */
/* Demangled: drmAgpVersionMajor */
int drmAgpVersionMajor(void);

/* Symbol: drmMsg */
/* Demangled: drmMsg */
int drmMsg(void);

/* Symbol: drmSyncobjExportSyncFile */
/* Demangled: drmSyncobjExportSyncFile */
int drmSyncobjExportSyncFile(void);

/* Symbol: drmCheckModesettingSupported */
/* Demangled: drmCheckModesettingSupported */
int drmCheckModesettingSupported(void);

/* Symbol: drmHashCreate */
/* Demangled: drmHashCreate */
int drmHashCreate(void);

/* Symbol: drmMalloc */
/* Demangled: drmMalloc */
int drmMalloc(void);

/* Symbol: drmModeFreeModeInfo */
/* Demangled: drmModeFreeModeInfo */
int drmModeFreeModeInfo(void);

/* Symbol: drmAgpRelease */
/* Demangled: drmAgpRelease */
int drmAgpRelease(void);

/* Symbol: drmCreateContext */
/* Demangled: drmCreateContext */
int drmCreateContext(void);

/* Symbol: drmGetLock */
/* Demangled: drmGetLock */
int drmGetLock(void);

/* Symbol: drmModeDirtyFB */
/* Demangled: drmModeDirtyFB */
int drmModeDirtyFB(void);

/* Symbol: drmModeObjectGetProperties */
/* Demangled: drmModeObjectGetProperties */
int drmModeObjectGetProperties(void);

/* Symbol: drmCommandWrite */
/* Demangled: drmCommandWrite */
int drmCommandWrite(void);

/* Symbol: drmCloseOnce */
/* Demangled: drmCloseOnce */
int drmCloseOnce(void);

/* Symbol: drmDevicesEqual */
/* Demangled: drmDevicesEqual */
int drmDevicesEqual(void);

/* Symbol: drmIoctl */
/* Demangled: drmIoctl */
int drmIoctl(void);

/* Symbol: drmDestroyDrawable */
/* Demangled: drmDestroyDrawable */
int drmDestroyDrawable(void);

/* Symbol: drmScatterGatherAlloc */
/* Demangled: drmScatterGatherAlloc */
int drmScatterGatherAlloc(void);

/* Symbol: drmHashFirst */
/* Demangled: drmHashFirst */
int drmHashFirst(void);

/* Symbol: drmModeAtomicSetCursor */
/* Demangled: drmModeAtomicSetCursor */
int drmModeAtomicSetCursor(void);

/* Symbol: drmGetLibVersion */
/* Demangled: drmGetLibVersion */
int drmGetLibVersion(void);

/* Symbol: drmSyncobjTimelineSignal */
/* Demangled: drmSyncobjTimelineSignal */
int drmSyncobjTimelineSignal(void);

/* Symbol: drmSyncobjWait */
/* Demangled: drmSyncobjWait */
int drmSyncobjWait(void);

/* Symbol: drmModeAtomicDuplicate */
/* Demangled: drmModeAtomicDuplicate */
int drmModeAtomicDuplicate(void);

/* Symbol: drmModeCreatePropertyBlob */
/* Demangled: drmModeCreatePropertyBlob */
int drmModeCreatePropertyBlob(void);

/* Symbol: drmSetContextFlags */
/* Demangled: drmSetContextFlags */
int drmSetContextFlags(void);

/* Symbol: drmDestroyContext */
/* Demangled: drmDestroyContext */
int drmDestroyContext(void);

/* Symbol: drmGetClient */
/* Demangled: drmGetClient */
int drmGetClient(void);

/* Symbol: drmSetServerInfo */
/* Demangled: drmSetServerInfo */
int drmSetServerInfo(void);

/* Symbol: drmModeAttachMode */
/* Demangled: drmModeAttachMode */
int drmModeAttachMode(void);

/* Symbol: drmModeSetCursor */
/* Demangled: drmModeSetCursor */
int drmModeSetCursor(void);

/* Symbol: drmSyncobjFDToHandle */
/* Demangled: drmSyncobjFDToHandle */
int drmSyncobjFDToHandle(void);

/* Symbol: drmModeConnectorSetProperty */
/* Demangled: drmModeConnectorSetProperty */
int drmModeConnectorSetProperty(void);

/* Symbol: drmModeGetCrtc */
/* Demangled: drmModeGetCrtc */
int drmModeGetCrtc(void);

/* Symbol: drmModeSetPlane */
/* Demangled: drmModeSetPlane */
int drmModeSetPlane(void);

/* Symbol: drmGetContextFlags */
/* Demangled: drmGetContextFlags */
int drmGetContextFlags(void);

/* Symbol: drmSLDelete */
/* Demangled: drmSLDelete */
int drmSLDelete(void);

/* Symbol: drmModeFreeConnector */
/* Demangled: drmModeFreeConnector */
int drmModeFreeConnector(void);

/* Symbol: drmModeFreePlaneResources */
/* Demangled: drmModeFreePlaneResources */
int drmModeFreePlaneResources(void);

/* Symbol: drmAgpVersionMinor */
/* Demangled: drmAgpVersionMinor */
int drmAgpVersionMinor(void);

/* Symbol: drmAuthMagic */
/* Demangled: drmAuthMagic */
int drmAuthMagic(void);

/* Symbol: drmFreeReservedContextList */
/* Demangled: drmFreeReservedContextList */
int drmFreeReservedContextList(void);

/* Symbol: drmGetPrimaryDeviceNameFromFd */
/* Demangled: drmGetPrimaryDeviceNameFromFd */
int drmGetPrimaryDeviceNameFromFd(void);

/* Symbol: drmScatterGatherFree */
/* Demangled: drmScatterGatherFree */
int drmScatterGatherFree(void);

/* Symbol: drmSetInterfaceVersion */
/* Demangled: drmSetInterfaceVersion */
int drmSetInterfaceVersion(void);

/* Symbol: drmWaitVBlank */
/* Demangled: drmWaitVBlank */
int drmWaitVBlank(void);

/* Symbol: drmModeCreateLease */
/* Demangled: drmModeCreateLease */
int drmModeCreateLease(void);

/* Symbol: drmModeDestroyPropertyBlob */
/* Demangled: drmModeDestroyPropertyBlob */
int drmModeDestroyPropertyBlob(void);

/* Symbol: drmModeDetachMode */
/* Demangled: drmModeDetachMode */
int drmModeDetachMode(void);

/* Symbol: drmOpenOnceWithType */
/* Demangled: drmOpenOnceWithType */
int drmOpenOnceWithType(void);

/* Symbol: drmSLDump */
/* Demangled: drmSLDump */
int drmSLDump(void);

/* Symbol: drmClose */
/* Demangled: drmClose */
int drmClose(void);

/* Symbol: drmModeAddFB2WithModifiers */
/* Demangled: drmModeAddFB2WithModifiers */
int drmModeAddFB2WithModifiers(void);

/* Symbol: drmGetBusid */
/* Demangled: drmGetBusid */
int drmGetBusid(void);

/* Symbol: drmHashDelete */
/* Demangled: drmHashDelete */
int drmHashDelete(void);

/* Symbol: drmOpenOnce */
/* Demangled: drmOpenOnce */
int drmOpenOnce(void);

/* Symbol: drmModeFreeEncoder */
/* Demangled: drmModeFreeEncoder */
int drmModeFreeEncoder(void);

/* Symbol: drmFreeVersion */
/* Demangled: drmFreeVersion */
int drmFreeVersion(void);

/* Symbol: drmGetInterruptFromBusID */
/* Demangled: drmGetInterruptFromBusID */
int drmGetInterruptFromBusID(void);

/* Symbol: drmAddBufs */
/* Demangled: drmAddBufs */
int drmAddBufs(void);

/* Symbol: drmFreeBusid */
/* Demangled: drmFreeBusid */
int drmFreeBusid(void);

/* Symbol: drmSLDestroy */
/* Demangled: drmSLDestroy */
int drmSLDestroy(void);

/* Symbol: drmModeGetPropertyBlob */
/* Demangled: drmModeGetPropertyBlob */
int drmModeGetPropertyBlob(void);

/* Symbol: drmAddContextTag */
/* Demangled: drmAddContextTag */
int drmAddContextTag(void);

/* Symbol: drmAgpFree */
/* Demangled: drmAgpFree */
int drmAgpFree(void);

/* Symbol: drmCrtcQueueSequence */
/* Demangled: drmCrtcQueueSequence */
int drmCrtcQueueSequence(void);

/* Symbol: drmError */
/* Demangled: drmError */
int drmError(void);

/* Symbol: drmSLLookupNeighbors */
/* Demangled: drmSLLookupNeighbors */
int drmSLLookupNeighbors(void);

/* Symbol: drmModeGetProperty */
/* Demangled: drmModeGetProperty */
int drmModeGetProperty(void);

/* Symbol: drmModeAtomicCommit */
/* Demangled: drmModeAtomicCommit */
int drmModeAtomicCommit(void);

/* Symbol: drmModeFreeObjectProperties */
/* Demangled: drmModeFreeObjectProperties */
int drmModeFreeObjectProperties(void);

/* Symbol: drmModeRevokeLease */
/* Demangled: drmModeRevokeLease */
int drmModeRevokeLease(void);

/* Symbol: drmGetHashTable */
/* Demangled: drmGetHashTable */
int drmGetHashTable(void);

/* Symbol: drmUnlock */
/* Demangled: drmUnlock */
int drmUnlock(void);

/* Symbol: drmRandomDouble */
/* Demangled: drmRandomDouble */
int drmRandomDouble(void);

/* Symbol: drmSyncobjTransfer */
/* Demangled: drmSyncobjTransfer */
int drmSyncobjTransfer(void);

/* Symbol: drmModeGetFB */
/* Demangled: drmModeGetFB */
int drmModeGetFB(void);

/* Symbol: drmModeObjectSetProperty */
/* Demangled: drmModeObjectSetProperty */
int drmModeObjectSetProperty(void);

/* Symbol: drmModePageFlip */
/* Demangled: drmModePageFlip */
int drmModePageFlip(void);

/* Symbol: drmModeSetCrtc */
/* Demangled: drmModeSetCrtc */
int drmModeSetCrtc(void);

/* Symbol: drmAgpMemoryAvail */
/* Demangled: drmAgpMemoryAvail */
int drmAgpMemoryAvail(void);

/* Symbol: drmGetMap */
/* Demangled: drmGetMap */
int drmGetMap(void);

/* Symbol: drmHashDestroy */
/* Demangled: drmHashDestroy */
int drmHashDestroy(void);

/* Symbol: drmMapBufs */
/* Demangled: drmMapBufs */
int drmMapBufs(void);

/* Symbol: drmSyncobjQuery */
/* Demangled: drmSyncobjQuery */
int drmSyncobjQuery(void);

/* Symbol: drmCtlInstHandler */
/* Demangled: drmCtlInstHandler */
int drmCtlInstHandler(void);

/* Symbol: drmGetDeviceNameFromFd */
/* Demangled: drmGetDeviceNameFromFd */
int drmGetDeviceNameFromFd(void);

/* Symbol: drmModeGetLease */
/* Demangled: drmModeGetLease */
int drmModeGetLease(void);

/* Symbol: drmSyncobjImportSyncFile */
/* Demangled: drmSyncobjImportSyncFile */
int drmSyncobjImportSyncFile(void);

/* Symbol: drmModeCrtcSetGamma */
/* Demangled: drmModeCrtcSetGamma */
int drmModeCrtcSetGamma(void);

/* Symbol: drmModeGetPlaneResources */
/* Demangled: drmModeGetPlaneResources */
int drmModeGetPlaneResources(void);

/* Symbol: drmModeGetResources */
/* Demangled: drmModeGetResources */
int drmModeGetResources(void);

/* Symbol: drmDropMaster */
/* Demangled: drmDropMaster */
int drmDropMaster(void);

/* Symbol: drmSyncobjHandleToFD */
/* Demangled: drmSyncobjHandleToFD */
int drmSyncobjHandleToFD(void);

/* Symbol: drmUnmap */
/* Demangled: drmUnmap */
int drmUnmap(void);

/* Symbol: drmUpdateDrawableInfo */
/* Demangled: drmUpdateDrawableInfo */
int drmUpdateDrawableInfo(void);

/* Symbol: drmRandom */
/* Demangled: drmRandom */
int drmRandom(void);

/* Symbol: drmModeSetCursor2 */
/* Demangled: drmModeSetCursor2 */
int drmModeSetCursor2(void);

/* Symbol: drmFree */
/* Demangled: drmFree */
int drmFree(void);

/* Symbol: drmGetDevice2 */
/* Demangled: drmGetDevice2 */
int drmGetDevice2(void);

/* Symbol: drmOpen */
/* Demangled: drmOpen */
int drmOpen(void);

/* Symbol: drmOpenRender */
/* Demangled: drmOpenRender */
int drmOpenRender(void);

/* Symbol: drmModeFreeResources */
/* Demangled: drmModeFreeResources */
int drmModeFreeResources(void);

/* Symbol: drmAgpBase */
/* Demangled: drmAgpBase */
int drmAgpBase(void);

/* Symbol: drmAgpSize */
/* Demangled: drmAgpSize */
int drmAgpSize(void);

/* Symbol: drmModeFreeCrtc */
/* Demangled: drmModeFreeCrtc */
int drmModeFreeCrtc(void);

/* Symbol: drmGetCap */
/* Demangled: drmGetCap */
int drmGetCap(void);

/* Symbol: drmSLInsert */
/* Demangled: drmSLInsert */
int drmSLInsert(void);

/* Symbol: drmAgpBind */
/* Demangled: drmAgpBind */
int drmAgpBind(void);

/* Symbol: drmAgpDeviceId */
/* Demangled: drmAgpDeviceId */
int drmAgpDeviceId(void);

/* Symbol: drmCrtcGetSequence */
/* Demangled: drmCrtcGetSequence */
int drmCrtcGetSequence(void);

/* Symbol: drmFreeDevices */
/* Demangled: drmFreeDevices */
int drmFreeDevices(void);

/* Symbol: drmGetDevices2 */
/* Demangled: drmGetDevices2 */
int drmGetDevices2(void);

/* Symbol: drmRandomCreate */
/* Demangled: drmRandomCreate */
int drmRandomCreate(void);

/* Symbol: drmModeGetEncoder */
/* Demangled: drmModeGetEncoder */
int drmModeGetEncoder(void);

/* Symbol: drmModeGetPlane */
/* Demangled: drmModeGetPlane */
int drmModeGetPlane(void);

/* Symbol: drmCreateDrawable */
/* Demangled: drmCreateDrawable */
int drmCreateDrawable(void);

/* Symbol: drmGetNodeTypeFromFd */
/* Demangled: drmGetNodeTypeFromFd */
int drmGetNodeTypeFromFd(void);

/* Symbol: drmGetVersion */
/* Demangled: drmGetVersion */
int drmGetVersion(void);

/* Symbol: drmPrimeHandleToFD */
/* Demangled: drmPrimeHandleToFD */
int drmPrimeHandleToFD(void);

/* Symbol: drmModeAddFB */
/* Demangled: drmModeAddFB */
int drmModeAddFB(void);

/* Symbol: drmAddMap */
/* Demangled: drmAddMap */
int drmAddMap(void);

/* Symbol: drmSLFirst */
/* Demangled: drmSLFirst */
int drmSLFirst(void);

/* Symbol: drmModeFreePlane */
/* Demangled: drmModeFreePlane */
int drmModeFreePlane(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBDRM_H */
