/*
 * Reverse-Engineered ABI Specification for: libaudio_param_parser-vnd.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libaudio_param_parser-vnd.so
 */

#ifndef BEGONIA_RE_LIBAUDIO_PARAM_PARSER_VND_H
#define BEGONIA_RE_LIBAUDIO_PARAM_PARSER_VND_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: appHandleReloadAudioType */
/* Demangled: appHandleReloadAudioType */
int appHandleReloadAudioType(void);

/* Symbol: paramTreeViewCreate */
/* Demangled: paramTreeViewCreate */
int paramTreeViewCreate(void);

/* Symbol: audioTypeLoadParamTreeView */
/* Demangled: audioTypeLoadParamTreeView */
int audioTypeLoadParamTreeView(void);

/* Symbol: paramSetupDataInfoByStr */
/* Demangled: paramSetupDataInfoByStr */
int paramSetupDataInfoByStr(void);

/* Symbol: utilGenCheckList */
/* Demangled: utilGenCheckList */
int utilGenCheckList(void);

/* Symbol: inotifyTest */
/* Demangled: inotifyTest */
int inotifyTest(void);

/* Symbol: categoryTypeRelease */
/* Demangled: categoryTypeRelease */
int categoryTypeRelease(void);

/* Symbol: paramNewDataStr */
/* Demangled: paramNewDataStr */
int paramNewDataStr(void);

/* Symbol: appGetDebugLevel */
/* Demangled: appGetDebugLevel */
int appGetDebugLevel(void);

/* Symbol: appHandleLoadAllAudioTypeHash */
/* Demangled: appHandleLoadAllAudioTypeHash */
int appHandleLoadAllAudioTypeHash(void);

/* Symbol: audioTypeGetParamUnitNode */
/* Demangled: audioTypeGetParamUnitNode */
int audioTypeGetParamUnitNode(void);

/* Symbol: audioTypeReleaseAudioParam */
/* Demangled: audioTypeReleaseAudioParam */
int audioTypeReleaseAudioParam(void);

/* Symbol: initXmlOps */
/* Demangled: initXmlOps */
int initXmlOps(void);

/* Symbol: utilShellExecute */
/* Demangled: utilShellExecute */
int utilShellExecute(void);

/* Symbol: appXmlStrdup */
/* Demangled: appXmlStrdup */
int appXmlStrdup(void);

/* Symbol: audioTypeDump */
/* Demangled: audioTypeDump */
int audioTypeDump(void);

/* Symbol: audioTypeLoadCategoryTypeHash */
/* Demangled: audioTypeLoadCategoryTypeHash */
int audioTypeLoadCategoryTypeHash(void);

/* Symbol: appDebugLevel */
/* Demangled: appDebugLevel */
extern void* appDebugLevel;

/* Symbol: audioSystemGetParameters */
/* Demangled: audioSystemGetParameters */
int audioSystemGetParameters(void);

/* Symbol: appGetXmlDirFromProperty */
/* Demangled: appGetXmlDirFromProperty */
int appGetXmlDirFromProperty(void);

/* Symbol: appHandleLoadAudioTypeXml */
/* Demangled: appHandleLoadAudioTypeXml */
int appHandleLoadAudioTypeXml(void);

/* Symbol: appXmlFree */
/* Demangled: appXmlFree */
int appXmlFree(void);

/* Symbol: audioTypeIsDeviceSupportedXmlVer */
/* Demangled: audioTypeIsDeviceSupportedXmlVer */
int audioTypeIsDeviceSupportedXmlVer(void);

/* Symbol: paramUnitGetParamByName */
/* Demangled: paramUnitGetParamByName */
int paramUnitGetParamByName(void);

/* Symbol: utilDumpAudioTypeLoadingList */
/* Demangled: utilDumpAudioTypeLoadingList */
int utilDumpAudioTypeLoadingList(void);

/* Symbol: testHashParamTree */
/* Demangled: testHashParamTree */
int testHashParamTree(void);

/* Symbol: appHandleGetFeatureOptionValue */
/* Demangled: appHandleGetFeatureOptionValue */
int appHandleGetFeatureOptionValue(void);

/* Symbol: featureIsCategoryPathSupport */
/* Demangled: featureIsCategoryPathSupport */
int featureIsCategoryPathSupport(void);

/* Symbol: reloadCustXmlThreadLoop */
/* Demangled: reloadCustXmlThreadLoop */
int reloadCustXmlThreadLoop(void);

