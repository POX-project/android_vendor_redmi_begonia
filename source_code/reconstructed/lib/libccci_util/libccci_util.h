/*
 * Reverse-Engineered ABI Specification for: libccci_util.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libccci_util.so
 */

#ifndef BEGONIA_RE_LIBCCCI_UTIL_H
#define BEGONIA_RE_LIBCCCI_UTIL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: ccci_ccb_check_users */
/* Demangled: ccci_ccb_check_users */
int ccci_ccb_check_users(void);

/* Symbol: ccci_ccb_get_config */
/* Demangled: ccci_ccb_get_config */
int ccci_ccb_get_config(void);

/* Symbol: ccci_ccb_get_fd */
/* Demangled: ccci_ccb_get_fd */
int ccci_ccb_get_fd(void);

/* Symbol: ccci_ccb_init_users */
/* Demangled: ccci_ccb_init_users */
int ccci_ccb_init_users(void);

/* Symbol: ccci_ccb_query_status */
/* Demangled: ccci_ccb_query_status */
int ccci_ccb_query_status(void);

/* Symbol: ccci_ccb_register */
/* Demangled: ccci_ccb_register */
int ccci_ccb_register(void);

/* Symbol: property_list */
/* Demangled: property_list */
int property_list(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: ccci_ccb_read_done */
/* Demangled: ccci_ccb_read_done */
int ccci_ccb_read_done(void);

/* Symbol: ccci_ccb_read_flush */
/* Demangled: ccci_ccb_read_flush */
int ccci_ccb_read_flush(void);

/* Symbol: ccci_ccb_read_get */
/* Demangled: ccci_ccb_read_get */
int ccci_ccb_read_get(void);

/* Symbol: query_kcfg_setting */
/* Demangled: query_kcfg_setting */
int query_kcfg_setting(void);

/* Symbol: property_get_int32 */
/* Demangled: property_get_int32 */
int property_get_int32(void);

/* Symbol: restore_image_from_pt */
/* Demangled: restore_image_from_pt */
int restore_image_from_pt(void);

/* Symbol: property_get_int64 */
/* Demangled: property_get_int64 */
int property_get_int64(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: ccb_info_len */
/* Demangled: ccb_info_len */
extern void* ccb_info_len;

/* Symbol: ccci_ccb_ctrl_put */
/* Demangled: ccci_ccb_ctrl_put */
int ccci_ccb_ctrl_put(void);

/* Symbol: ccci_smem_put */
/* Demangled: ccci_smem_put */
int ccci_smem_put(void);

/* Symbol: query_prj_cfg_setting */
/* Demangled: query_prj_cfg_setting */
int query_prj_cfg_setting(void);

/* Symbol: query_prj_cfg_setting_platform */
/* Demangled: query_prj_cfg_setting_platform */
int query_prj_cfg_setting_platform(void);

/* Symbol: ccci_get_ccb_support */
/* Demangled: ccci_get_ccb_support */
int ccci_get_ccb_support(void);

/* Symbol: ccci_smem_get */
/* Demangled: ccci_smem_get */
int ccci_smem_get(void);

/* Symbol: property_set */
/* Demangled: property_set */
int property_set(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: ccci_ccb_poll */
/* Demangled: ccci_ccb_poll */
int ccci_ccb_poll(void);

/* Symbol: ccci_ccb_write_alloc */
/* Demangled: ccci_ccb_write_alloc */
int ccci_ccb_write_alloc(void);

/* Symbol: find_image_from_pt_internal */
/* Demangled: find_image_from_pt_internal */
int find_image_from_pt_internal(void);

/* Symbol: ccci_ccb_write_done */
/* Demangled: ccci_ccb_write_done */
int ccci_ccb_write_done(void);

/* Symbol: property_get */
/* Demangled: property_get */
int property_get(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: find_image_from_pt */
/* Demangled: find_image_from_pt */
int find_image_from_pt(void);

/* Symbol: property_get_bool */
/* Demangled: property_get_bool */
int property_get_bool(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: AB_image_get */
/* Demangled: AB_image_get */
int AB_image_get(void);

/* Symbol: ccci_ccb_unregister */
/* Demangled: ccci_ccb_unregister */
int ccci_ccb_unregister(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCCCI_UTIL_H */
