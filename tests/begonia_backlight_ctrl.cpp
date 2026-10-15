/*
 * Begonia Open-Source Backlight Controller Tool
 * Target: Redmi Note 8 Pro (Tianma 2047 / Huaxing 4095)
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define PATH_MAX_BRIGHT "/sys/class/leds/lcd-backlight/max_brightness"
#define PATH_BRIGHT     "/sys/class/leds/lcd-backlight/brightness"

int main(int argc, char** argv) {
    int max_val = 2047;
    FILE* fp = fopen(PATH_MAX_BRIGHT, "r");
    if (fp) {
        fscanf(fp, "%d", &max_val);
        fclose(fp);
    }

    int cur_val = 0;
    fp = fopen(PATH_BRIGHT, "r");
    if (fp) {
        fscanf(fp, "%d", &cur_val);
        fclose(fp);
    }

    if (argc < 2) {
        printf("Begonia LCD Backlight Controller\n");
        printf("Panel Max: %d (%s)\n", max_val, (max_val == 2047 ? "Tianma" : (max_val == 4095 ? "Huaxing" : "Custom")));
        printf("Current:   %d (%.1f%%)\n", cur_val, (cur_val * 100.0) / max_val);
        printf("Usage: begonia_backlight_ctrl <level 0-%d>\n", max_val);
        return 0;
    }

    int target = atoi(argv[1]);
    if (target < 0) target = 0;
    if (target > max_val) target = max_val;

    fp = fopen(PATH_BRIGHT, "w");
    if (!fp) {
        perror("[-] Failed opening brightness sysfs node");
        return 1;
    }
    fprintf(fp, "%d\n", target);
    fclose(fp);

    printf("[+] Backlight set to %d / %d (%.1f%%)\n", target, max_val, (target * 100.0) / max_val);
    return 0;
}
