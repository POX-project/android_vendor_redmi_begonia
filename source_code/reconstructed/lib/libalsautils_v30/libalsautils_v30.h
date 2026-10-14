/*
 * Reverse-Engineered ABI Specification for: libalsautils-v30.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libalsautils.so
 */

#ifndef BEGONIA_RE_LIBALSAUTILS_V30_H
#define BEGONIA_RE_LIBALSAUTILS_V30_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: profile_get_highest_sample_rate */
/* Demangled: profile_get_highest_sample_rate */
int profile_get_highest_sample_rate(void);

/* Symbol: profile_is_cached_for */
/* Demangled: profile_is_cached_for */
int profile_is_cached_for(void);

/* Symbol: proxy_get_channel_count */
/* Demangled: proxy_get_channel_count */
int proxy_get_channel_count(void);

/* Symbol: get_pcm_format_for_mask */
/* Demangled: get_pcm_format_for_mask */
int get_pcm_format_for_mask(void);

/* Symbol: profile_get_default_sample_rate */
/* Demangled: profile_get_default_sample_rate */
int profile_get_default_sample_rate(void);

/* Symbol: proxy_prepare */
/* Demangled: proxy_prepare */
int proxy_prepare(void);

/* Symbol: pcm_format_value_map */
/* Demangled: pcm_format_value_map */
extern void* pcm_format_value_map;

/* Symbol: profile_is_initialized */
/* Demangled: profile_is_initialized */
int profile_is_initialized(void);

/* Symbol: profile_is_sample_rate_valid */
/* Demangled: profile_is_sample_rate_valid */
int profile_is_sample_rate_valid(void);

/* Symbol: profile_is_valid */
/* Demangled: profile_is_valid */
int profile_is_valid(void);

/* Symbol: proxy_close */
/* Demangled: proxy_close */
int proxy_close(void);

/* Symbol: proxy_get_format */
/* Demangled: proxy_get_format */
int proxy_get_format(void);

/* Symbol: proxy_get_period_size */
/* Demangled: proxy_get_period_size */
int proxy_get_period_size(void);

/* Symbol: profile_calc_min_period_size */
/* Demangled: profile_calc_min_period_size */
int profile_calc_min_period_size(void);

/* Symbol: profile_dump */
/* Demangled: profile_dump */
int profile_dump(void);

/* Symbol: proxy_write */
/* Demangled: proxy_write */
int proxy_write(void);

/* Symbol: log_pcm_config */
/* Demangled: log_pcm_config */
int log_pcm_config(void);

/* Symbol: profile_get_channel_count_strs */
/* Demangled: profile_get_channel_count_strs */
int profile_get_channel_count_strs(void);

/* Symbol: profile_get_format_strs */
/* Demangled: profile_get_format_strs */
int profile_get_format_strs(void);

/* Symbol: profile_get_sample_rate_strs */
/* Demangled: profile_get_sample_rate_strs */
int profile_get_sample_rate_strs(void);

/* Symbol: profile_is_channel_count_valid */
/* Demangled: profile_is_channel_count_valid */
int profile_is_channel_count_valid(void);

/* Symbol: profile_is_format_valid */
/* Demangled: profile_is_format_valid */
int profile_is_format_valid(void);

/* Symbol: proxy_get_period_count */
/* Demangled: proxy_get_period_count */
int proxy_get_period_count(void);

/* Symbol: proxy_open */
/* Demangled: proxy_open */
int proxy_open(void);

/* Symbol: proxy_read */
/* Demangled: proxy_read */
int proxy_read(void);

/* Symbol: profile_get_period_size */
/* Demangled: profile_get_period_size */
int profile_get_period_size(void);

/* Symbol: log_pcm_params */
/* Demangled: log_pcm_params */
int log_pcm_params(void);

/* Symbol: profile_get_closest_channel_count */
/* Demangled: profile_get_closest_channel_count */
int profile_get_closest_channel_count(void);

/* Symbol: profile_get_default_channel_count */
/* Demangled: profile_get_default_channel_count */
int profile_get_default_channel_count(void);

/* Symbol: profile_get_default_format */
/* Demangled: profile_get_default_format */
int profile_get_default_format(void);

/* Symbol: profile_init */
/* Demangled: profile_init */
int profile_init(void);

/* Symbol: proxy_get_presentation_position */
/* Demangled: proxy_get_presentation_position */
int proxy_get_presentation_position(void);

/* Symbol: proxy_scan_rates */
/* Demangled: proxy_scan_rates */
int proxy_scan_rates(void);

/* Symbol: profile_decache */
/* Demangled: profile_decache */
int profile_decache(void);

/* Symbol: proxy_dump */
/* Demangled: proxy_dump */
int proxy_dump(void);

/* Symbol: proxy_get_sample_rate */
/* Demangled: proxy_get_sample_rate */
int proxy_get_sample_rate(void);

/* Symbol: profile_read_device_info */
/* Demangled: profile_read_device_info */
int profile_read_device_info(void);

/* Symbol: proxy_get_capture_position */
/* Demangled: proxy_get_capture_position */
int proxy_get_capture_position(void);

/* Symbol: proxy_get_latency */
/* Demangled: proxy_get_latency */
int proxy_get_latency(void);

/* Symbol: log_pcm_mask */
/* Demangled: log_pcm_mask */
int log_pcm_mask(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBALSAUTILS_V30_H */
