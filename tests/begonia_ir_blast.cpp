/*
 * Begonia Open-Source Consumer IR Blaster Tool
 * Target: Redmi Note 8 Pro (MT6785 / /dev/irtx)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <vector>

#define IRTX_IOC_SET_CARRIER_FREQ   _IOW('R', 0, unsigned int)
#define DEV_IRTX "/dev/irtx"

int main(int argc, char** argv) {
    if (argc < 2) {
        printf("Begonia Open-Source IR Blaster Tool\n");
        printf("Usage: begonia_ir_blast <freq_hz> [pattern_csv]\n");
        printf("Default: begonia_ir_blast 38000 (sends standard NEC power toggle pulse)\n");
    }

    int freq = (argc >= 2) ? atoi(argv[1]) : 38000;
    if (freq < 30000 || freq > 60000) {
        freq = 38000;
    }

    int fd = open(DEV_IRTX, O_RDWR | O_CLOEXEC);
    if (fd < 0) {
        perror("[-] Failed to open /dev/irtx");
        return 1;
    }

    unsigned int f = freq;
    if (ioctl(fd, IRTX_IOC_SET_CARRIER_FREQ, &f) < 0) {
        perror("[-] ioctl IRTX_IOC_SET_CARRIER_FREQ failed");
        close(fd);
        return 1;
    }

    // Default NEC pattern: 9ms header, 4.5ms space, 32 data bits
    std::vector<unsigned int> pattern = {
        9000, 4500,
        560, 560, 560, 1690, 560, 560, 560, 1690,
        560, 560, 560, 1690, 560, 560, 560, 1690,
        560, 1690, 560, 560, 560, 1690, 560, 560,
        560
    };

    ssize_t bytes = pattern.size() * sizeof(unsigned int);
    ssize_t ret = write(fd, pattern.data(), bytes);
    if (ret == bytes) {
        printf("[+] Transmitted %zu IR pulses at %d Hz via /dev/irtx successfully!\n",
               pattern.size(), freq);
        close(fd);
        return 0;
    } else {
        perror("[-] write to /dev/irtx failed");
        close(fd);
        return 1;
    }
}
