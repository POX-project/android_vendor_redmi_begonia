/*
 * Reverse-Engineered ABI Specification for: libaudio_param_parser-sys.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libaudio_param_parser-sys.so
 */

#ifndef BEGONIA_RE_LIBAUDIO_PARAM_PARSER_SYS_H
#define BEGONIA_RE_LIBAUDIO_PARAM_PARSER_SYS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: paramTreeViewRelease */
/* Demangled: paramTreeViewRelease */
int paramTreeViewRelease(void);

/* Symbol: appXmlNewNode */
/* Demangled: appXmlNewNode */
int appXmlNewNode(void);

/* Symbol: appHandleGetFeatureOptionValue */
/* Demangled: appHandleGetFeatureOptionValue */
int appHandleGetFeatureOptionValue(void);

/* Symbol: appXmlFreeDoc */
/* Demangled: appXmlFreeDoc */
int appXmlFreeDoc(void);

/* Symbol: audioTypeReadLock */
/* Demangled: audioTypeReadLock */
int audioTypeReadLock(void);

/* Symbol: paramUnitGetParamByName */
/* Demangled: paramUnitGetParamByName */
int paramUnitGetParamByName(void);

/* Symbol: paramTreeViewCreate */
/* Demangled: paramTreeViewCreate */
int paramTreeViewCreate(void);

/* Symbol: appXmlNewChild */
/* Demangled: appXmlNewChild */
int appXmlNewChild(void);

/* Symbol: registerAudioParameterChangedCallback */
/* Demangled: registerAudioParameterChangedCallback */
int registerAudioParameterChangedCallback(void);

/* Symbol: appHandleInstUnlock */
/* Demangled: appHandleInstUnlock */
int appHandleInstUnlock(void);

/* Symbol: appHandleIsNodeFeatureOptionEnabled */
/* Demangled: appHandleIsNodeFeatureOptionEnabled */
int appHandleIsNodeFeatureOptionEnabled(void);

/* Symbol: utilDumpAudioTypeLoadingList */
/* Demangled: utilDumpAudioTypeLoadingList */
int utilDumpAudioTypeLoadingList(void);

/* Symbol: paramSetupDataInfoByStr */
/* Demangled: paramSetupDataInfoByStr */
int paramSetupDataInfoByStr(void);

/* Symbol: appHandleThreadLoop */
/* Demangled: appHandleThreadLoop */
int appHandleThreadLoop(void);

/* Symbol: audioTypeGetParamInfoByName */
/* Demangled: audioTypeGetParamInfoByName */
int audioTypeGetParamInfoByName(void);

/* Symbol: audioTypeLoadParamTreeHash */
/* Demangled: audioTypeLoadParamTreeHash */
int audioTypeLoadParamTreeHash(void);

/* Symbol: inotifyTest */
/* Demangled: inotifyTest */
int inotifyTest(void);

/* Symbol: testAudioTypeLockFun */
/* Demangled: testAudioTypeLockFun */
int testAudioTypeLockFun(void);

/* Symbol: testHashParamUnit */
/* Demangled: testHashParamUnit */
int testHashParamUnit(void);

/* Symbol: gDeathRecipient */
/* Demangled: gDeathRecipient */
extern void* gDeathRecipient;

/* Symbol: categoryTypeGetCategoryByName */
/* Demangled: categoryTypeGetCategoryByName */
int categoryTypeGetCategoryByName(void);

/* Symbol: appGetXmlDirFromProperty */
/* Demangled: appGetXmlDirFromProperty */
int appGetXmlDirFromProperty(void);

/* Symbol: fuzzySearchParamTree */
/* Demangled: fuzzySearchParamTree */
int fuzzySearchParamTree(void);

/* Symbol: paramInfoCreate */
/* Demangled: paramInfoCreate */
int paramInfoCreate(void);

/* Symbol: paramUnitGetNumOfParam */
/* Demangled: paramUnitGetNumOfParam */
int paramUnitGetNumOfParam(void);

/* Symbol: paramHashClone */
/* Demangled: paramHashClone */
int paramHashClone(void);

/* Symbol: appHandleReloadCustXml */
/* Demangled: appHandleReloadCustXml */
int appHandleReloadCustXml(void);

/* Symbol: treeRootCreate */
/* Demangled: treeRootCreate */
int treeRootCreate(void);

/* Symbol: audioTypeLoadParamUnitHash */
/* Demangled: audioTypeLoadParamUnitHash */
int audioTypeLoadParamUnitHash(void);

/* Symbol: appHandleGetInstance */
/* Demangled: appHandleGetInstance */
int appHandleGetInstance(void);

/* Symbol: gRetval */
/* Demangled: gRetval */
extern void* gRetval;

