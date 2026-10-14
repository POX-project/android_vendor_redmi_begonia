/*
 * Reverse-Engineered ABI Specification for: libtinycompress.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libtinycompress.so
 */

#ifndef BEGONIA_RE_LIBTINYCOMPRESS_H
#define BEGONIA_RE_LIBTINYCOMPRESS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: compress_get_error */
/* Demangled: compress_get_error */
int compress_get_error(void);

/* Symbol: compress_stop */
/* Demangled: compress_stop */
int compress_stop(void);

/* Symbol: is_codec_supported */
/* Demangled: is_codec_supported */
int is_codec_supported(void);

/* Symbol: is_compress_ready */
/* Demangled: is_compress_ready */
int is_compress_ready(void);

/* Symbol: compress_set_gapless_metadata */
/* Demangled: compress_set_gapless_metadata */
int compress_set_gapless_metadata(void);

/* Symbol: compress_start */
/* Demangled: compress_start */
int compress_start(void);

/* Symbol: is_compress_running */
/* Demangled: is_compress_running */
int is_compress_running(void);

/* Symbol: compress_get_alsa_rate */
/* Demangled: compress_get_alsa_rate */
int compress_get_alsa_rate(void);

/* Symbol: compress_next_track */
/* Demangled: compress_next_track */
int compress_next_track(void);

/* Symbol: compress_close */
/* Demangled: compress_close */
int compress_close(void);

/* Symbol: compress_get_hpointer */
/* Demangled: compress_get_hpointer */
int compress_get_hpointer(void);

/* Symbol: compress_get_tstamp */
/* Demangled: compress_get_tstamp */
int compress_get_tstamp(void);

/* Symbol: compress_nonblock */
/* Demangled: compress_nonblock */
int compress_nonblock(void);

/* Symbol: compress_partial_drain */
/* Demangled: compress_partial_drain */
int compress_partial_drain(void);

/* Symbol: compress_pause */
/* Demangled: compress_pause */
int compress_pause(void);

/* Symbol: compress_resume */
/* Demangled: compress_resume */
int compress_resume(void);

/* Symbol: compress_wait */
/* Demangled: compress_wait */
int compress_wait(void);

/* Symbol: compress_drain */
/* Demangled: compress_drain */
int compress_drain(void);

/* Symbol: compress_open */
/* Demangled: compress_open */
int compress_open(void);

/* Symbol: compress_read */
/* Demangled: compress_read */
int compress_read(void);

/* Symbol: compress_set_max_poll_wait */
/* Demangled: compress_set_max_poll_wait */
int compress_set_max_poll_wait(void);

/* Symbol: compress_write */
/* Demangled: compress_write */
int compress_write(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBTINYCOMPRESS_H */
