/*
 * Begonia GKI Compatibility Layer: Ashmem to Memfd Bridge
 * 
 * Allows legacy MediaTek 4.14 HAL blobs that depend on /dev/ashmem
 * to allocate shared memory seamlessly on GKI kernels (5.4, 5.10, 5.15, 6.1+)
 * where /dev/ashmem is removed and replaced by memfd_create().
 */

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/syscall.h>
#include <errno.h>

#ifndef MFD_CLOEXEC
#define MFD_CLOEXEC 0x0001U
#endif
#ifndef MFD_ALLOW_SEALING
#define MFD_ALLOW_SEALING 0x0002U
#endif

#define ASHMEM_NAME_LEN 256

/* Drop-in replacement for ashmem_create_region() */
int ashmem_create_region(const char *name, size_t size) {
    char region_name[ASHMEM_NAME_LEN];
    if (name) {
        snprintf(region_name, sizeof(region_name), "begonia_gki_%s", name);
    } else {
        snprintf(region_name, sizeof(region_name), "begonia_gki_anon");
    }

    /* 1. Try real /dev/ashmem if running on older kernel */
    int fd = open("/dev/ashmem", O_RDWR | O_CLOEXEC);
    if (fd >= 0) {
        /* ioctl set name & size */
        #define ASHMEM_SET_NAME _IOW(0x77, 1, char[256])
        #define ASHMEM_SET_SIZE _IOW(0x77, 3, size_t)
        ioctl(fd, ASHMEM_SET_NAME, region_name);
        ioctl(fd, ASHMEM_SET_SIZE, size);
        return fd;
    }

    /* 2. GKI Kernel fallback: use memfd_create syscall */
    int memfd = syscall(__NR_memfd_create, region_name, MFD_CLOEXEC | MFD_ALLOW_SEALING);
    if (memfd < 0) {
        return -errno;
    }

    /* Set size via ftruncate */
    if (ftruncate(memfd, (off_t)size) < 0) {
        int saved_errno = errno;
        close(memfd);
        return -saved_errno;
    }

    return memfd;
}

int ashmem_set_prot_region(int fd, int prot) {
    /* memfd handles protections directly via mmap() flags */
    (void)fd;
    (void)prot;
    return 0;
}

int ashmem_pin_region(int fd, size_t offset, size_t len) {
    (void)fd;
    (void)offset;
    (void)len;
    return 0;
}

int ashmem_unpin_region(int fd, size_t offset, size_t len) {
    (void)fd;
    (void)offset;
    (void)len;
    return 0;
}

int ashmem_get_size_region(int fd) {
    struct stat st;
    if (fstat(fd, &st) < 0) {
        return -errno;
    }
    return (int)st.st_size;
}
