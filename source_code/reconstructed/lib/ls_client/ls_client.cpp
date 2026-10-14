/*
 * Reverse-Engineered Source for: ls_client.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "ls_client"

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
#include "ls_client.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: Send_Backall_Loadcmds(Lsc_ImageInfo*, unsigned char, Lsc_TranscieveInfo*) */
extern "C" __attribute__((visibility("default"))) int _Z21Send_Backall_LoadcmdsP13Lsc_ImageInfohP18Lsc_TranscieveInfo(void) {
    ALOGD("_Z21Send_Backall_LoadcmdsP13Lsc_ImageInfohP18Lsc_TranscieveInfo() called");
    return 0;
}

/* Exported Object: fLS_STATUS */
extern "C" __attribute__((visibility("default"))) void* fLS_STATUS = NULL;

/* Exported Object: rspApdu */
extern "C" __attribute__((visibility("default"))) void* rspApdu = NULL;

/* Demangled: phSems_getSemsStatus */
extern "C" __attribute__((visibility("default"))) int phSems_getSemsStatus(void) {
    ALOGD("phSems_getSemsStatus() called");
    return 0;
}

/* Exported Object: Select_Rsp_Len */
extern "C" __attribute__((visibility("default"))) void* Select_Rsp_Len = NULL;

/* Exported Object: mIsInit */
extern "C" __attribute__((visibility("default"))) void* mIsInit = NULL;

/* Demangled: LSC_SendtoEse(Lsc_ImageInfo*, unsigned char, Lsc_TranscieveInfo*) */
extern "C" __attribute__((visibility("default"))) int _Z13LSC_SendtoEseP13Lsc_ImageInfohP18Lsc_TranscieveInfo(void) {
    ALOGD("_Z13LSC_SendtoEseP13Lsc_ImageInfohP18Lsc_TranscieveInfo() called");
    return 0;
}

/* Demangled: Numof_lengthbytes(unsigned char*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z17Numof_lengthbytesPhPi(void) {
    ALOGD("_Z17Numof_lengthbytesPhPi() called");
    return 0;
}

/* Exported Object: fAID_MEM */
extern "C" __attribute__((visibility("default"))) void* fAID_MEM = NULL;

/* Demangled: initialize(IChannel*) */
extern "C" __attribute__((visibility("default"))) int _Z10initializeP8IChannel(void) {
    ALOGD("_Z10initializeP8IChannel() called");
    return 0;
}

/* Exported Object: Applet_load_seqhandler */
extern "C" __attribute__((visibility("default"))) void* Applet_load_seqhandler = NULL;

/* Demangled: updateLsAid(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z11updateLsAidh(void) {
    ALOGD("_Z11updateLsAidh() called");
    return 0;
}

/* Demangled: phLS_memcpy */
extern "C" __attribute__((visibility("default"))) int phLS_memcpy(void) {
    ALOGD("phLS_memcpy() called");
    return 0;
}

/* Exported Object: StoreData */
extern "C" __attribute__((visibility("default"))) void* StoreData = NULL;

/* Demangled: Certificate_Verification(Lsc_ImageInfo*, Lsc_TranscieveInfo*, unsigned char*, unsigned short*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z24Certificate_VerificationP13Lsc_ImageInfoP18Lsc_TranscieveInfoPhPtS3_(void) {
    ALOGD("_Z24Certificate_VerificationP13Lsc_ImageInfoP18Lsc_TranscieveInfoPhPtS3_() called");
    return 0;
}

/* Demangled: Write_Response_To_OutFile(Lsc_ImageInfo*, unsigned char*, int, Ls_TagType) */
extern "C" __attribute__((visibility("default"))) int _Z25Write_Response_To_OutFileP13Lsc_ImageInfoPhi10Ls_TagType(void) {
    ALOGD("_Z25Write_Response_To_OutFileP13Lsc_ImageInfoPhi10Ls_TagType() called");
    return 0;
}

/* Exported Object: islastcmdLoad */
extern "C" __attribute__((visibility("default"))) void* islastcmdLoad = NULL;

/* Demangled: phLS_memalloc */
extern "C" __attribute__((visibility("default"))) int phLS_memalloc(void) {
    ALOGD("phLS_memalloc() called");
    return 0;
}

/* Demangled: phLS_memset */
extern "C" __attribute__((visibility("default"))) int phLS_memset(void) {
    ALOGD("phLS_memset() called");
    return 0;
}

/* Exported Object: SendBack_cmds */
extern "C" __attribute__((visibility("default"))) void* SendBack_cmds = NULL;