/* Symbol: appHandleNotifyAllCallbacks */
/* Demangled: appHandleNotifyAllCallbacks */
int appHandleNotifyAllCallbacks(void);

/* Symbol: utilIsUIAudioType */
/* Demangled: utilIsUIAudioType */
int utilIsUIAudioType(void);

/* Symbol: _Z16initProcessStatev */
/* Demangled: initProcessState() */
int _Z16initProcessStatev(void);

/* Symbol: appAudioTypeLoadingList */
/* Demangled: appAudioTypeLoadingList */
extern void* appAudioTypeLoadingList;

/* Symbol: audioTypeSetParamData */
/* Demangled: audioTypeSetParamData */
int audioTypeSetParamData(void);

/* Symbol: searchParamTree */
/* Demangled: searchParamTree */
int searchParamTree(void);

/* Symbol: appHandleReleaseAllAudioTypeXml */
/* Demangled: appHandleReleaseAllAudioTypeXml */
int appHandleReleaseAllAudioTypeXml(void);

/* Symbol: searchFeatureCategoryPath */
/* Demangled: searchFeatureCategoryPath */
int searchFeatureCategoryPath(void);

/* Symbol: paramDataTypeToStr */
/* Demangled: paramDataTypeToStr */
int paramDataTypeToStr(void);

/* Symbol: utilNativeSaveXml */
/* Demangled: utilNativeSaveXml */
int utilNativeSaveXml(void);

/* Symbol: testReadWriteParam */
/* Demangled: testReadWriteParam */
int testReadWriteParam(void);

/* Symbol: utilConvDataToString */
/* Demangled: utilConvDataToString */
int utilConvDataToString(void);

/* Symbol: appXmlFreeDoc */
/* Demangled: appXmlFreeDoc */
int appXmlFreeDoc(void);

/* Symbol: paramUnitGetParamByIndex */
/* Demangled: paramUnitGetParamByIndex */
int paramUnitGetParamByIndex(void);

/* Symbol: paramGetArraySizeFromString */
/* Demangled: paramGetArraySizeFromString */
int paramGetArraySizeFromString(void);

/* Symbol: audioTypeGetCategoryTypeListNode */
/* Demangled: audioTypeGetCategoryTypeListNode */
int audioTypeGetCategoryTypeListNode(void);

/* Symbol: testHashParam */
/* Demangled: testHashParam */
int testHashParam(void);

/* Symbol: utilFindUnusedParamId */
/* Demangled: utilFindUnusedParamId */
int utilFindUnusedParamId(void);

/* Symbol: appHandleGetAudioTypeFilePath */
/* Demangled: appHandleGetAudioTypeFilePath */
int appHandleGetAudioTypeFilePath(void);

/* Symbol: utilConvDataStringToNative */
/* Demangled: utilConvDataStringToNative */
int utilConvDataStringToNative(void);

/* Symbol: xmlNodeGetProp */
/* Demangled: xmlNodeGetProp */
int xmlNodeGetProp(void);

/* Symbol: appXmlSaveFormatFileEnc */
/* Demangled: appXmlSaveFormatFileEnc */
int appXmlSaveFormatFileEnc(void);

/* Symbol: fieldInfoCreate */
/* Demangled: fieldInfoCreate */
int fieldInfoCreate(void);

/* Symbol: appHandleCompressFiles */
/* Demangled: appHandleCompressFiles */
int appHandleCompressFiles(void);

/* Symbol: appHandleDumpAudioTypeList */
/* Demangled: appHandleDumpAudioTypeList */
int appHandleDumpAudioTypeList(void);

/* Symbol: appHandleReadLock */
/* Demangled: appHandleReadLock */
int appHandleReadLock(void);

/* Symbol: appXmlNewProp */
/* Demangled: appXmlNewProp */
int appXmlNewProp(void);

/* Symbol: appHandleParseXml */
/* Demangled: appHandleParseXml */
int appHandleParseXml(void);

/* Symbol: appHandleShowAudioTypeSupportedVerInfo */
/* Demangled: appHandleShowAudioTypeSupportedVerInfo */
int appHandleShowAudioTypeSupportedVerInfo(void);

/* Symbol: findXmlNodeByElemName */
/* Demangled: findXmlNodeByElemName */
int findXmlNodeByElemName(void);

/* Symbol: utilNativeSetField */
/* Demangled: utilNativeSetField */
int utilNativeSetField(void);

