/*
 * Begonia Open-Source Haptic Pulse Tool
 * Target: Redmi Note 8 Pro (MT6785 Vibrator)
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define PATH_VIB_ENABLE   "/sys/class/timed_output/vibrator/enable"
#define PATH_VIB_DURATION "/sys/class/leds/vibrator/duration"

int main(int argc, char** argv) {
    int duration = (argc >= 2) ? atoi(argv[1]) : 25;
    if (duration <= 0) duration = 25;
    if (duration > 5000) duration = 5000;

    const char* path = (access(PATH_VIB_DURATION, W_OK) == 0) ? PATH_VIB_DURATION : PATH_VIB_ENABLE;

    FILE* fp = fopen(path, "w");
    if (!fp) {
        perror("[-] Failed opening vibrator control node");
        return 1;
    }

    fprintf(fp, "%d\n", duration);
    fclose(fp);

    printf("[+] Fired %d ms haptic feedback pulse via %s\n", duration, path);
    return 0;
}
