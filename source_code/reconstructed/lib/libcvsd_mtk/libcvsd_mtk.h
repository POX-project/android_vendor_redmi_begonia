/*
 * Reverse-Engineered ABI Specification for: libcvsd_mtk.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcvsd_mtk.so
 */

#ifndef BEGONIA_RE_LIBCVSD_MTK_H
#define BEGONIA_RE_LIBCVSD_MTK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: g711plc_construct_v2 */
/* Demangled: g711plc_construct_v2 */
int g711plc_construct_v2(void);

/* Symbol: drvb_fc */
/* Demangled: drvb_fc */
int drvb_fc(void);

/* Symbol: drvb_fc_prepare */
/* Demangled: drvb_fc_prepare */
int drvb_fc_prepare(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: CVSD_ENC_Process */
/* Demangled: CVSD_ENC_Process */
int CVSD_ENC_Process(void);

/* Symbol: drvb_f0 */
/* Demangled: drvb_f0 */
int drvb_f0(void);

/* Symbol: PLC_Decim */
/* Demangled: PLC_Decim */
int PLC_Decim(void);

/* Symbol: PLC_RefinePitch */
/* Demangled: PLC_RefinePitch */
int PLC_RefinePitch(void);

/* Symbol: drvb_error */
/* Demangled: drvb_error */
int drvb_error(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: CVSD_ENC_GetBufferSize */
/* Demangled: CVSD_ENC_GetBufferSize */
int CVSD_ENC_GetBufferSize(void);

/* Symbol: PLC_OlaEnd */
/* Demangled: PLC_OlaEnd */
int PLC_OlaEnd(void);

/* Symbol: PLC_ScaleSpeech */
/* Demangled: PLC_ScaleSpeech */
int PLC_ScaleSpeech(void);

/* Symbol: drvb_f1 */
/* Demangled: drvb_f1 */
int drvb_f1(void);

/* Symbol: CVSD_DEC_Init */
/* Demangled: CVSD_DEC_Init */
int CVSD_DEC_Init(void);

/* Symbol: drvb_f2 */
/* Demangled: drvb_f2 */
int drvb_f2(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: CVSD_DEC_GetBufferSize */
/* Demangled: CVSD_DEC_GetBufferSize */
int CVSD_DEC_GetBufferSize(void);

/* Symbol: PLC_FindPitch_fix */
/* Demangled: PLC_FindPitch_fix */
int PLC_FindPitch_fix(void);

/* Symbol: PLC_ScaleSpeech_Reconverge */
/* Demangled: PLC_ScaleSpeech_Reconverge */
int PLC_ScaleSpeech_Reconverge(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: g711plc_dofe_v2 */
/* Demangled: g711plc_dofe_v2 */
int g711plc_dofe_v2(void);

/* Symbol: plc_mem_copy */
/* Demangled: plc_mem_copy */
int plc_mem_copy(void);

/* Symbol: invk */
/* Demangled: invk */
extern void* invk;

/* Symbol: dump_buf */
/* Demangled: dump_buf */
int dump_buf(void);

/* Symbol: PLC_CoarsePitch */
/* Demangled: PLC_CoarsePitch */
int PLC_CoarsePitch(void);

/* Symbol: drvb_fc_respond */
/* Demangled: drvb_fc_respond */
int drvb_fc_respond(void);

/* Symbol: cal_P */
/* Demangled: cal_P */
int cal_P(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: CVSD_DEC_Process */
/* Demangled: CVSD_DEC_Process */
int CVSD_DEC_Process(void);

/* Symbol: MPTH */
/* Demangled: MPTH */
extern void* MPTH;

/* Symbol: get_heap_offset */
/* Demangled: get_heap_offset */
int get_heap_offset(void);

/* Symbol: sha1sum */
/* Demangled: sha1sum */
extern void* sha1sum;

/* Symbol: PLC_Ola */
/* Demangled: PLC_Ola */
int PLC_Ola(void);

/* Symbol: g711plc_addtohistory_v2 */
/* Demangled: g711plc_addtohistory_v2 */
int g711plc_addtohistory_v2(void);

/* Symbol: PLC_OverlapAdds */
/* Demangled: PLC_OverlapAdds */
int PLC_OverlapAdds(void);

/* Symbol: g711plc_GetMemorySize_v2 */
/* Demangled: g711plc_GetMemorySize_v2 */
int g711plc_GetMemorySize_v2(void);

/* Symbol: bdf */
/* Demangled: bdf */
extern void* bdf;

/* Symbol: x */
/* Demangled: x */
extern void* x;

/* Symbol: x2 */
/* Demangled: x2 */
extern void* x2;

/* Symbol: CVSD_ENC_Init */
/* Demangled: CVSD_ENC_Init */
int CVSD_ENC_Init(void);

/* Symbol: drvb_crack_heap */
/* Demangled: drvb_crack_heap */
int drvb_crack_heap(void);

/* Symbol: hash_update */
/* Demangled: hash_update */
int hash_update(void);

/* Symbol: PLC_GetSynSpeech */
/* Demangled: PLC_GetSynSpeech */
int PLC_GetSynSpeech(void);

/* Symbol: PLC_SaveSpeech */
/* Demangled: PLC_SaveSpeech */
int PLC_SaveSpeech(void);

/* Symbol: sha1 */
/* Demangled: sha1 */
int sha1(void);

/* Symbol: hash_starts */
/* Demangled: hash_starts */
int hash_starts(void);

/* Symbol: PLC_PitchTracker */
/* Demangled: PLC_PitchTracker */
int PLC_PitchTracker(void);

/* Symbol: drvb_gettimeofday */
/* Demangled: drvb_gettimeofday */
int drvb_gettimeofday(void);

/* Symbol: hash_finish */
/* Demangled: hash_finish */
int hash_finish(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCVSD_MTK_H */