/* Symbol: categoryAliasCreate */
/* Demangled: categoryAliasCreate */
int categoryAliasCreate(void);

/* Symbol: appHandleGetFeatureOptionByIndex */
/* Demangled: appHandleGetFeatureOptionByIndex */
int appHandleGetFeatureOptionByIndex(void);

/* Symbol: appHandleGetPreloadAudioTypeFilePath */
/* Demangled: appHandleGetPreloadAudioTypeFilePath */
int appHandleGetPreloadAudioTypeFilePath(void);

/* Symbol: appHandleRedirectIOToConsole */
/* Demangled: appHandleRedirectIOToConsole */
int appHandleRedirectIOToConsole(void);

/* Symbol: appHandleReloadCustXml */
/* Demangled: appHandleReloadCustXml */
int appHandleReloadCustXml(void);

/* Symbol: treeRootGetFeatureByName */
/* Demangled: treeRootGetFeatureByName */
int treeRootGetFeatureByName(void);

/* Symbol: paramCreate */
/* Demangled: paramCreate */
int paramCreate(void);

/* Symbol: appHandleIsNodeFeatureOptionEnabled */
/* Demangled: appHandleIsNodeFeatureOptionEnabled */
int appHandleIsNodeFeatureOptionEnabled(void);

/* Symbol: categoryPathValidation */
/* Demangled: categoryPathValidation */
int categoryPathValidation(void);

/* Symbol: showTreeRoot */
/* Demangled: showTreeRoot */
int showTreeRoot(void);

/* Symbol: appHandleGetAudioTypeByIndex */
/* Demangled: appHandleGetAudioTypeByIndex */
int appHandleGetAudioTypeByIndex(void);

/* Symbol: paramUnitGetNumOfParam */
/* Demangled: paramUnitGetNumOfParam */
int paramUnitGetNumOfParam(void);

/* Symbol: paramUnitGetParamInfo */
/* Demangled: paramUnitGetParamInfo */
int paramUnitGetParamInfo(void);

/* Symbol: featureFieldRelease */
/* Demangled: featureFieldRelease */
int featureFieldRelease(void);

/* Symbol: fuzzySearchFeatureCategoryPath */
/* Demangled: fuzzySearchFeatureCategoryPath */
int fuzzySearchFeatureCategoryPath(void);

/* Symbol: print_element_names */
/* Demangled: print_element_names */
int print_element_names(void);

/* Symbol: appLogFp */
/* Demangled: appLogFp */
extern void* appLogFp;

/* Symbol: appXmlCleanupParser */
/* Demangled: appXmlCleanupParser */
int appXmlCleanupParser(void);

/* Symbol: audioTypeGetCategoryTypeByIndex */
/* Demangled: audioTypeGetCategoryTypeByIndex */
int audioTypeGetCategoryTypeByIndex(void);

/* Symbol: audioTypeGetParamInfoByIndex */
/* Demangled: audioTypeGetParamInfoByIndex */
int audioTypeGetParamInfoByIndex(void);

/* Symbol: featureOptionRelease */
/* Demangled: featureOptionRelease */
int featureOptionRelease(void);

/* Symbol: utilLog */
/* Demangled: utilLog */
int utilLog(void);

/* Symbol: fieldInfoRelease */
/* Demangled: fieldInfoRelease */
int fieldInfoRelease(void);

/* Symbol: audioTypeGetParamInfoByName */
/* Demangled: audioTypeGetParamInfoByName */
int audioTypeGetParamInfoByName(void);

/* Symbol: testMemoryLeak */
/* Demangled: testMemoryLeak */
int testMemoryLeak(void);

/* Symbol: appHandleGetNumOfFeatureOption */
/* Demangled: appHandleGetNumOfFeatureOption */
int appHandleGetNumOfFeatureOption(void);

/* Symbol: audioTypeGetNumOfCategoryType */
/* Demangled: audioTypeGetNumOfCategoryType */
int audioTypeGetNumOfCategoryType(void);

/* Symbol: audioTypeIsTuningToolSupportedXmlVer */
/* Demangled: audioTypeIsTuningToolSupportedXmlVer */
int audioTypeIsTuningToolSupportedXmlVer(void);

/* Symbol: audioTypeSetFieldData */
/* Demangled: audioTypeSetFieldData */
int audioTypeSetFieldData(void);

/* Symbol: utilNativeSetParam */
/* Demangled: utilNativeSetParam */
int utilNativeSetParam(void);

