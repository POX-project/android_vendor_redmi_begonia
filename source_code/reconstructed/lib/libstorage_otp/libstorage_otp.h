/*
 * Reverse-Engineered ABI Specification for: libstorage_otp.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libstorage_otp.so
 */

#ifndef BEGONIA_RE_LIBSTORAGE_OTP_H
#define BEGONIA_RE_LIBSTORAGE_OTP_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _Z14ufs_block_readP3otpPcyy */
/* Demangled: ufs_block_read(otp*, char*, unsigned long long, unsigned long long) */
int _Z14ufs_block_readP3otpPcyy(void);

/* Symbol: _Z14ufs_otp_unlockP3otpyyy */
/* Demangled: ufs_otp_unlock(otp*, unsigned long long, unsigned long long, unsigned long long) */
int _Z14ufs_otp_unlockP3otpyyy(void);

/* Symbol: otp_write */
/* Demangled: otp_write */
int otp_write(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: otp_get_libversion */
/* Demangled: otp_get_libversion */
int otp_get_libversion(void);

/* Symbol: otp_get_region */
/* Demangled: otp_get_region */
int otp_get_region(void);

/* Symbol: otp_ops_read_write */
/* Demangled: otp_ops_read_write */
int otp_ops_read_write(void);

/* Symbol: otp_unlock */
/* Demangled: otp_unlock */
int otp_unlock(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _Z18ufs_otp_get_statusP3otpyyPjS1_ */
/* Demangled: ufs_otp_get_status(otp*, unsigned long long, unsigned long long, unsigned int*, unsigned int*) */
int _Z18ufs_otp_get_statusP3otpyyPjS1_(void);

/* Symbol: _Z19emmc_otp_get_statusP3otpyyPjS1_ */
/* Demangled: emmc_otp_get_status(otp*, unsigned long long, unsigned long long, unsigned int*, unsigned int*) */
int _Z19emmc_otp_get_statusP3otpyyPjS1_(void);

/* Symbol: otp_close */
/* Demangled: otp_close */
int otp_close(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _Z13emmc_otp_lockP3otpjyyy */
/* Demangled: emmc_otp_lock(otp*, unsigned int, unsigned long long, unsigned long long, unsigned long long) */
int _Z13emmc_otp_lockP3otpjyyy(void);

/* Symbol: _Z15emmc_otp_unlockP3otpyyy */
/* Demangled: emmc_otp_unlock(otp*, unsigned long long, unsigned long long, unsigned long long) */
int _Z15emmc_otp_unlockP3otpyyy(void);

/* Symbol: emmc_storage_init */
/* Demangled: emmc_storage_init */
int emmc_storage_init(void);

/* Symbol: otp_open */
/* Demangled: otp_open */
int otp_open(void);

/* Symbol: _Z15emmc_block_readP3otpPcyy */
/* Demangled: emmc_block_read(otp*, char*, unsigned long long, unsigned long long) */
int _Z15emmc_block_readP3otpPcyy(void);

/* Symbol: otp_get_libversion_if_legacy */
/* Demangled: otp_get_libversion_if_legacy */
int otp_get_libversion_if_legacy(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _Z12ufs_otp_lockP3otpjyyy */
/* Demangled: ufs_otp_lock(otp*, unsigned int, unsigned long long, unsigned long long, unsigned long long) */
int _Z12ufs_otp_lockP3otpjyyy(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: ufs_storage_init */
/* Demangled: ufs_storage_init */
int ufs_storage_init(void);

/* Symbol: otp_get_size */
/* Demangled: otp_get_size */
int otp_get_size(void);

/* Symbol: otp_read */
/* Demangled: otp_read */
int otp_read(void);

/* Symbol: otp_get_status */
/* Demangled: otp_get_status */
int otp_get_status(void);

/* Symbol: otp_lock */
/* Demangled: otp_lock */
int otp_lock(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBSTORAGE_OTP_H */
