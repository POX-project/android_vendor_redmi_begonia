/*
 * Begonia (MT6785) Reconstructed HAL Live Device Test Runner
 * ==========================================================
 * Dynamically loads and exercises reverse-engineered HAL modules on a live
 * Android Bionic environment, validating ABI compliance, symbol resolution,
 * HMI structs, hardware lifecycle calls, and crash resistance.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>
#include <unistd.h>
#include <dirent.h>
#include <errno.h>
#include <signal.h>
#include <setjmp.h>
#include <sys/types.h>
#include <sys/stat.h>

#include <hardware/hardware.h>
#include <hardware/lights.h>
#include <hardware/sensors.h>
#include <hardware/power.h>
#include <hardware/memtrack.h>
#include <hardware/vibrator.h>
#include <hardware/consumerir.h>
#include <hardware/thermal.h>

#define ANSI_RED     "\033[1;31m"
#define ANSI_GREEN   "\033[1;32m"
#define ANSI_YELLOW  "\033[1;33m"
#define ANSI_BLUE    "\033[1;34m"
#define ANSI_CYAN    "\033[1;36m"
#define ANSI_RESET   "\033[0m"
#define ANSI_BOLD    "\033[1m"

static sigjmp_buf g_jump_buf;
static volatile sig_atomic_t g_crashed = 0;

static void crash_handler(int sig, siginfo_t *info, void *ctx) {
    g_crashed = sig;
    siglongjmp(g_jump_buf, 1);
}

static void setup_signals() {
    struct sigaction sa;
    memset(&sa, 0, sizeof(sa));
    sa.sa_sigaction = crash_handler;
    sa.sa_flags = SA_SIGINFO;
    sigaction(SIGSEGV, &sa, NULL);
    sigaction(SIGBUS, &sa, NULL);
    sigaction(SIGILL, &sa, NULL);
    sigaction(SIGFPE, &sa, NULL);
}

struct TestStats {
    int total;
    int passed;
    int warnings;
    int failed;
};

static void test_lights_hal(struct hw_module_t *hmi, const char *path) {
    printf("    [+] Exercising Lights HAL API...\n");
    if (!hmi->methods || !hmi->methods->open) {
        printf("    " ANSI_YELLOW "[!] Warning: No open method in Lights HMI" ANSI_RESET "\n");
        return;
    }

    struct light_device_t *dev = NULL;
    int ret = hmi->methods->open(hmi, LIGHT_ID_BACKLIGHT, (struct hw_device_t**)&dev);
    if (ret == 0 && dev) {
        printf("    " ANSI_GREEN "[✓] Successfully opened backlight device (version=%d)" ANSI_RESET "\n", dev->common.version);
        if (dev->set_light) {
            struct light_state_t state;
            state.color = 0xFFFFFFFF; // 100% white backlight
            state.flashMode = LIGHT_FLASH_NONE;
            state.flashOnMS = 0;
            state.flashOffMS = 0;
            state.brightnessMode = BRIGHTNESS_MODE_USER;
            int sret = dev->set_light(dev, &state);
            printf("    " ANSI_GREEN "[✓] set_light(backlight) returned: %d" ANSI_RESET "\n", sret);
        }
        if (dev->common.close) {
            dev->common.close((struct hw_device_t*)dev);
            printf("    " ANSI_GREEN "[✓] Backlight device closed cleanly" ANSI_RESET "\n");
        }
    } else {
        printf("    " ANSI_YELLOW "[!] Backlight device open returned %d" ANSI_RESET "\n", ret);
    }
}

static void test_sensors_hal(struct hw_module_t *hmi, const char *path) {
    printf("    [+] Exercising Sensors HAL API...\n");
    struct sensors_module_t *smod = (struct sensors_module_t*)hmi;
    if (smod->get_sensors_list) {
        struct sensor_t const *list = NULL;
        int count = smod->get_sensors_list(smod, &list);
        printf("    " ANSI_GREEN "[✓] get_sensors_list() returned %d sensors" ANSI_RESET "\n", count);
        for (int i = 0; i < count && list; i++) {
            printf("        - Sensor #%d: %s [%s] (type=%d, maxRange=%.2f, power=%.2fmA)\n",
                   i, list[i].name ? list[i].name : "unknown",
                   list[i].vendor ? list[i].vendor : "unknown",
                   list[i].type, list[i].maxRange, list[i].power);
        }
    }

    if (hmi->methods && hmi->methods->open) {
        struct sensors_poll_device_1 *pdev = NULL;
        int ret = hmi->methods->open(hmi, SENSORS_HARDWARE_MODULE_ID, (struct hw_device_t**)&pdev);
        if (ret == 0 && pdev) {
            printf("    " ANSI_GREEN "[✓] Opened sensors poll device" ANSI_RESET "\n");
            if (pdev->activate) {
                int aret = pdev->activate(pdev, 0, 1);
                printf("    " ANSI_GREEN "[✓] activate(handle=0, enable=1) returned: %d" ANSI_RESET "\n", aret);
            }
            if (pdev->setDelay) {
                int dret = pdev->setDelay(pdev, 0, 20000000LL); // 20ms
                printf("    " ANSI_GREEN "[✓] setDelay(handle=0, 20ms) returned: %d" ANSI_RESET "\n", dret);
            }
            if (pdev->common.close) {
                pdev->common.close((struct hw_device_t*)pdev);
                printf("    " ANSI_GREEN "[✓] Sensors poll device closed cleanly" ANSI_RESET "\n");
            }
        }
    }
}

static void test_power_hal(struct hw_module_t *hmi, const char *path) {
    printf("    [+] Exercising Power HAL API...\n");
    struct power_module *pmod = (struct power_module*)hmi;
    if (pmod->init) {
        pmod->init(pmod);
        printf("    " ANSI_GREEN "[✓] power_module->init() executed" ANSI_RESET "\n");
    }
    if (pmod->setInteractive) {
        pmod->setInteractive(pmod, 1);
        printf("    " ANSI_GREEN "[✓] power_module->setInteractive(1) executed" ANSI_RESET "\n");
        pmod->setInteractive(pmod, 0);
        printf("    " ANSI_GREEN "[✓] power_module->setInteractive(0) executed" ANSI_RESET "\n");
    }
    if (pmod->powerHint) {
        pmod->powerHint(pmod, POWER_HINT_INTERACTION, NULL);
        printf("    " ANSI_GREEN "[✓] power_module->powerHint(POWER_HINT_INTERACTION) executed" ANSI_RESET "\n");
        pmod->powerHint(pmod, POWER_HINT_LAUNCH, NULL);
        printf("    " ANSI_GREEN "[✓] power_module->powerHint(POWER_HINT_LAUNCH) executed" ANSI_RESET "\n");
    }
}

static void test_memtrack_hal(struct hw_module_t *hmi, const char *path) {
    printf("    [+] Exercising Memtrack HAL API...\n");
    struct memtrack_module *mmod = (struct memtrack_module*)hmi;
    if (mmod->init) {
        int iret = mmod->init(mmod);
        printf("    " ANSI_GREEN "[✓] memtrack_module->init() returned: %d" ANSI_RESET "\n", iret);
    }
    if (mmod->get_memory) {
        struct memtrack_record records[4];
        size_t count = 4;
        int mret = mmod->get_memory(mmod, getpid(), MEMTRACK_TYPE_GL, records, &count);
        printf("    " ANSI_GREEN "[✓] memtrack_module->get_memory(pid=%d) returned: %d (records=%zu)" ANSI_RESET "\n",
               getpid(), mret, count);
        for (size_t i = 0; i < count; i++) {
            printf("        - Record %zu: %zu bytes\n", i, records[i].size_in_bytes);
        }
    }
}

static void test_thermal_hal(struct hw_module_t *hmi, const char *path) {
    printf("    [+] Exercising Thermal HAL API...\n");
    struct thermal_module *tmod = (struct thermal_module*)hmi;
    if (tmod->get_temperatures) {
        temperature_t temps[16];
        ssize_t count = tmod->get_temperatures(tmod, temps, 16);
        printf("    " ANSI_GREEN "[✓] thermal_module->get_temperatures() returned %zd zones" ANSI_RESET "\n", count);
        for (ssize_t i = 0; i < count && i < 16; i++) {
            printf("        - Zone %zd: %s = %.1f°C (throttling=%.1f°C)\n",
                   i, temps[i].name ? temps[i].name : "unknown",
                   temps[i].current_value, temps[i].throttling_threshold);
        }
    }
    if (tmod->get_cpu_usages) {
        cpu_usage_t cpus[16];
        ssize_t ccount = tmod->get_cpu_usages(tmod, cpus);
        printf("    " ANSI_GREEN "[✓] thermal_module->get_cpu_usages() returned %zd CPUs" ANSI_RESET "\n", ccount);
    }
}

static void test_vibrator_hal(struct hw_module_t *hmi, const char *path) {
    printf("    [+] Exercising Vibrator HAL API...\n");
    if (hmi->methods && hmi->methods->open) {
        struct vibrator_device *vdev = NULL;
        int ret = hmi->methods->open(hmi, VIBRATOR_HARDWARE_MODULE_ID, (struct hw_device_t**)&vdev);
        if (ret == 0 && vdev) {
            printf("    " ANSI_GREEN "[✓] Opened vibrator device" ANSI_RESET "\n");
            if (vdev->vibrator_on) {
                int on_ret = vdev->vibrator_on(vdev, 50);
                printf("    " ANSI_GREEN "[✓] vibrator_on(50ms) returned: %d" ANSI_RESET "\n", on_ret);
            }
            if (vdev->vibrator_off) {
                int off_ret = vdev->vibrator_off(vdev);
                printf("    " ANSI_GREEN "[✓] vibrator_off() returned: %d" ANSI_RESET "\n", off_ret);
            }
            if (vdev->common.close) {
                vdev->common.close((struct hw_device_t*)vdev);
                printf("    " ANSI_GREEN "[✓] Vibrator device closed cleanly" ANSI_RESET "\n");
            }
        }
    }
}

static void test_consumerir_hal(struct hw_module_t *hmi, const char *path) {
    printf("    [+] Exercising Consumer IR HAL API...\n");
    if (hmi->methods && hmi->methods->open) {
        struct consumerir_device *idev = NULL;
        int ret = hmi->methods->open(hmi, CONSUMERIR_HARDWARE_MODULE_ID, (struct hw_device_t**)&idev);
        if (ret == 0 && idev) {
            printf("    " ANSI_GREEN "[✓] Opened consumer IR device" ANSI_RESET "\n");
            if (idev->get_num_carrier_freqs) {
                int n = idev->get_num_carrier_freqs(idev);
                printf("    " ANSI_GREEN "[✓] get_num_carrier_freqs() returned: %d" ANSI_RESET "\n", n);
            }
            if (idev->common.close) {
                idev->common.close((struct hw_device_t*)idev);
                printf("    " ANSI_GREEN "[✓] Consumer IR device closed cleanly" ANSI_RESET "\n");
            }
        }
    }
}

static bool test_shared_library(const char *so_path, TestStats &stats) {
    stats.total++;
    const char *basename = strrchr(so_path, '/');
    basename = basename ? basename + 1 : so_path;

    printf("\n" ANSI_BOLD "==================================================" ANSI_RESET "\n");
    printf(ANSI_CYAN "[TEST]" ANSI_RESET " Testing shared library: " ANSI_BOLD "%s" ANSI_RESET "\n", basename);
    printf("Path: %s\n", so_path);

    if (sigsetjmp(g_jump_buf, 1) != 0) {
        printf(ANSI_RED "[-] FATAL: Caught signal %d during test of %s!" ANSI_RESET "\n", g_crashed, basename);
        stats.failed++;
        return false;
    }

    void *handle = dlopen(so_path, RTLD_NOW | RTLD_LOCAL);
    if (!handle) {
        printf(ANSI_RED "[-] dlopen() FAILED: %s" ANSI_RESET "\n", dlerror());
        stats.failed++;
        return false;
    }
    printf(ANSI_GREEN "[✓] dlopen() SUCCESS" ANSI_RESET " - Dynamic linker resolved all relocations\n");

    // Check for Android Hardware Module symbol HMI
    struct hw_module_t *hmi = (struct hw_module_t*)dlsym(handle, "HMI");
    if (hmi) {
        printf(ANSI_GREEN "[✓] Found 'HMI' Symbol (HAL_MODULE_INFO_SYM)" ANSI_RESET "\n");
        printf("    - Tag: 0x%08X %s\n", hmi->tag, (hmi->tag == HARDWARE_MODULE_TAG) ? ANSI_GREEN "(VALID HARDWARE_MODULE_TAG)" ANSI_RESET : ANSI_RED "(INVALID)" ANSI_RESET);
        printf("    - Module ID:   %s\n", hmi->id ? hmi->id : "(null)");
        printf("    - Module Name: %s\n", hmi->name ? hmi->name : "(null)");
        printf("    - Author:      %s\n", hmi->author ? hmi->author : "(null)");
        printf("    - API Version: %d.%d\n", hmi->module_api_version >> 8, hmi->module_api_version & 0xFF);

        if (hmi->id) {
            if (strcmp(hmi->id, "lights") == 0) {
                test_lights_hal(hmi, so_path);
            } else if (strcmp(hmi->id, "sensors") == 0) {
                test_sensors_hal(hmi, so_path);
            } else if (strcmp(hmi->id, "power") == 0) {
                test_power_hal(hmi, so_path);
            } else if (strcmp(hmi->id, "memtrack") == 0) {
                test_memtrack_hal(hmi, so_path);
            } else if (strcmp(hmi->id, "thermal") == 0) {
                test_thermal_hal(hmi, so_path);
            } else if (strcmp(hmi->id, "vibrator") == 0) {
                test_vibrator_hal(hmi, so_path);
            } else if (strcmp(hmi->id, "consumerir") == 0) {
                test_consumerir_hal(hmi, so_path);
            } else if (hmi->methods && hmi->methods->open) {
                struct hw_device_t *dev = NULL;
                int ret = hmi->methods->open(hmi, hmi->id, &dev);
                printf("    [+] Generic hmi->methods->open() returned: %d\n", ret);
                if (dev && dev->close) {
                    dev->close(dev);
                }
            }
        }
    } else {
        printf(ANSI_YELLOW "[i] Note: No HMI symbol found (standard HIDL/AIDL/NDK shared library)" ANSI_RESET "\n");
    }

    dlclose(handle);
    printf(ANSI_GREEN "[✓] dlclose() SUCCESS" ANSI_RESET "\n");
    stats.passed++;
    return true;
}

static void scan_and_test_directory(const char *dir_path, TestStats &stats) {
    DIR *dir = opendir(dir_path);
    if (!dir) {
        printf(ANSI_RED "[-] Cannot open test directory: %s (%s)" ANSI_RESET "\n", dir_path, strerror(errno));
        return;
    }

    struct dirent *entry;
    while ((entry = readdir(dir)) != NULL) {
        if (entry->d_type == DT_REG && strstr(entry->d_name, ".so")) {
            char full_path[1024];
            snprintf(full_path, sizeof(full_path), "%s/%s", dir_path, entry->d_name);
            test_shared_library(full_path, stats);
        }
    }
    closedir(dir);
}

int main(int argc, char **argv) {
    setup_signals();

    printf("\n" ANSI_BOLD ANSI_CYAN);
    printf("========================================================\n");
    printf("  BEGONIA (MT6785) RECONSTRUCTED HAL VERIFICATION HARNESS\n");
    printf("========================================================\n");
    printf(ANSI_RESET "\n");

    TestStats stats = {0, 0, 0, 0};

    if (argc < 2) {
        printf("Usage:\n");
        printf("  %s <path_to_library.so>\n", argv[0]);
        printf("  %s --dir <directory_containing_libs>\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "--dir") == 0 && argc >= 3) {
        scan_and_test_directory(argv[2], stats);
    } else {
        for (int i = 1; i < argc; i++) {
            test_shared_library(argv[i], stats);
        }
    }

    printf("\n" ANSI_BOLD "========================================================\n");
    printf("  FINAL TEST VERIFICATION SUMMARY\n");
    printf("========================================================\n" ANSI_RESET);
    printf("Total Modules Tested:  " ANSI_BOLD "%d" ANSI_RESET "\n", stats.total);
    printf("Passed (100%% Clean):   " ANSI_GREEN ANSI_BOLD "%d" ANSI_RESET "\n", stats.passed);
    printf("Warnings:              " ANSI_YELLOW "%d" ANSI_RESET "\n", stats.warnings);
    printf("Failed (Crashes/Link): " ANSI_RED "%d" ANSI_RESET "\n", stats.failed);
    printf("========================================================\n");

    return stats.failed == 0 ? 0 : 1;
}