/* Symbol: isCustXmlEnable */
/* Demangled: isCustXmlEnable */
int isCustXmlEnable(void);

/* Symbol: paramUnitClone */
/* Demangled: paramUnitClone */
int paramUnitClone(void);

/* Symbol: categoryTypeGetCategoryByIndex */
/* Demangled: categoryTypeGetCategoryByIndex */
int categoryTypeGetCategoryByIndex(void);

/* Symbol: categoryTypeGetNumOfAllCategory */
/* Demangled: categoryTypeGetNumOfAllCategory */
int categoryTypeGetNumOfAllCategory(void);

/* Symbol: appHandleGetBuildTimeStamp */
/* Demangled: appHandleGetBuildTimeStamp */
int appHandleGetBuildTimeStamp(void);

/* Symbol: audioTypeCreate */
/* Demangled: audioTypeCreate */
int audioTypeCreate(void);

/* Symbol: xmlNodeGetWording */
/* Demangled: xmlNodeGetWording */
int xmlNodeGetWording(void);

/* Symbol: featureFieldCreate */
/* Demangled: featureFieldCreate */
int featureFieldCreate(void);

/* Symbol: utilLogClose */
/* Demangled: utilLogClose */
int utilLogClose(void);

/* Symbol: categoryTypeCreate */
/* Demangled: categoryTypeCreate */
int categoryTypeCreate(void);

/* Symbol: categoryTypeGetCategoryGroupByIndex */
/* Demangled: categoryTypeGetCategoryGroupByIndex */
int categoryTypeGetCategoryGroupByIndex(void);

/* Symbol: categoryPathRetrievedHandler */
/* Demangled: categoryPathRetrievedHandler */
int categoryPathRetrievedHandler(void);

/* Symbol: paramTreeCreate */
/* Demangled: paramTreeCreate */
int paramTreeCreate(void);

/* Symbol: categoryAliasRelease */
/* Demangled: categoryAliasRelease */
int categoryAliasRelease(void);

/* Symbol: appHandleReleaseAudioTypeHash */
/* Demangled: appHandleReleaseAudioTypeHash */
int appHandleReleaseAudioTypeHash(void);

/* Symbol: appHandleUncompressFile */
/* Demangled: appHandleUncompressFile */
int appHandleUncompressFile(void);

/* Symbol: appHandleUninit */
/* Demangled: appHandleUninit */
int appHandleUninit(void);

/* Symbol: signalHandler */
/* Demangled: signalHandler */
int signalHandler(void);

/* Symbol: testCb */
/* Demangled: testCb */
int testCb(void);

/* Symbol: appHandleIsFeatureOptionEnabled */
/* Demangled: appHandleIsFeatureOptionEnabled */
int appHandleIsFeatureOptionEnabled(void);

/* Symbol: findFeatureCategoryPath */
/* Demangled: findFeatureCategoryPath */
int findFeatureCategoryPath(void);

/* Symbol: paramInfoRelease */
/* Demangled: paramInfoRelease */
int paramInfoRelease(void);

/* Symbol: utilStrtok */
/* Demangled: utilStrtok */
int utilStrtok(void);

/* Symbol: appHandleLoadAllAudioTypeXml */
/* Demangled: appHandleLoadAllAudioTypeXml */
int appHandleLoadAllAudioTypeXml(void);

/* Symbol: audioTypeParseXmlVer */
/* Demangled: audioTypeParseXmlVer */
int audioTypeParseXmlVer(void);

/* Symbol: strPairRelease */
/* Demangled: strPairRelease */
int strPairRelease(void);

/* Symbol: commonThreadLoop */
/* Demangled: commonThreadLoop */
int commonThreadLoop(void);

/* Symbol: audioTypeValidCategoryGroupName */
/* Demangled: audioTypeValidCategoryGroupName */
int audioTypeValidCategoryGroupName(void);

/* Symbol: audioTypeGetParamHash */
/* Demangled: audioTypeGetParamHash */
int audioTypeGetParamHash(void);

/* Symbol: categoryTypeGetCategoryGroupByWording */
/* Demangled: categoryTypeGetCategoryGroupByWording */
int categoryTypeGetCategoryGroupByWording(void);

/* Symbol: audioTypeLoadStage1Hash */
/* Demangled: audioTypeLoadStage1Hash */
int audioTypeLoadStage1Hash(void);

/* Symbol: audioTypeParamUnitCopy */
/* Demangled: audioTypeParamUnitCopy */
int audioTypeParamUnitCopy(void);