/* Demangled: LSC_CloseChannel(Lsc_ImageInfo*, unsigned char, Lsc_TranscieveInfo*) */
extern "C" __attribute__((visibility("default"))) int _Z16LSC_CloseChannelP13Lsc_ImageInfohP18Lsc_TranscieveInfo(void) {
    ALOGD("_Z16LSC_CloseChannelP13Lsc_ImageInfohP18Lsc_TranscieveInfo() called");
    return 0;
}

/* Demangled: LSC_Check_KeyIdentifier(Lsc_ImageInfo*, unsigned char, Lsc_TranscieveInfo*, unsigned char*, unsigned char, int) */
extern "C" __attribute__((visibility("default"))) int _Z23LSC_Check_KeyIdentifierP13Lsc_ImageInfohP18Lsc_TranscieveInfoPhhi(void) {
    ALOGD("_Z23LSC_Check_KeyIdentifierP13Lsc_ImageInfohP18Lsc_TranscieveInfoPhhi() called");
    return 0;
}

/* Exported Object: cmdApdu */
extern "C" __attribute__((visibility("default"))) void* cmdApdu = NULL;

/* Demangled: Perform_LSC(char const*, char const*, unsigned char const*, unsigned short, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z11Perform_LSCPKcS0_PKhtPh(void) {
    ALOGD("_Z11Perform_LSCPKcS0_PKhtPh() called");
    return 0;
}

/* Exported Object: AID_ARRAY */
extern "C" __attribute__((visibility("default"))) void* AID_ARRAY = NULL;

/* Demangled: Check_45_Tag(unsigned char*, unsigned short*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z12Check_45_TagPhPtS_(void) {
    ALOGD("_Z12Check_45_TagPhPtS_() called");
    return 0;
}

/* Demangled: Process_SelectRsp(unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _Z17Process_SelectRspPhi(void) {
    ALOGD("_Z17Process_SelectRspPhi() called");
    return 0;
}

/* Demangled: LSC_UpdateExeStatus(unsigned short) */
extern "C" __attribute__((visibility("default"))) int _Z19LSC_UpdateExeStatust(void) {
    ALOGD("_Z19LSC_UpdateExeStatust() called");
    return 0;
}

/* Demangled: LSC_Start */
extern "C" __attribute__((visibility("default"))) int LSC_Start(void) {
    ALOGD("LSC_Start() called");
    return 0;
}

/* Exported Object: tag42Arr */
extern "C" __attribute__((visibility("default"))) void* tag42Arr = NULL;

/* Demangled: datahex(char) */
extern "C" __attribute__((visibility("default"))) int _Z7datahexc(void) {
    ALOGD("_Z7datahexc() called");
    return 0;
}

/* Demangled: phSems_readOutputFile */
extern "C" __attribute__((visibility("default"))) int phSems_readOutputFile(void) {
    ALOGD("phSems_readOutputFile() called");
    return 0;
}

/* Demangled: Process_EseResponse(Lsc_TranscieveInfo*, int, Lsc_ImageInfo*) */
extern "C" __attribute__((visibility("default"))) int _Z19Process_EseResponseP18Lsc_TranscieveInfoiP13Lsc_ImageInfo(void) {
    ALOGD("_Z19Process_EseResponseP18Lsc_TranscieveInfoiP13Lsc_ImageInfo() called");
    return 0;
}

/* Demangled: Check_Certificate_Tag(unsigned char*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z21Check_Certificate_TagPhPt(void) {
    ALOGD("_Z21Check_Certificate_TagPhPt() called");
    return 0;
}

/* Demangled: Check_Complete_7F21_Tag(Lsc_ImageInfo*, Lsc_TranscieveInfo*, unsigned char*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z23Check_Complete_7F21_TagP13Lsc_ImageInfoP18Lsc_TranscieveInfoPhPt(void) {
    ALOGD("_Z23Check_Complete_7F21_TagP13Lsc_ImageInfoP18Lsc_TranscieveInfoPhPt() called");
    return 0;
}

/* Demangled: phLS_calloc */
extern "C" __attribute__((visibility("default"))) int phLS_calloc(void) {
    ALOGD("phLS_calloc() called");
    return 0;
}

/* Exported Object: Jsbl_RefKey */
extern "C" __attribute__((visibility("default"))) void* Jsbl_RefKey = NULL;

/* Demangled: finalize() */
extern "C" __attribute__((visibility("default"))) int _Z8finalizev(void) {
    ALOGD("_Z8finalizev() called");
    return 0;
}

/* Demangled: phSems_getOutputfileLen */
extern "C" __attribute__((visibility("default"))) int phSems_getOutputfileLen(void) {
    ALOGD("phSems_getOutputfileLen() called");
    return 0;
}

