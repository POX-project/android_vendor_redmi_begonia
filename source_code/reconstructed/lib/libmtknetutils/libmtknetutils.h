/*
 * Reverse-Engineered ABI Specification for: libmtknetutils.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmtknetutils.so
 */

#ifndef BEGONIA_RE_LIBMTKNETUTILS_H
#define BEGONIA_RE_LIBMTKNETUTILS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: ifc_act_on_address */
/* Demangled: ifc_act_on_address */
int ifc_act_on_address(void);

/* Symbol: ifc_enable */
/* Demangled: ifc_enable */
int ifc_enable(void);

/* Symbol: ifc_get_ifindex */
/* Demangled: ifc_get_ifindex */
int ifc_get_ifindex(void);

/* Symbol: ifc_reset_connections */
/* Demangled: ifc_reset_connections */
int ifc_reset_connections(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: TC_PATH */
/* Demangled: TC_PATH */
extern void* TC_PATH;

/* Symbol: ifc_set_prefixLength */
/* Demangled: ifc_set_prefixLength */
int ifc_set_prefixLength(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: ifc_get_addr */
/* Demangled: ifc_get_addr */
int ifc_get_addr(void);

/* Symbol: ifc_set_hwaddr */
/* Demangled: ifc_set_hwaddr */
int ifc_set_hwaddr(void);

/* Symbol: ifc_set_txq_state */
/* Demangled: ifc_set_txq_state */
int ifc_set_txq_state(void);

/* Symbol: ipv6_proc_path */
/* Demangled: ipv6_proc_path */
extern void* ipv6_proc_path;

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: ifc_add_address */
/* Demangled: ifc_add_address */
int ifc_add_address(void);

/* Symbol: ifc_create_default_route */
/* Demangled: ifc_create_default_route */
int ifc_create_default_route(void);

/* Symbol: ifc_init6 */
/* Demangled: ifc_init6 */
int ifc_init6(void);

/* Symbol: ifc_set_mask */
/* Demangled: ifc_set_mask */
int ifc_set_mask(void);

/* Symbol: prefixLengthToIpv4Netmask */
/* Demangled: prefixLengthToIpv4Netmask */
int prefixLengthToIpv4Netmask(void);

/* Symbol: ifc_disable */
/* Demangled: ifc_disable */
int ifc_disable(void);

/* Symbol: ifc_init */
/* Demangled: ifc_init */
int ifc_init(void);

/* Symbol: ipv4NetmaskToPrefixLength */
/* Demangled: ipv4NetmaskToPrefixLength */
int ipv4NetmaskToPrefixLength(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: ifc_up */
/* Demangled: ifc_up */
int ifc_up(void);

/* Symbol: ifc_act_on_ipv4_route */
/* Demangled: ifc_act_on_ipv4_route */
int ifc_act_on_ipv4_route(void);

/* Symbol: ifc_clear_ipv6_addresses */
/* Demangled: ifc_clear_ipv6_addresses */
int ifc_clear_ipv6_addresses(void);

/* Symbol: ifc_close */
/* Demangled: ifc_close */
int ifc_close(void);

/* Symbol: ifc_ccmni_md_cfg */
/* Demangled: ifc_ccmni_md_cfg */
int ifc_ccmni_md_cfg(void);

/* Symbol: ifc_get_hwaddr */
/* Demangled: ifc_get_hwaddr */
int ifc_get_hwaddr(void);

/* Symbol: ifc_close6 */
/* Demangled: ifc_close6 */
int ifc_close6(void);

/* Symbol: ifc_configure */
/* Demangled: ifc_configure */
int ifc_configure(void);

/* Symbol: ifc_del_address */
/* Demangled: ifc_del_address */
int ifc_del_address(void);

/* Symbol: string_to_ip */
/* Demangled: string_to_ip */
int string_to_ip(void);

/* Symbol: ifc_clear_addresses */
/* Demangled: ifc_clear_addresses */
int ifc_clear_addresses(void);

/* Symbol: ifc_down */
/* Demangled: ifc_down */
int ifc_down(void);

/* Symbol: ifc_remove_default_route */
/* Demangled: ifc_remove_default_route */
int ifc_remove_default_route(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: ifc_clear_ipv4_addresses */
/* Demangled: ifc_clear_ipv4_addresses */
int ifc_clear_ipv4_addresses(void);

/* Symbol: ifc_get_info */
/* Demangled: ifc_get_info */
int ifc_get_info(void);

/* Symbol: ifc_set_addr */
/* Demangled: ifc_set_addr */
int ifc_set_addr(void);

/* Symbol: rx */
/* Demangled: rx */
extern void* rx;

/* Symbol: tx */
/* Demangled: tx */
extern void* tx;

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKNETUTILS_H */