/* Symbol: categoryTypeGetNumOfAllCategory */
/* Demangled: categoryTypeGetNumOfAllCategory */
int categoryTypeGetNumOfAllCategory(void);

/* Symbol: paramInfoGetNumOfFieldInfo */
/* Demangled: paramInfoGetNumOfFieldInfo */
int paramInfoGetNumOfFieldInfo(void);

/* Symbol: appHandleGetAudioTypeFilePath */
/* Demangled: appHandleGetAudioTypeFilePath */
int appHandleGetAudioTypeFilePath(void);

/* Symbol: appHandleShowAudioTypeSupportedVerInfo */
/* Demangled: appHandleShowAudioTypeSupportedVerInfo */
int appHandleShowAudioTypeSupportedVerInfo(void);

/* Symbol: audioTypeIsDeviceSupportedXmlVer */
/* Demangled: audioTypeIsDeviceSupportedXmlVer */
int audioTypeIsDeviceSupportedXmlVer(void);

/* Symbol: treeRootGetFeatureByName */
/* Demangled: treeRootGetFeatureByName */
int treeRootGetFeatureByName(void);

/* Symbol: paramUnitRelease */
/* Demangled: paramUnitRelease */
int paramUnitRelease(void);

/* Symbol: searchParamTree */
/* Demangled: searchParamTree */
int searchParamTree(void);

/* Symbol: fieldInfoCreate */
/* Demangled: fieldInfoCreate */
int fieldInfoCreate(void);

/* Symbol: appHandleReviseXmlDocByFeatureOptions */
/* Demangled: appHandleReviseXmlDocByFeatureOptions */
int appHandleReviseXmlDocByFeatureOptions(void);

/* Symbol: appHandleUncompressFile */
/* Demangled: appHandleUncompressFile */
int appHandleUncompressFile(void);

/* Symbol: audioTypeGetParamUnit */
/* Demangled: audioTypeGetParamUnit */
int audioTypeGetParamUnit(void);

/* Symbol: searchFeatureCategoryPath */
/* Demangled: searchFeatureCategoryPath */
int searchFeatureCategoryPath(void);

/* Symbol: notifyCbTest */
/* Demangled: notifyCbTest */
int notifyCbTest(void);

/* Symbol: _Z16initProcessStatev */
/* Demangled: initProcessState() */
int _Z16initProcessStatev(void);

/* Symbol: audioSystemSetParameters */
/* Demangled: audioSystemSetParameters */
int audioSystemSetParameters(void);

/* Symbol: appHandleRedirectIOToConsole */
/* Demangled: appHandleRedirectIOToConsole */
int appHandleRedirectIOToConsole(void);

/* Symbol: appXmlDocSetRootElement */
/* Demangled: appXmlDocSetRootElement */
int appXmlDocSetRootElement(void);

/* Symbol: testHashParam */
/* Demangled: testHashParam */
int testHashParam(void);

/* Symbol: appHandleGetAudioTypeByName */
/* Demangled: appHandleGetAudioTypeByName */
int appHandleGetAudioTypeByName(void);

/* Symbol: appHandleWriteLock */
/* Demangled: appHandleWriteLock */
int appHandleWriteLock(void);

/* Symbol: audioTypeGetCategoryTypeByIndex */
/* Demangled: audioTypeGetCategoryTypeByIndex */
int audioTypeGetCategoryTypeByIndex(void);

/* Symbol: paramUnitClone */
/* Demangled: paramUnitClone */
int paramUnitClone(void);

