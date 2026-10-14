/*
 * Reverse-Engineered ABI Specification for: audio.r_submix.mt6785.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: audio.r_submix.mt6785.so
 */

#ifndef BEGONIA_RE_AUDIO_R_SUBMIX_MT6785_H
#define BEGONIA_RE_AUDIO_R_SUBMIX_MT6785_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Standard Android Hardware Module Symbol */
extern struct hw_module_t HAL_MODULE_INFO_SYM;

/* Symbol: in_update_frame_lost_info */
/* Demangled: in_update_frame_lost_info */
int in_update_frame_lost_info(void);

/* Symbol: r_submix_streamin */
/* Demangled: r_submix_streamin */
extern void* r_submix_streamin;

/* Symbol: streamout_propty */
/* Demangled: streamout_propty */
extern void* streamout_propty;

/* Symbol: submixlog_propty */
/* Demangled: submixlog_propty */
extern void* submixlog_propty;

/* Symbol: checkAndCreateDirectory */
/* Demangled: checkAndCreateDirectory */
int checkAndCreateDirectory(void);

/* Symbol: dumpPcmData */
/* Demangled: dumpPcmData */
int dumpPcmData(void);

/* Symbol: r_submix_streamout */
/* Demangled: r_submix_streamout */
extern void* r_submix_streamout;

/* Symbol: streamin_propty */
/* Demangled: streamin_propty */
extern void* streamin_propty;

__END_DECLS

#endif /* BEGONIA_RE_AUDIO_R_SUBMIX_MT6785_H */