/* Symbol: paramInfoCreate */
/* Demangled: paramInfoCreate */
int paramInfoCreate(void);

/* Symbol: audioTypeSaveAudioParamXml */
/* Demangled: audioTypeSaveAudioParamXml */
int audioTypeSaveAudioParamXml(void);

/* Symbol: utilGetStdin */
/* Demangled: utilGetStdin */
int utilGetStdin(void);

/* Symbol: appDumpXmlDoc */
/* Demangled: appDumpXmlDoc */
int appDumpXmlDoc(void);

/* Symbol: appHandleCustXmlEnableChanged */
/* Demangled: appHandleCustXmlEnableChanged */
int appHandleCustXmlEnableChanged(void);

/* Symbol: removeNodeByFeatureOption */
/* Demangled: removeNodeByFeatureOption */
int removeNodeByFeatureOption(void);

/* Symbol: utilNativeGetField */
/* Demangled: utilNativeGetField */
int utilNativeGetField(void);

/* Symbol: paramTreeViewRelease */
/* Demangled: paramTreeViewRelease */
int paramTreeViewRelease(void);

/* Symbol: audioTypeIsHardCategoryGroup */
/* Demangled: audioTypeIsHardCategoryGroup */
int audioTypeIsHardCategoryGroup(void);

/* Symbol: retrieveAllCategoryPath */
/* Demangled: retrieveAllCategoryPath */
int retrieveAllCategoryPath(void);

/* Symbol: testDebugLevel */
/* Demangled: testDebugLevel */
int testDebugLevel(void);

/* Symbol: appHandleGetAudioTypeSupportedVerInfo */
/* Demangled: appHandleGetAudioTypeSupportedVerInfo */
int appHandleGetAudioTypeSupportedVerInfo(void);

/* Symbol: paramUnitGetFieldVal */
/* Demangled: paramUnitGetFieldVal */
int paramUnitGetFieldVal(void);

/* Symbol: appHandleAddAudioType */
/* Demangled: appHandleAddAudioType */
int appHandleAddAudioType(void);

/* Symbol: appHandleLoadDirAudioTypeInfo */
/* Demangled: appHandleLoadDirAudioTypeInfo */
int appHandleLoadDirAudioTypeInfo(void);

/* Symbol: paramUnitGetFieldInfo */
/* Demangled: paramUnitGetFieldInfo */
int paramUnitGetFieldInfo(void);

/* Symbol: featureCreate */
/* Demangled: featureCreate */
int featureCreate(void);

/* Symbol: appXmlFreeNode */
/* Demangled: appXmlFreeNode */
int appXmlFreeNode(void);

/* Symbol: audioTypeGetParamUnitDescNode */
/* Demangled: audioTypeGetParamUnitDescNode */
int audioTypeGetParamUnitDescNode(void);

/* Symbol: unloadXmlOps */
/* Demangled: unloadXmlOps */
int unloadXmlOps(void);

/* Symbol: treeRootCreate */
/* Demangled: treeRootCreate */
int treeRootCreate(void);