/* Exported Object: Cmd_Buffer */
extern "C" __attribute__((visibility("default"))) void* Cmd_Buffer = NULL;

/* Exported Object: pBuffer */
extern "C" __attribute__((visibility("default"))) void* pBuffer = NULL;

/* Demangled: performLSDownload */
extern "C" __attribute__((visibility("default"))) int performLSDownload(void) {
    ALOGD("performLSDownload() called");
    return 0;
}

/* Exported Object: Select_Rsp */
extern "C" __attribute__((visibility("default"))) void* Select_Rsp = NULL;

/* Demangled: Check_LSRootID_Tag(unsigned char*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z18Check_LSRootID_TagPhPt(void) {
    ALOGD("_Z18Check_LSRootID_TagPhPt() called");
    return 0;
}

/* Exported Object: Jsbl_keylen */
extern "C" __attribute__((visibility("default"))) void* Jsbl_keylen = NULL;

/* Demangled: Get_LsStatus(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z12Get_LsStatusPh(void) {
    ALOGD("_Z12Get_LsStatusPh() called");
    return 0;
}

/* Demangled: Check_Date_Tag(unsigned char*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z14Check_Date_TagPhPt(void) {
    ALOGD("_Z14Check_Date_TagPhPt() called");
    return 0;
}

/* Demangled: LSC_ReadScript(Lsc_ImageInfo*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z14LSC_ReadScriptP13Lsc_ImageInfoPh(void) {
    ALOGD("_Z14LSC_ReadScriptP13Lsc_ImageInfoPh() called");
    return 0;
}

/* Demangled: Bufferize_load_cmds(Lsc_ImageInfo*, unsigned char, Lsc_TranscieveInfo*) */
extern "C" __attribute__((visibility("default"))) int _Z19Bufferize_load_cmdsP13Lsc_ImageInfohP18Lsc_TranscieveInfo(void) {
    ALOGD("_Z19Bufferize_load_cmdsP13Lsc_ImageInfohP18Lsc_TranscieveInfo() called");
    return 0;
}

/* Demangled: Check_CertHoldID_Tag(unsigned char*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z20Check_CertHoldID_TagPhPt(void) {
    ALOGD("_Z20Check_CertHoldID_TagPhPt() called");
    return 0;
}

/* Exported Object: lsExecuteResp */
extern "C" __attribute__((visibility("default"))) void* lsExecuteResp = NULL;

/* Exported Object: lsGetStatusArr */
extern "C" __attribute__((visibility("default"))) void* lsGetStatusArr = NULL;

/* Exported Object: resp_len */
extern "C" __attribute__((visibility("default"))) void* resp_len = NULL;

/* Demangled: Check_SerialNo_Tag(unsigned char*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z18Check_SerialNo_TagPhPt(void) {
    ALOGD("_Z18Check_SerialNo_TagPhPt() called");
    return 0;
}

/* Exported Object: tag45Arr */
extern "C" __attribute__((visibility("default"))) void* tag45Arr = NULL;

/* Demangled: phLS_free */
extern "C" __attribute__((visibility("default"))) int phLS_free(void) {
    ALOGD("phLS_free() called");
    return 0;
}

/* Demangled: LSC_SendtoLsc(Lsc_ImageInfo*, unsigned char, Lsc_TranscieveInfo*, Ls_TagType) */
extern "C" __attribute__((visibility("default"))) int _Z13LSC_SendtoLscP13Lsc_ImageInfohP18Lsc_TranscieveInfo10Ls_TagType(void) {
    ALOGD("_Z13LSC_SendtoLscP13Lsc_ImageInfohP18Lsc_TranscieveInfo10Ls_TagType() called");
    return 0;
}

/* Demangled: LSC_ProcessResp(Lsc_ImageInfo*, int, Lsc_TranscieveInfo*, Ls_TagType) */
extern "C" __attribute__((visibility("default"))) int _Z15LSC_ProcessRespP13Lsc_ImageInfoiP18Lsc_TranscieveInfo10Ls_TagType(void) {
    ALOGD("_Z15LSC_ProcessRespP13Lsc_ImageInfoiP18Lsc_TranscieveInfo10Ls_TagType() called");
    return 0;
}

/* Exported Object: gpLsc_Dwnld_Context */
extern "C" __attribute__((visibility("default"))) void* gpLsc_Dwnld_Context = NULL;

/* Exported Object: lsVersionArr */
extern "C" __attribute__((visibility("default"))) void* lsVersionArr = NULL;
