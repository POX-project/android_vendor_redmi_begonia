/*
 * Handcrafted, fully functional Lights HAL for Redmi Note 8 Pro (Begonia / MT6785)
 * Controls backlight and notification/battery LEDs safely via Linux sysfs.
 */

#define LOG_TAG "lights_mt6785"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <pthread.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <log/log.h>
#include <hardware/hardware.h>
#include <hardware/lights.h>

#define LCD_BACKLIGHT_FILE "/sys/class/leds/lcd-backlight/brightness"
#define LCD_MAX_BACKLIGHT_FILE "/sys/class/leds/lcd-backlight/max_brightness"
#define RED_LED_FILE "/sys/class/leds/red/brightness"
#define GREEN_LED_FILE "/sys/class/leds/green/brightness"
#define BLUE_LED_FILE "/sys/class/leds/blue/brightness"
#define WHITE_LED_FILE "/sys/class/leds/white/brightness"

static pthread_once_t g_init = PTHREAD_ONCE_INIT;
static pthread_mutex_t g_lock = PTHREAD_MUTEX_INITIALIZER;
static int g_max_backlight = 2047;

static void init_globals(void) {
    pthread_mutex_init(&g_lock, NULL);
    FILE *f = fopen(LCD_MAX_BACKLIGHT_FILE, "r");
    if (f) {
        if (fscanf(f, "%d", &g_max_backlight) != 1 || g_max_backlight <= 0) {
            g_max_backlight = 2047;
        }
        fclose(f);
    }
    ALOGI("Lights HAL initialized with max backlight: %d", g_max_backlight);
}

static int write_int(const char *path, int value) {
    pthread_mutex_lock(&g_lock);
    int fd = open(path, O_RDWR);
    if (fd < 0) {
        pthread_mutex_unlock(&g_lock);
        return -errno;
    }
    char buffer[20];
    int bytes = snprintf(buffer, sizeof(buffer), "%d\n", value);
    ssize_t amt = write(fd, buffer, bytes);
    close(fd);
    pthread_mutex_unlock(&g_lock);
    return amt == -1 ? -errno : 0;
}

static int rgb_to_brightness(struct light_state_t const* state) {
    int color = state->color & 0x00ffffff;
    return ((77 * ((color >> 16) & 0x00ff))
            + (150 * ((color >> 8) & 0x00ff))
            + (29 * (color & 0x00ff))) >> 8;
}

static int set_light_backlight(struct light_device_t* dev, struct light_state_t const* state) {
    int err = 0;
    int brightness = rgb_to_brightness(state);
    if (brightness > 0) {
        brightness = (brightness * g_max_backlight) / 255;
    }
    ALOGV("Setting LCD backlight to %d / %d", brightness, g_max_backlight);
    err = write_int(LCD_BACKLIGHT_FILE, brightness);
    return err;
}

static int set_light_battery(struct light_device_t* dev, struct light_state_t const* state) {
    int color = state->color & 0x00ffffff;
    int red = (color >> 16) & 0xff;
    int green = (color >> 8) & 0xff;
    int blue = color & 0xff;

    write_int(RED_LED_FILE, red ? 255 : 0);
    write_int(GREEN_LED_FILE, green ? 255 : 0);
    write_int(BLUE_LED_FILE, blue ? 255 : 0);
    write_int(WHITE_LED_FILE, (red || green || blue) ? 255 : 0);
    return 0;
}

static int set_light_notifications(struct light_device_t* dev, struct light_state_t const* state) {
    return set_light_battery(dev, state);
}

static int set_light_attention(struct light_device_t* dev, struct light_state_t const* state) {
    return set_light_battery(dev, state);
}

static int set_light_buttons(struct light_device_t* dev, struct light_state_t const* state) {
    return 0; // Begonia has on-screen navigation
}

static int lights_device_close(struct hw_device_t *dev) {
    struct light_device_t *d = (struct light_device_t*)dev;
    if (d) {
        free(d);
    }
    return 0;
}

static int lights_device_open(const struct hw_module_t* module, const char* name,
        struct hw_device_t** device) {
    pthread_once(&g_init, init_globals);

    int (*set_light)(struct light_device_t* dev,
            struct light_state_t const* state);

    if (strcmp(LIGHT_ID_BACKLIGHT, name) == 0) {
        set_light = set_light_backlight;
    } else if (strcmp(LIGHT_ID_BATTERY, name) == 0) {
        set_light = set_light_battery;
    } else if (strcmp(LIGHT_ID_NOTIFICATIONS, name) == 0) {
        set_light = set_light_notifications;
    } else if (strcmp(LIGHT_ID_ATTENTION, name) == 0) {
        set_light = set_light_attention;
    } else if (strcmp(LIGHT_ID_BUTTONS, name) == 0) {
        set_light = set_light_buttons;
    } else {
        return -EINVAL;
    }

    struct light_device_t *dev = (struct light_device_t*)calloc(1, sizeof(struct light_device_t));
    if (!dev) return -ENOMEM;

    dev->common.tag = HARDWARE_DEVICE_TAG;
    dev->common.version = 0;
    dev->common.module = (struct hw_module_t*)module;
    dev->common.close = lights_device_close;
    dev->set_light = set_light;

    *device = (struct hw_device_t*)dev;
    ALOGI("Lights HAL device opened: %s", name);
    return 0;
}

static struct hw_module_methods_t lights_module_methods = {
    .open = lights_device_open,
};

struct hw_module_t HAL_MODULE_INFO_SYM __attribute__ ((visibility ("default"))) = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = HARDWARE_MODULE_API_VERSION(1, 0),
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = LIGHTS_HARDWARE_MODULE_ID,
    .name = "Begonia Lights HAL",
    .author = "Google Antigravity & LineageOS",
    .methods = &lights_module_methods,
    .dso = NULL,
    .reserved = {0},
};