/* Symbol: appXmlNewNode */
/* Demangled: appXmlNewNode */
int appXmlNewNode(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: paramSetFieldVal */
/* Demangled: paramSetFieldVal */
int paramSetFieldVal(void);

/* Symbol: audioTypeGetTreeRoot */
/* Demangled: audioTypeGetTreeRoot */
int audioTypeGetTreeRoot(void);

/* Symbol: appHandleGetNumOfAudioType */
/* Demangled: appHandleGetNumOfAudioType */
int appHandleGetNumOfAudioType(void);

/* Symbol: audioTypeParseTabName */
/* Demangled: audioTypeParseTabName */
int audioTypeParseTabName(void);

/* Symbol: utilXmlNodeGetFieldInfo */
/* Demangled: utilXmlNodeGetFieldInfo */
int utilXmlNodeGetFieldInfo(void);

/* Symbol: testAppHandleInitUninit */
/* Demangled: testAppHandleInitUninit */
int testAppHandleInitUninit(void);

/* Symbol: categoryTypeGetNumOfCategory */
/* Demangled: categoryTypeGetNumOfCategory */
int categoryTypeGetNumOfCategory(void);

/* Symbol: appHandleRemoveAudioTypeByFeatureOptions */
/* Demangled: appHandleRemoveAudioTypeByFeatureOptions */
int appHandleRemoveAudioTypeByFeatureOptions(void);

/* Symbol: appXmlDocGetRootElement */
/* Demangled: appXmlDocGetRootElement */
int appXmlDocGetRootElement(void);

/* Symbol: utilNativeGetParam */
/* Demangled: utilNativeGetParam */
int utilNativeGetParam(void);

/* Symbol: testAudioTypeLockFun */
/* Demangled: testAudioTypeLockFun */
int testAudioTypeLockFun(void);

/* Symbol: categoryTypeGetCategoryByAlias */
/* Demangled: categoryTypeGetCategoryByAlias */
int categoryTypeGetCategoryByAlias(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: paramDataTypeToEnum */
/* Demangled: paramDataTypeToEnum */
int paramDataTypeToEnum(void);

/* Symbol: audioTypeGetNumOfParamInfo */
/* Demangled: audioTypeGetNumOfParamInfo */
int audioTypeGetNumOfParamInfo(void);

/* Symbol: audioTypeLoadStage2Hash */
/* Demangled: audioTypeLoadStage2Hash */
int audioTypeLoadStage2Hash(void);

/* Symbol: audioTypeReadLock */
/* Demangled: audioTypeReadLock */
int audioTypeReadLock(void);

/* Symbol: treeRootRelease */
/* Demangled: treeRootRelease */
int treeRootRelease(void);

/* Symbol: utilShowParamValue */
/* Demangled: utilShowParamValue */
int utilShowParamValue(void);

/* Symbol: paramTreeRelease */
/* Demangled: paramTreeRelease */
int paramTreeRelease(void);

/* Symbol: notifyCbTest */
/* Demangled: notifyCbTest */
int notifyCbTest(void);

/* Symbol: testHashParamUnit */
/* Demangled: testHashParamUnit */
int testHashParamUnit(void);

/* Symbol: paramNewDataStrWithMode */
/* Demangled: paramNewDataStrWithMode */
int paramNewDataStrWithMode(void);

/* Symbol: paramInfoGetFieldInfoByIndex */
/* Demangled: paramInfoGetFieldInfoByIndex */
int paramInfoGetFieldInfoByIndex(void);

/* Symbol: audioTypeGetCategoryTypeByWording */
/* Demangled: audioTypeGetCategoryTypeByWording */
int audioTypeGetCategoryTypeByWording(void);

/* Symbol: paramUnitRelease */
/* Demangled: paramUnitRelease */
int paramUnitRelease(void);

/* Symbol: strPairCreate */
/* Demangled: strPairCreate */
int strPairCreate(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: appHandleGetAudioTypeByName */
/* Demangled: appHandleGetAudioTypeByName */
int appHandleGetAudioTypeByName(void);

/* Symbol: appHandleIsValidAudioType */
/* Demangled: appHandleIsValidAudioType */
int appHandleIsValidAudioType(void);

/* Symbol: appHandleUnlock */
/* Demangled: appHandleUnlock */
int appHandleUnlock(void);

/* Symbol: audioTypeLoadParamFieldInfoHash */
/* Demangled: audioTypeLoadParamFieldInfoHash */
int audioTypeLoadParamFieldInfoHash(void);

/* Symbol: appHandleReleaseFeatureOptionsHash */
/* Demangled: appHandleReleaseFeatureOptionsHash */
int appHandleReleaseFeatureOptionsHash(void);

/* Symbol: appXmlParseFile */
/* Demangled: appXmlParseFile */
int appXmlParseFile(void);

/* Symbol: audioTypeGetParamUnit */
/* Demangled: audioTypeGetParamUnit */
int audioTypeGetParamUnit(void);

/* Symbol: uninitXmlOps */
/* Demangled: uninitXmlOps */
int uninitXmlOps(void);

/* Symbol: utilNativeGetChecklist */
/* Demangled: utilNativeGetChecklist */
int utilNativeGetChecklist(void);

/* Symbol: utilUsleep */
/* Demangled: utilUsleep */
int utilUsleep(void);

/* Symbol: featureRelease */
/* Demangled: featureRelease */
int featureRelease(void);

/* Symbol: categoryPathCreate */
/* Demangled: categoryPathCreate */
int categoryPathCreate(void);

/* Symbol: categoryGroupGetCategoryByIndex */
/* Demangled: categoryGroupGetCategoryByIndex */
int categoryGroupGetCategoryByIndex(void);

/* Symbol: categoryRelease */
/* Demangled: categoryRelease */
int categoryRelease(void);

/* Symbol: paramGetNumOfBytes */
/* Demangled: paramGetNumOfBytes */
int paramGetNumOfBytes(void);

/* Symbol: utilIsAudioTypeInLoadingList */
/* Demangled: utilIsAudioTypeInLoadingList */
int utilIsAudioTypeInLoadingList(void);

/* Symbol: utilCompNormalizeCategoryPath */
/* Demangled: utilCompNormalizeCategoryPath */
int utilCompNormalizeCategoryPath(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: appHandleInit */
/* Demangled: appHandleInit */
int appHandleInit(void);

/* Symbol: appHandleInstWriteLock */
/* Demangled: appHandleInstWriteLock */
int appHandleInstWriteLock(void);

/* Symbol: audioTypeWriteLock */
/* Demangled: audioTypeWriteLock */
int audioTypeWriteLock(void);

/* Symbol: testAudioTypeLock */
/* Demangled: testAudioTypeLock */
int testAudioTypeLock(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: audioSystemSetParameters */
/* Demangled: audioSystemSetParameters */
int audioSystemSetParameters(void);

/* Symbol: categoryTypeGetCategoryByName */
/* Demangled: categoryTypeGetCategoryByName */
int categoryTypeGetCategoryByName(void);

/* Symbol: audioTypeLoadParamTreeHash */
/* Demangled: audioTypeLoadParamTreeHash */
int audioTypeLoadParamTreeHash(void);

/* Symbol: audioTypeLoadParamUnitHash */
/* Demangled: audioTypeLoadParamUnitHash */
int audioTypeLoadParamUnitHash(void);

/* Symbol: featureOptionCreate */
/* Demangled: featureOptionCreate */
int featureOptionCreate(void);

/* Symbol: getDebugLevel */
/* Demangled: getDebugLevel */
int getDebugLevel(void);

/* Symbol: paramSetupDataInfoByVal */
/* Demangled: paramSetupDataInfoByVal */
int paramSetupDataInfoByVal(void);

/* Symbol: appHandleGetInstance */
/* Demangled: appHandleGetInstance */
int appHandleGetInstance(void);

/* Symbol: appXmlDocSetRootElement */
/* Demangled: appXmlDocSetRootElement */
int appXmlDocSetRootElement(void);

/* Symbol: audioTypeGetNumOfParamTree */
/* Demangled: audioTypeGetNumOfParamTree */
int audioTypeGetNumOfParamTree(void);

/* Symbol: categoryTypeGetCategoryByWording */
/* Demangled: categoryTypeGetCategoryByWording */
int categoryTypeGetCategoryByWording(void);

/* Symbol: appSetDebugLevel */
/* Demangled: appSetDebugLevel */
int appSetDebugLevel(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: appGetAudioTypeLoadingList */
/* Demangled: appGetAudioTypeLoadingList */
int appGetAudioTypeLoadingList(void);

/* Symbol: appHandleThreadLoop */
/* Demangled: appHandleThreadLoop */
int appHandleThreadLoop(void);

/* Symbol: appHandleWriteLock */
/* Demangled: appHandleWriteLock */
int appHandleWriteLock(void);

/* Symbol: utilNativeGetCategory */
/* Demangled: utilNativeGetCategory */
int utilNativeGetCategory(void);

/* Symbol: categoryPathRelease */
/* Demangled: categoryPathRelease */
int categoryPathRelease(void);

/* Symbol: appXmlNewChild */
/* Demangled: appXmlNewChild */
int appXmlNewChild(void);

/* Symbol: audioTypeSetupAudioParamNode */
/* Demangled: audioTypeSetupAudioParamNode */
int audioTypeSetupAudioParamNode(void);

/* Symbol: appXmlMemGet */
/* Demangled: appXmlMemGet */
int appXmlMemGet(void);

/* Symbol: appHandleReviseXmlDocByFeatureOptions */
/* Demangled: appHandleReviseXmlDocByFeatureOptions */
int appHandleReviseXmlDocByFeatureOptions(void);

/* Symbol: audioTypeUnlock */
/* Demangled: audioTypeUnlock */
int audioTypeUnlock(void);

/* Symbol: findParamTree */
/* Demangled: findParamTree */
int findParamTree(void);

/* Symbol: categoryTypeGetNumOfCategoryGroup */
/* Demangled: categoryTypeGetNumOfCategoryGroup */
int categoryTypeGetNumOfCategoryGroup(void);

/* Symbol: paramInfoGetFieldInfoByName */
/* Demangled: paramInfoGetFieldInfoByName */
int paramInfoGetFieldInfoByName(void);

/* Symbol: appHandleInstUnlock */
/* Demangled: appHandleInstUnlock */
int appHandleInstUnlock(void);

/* Symbol: appHandleLoadAppOpsSym */
/* Demangled: appHandleLoadAppOpsSym */
int appHandleLoadAppOpsSym(void);

/* Symbol: utilMkdir */
/* Demangled: utilMkdir */
int utilMkdir(void);

/* Symbol: loadXmlOps */
/* Demangled: loadXmlOps */
int loadXmlOps(void);

/* Symbol: categoryGroupGetCategoryByWording */
/* Demangled: categoryGroupGetCategoryByWording */
int categoryGroupGetCategoryByWording(void);

/* Symbol: paramInfoGetNumOfFieldInfo */
/* Demangled: paramInfoGetNumOfFieldInfo */
int paramInfoGetNumOfFieldInfo(void);

/* Symbol: appHandleLoadDirFeatureOptionsInfo */
/* Demangled: appHandleLoadDirFeatureOptionsInfo */
int appHandleLoadDirFeatureOptionsInfo(void);

/* Symbol: appHandleRegXmlChangedCb */
/* Demangled: appHandleRegXmlChangedCb */
int appHandleRegXmlChangedCb(void);

/* Symbol: audioTypeRelease */
/* Demangled: audioTypeRelease */
int audioTypeRelease(void);

/* Symbol: fieldInfoGetCheckListValue */
/* Demangled: fieldInfoGetCheckListValue */
int fieldInfoGetCheckListValue(void);

/* Symbol: utilNormalizeCategoryPathForAudioType */
/* Demangled: utilNormalizeCategoryPathForAudioType */
int utilNormalizeCategoryPathForAudioType(void);

/* Symbol: categoryGroupRelease */
/* Demangled: categoryGroupRelease */
int categoryGroupRelease(void);

/* Symbol: paramRelease */
/* Demangled: paramRelease */
int paramRelease(void);

/* Symbol: appHandleUnregXmlChangedCb */
/* Demangled: appHandleUnregXmlChangedCb */
int appHandleUnregXmlChangedCb(void);

/* Symbol: appXmlGetProp */
/* Demangled: appXmlGetProp */
int appXmlGetProp(void);

/* Symbol: utilNormalizeCategoryGroupPathForAudioType */
/* Demangled: utilNormalizeCategoryGroupPathForAudioType */
int utilNormalizeCategoryGroupPathForAudioType(void);

/* Symbol: categoryTypeGetAllCategoryByIndex */
/* Demangled: categoryTypeGetAllCategoryByIndex */
int categoryTypeGetAllCategoryByIndex(void);

/* Symbol: paramHashClone */
/* Demangled: paramHashClone */
int paramHashClone(void);

/* Symbol: appXmlUnlinkNode */
/* Demangled: appXmlUnlinkNode */
int appXmlUnlinkNode(void);

/* Symbol: outputLogToStdout */
/* Demangled: outputLogToStdout */
extern void* outputLogToStdout;

/* Symbol: categoryCreate */
/* Demangled: categoryCreate */
int categoryCreate(void);

/* Symbol: categoryGroupCreate */
/* Demangled: categoryGroupCreate */
int categoryGroupCreate(void);

/* Symbol: categoryGroupGetNumOfCategory */
/* Demangled: categoryGroupGetNumOfCategory */
int categoryGroupGetNumOfCategory(void);

/* Symbol: unitTest */
/* Demangled: unitTest */
int unitTest(void);

/* Symbol: appXmlNewDoc */
/* Demangled: appXmlNewDoc */
int appXmlNewDoc(void);

/* Symbol: fuzzySearchParamTree */
/* Demangled: fuzzySearchParamTree */
int fuzzySearchParamTree(void);

/* Symbol: paramGetFieldVal */
/* Demangled: paramGetFieldVal */
int paramGetFieldVal(void);

/* Symbol: appSetAudioTypeLoadingList */
/* Demangled: appSetAudioTypeLoadingList */
int appSetAudioTypeLoadingList(void);

/* Symbol: audioTypeGetCategoryTypeByName */
/* Demangled: audioTypeGetCategoryTypeByName */
int audioTypeGetCategoryTypeByName(void);

/* Symbol: paramUnitCreate */
/* Demangled: paramUnitCreate */
int paramUnitCreate(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBAUDIO_PARAM_PARSER_VND_H */
