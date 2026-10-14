/*
 * Reverse-Engineered ABI Specification for: ls_client.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: ls_client.so
 */

#ifndef BEGONIA_RE_LS_CLIENT_H
#define BEGONIA_RE_LS_CLIENT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _Z21Send_Backall_LoadcmdsP13Lsc_ImageInfohP18Lsc_TranscieveInfo */
/* Demangled: Send_Backall_Loadcmds(Lsc_ImageInfo*, unsigned char, Lsc_TranscieveInfo*) */
int _Z21Send_Backall_LoadcmdsP13Lsc_ImageInfohP18Lsc_TranscieveInfo(void);

/* Symbol: fLS_STATUS */
/* Demangled: fLS_STATUS */
extern void* fLS_STATUS;

/* Symbol: rspApdu */
/* Demangled: rspApdu */
extern void* rspApdu;

/* Symbol: phSems_getSemsStatus */
/* Demangled: phSems_getSemsStatus */
int phSems_getSemsStatus(void);

/* Symbol: Select_Rsp_Len */
/* Demangled: Select_Rsp_Len */
extern void* Select_Rsp_Len;

/* Symbol: mIsInit */
/* Demangled: mIsInit */
extern void* mIsInit;

/* Symbol: _Z13LSC_SendtoEseP13Lsc_ImageInfohP18Lsc_TranscieveInfo */
/* Demangled: LSC_SendtoEse(Lsc_ImageInfo*, unsigned char, Lsc_TranscieveInfo*) */
int _Z13LSC_SendtoEseP13Lsc_ImageInfohP18Lsc_TranscieveInfo(void);

/* Symbol: _Z17Numof_lengthbytesPhPi */
/* Demangled: Numof_lengthbytes(unsigned char*, int*) */
int _Z17Numof_lengthbytesPhPi(void);

/* Symbol: fAID_MEM */
/* Demangled: fAID_MEM */
extern void* fAID_MEM;

/* Symbol: _Z10initializeP8IChannel */
/* Demangled: initialize(IChannel*) */
int _Z10initializeP8IChannel(void);

/* Symbol: Applet_load_seqhandler */
/* Demangled: Applet_load_seqhandler */
extern void* Applet_load_seqhandler;

/* Symbol: _Z11updateLsAidh */
/* Demangled: updateLsAid(unsigned char) */
int _Z11updateLsAidh(void);

/* Symbol: phLS_memcpy */
/* Demangled: phLS_memcpy */
int phLS_memcpy(void);

/* Symbol: StoreData */
/* Demangled: StoreData */
extern void* StoreData;

/* Symbol: _Z24Certificate_VerificationP13Lsc_ImageInfoP18Lsc_TranscieveInfoPhPtS3_ */
/* Demangled: Certificate_Verification(Lsc_ImageInfo*, Lsc_TranscieveInfo*, unsigned char*, unsigned short*, unsigned char*) */
int _Z24Certificate_VerificationP13Lsc_ImageInfoP18Lsc_TranscieveInfoPhPtS3_(void);

/* Symbol: _Z25Write_Response_To_OutFileP13Lsc_ImageInfoPhi10Ls_TagType */
/* Demangled: Write_Response_To_OutFile(Lsc_ImageInfo*, unsigned char*, int, Ls_TagType) */
int _Z25Write_Response_To_OutFileP13Lsc_ImageInfoPhi10Ls_TagType(void);

/* Symbol: islastcmdLoad */
/* Demangled: islastcmdLoad */
extern void* islastcmdLoad;

/* Symbol: phLS_memalloc */
/* Demangled: phLS_memalloc */
int phLS_memalloc(void);

/* Symbol: phLS_memset */
/* Demangled: phLS_memset */
int phLS_memset(void);

/* Symbol: SendBack_cmds */
/* Demangled: SendBack_cmds */
extern void* SendBack_cmds;