/* Symbol: audioTypeSetupAudioParamNode */
/* Demangled: audioTypeSetupAudioParamNode */
int audioTypeSetupAudioParamNode(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int fn___aeabi_memset4(void) __asm__("__aeabi_memset4");

/* Symbol: audioTypeGetCategoryTypeListNode */
/* Demangled: audioTypeGetCategoryTypeListNode */
int audioTypeGetCategoryTypeListNode(void);

/* Symbol: fieldInfoGetCheckListValue */
/* Demangled: fieldInfoGetCheckListValue */
int fieldInfoGetCheckListValue(void);

/* Symbol: appHandleLoadDirFeatureOptionsInfo */
/* Demangled: appHandleLoadDirFeatureOptionsInfo */
int appHandleLoadDirFeatureOptionsInfo(void);

/* Symbol: audioTypeDump */
/* Demangled: audioTypeDump */
int audioTypeDump(void);

/* Symbol: audioTypeParamUnitCopy */
/* Demangled: audioTypeParamUnitCopy */
int audioTypeParamUnitCopy(void);

/* Symbol: utilGenCheckList */
/* Demangled: utilGenCheckList */
int utilGenCheckList(void);

/* Symbol: categoryPathRelease */
/* Demangled: categoryPathRelease */
int categoryPathRelease(void);

/* Symbol: _ZN7android2spI22AudioHalDeathRecipientED2Ev */
/* Demangled: android::sp<AudioHalDeathRecipient>::~sp() */
int _ZN7android2spI22AudioHalDeathRecipientED2Ev(void);

/* Symbol: appHandleUninit */
/* Demangled: appHandleUninit */
int appHandleUninit(void);

/* Symbol: signalHandler */
/* Demangled: signalHandler */
int signalHandler(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int fn___aeabi_memset8(void) __asm__("__aeabi_memset8");

/* Symbol: categoryGroupRelease */
/* Demangled: categoryGroupRelease */
int categoryGroupRelease(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int fn___aeabi_memclr(void) __asm__("__aeabi_memclr");

/* Symbol: audioTypeGetCategoryTypeByName */
/* Demangled: audioTypeGetCategoryTypeByName */
int audioTypeGetCategoryTypeByName(void);

/* Symbol: audioTypeUnlock */
/* Demangled: audioTypeUnlock */
int audioTypeUnlock(void);

/* Symbol: reloadCustXmlThreadLoop */
/* Demangled: reloadCustXmlThreadLoop */
int reloadCustXmlThreadLoop(void);

/* Symbol: utilNativeGetCategory */
/* Demangled: utilNativeGetCategory */
int utilNativeGetCategory(void);

/* Symbol: findParamTree */
/* Demangled: findParamTree */
int findParamTree(void);

/* Symbol: utilLog */
/* Demangled: utilLog */
int utilLog(void);

/* Symbol: categoryTypeGetCategoryByIndex */
/* Demangled: categoryTypeGetCategoryByIndex */
int categoryTypeGetCategoryByIndex(void);

/* Symbol: audioTypeParseXmlVer */
/* Demangled: audioTypeParseXmlVer */
int audioTypeParseXmlVer(void);

/* Symbol: categoryGroupGetCategoryByWording */
/* Demangled: categoryGroupGetCategoryByWording */
int categoryGroupGetCategoryByWording(void);

/* Symbol: categoryTypeGetCategoryByWording */
/* Demangled: categoryTypeGetCategoryByWording */
int categoryTypeGetCategoryByWording(void);

/* Symbol: categoryTypeRelease */
/* Demangled: categoryTypeRelease */
int categoryTypeRelease(void);

/* Symbol: paramGetArraySizeFromString */
/* Demangled: paramGetArraySizeFromString */
int paramGetArraySizeFromString(void);

/* Symbol: appHandleInit */
/* Demangled: appHandleInit */
int appHandleInit(void);

/* Symbol: appHandleLoadAllAudioTypeXml */
/* Demangled: appHandleLoadAllAudioTypeXml */
int appHandleLoadAllAudioTypeXml(void);

/* Symbol: utilNativeSaveXml */
/* Demangled: utilNativeSaveXml */
int utilNativeSaveXml(void);

/* Symbol: audioTypeLoadCategoryTypeHash */
/* Demangled: audioTypeLoadCategoryTypeHash */
int audioTypeLoadCategoryTypeHash(void);

/* Symbol: audioTypeLoadParamFieldInfoHash */
/* Demangled: audioTypeLoadParamFieldInfoHash */
int audioTypeLoadParamFieldInfoHash(void);

/* Symbol: utilCompNormalizeCategoryPath */
/* Demangled: utilCompNormalizeCategoryPath */
int utilCompNormalizeCategoryPath(void);

/* Symbol: _ZTV29AudioParameterChangedCallback */
/* Demangled: vtable for AudioParameterChangedCallback */
extern void* _ZTV29AudioParameterChangedCallback;

/* Symbol: categoryTypeGetCategoryGroupByWording */
/* Demangled: categoryTypeGetCategoryGroupByWording */
int categoryTypeGetCategoryGroupByWording(void);

/* Symbol: appHandleGetAudioTypeSupportedVerInfo */
/* Demangled: appHandleGetAudioTypeSupportedVerInfo */
int appHandleGetAudioTypeSupportedVerInfo(void);

/* Symbol: appHandleGetPreloadAudioTypeFilePath */
/* Demangled: appHandleGetPreloadAudioTypeFilePath */
int appHandleGetPreloadAudioTypeFilePath(void);

/* Symbol: getDebugLevel */
/* Demangled: getDebugLevel */
int getDebugLevel(void);

/* Symbol: audioTypeIsHardCategoryGroup */
/* Demangled: audioTypeIsHardCategoryGroup */
int audioTypeIsHardCategoryGroup(void);

/* Symbol: categoryGroupGetCategoryByIndex */
/* Demangled: categoryGroupGetCategoryByIndex */
int categoryGroupGetCategoryByIndex(void);

/* Symbol: appHandleRegXmlChangedCb */
/* Demangled: appHandleRegXmlChangedCb */
int appHandleRegXmlChangedCb(void);

/* Symbol: appDebugLevel */
/* Demangled: appDebugLevel */
extern void* appDebugLevel;

/* Symbol: paramInfoGetFieldInfoByIndex */
/* Demangled: paramInfoGetFieldInfoByIndex */
int paramInfoGetFieldInfoByIndex(void);

/* Symbol: appHandleGetBuildTimeStamp */
/* Demangled: appHandleGetBuildTimeStamp */
int appHandleGetBuildTimeStamp(void);

/* Symbol: audioTypeParseTabName */
/* Demangled: audioTypeParseTabName */
int audioTypeParseTabName(void);

/* Symbol: utilFindUnusedParamId */
/* Demangled: utilFindUnusedParamId */
int utilFindUnusedParamId(void);

/* Symbol: loadXmlOps */
/* Demangled: loadXmlOps */
int loadXmlOps(void);

/* Symbol: appHandleReadLock */
/* Demangled: appHandleReadLock */
int appHandleReadLock(void);

/* Symbol: audioTypeGetTreeRoot */
/* Demangled: audioTypeGetTreeRoot */
int audioTypeGetTreeRoot(void);

/* Symbol: audioTypeLoadStage2Hash */
/* Demangled: audioTypeLoadStage2Hash */
int audioTypeLoadStage2Hash(void);

/* Symbol: categoryTypeCreate */
/* Demangled: categoryTypeCreate */
int categoryTypeCreate(void);

/* Symbol: appHandleParseXml */
/* Demangled: appHandleParseXml */
int appHandleParseXml(void);

/* Symbol: appHandleReloadAudioType */
/* Demangled: appHandleReloadAudioType */
int appHandleReloadAudioType(void);

/* Symbol: appXmlCleanupParser */
/* Demangled: appXmlCleanupParser */
int appXmlCleanupParser(void);

/* Symbol: utilNativeGetParam */
/* Demangled: utilNativeGetParam */
int utilNativeGetParam(void);

/* Symbol: commonThreadLoop */
/* Demangled: commonThreadLoop */
int commonThreadLoop(void);

/* Symbol: categoryTypeGetCategoryGroupByIndex */
/* Demangled: categoryTypeGetCategoryGroupByIndex */
int categoryTypeGetCategoryGroupByIndex(void);

/* Symbol: appXmlFreeNode */
/* Demangled: appXmlFreeNode */
int appXmlFreeNode(void);

/* Symbol: paramUnitGetParamByIndex */
/* Demangled: paramUnitGetParamByIndex */
int paramUnitGetParamByIndex(void);

/* Symbol: gDevice */
/* Demangled: gDevice */
extern void* gDevice;

/* Symbol: paramInfoRelease */
/* Demangled: paramInfoRelease */
int paramInfoRelease(void);

/* Symbol: appHandleLoadAllAudioTypeHash */
/* Demangled: appHandleLoadAllAudioTypeHash */
int appHandleLoadAllAudioTypeHash(void);

/* Symbol: appXmlDocGetRootElement */
/* Demangled: appXmlDocGetRootElement */
int appXmlDocGetRootElement(void);

/* Symbol: appXmlSaveFormatFileEnc */
/* Demangled: appXmlSaveFormatFileEnc */
int appXmlSaveFormatFileEnc(void);

/* Symbol: testAudioTypeLock */
/* Demangled: testAudioTypeLock */
int testAudioTypeLock(void);

/* Symbol: categoryGroupCreate */
/* Demangled: categoryGroupCreate */
int categoryGroupCreate(void);

/* Symbol: audioTypeCreate */
/* Demangled: audioTypeCreate */
int audioTypeCreate(void);

/* Symbol: audioTypeLoadStage1Hash */
/* Demangled: audioTypeLoadStage1Hash */
int audioTypeLoadStage1Hash(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int fn___aeabi_memclr4(void) __asm__("__aeabi_memclr4");

/* Symbol: appHandleIsFeatureOptionEnabled */
/* Demangled: appHandleIsFeatureOptionEnabled */
int appHandleIsFeatureOptionEnabled(void);

/* Symbol: appHandleReleaseAllAudioTypeXml */
/* Demangled: appHandleReleaseAllAudioTypeXml */
int appHandleReleaseAllAudioTypeXml(void);

/* Symbol: xmlNodeGetWording */
/* Demangled: xmlNodeGetWording */
int xmlNodeGetWording(void);

/* Symbol: featureFieldCreate */
/* Demangled: featureFieldCreate */
int featureFieldCreate(void);

/* Symbol: categoryTypeGetNumOfCategoryGroup */
/* Demangled: categoryTypeGetNumOfCategoryGroup */
int categoryTypeGetNumOfCategoryGroup(void);

/* Symbol: paramGetFieldVal */
/* Demangled: paramGetFieldVal */
int paramGetFieldVal(void);

/* Symbol: utilStrtok */
/* Demangled: utilStrtok */
int utilStrtok(void);

/* Symbol: appHandleReleaseFeatureOptionsHash */
/* Demangled: appHandleReleaseFeatureOptionsHash */
int appHandleReleaseFeatureOptionsHash(void);

/* Symbol: appHandleUnlock */
/* Demangled: appHandleUnlock */
int appHandleUnlock(void);

/* Symbol: paramUnitGetFieldVal */
/* Demangled: paramUnitGetFieldVal */
int paramUnitGetFieldVal(void);

/* Symbol: showTreeRoot */
/* Demangled: showTreeRoot */
int showTreeRoot(void);

/* Symbol: paramSetFieldVal */
/* Demangled: paramSetFieldVal */
int paramSetFieldVal(void);

/* Symbol: appHandleReleaseAudioTypeHash */
/* Demangled: appHandleReleaseAudioTypeHash */
int appHandleReleaseAudioTypeHash(void);

/* Symbol: appSetDebugLevel */
/* Demangled: appSetDebugLevel */
int appSetDebugLevel(void);

/* Symbol: audioTypeGetParamUnitDescNode */
/* Demangled: audioTypeGetParamUnitDescNode */
int audioTypeGetParamUnitDescNode(void);

/* Symbol: audioTypeRelease */
/* Demangled: audioTypeRelease */
int audioTypeRelease(void);

/* Symbol: unloadXmlOps */
/* Demangled: unloadXmlOps */
int unloadXmlOps(void);

/* Symbol: audioTypeLoadParamTreeView */
/* Demangled: audioTypeLoadParamTreeView */
int audioTypeLoadParamTreeView(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int fn___aeabi_memclr8(void) __asm__("__aeabi_memclr8");

/* Symbol: appHandleRemoveAudioTypeByFeatureOptions */
/* Demangled: appHandleRemoveAudioTypeByFeatureOptions */
int appHandleRemoveAudioTypeByFeatureOptions(void);

/* Symbol: featureOptionCreate */
/* Demangled: featureOptionCreate */
int featureOptionCreate(void);

/* Symbol: removeNodeByFeatureOption */
/* Demangled: removeNodeByFeatureOption */
int removeNodeByFeatureOption(void);

/* Symbol: categoryAliasRelease */
/* Demangled: categoryAliasRelease */
int categoryAliasRelease(void);

/* Symbol: testReadWriteParam */
/* Demangled: testReadWriteParam */
int testReadWriteParam(void);

/* Symbol: appHandleAddAudioType */
/* Demangled: appHandleAddAudioType */
int appHandleAddAudioType(void);

/* Symbol: initXmlOps */
/* Demangled: initXmlOps */
int initXmlOps(void);

/* Symbol: unitTest */
/* Demangled: unitTest */
int unitTest(void);

/* Symbol: featureFieldRelease */
/* Demangled: featureFieldRelease */
int featureFieldRelease(void);

/* Symbol: unregisterAudioParameterChangedCallback */
/* Demangled: unregisterAudioParameterChangedCallback */
int unregisterAudioParameterChangedCallback(void);

/* Symbol: utilConvDataToString */
/* Demangled: utilConvDataToString */
int utilConvDataToString(void);

/* Symbol: utilNormalizeCategoryGroupPathForAudioType */
/* Demangled: utilNormalizeCategoryGroupPathForAudioType */
int utilNormalizeCategoryGroupPathForAudioType(void);

/* Symbol: audioSystemGetParameters */
/* Demangled: audioSystemGetParameters */
int audioSystemGetParameters(void);

/* Symbol: isCustXmlEnable */
/* Demangled: isCustXmlEnable */
int isCustXmlEnable(void);

/* Symbol: utilShowParamValue */
/* Demangled: utilShowParamValue */
int utilShowParamValue(void);

/* Symbol: paramDataTypeToStr */
/* Demangled: paramDataTypeToStr */
int paramDataTypeToStr(void);

/* Symbol: paramSetupDataInfoByVal */
/* Demangled: paramSetupDataInfoByVal */
int paramSetupDataInfoByVal(void);

/* Symbol: paramInfoGetFieldInfoByName */
/* Demangled: paramInfoGetFieldInfoByName */
int paramInfoGetFieldInfoByName(void);

/* Symbol: categoryTypeGetAllCategoryByIndex */
/* Demangled: categoryTypeGetAllCategoryByIndex */
int categoryTypeGetAllCategoryByIndex(void);

/* Symbol: appHandleIsValidAudioType */
/* Demangled: appHandleIsValidAudioType */
int appHandleIsValidAudioType(void);

/* Symbol: featureRelease */
/* Demangled: featureRelease */
int featureRelease(void);

/* Symbol: audioTypeGetNumOfParamInfo */
/* Demangled: audioTypeGetNumOfParamInfo */
int audioTypeGetNumOfParamInfo(void);

/* Symbol: audioTypeGetNumOfParamTree */
/* Demangled: audioTypeGetNumOfParamTree */
int audioTypeGetNumOfParamTree(void);

/* Symbol: appXmlMemGet */
/* Demangled: appXmlMemGet */
int appXmlMemGet(void);

/* Symbol: appHandleUnregXmlChangedCb */
/* Demangled: appHandleUnregXmlChangedCb */
int appHandleUnregXmlChangedCb(void);

/* Symbol: utilNativeSetParam */
/* Demangled: utilNativeSetParam */
int utilNativeSetParam(void);

/* Symbol: strPairCreate */
/* Demangled: strPairCreate */
int strPairCreate(void);

/* Symbol: _ZTV22AudioHalDeathRecipient */
/* Demangled: vtable for AudioHalDeathRecipient */
extern void* _ZTV22AudioHalDeathRecipient;

/* Symbol: paramCreate */
/* Demangled: paramCreate */
int paramCreate(void);

/* Symbol: audioTypeGetParamUnitNode */
/* Demangled: audioTypeGetParamUnitNode */
int audioTypeGetParamUnitNode(void);

/* Symbol: utilNormalizeCategoryPathForAudioType */
/* Demangled: utilNormalizeCategoryPathForAudioType */
int utilNormalizeCategoryPathForAudioType(void);

/* Symbol: paramNewDataStrWithMode */
/* Demangled: paramNewDataStrWithMode */
int paramNewDataStrWithMode(void);

/* Symbol: fieldInfoRelease */
/* Demangled: fieldInfoRelease */
int fieldInfoRelease(void);

/* Symbol: appHandleCompressFiles */
/* Demangled: appHandleCompressFiles */
int appHandleCompressFiles(void);

/* Symbol: uninitXmlOps */
/* Demangled: uninitXmlOps */
int uninitXmlOps(void);

/* Symbol: appDumpXmlDoc */
/* Demangled: appDumpXmlDoc */
int appDumpXmlDoc(void);

/* Symbol: testAppHandleInitUninit */
/* Demangled: testAppHandleInitUninit */
int testAppHandleInitUninit(void);

/* Symbol: audioTypeGetNumOfCategoryType */
/* Demangled: audioTypeGetNumOfCategoryType */
int audioTypeGetNumOfCategoryType(void);

/* Symbol: audioTypeGetParamInfoByIndex */
/* Demangled: audioTypeGetParamInfoByIndex */
int audioTypeGetParamInfoByIndex(void);

/* Symbol: utilIsUIAudioType */
/* Demangled: utilIsUIAudioType */
int utilIsUIAudioType(void);

/* Symbol: utilNativeGetField */
/* Demangled: utilNativeGetField */
int utilNativeGetField(void);

/* Symbol: findXmlNodeByElemName */
/* Demangled: findXmlNodeByElemName */
int findXmlNodeByElemName(void);

/* Symbol: paramUnitCreate */
/* Demangled: paramUnitCreate */
int paramUnitCreate(void);

/* Symbol: categoryGroupGetNumOfCategory */
/* Demangled: categoryGroupGetNumOfCategory */
int categoryGroupGetNumOfCategory(void);

/* Symbol: categoryTypeGetCategoryByAlias */
/* Demangled: categoryTypeGetCategoryByAlias */
int categoryTypeGetCategoryByAlias(void);

/* Symbol: audioTypeWriteLock */
/* Demangled: audioTypeWriteLock */
int audioTypeWriteLock(void);

/* Symbol: featureOptionRelease */
/* Demangled: featureOptionRelease */
int featureOptionRelease(void);

/* Symbol: outputLogToStdout */
/* Demangled: outputLogToStdout */
extern void* outputLogToStdout;

/* Symbol: utilMkdir */
/* Demangled: utilMkdir */
int utilMkdir(void);

/* Symbol: audioTypeReleaseAudioParam */
/* Demangled: audioTypeReleaseAudioParam */
int audioTypeReleaseAudioParam(void);

/* Symbol: _ZN7android2spI22AudioHalDeathRecipientEaSEPS1_ */
/* Demangled: android::sp<AudioHalDeathRecipient>::operator=(AudioHalDeathRecipient*) */
int _ZN7android2spI22AudioHalDeathRecipientEaSEPS1_(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallbackEEC2I29AudioParameterChangedCallbackEEPT_ */
/* Demangled: android::sp<vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback>::sp<AudioParameterChangedCallback>(AudioParameterChangedCallback*) */
int _ZN7android2spIN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallbackEEC2I29AudioParameterChangedCallbackEEPT_(void);

/* Symbol: testDebugLevel */
/* Demangled: testDebugLevel */
int testDebugLevel(void);

/* Symbol: audioTypeIsTuningToolSupportedXmlVer */
/* Demangled: audioTypeIsTuningToolSupportedXmlVer */
int audioTypeIsTuningToolSupportedXmlVer(void);

/* Symbol: paramTreeCreate */
/* Demangled: paramTreeCreate */
int paramTreeCreate(void);

/* Symbol: print_element_names */
/* Demangled: print_element_names */
int print_element_names(void);

/* Symbol: categoryRelease */
/* Demangled: categoryRelease */
int categoryRelease(void);

/* Symbol: audioTypeSetParamData */
/* Demangled: audioTypeSetParamData */
int audioTypeSetParamData(void);

/* Symbol: paramUnitGetParamInfo */
/* Demangled: paramUnitGetParamInfo */
int paramUnitGetParamInfo(void);

/* Symbol: utilNativeGetChecklist */
/* Demangled: utilNativeGetChecklist */
int utilNativeGetChecklist(void);

/* Symbol: appHandleCustXmlEnableChanged */
/* Demangled: appHandleCustXmlEnableChanged */
int appHandleCustXmlEnableChanged(void);

/* Symbol: utilGetStdin */
/* Demangled: utilGetStdin */
int utilGetStdin(void);

/* Symbol: paramNewDataStr */
/* Demangled: paramNewDataStr */
int paramNewDataStr(void);

/* Symbol: appXmlFree */
/* Demangled: appXmlFree */
int appXmlFree(void);

/* Symbol: audioTypeGetCategoryTypeByWording */
/* Demangled: audioTypeGetCategoryTypeByWording */
int audioTypeGetCategoryTypeByWording(void);

/* Symbol: audioTypeSetFieldData */
/* Demangled: audioTypeSetFieldData */
int audioTypeSetFieldData(void);

/* Symbol: paramUnitGetFieldInfo */
/* Demangled: paramUnitGetFieldInfo */
int paramUnitGetFieldInfo(void);

/* Symbol: featureCreate */
/* Demangled: featureCreate */
int featureCreate(void);

/* Symbol: appXmlNewProp */
/* Demangled: appXmlNewProp */
int appXmlNewProp(void);

/* Symbol: paramDataTypeToEnum */
/* Demangled: paramDataTypeToEnum */
int paramDataTypeToEnum(void);

/* Symbol: treeRootRelease */
/* Demangled: treeRootRelease */
int treeRootRelease(void);

/* Symbol: appHandleGetAudioTypeByIndex */
/* Demangled: appHandleGetAudioTypeByIndex */
int appHandleGetAudioTypeByIndex(void);

/* Symbol: xmlNodeGetProp */
/* Demangled: xmlNodeGetProp */
int xmlNodeGetProp(void);

/* Symbol: appXmlStrdup */
/* Demangled: appXmlStrdup */
int appXmlStrdup(void);

/* Symbol: utilConvDataStringToNative */
/* Demangled: utilConvDataStringToNative */
int utilConvDataStringToNative(void);

/* Symbol: appHandleDumpAudioTypeList */
/* Demangled: appHandleDumpAudioTypeList */
int appHandleDumpAudioTypeList(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int fn___aeabi_memset(void) __asm__("__aeabi_memset");

/* Symbol: categoryPathValidation */
/* Demangled: categoryPathValidation */
int categoryPathValidation(void);

/* Symbol: categoryPathRetrievedHandler */
/* Demangled: categoryPathRetrievedHandler */
int categoryPathRetrievedHandler(void);

/* Symbol: appAudioTypeLoadingList */
/* Demangled: appAudioTypeLoadingList */
extern void* appAudioTypeLoadingList;

/* Symbol: appHandleGetNumOfAudioType */
/* Demangled: appHandleGetNumOfAudioType */
int appHandleGetNumOfAudioType(void);

/* Symbol: audioTypeGetParamHash */
/* Demangled: audioTypeGetParamHash */
int audioTypeGetParamHash(void);

/* Symbol: categoryAliasCreate */
/* Demangled: categoryAliasCreate */
int categoryAliasCreate(void);

/* Symbol: appHandleLoadAudioTypeXml */
/* Demangled: appHandleLoadAudioTypeXml */
int appHandleLoadAudioTypeXml(void);

/* Symbol: appXmlParseFile */
/* Demangled: appXmlParseFile */
int appXmlParseFile(void);

/* Symbol: categoryPathCreate */
/* Demangled: categoryPathCreate */
int categoryPathCreate(void);

/* Symbol: paramTreeRelease */
/* Demangled: paramTreeRelease */
int paramTreeRelease(void);

/* Symbol: utilXmlNodeGetFieldInfo */
/* Demangled: utilXmlNodeGetFieldInfo */
int utilXmlNodeGetFieldInfo(void);

/* Symbol: appHandleNotifyAllCallbacks */
/* Demangled: appHandleNotifyAllCallbacks */
int appHandleNotifyAllCallbacks(void);

/* Symbol: paramRelease */
/* Demangled: paramRelease */
int paramRelease(void);

/* Symbol: featureIsCategoryPathSupport */
/* Demangled: featureIsCategoryPathSupport */
int featureIsCategoryPathSupport(void);

/* Symbol: findFeatureCategoryPath */
/* Demangled: findFeatureCategoryPath */
int findFeatureCategoryPath(void);

/* Symbol: utilShellExecute */
/* Demangled: utilShellExecute */
int utilShellExecute(void);

/* Symbol: testCb */
/* Demangled: testCb */
int testCb(void);

/* Symbol: testMemoryLeak */
/* Demangled: testMemoryLeak */
int testMemoryLeak(void);

/* Symbol: appHandleLoadDirAudioTypeInfo */
/* Demangled: appHandleLoadDirAudioTypeInfo */
int appHandleLoadDirAudioTypeInfo(void);

/* Symbol: utilIsAudioTypeInLoadingList */
/* Demangled: utilIsAudioTypeInLoadingList */
int utilIsAudioTypeInLoadingList(void);

/* Symbol: utilNativeSetField */
/* Demangled: utilNativeSetField */
int utilNativeSetField(void);

/* Symbol: utilUsleep */
/* Demangled: utilUsleep */
int utilUsleep(void);

/* Symbol: appXmlNewDoc */
/* Demangled: appXmlNewDoc */
int appXmlNewDoc(void);

/* Symbol: appGetAudioTypeLoadingList */
/* Demangled: appGetAudioTypeLoadingList */
int appGetAudioTypeLoadingList(void);

/* Symbol: appHandleLoadAppOpsSym */
/* Demangled: appHandleLoadAppOpsSym */
int appHandleLoadAppOpsSym(void);

/* Symbol: retrieveAllCategoryPath */
/* Demangled: retrieveAllCategoryPath */
int retrieveAllCategoryPath(void);

/* Symbol: paramGetNumOfBytes */
/* Demangled: paramGetNumOfBytes */
int paramGetNumOfBytes(void);

/* Symbol: appGetDebugLevel */
/* Demangled: appGetDebugLevel */
int appGetDebugLevel(void);

/* Symbol: appHandleInstWriteLock */
/* Demangled: appHandleInstWriteLock */
int appHandleInstWriteLock(void);

/* Symbol: audioTypeSaveAudioParamXml */
/* Demangled: audioTypeSaveAudioParamXml */
int audioTypeSaveAudioParamXml(void);

/* Symbol: strPairRelease */
/* Demangled: strPairRelease */
int strPairRelease(void);

/* Symbol: utilLogClose */
/* Demangled: utilLogClose */
int utilLogClose(void);

/* Symbol: testHashParamTree */
/* Demangled: testHashParamTree */
int testHashParamTree(void);

/* Symbol: appXmlGetProp */
/* Demangled: appXmlGetProp */
int appXmlGetProp(void);

/* Symbol: fuzzySearchFeatureCategoryPath */
/* Demangled: fuzzySearchFeatureCategoryPath */
int fuzzySearchFeatureCategoryPath(void);

/* Symbol: categoryCreate */
/* Demangled: categoryCreate */
int categoryCreate(void);

/* Symbol: appHandleGetNumOfFeatureOption */
/* Demangled: appHandleGetNumOfFeatureOption */
int appHandleGetNumOfFeatureOption(void);

/* Symbol: appSetAudioTypeLoadingList */
/* Demangled: appSetAudioTypeLoadingList */
int appSetAudioTypeLoadingList(void);

/* Symbol: appXmlUnlinkNode */
/* Demangled: appXmlUnlinkNode */
int appXmlUnlinkNode(void);

/* Symbol: audioTypeValidCategoryGroupName */
/* Demangled: audioTypeValidCategoryGroupName */
int audioTypeValidCategoryGroupName(void);

/* Symbol: categoryTypeGetNumOfCategory */
/* Demangled: categoryTypeGetNumOfCategory */
int categoryTypeGetNumOfCategory(void);

/* Symbol: appHandleGetFeatureOptionByIndex */
/* Demangled: appHandleGetFeatureOptionByIndex */
int appHandleGetFeatureOptionByIndex(void);

/* Symbol: appLogFp */
/* Demangled: appLogFp */
extern void* appLogFp;

__END_DECLS

#endif /* BEGONIA_RE_LIBAUDIO_PARAM_PARSER_SYS_H */