/* Symbol: _Z16LSC_CloseChannelP13Lsc_ImageInfohP18Lsc_TranscieveInfo */
/* Demangled: LSC_CloseChannel(Lsc_ImageInfo*, unsigned char, Lsc_TranscieveInfo*) */
int _Z16LSC_CloseChannelP13Lsc_ImageInfohP18Lsc_TranscieveInfo(void);

/* Symbol: _Z23LSC_Check_KeyIdentifierP13Lsc_ImageInfohP18Lsc_TranscieveInfoPhhi */
/* Demangled: LSC_Check_KeyIdentifier(Lsc_ImageInfo*, unsigned char, Lsc_TranscieveInfo*, unsigned char*, unsigned char, int) */
int _Z23LSC_Check_KeyIdentifierP13Lsc_ImageInfohP18Lsc_TranscieveInfoPhhi(void);

/* Symbol: cmdApdu */
/* Demangled: cmdApdu */
extern void* cmdApdu;

/* Symbol: _Z11Perform_LSCPKcS0_PKhtPh */
/* Demangled: Perform_LSC(char const*, char const*, unsigned char const*, unsigned short, unsigned char*) */
int _Z11Perform_LSCPKcS0_PKhtPh(void);

/* Symbol: AID_ARRAY */
/* Demangled: AID_ARRAY */
extern void* AID_ARRAY;

/* Symbol: _Z12Check_45_TagPhPtS_ */
/* Demangled: Check_45_Tag(unsigned char*, unsigned short*, unsigned char*) */
int _Z12Check_45_TagPhPtS_(void);

/* Symbol: _Z17Process_SelectRspPhi */
/* Demangled: Process_SelectRsp(unsigned char*, int) */
int _Z17Process_SelectRspPhi(void);

/* Symbol: _Z19LSC_UpdateExeStatust */
/* Demangled: LSC_UpdateExeStatus(unsigned short) */
int _Z19LSC_UpdateExeStatust(void);

/* Symbol: LSC_Start */
/* Demangled: LSC_Start */
int LSC_Start(void);

/* Symbol: tag42Arr */
/* Demangled: tag42Arr */
extern void* tag42Arr;

/* Symbol: _Z7datahexc */
/* Demangled: datahex(char) */
int _Z7datahexc(void);

/* Symbol: phSems_readOutputFile */
/* Demangled: phSems_readOutputFile */
int phSems_readOutputFile(void);

/* Symbol: _Z19Process_EseResponseP18Lsc_TranscieveInfoiP13Lsc_ImageInfo */
/* Demangled: Process_EseResponse(Lsc_TranscieveInfo*, int, Lsc_ImageInfo*) */
int _Z19Process_EseResponseP18Lsc_TranscieveInfoiP13Lsc_ImageInfo(void);

/* Symbol: _Z21Check_Certificate_TagPhPt */
/* Demangled: Check_Certificate_Tag(unsigned char*, unsigned short*) */
int _Z21Check_Certificate_TagPhPt(void);

/* Symbol: _Z23Check_Complete_7F21_TagP13Lsc_ImageInfoP18Lsc_TranscieveInfoPhPt */
/* Demangled: Check_Complete_7F21_Tag(Lsc_ImageInfo*, Lsc_TranscieveInfo*, unsigned char*, unsigned short*) */
int _Z23Check_Complete_7F21_TagP13Lsc_ImageInfoP18Lsc_TranscieveInfoPhPt(void);

/* Symbol: phLS_calloc */
/* Demangled: phLS_calloc */
int phLS_calloc(void);

/* Symbol: Jsbl_RefKey */
/* Demangled: Jsbl_RefKey */
extern void* Jsbl_RefKey;

/* Symbol: _Z8finalizev */
/* Demangled: finalize() */
int _Z8finalizev(void);

/* Symbol: phSems_getOutputfileLen */
/* Demangled: phSems_getOutputfileLen */
int phSems_getOutputfileLen(void);

/* Symbol: Cmd_Buffer */
/* Demangled: Cmd_Buffer */
extern void* Cmd_Buffer;

/* Symbol: pBuffer */
/* Demangled: pBuffer */
extern void* pBuffer;

/* Symbol: performLSDownload */
/* Demangled: performLSDownload */
int performLSDownload(void);

/* Symbol: Select_Rsp */
/* Demangled: Select_Rsp */
extern void* Select_Rsp;

/* Symbol: _Z18Check_LSRootID_TagPhPt */
/* Demangled: Check_LSRootID_Tag(unsigned char*, unsigned short*) */
int _Z18Check_LSRootID_TagPhPt(void);

/* Symbol: Jsbl_keylen */
/* Demangled: Jsbl_keylen */
extern void* Jsbl_keylen;

/* Symbol: _Z12Get_LsStatusPh */
/* Demangled: Get_LsStatus(unsigned char*) */
int _Z12Get_LsStatusPh(void);

/* Symbol: _Z14Check_Date_TagPhPt */
/* Demangled: Check_Date_Tag(unsigned char*, unsigned short*) */
int _Z14Check_Date_TagPhPt(void);

/* Symbol: _Z14LSC_ReadScriptP13Lsc_ImageInfoPh */
/* Demangled: LSC_ReadScript(Lsc_ImageInfo*, unsigned char*) */
int _Z14LSC_ReadScriptP13Lsc_ImageInfoPh(void);

/* Symbol: _Z19Bufferize_load_cmdsP13Lsc_ImageInfohP18Lsc_TranscieveInfo */
/* Demangled: Bufferize_load_cmds(Lsc_ImageInfo*, unsigned char, Lsc_TranscieveInfo*) */
int _Z19Bufferize_load_cmdsP13Lsc_ImageInfohP18Lsc_TranscieveInfo(void);

/* Symbol: _Z20Check_CertHoldID_TagPhPt */
/* Demangled: Check_CertHoldID_Tag(unsigned char*, unsigned short*) */
int _Z20Check_CertHoldID_TagPhPt(void);

/* Symbol: lsExecuteResp */
/* Demangled: lsExecuteResp */
extern void* lsExecuteResp;

/* Symbol: lsGetStatusArr */
/* Demangled: lsGetStatusArr */
extern void* lsGetStatusArr;

/* Symbol: resp_len */
/* Demangled: resp_len */
extern void* resp_len;

/* Symbol: _Z18Check_SerialNo_TagPhPt */
/* Demangled: Check_SerialNo_Tag(unsigned char*, unsigned short*) */
int _Z18Check_SerialNo_TagPhPt(void);

/* Symbol: tag45Arr */
/* Demangled: tag45Arr */
extern void* tag45Arr;

/* Symbol: phLS_free */
/* Demangled: phLS_free */
int phLS_free(void);

/* Symbol: _Z13LSC_SendtoLscP13Lsc_ImageInfohP18Lsc_TranscieveInfo10Ls_TagType */
/* Demangled: LSC_SendtoLsc(Lsc_ImageInfo*, unsigned char, Lsc_TranscieveInfo*, Ls_TagType) */
int _Z13LSC_SendtoLscP13Lsc_ImageInfohP18Lsc_TranscieveInfo10Ls_TagType(void);

/* Symbol: _Z15LSC_ProcessRespP13Lsc_ImageInfoiP18Lsc_TranscieveInfo10Ls_TagType */
/* Demangled: LSC_ProcessResp(Lsc_ImageInfo*, int, Lsc_TranscieveInfo*, Ls_TagType) */
int _Z15LSC_ProcessRespP13Lsc_ImageInfoiP18Lsc_TranscieveInfo10Ls_TagType(void);

/* Symbol: gpLsc_Dwnld_Context */
/* Demangled: gpLsc_Dwnld_Context */
extern void* gpLsc_Dwnld_Context;

/* Symbol: lsVersionArr */
/* Demangled: lsVersionArr */
extern void* lsVersionArr;

__END_DECLS

#endif /* BEGONIA_RE_LS_CLIENT_H */
