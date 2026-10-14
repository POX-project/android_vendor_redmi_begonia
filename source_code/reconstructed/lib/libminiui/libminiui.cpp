/*
 * Reverse-Engineered Source for: libminiui.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libminiui"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <log/log.h>
#include <hardware/hardware.h>
#include "libminiui.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_GRAPHICS_FB0 "/dev/graphics/fb0"
#define DEV_DEV_INPUT "/dev/input"
#define DEV_DEV_TTY0 "/dev/tty0"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_GRAPHICS_FB0, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_GRAPHICS_FB0, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_GRAPHICS_FB0, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_INPUT, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_INPUT, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_INPUT, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_TTY0, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_TTY0, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_TTY0, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: ev_init */
extern "C" __attribute__((visibility("default"))) int ev_init(void) {
    ALOGD("ev_init() called");
    return 0;
}

/* Exported Object: gr_font_big */
extern "C" __attribute__((visibility("default"))) void* gr_font_big = NULL;

/* Exported Object: item_rows */
extern "C" __attribute__((visibility("default"))) void* item_rows = NULL;

/* Exported Object: maxrows */
extern "C" __attribute__((visibility("default"))) void* maxrows = NULL;

/* Demangled: show_slash_screen */
extern "C" __attribute__((visibility("default"))) int show_slash_screen(void) {
    ALOGD("show_slash_screen() called");
    return 0;
}

/* Demangled: ui_new_itemview */
extern "C" __attribute__((visibility("default"))) int ui_new_itemview(void) {
    ALOGD("ui_new_itemview() called");
    return 0;
}

/* Demangled: dispatch_event */
extern "C" __attribute__((visibility("default"))) int dispatch_event(void) {
    ALOGD("dispatch_event() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: gr_measure */
extern "C" __attribute__((visibility("default"))) int gr_measure(void) {
    ALOGD("gr_measure() called");
    return 0;
}

/* Demangled: ui_line */
extern "C" __attribute__((visibility("default"))) int ui_line(void) {
    ALOGD("ui_line() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Exported Object: g_RBTN */
extern "C" __attribute__((visibility("default"))) void* g_RBTN = NULL;

/* Exported Object: g_touch */
extern "C" __attribute__((visibility("default"))) void* g_touch = NULL;

/* Demangled: res_free_surface */
extern "C" __attribute__((visibility("default"))) int res_free_surface(void) {
    ALOGD("res_free_surface() called");
    return 0;
}

/* Demangled: get_ev_arr */
extern "C" __attribute__((visibility("default"))) int get_ev_arr(void) {
    ALOGD("get_ev_arr() called");
    return 0;
}

/* Demangled: gr_text */
extern "C" __attribute__((visibility("default"))) int gr_text(void) {
    ALOGD("gr_text() called");
    return 0;
}

/* Demangled: ui_free_itemview */
extern "C" __attribute__((visibility("default"))) int ui_free_itemview(void) {
    ALOGD("ui_free_itemview() called");
    return 0;
}

/* Demangled: ui_wait_key */
extern "C" __attribute__((visibility("default"))) int ui_wait_key(void) {
    ALOGD("ui_wait_key() called");
    return 0;
}

/* Exported Object: Font_Small */
extern "C" __attribute__((visibility("default"))) void* Font_Small = NULL;

/* Demangled: gr_flip */
extern "C" __attribute__((visibility("default"))) int gr_flip(void) {
    ALOGD("gr_flip() called");
    return 0;
}

/* Demangled: ui_init_textview */
extern "C" __attribute__((visibility("default"))) int ui_init_textview(void) {
    ALOGD("ui_init_textview() called");
    return 0;
}

/* Demangled: get_confirm_key */
extern "C" __attribute__((visibility("default"))) int get_confirm_key(void) {
    ALOGD("get_confirm_key() called");
    return 0;
}

/* Demangled: gr_fb_width */
extern "C" __attribute__((visibility("default"))) int gr_fb_width(void) {
    ALOGD("gr_fb_width() called");
    return 0;
}

/* Demangled: gr_fill */
extern "C" __attribute__((visibility("default"))) int gr_fill(void) {
    ALOGD("gr_fill() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: ev_get */
extern "C" __attribute__((visibility("default"))) int ev_get(void) {
    ALOGD("ev_get() called");
    return 0;
}

/* Demangled: gr_init */
extern "C" __attribute__((visibility("default"))) int gr_init(void) {
    ALOGD("gr_init() called");
    return 0;
}

/* Demangled: ui_text */
extern "C" __attribute__((visibility("default"))) int ui_text(void) {
    ALOGD("ui_text() called");
    return 0;
}

/* Demangled: get_ev_head_num */
extern "C" __attribute__((visibility("default"))) int get_ev_head_num(void) {
    ALOGD("get_ev_head_num() called");
    return 0;
}

/* Demangled: gr_fb_height */
extern "C" __attribute__((visibility("default"))) int gr_fb_height(void) {
    ALOGD("gr_fb_height() called");
    return 0;
}

/* Demangled: imageview_key_handler */
extern "C" __attribute__((visibility("default"))) int imageview_key_handler(void) {
    ALOGD("imageview_key_handler() called");
    return 0;
}

/* Demangled: itemview_menu_select */
extern "C" __attribute__((visibility("default"))) int itemview_menu_select(void) {
    ALOGD("itemview_menu_select() called");
    return 0;
}

/* Demangled: paintview_redraw */
extern "C" __attribute__((visibility("default"))) int paintview_redraw(void) {
    ALOGD("paintview_redraw() called");
    return 0;
}

/* Demangled: ui_color */
extern "C" __attribute__((visibility("default"))) int ui_color(void) {
    ALOGD("ui_color() called");
    return 0;
}

/* Demangled: ui_flip */
extern "C" __attribute__((visibility("default"))) int ui_flip(void) {
    ALOGD("ui_flip() called");
    return 0;
}

/* Demangled: gr_color */
extern "C" __attribute__((visibility("default"))) int gr_color(void) {
    ALOGD("gr_color() called");
    return 0;
}

/* Demangled: ui_fill */
extern "C" __attribute__((visibility("default"))) int ui_fill(void) {
    ALOGD("ui_fill() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: gr_point */
extern "C" __attribute__((visibility("default"))) int gr_point(void) {
    ALOGD("gr_point() called");
    return 0;
}

/* Demangled: ui_fb_width */
extern "C" __attribute__((visibility("default"))) int ui_fb_width(void) {
    ALOGD("ui_fb_width() called");
    return 0;
}

/* Demangled: ui_init */
extern "C" __attribute__((visibility("default"))) int ui_init(void) {
    ALOGD("ui_init() called");
    return 0;
}

/* Demangled: ui_printf */
extern "C" __attribute__((visibility("default"))) int ui_printf(void) {
    ALOGD("ui_printf() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: ev_exit */
extern "C" __attribute__((visibility("default"))) int ev_exit(void) {
    ALOGD("ev_exit() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Exported Object: g_x */
extern "C" __attribute__((visibility("default"))) void* g_x = NULL;

/* Exported Object: g_LBTN */
extern "C" __attribute__((visibility("default"))) void* g_LBTN = NULL;

/* Exported Object: g_y */
extern "C" __attribute__((visibility("default"))) void* g_y = NULL;

/* Exported Object: item_cols */
extern "C" __attribute__((visibility("default"))) void* item_cols = NULL;

/* Demangled: textview_key_handler */
extern "C" __attribute__((visibility("default"))) int textview_key_handler(void) {
    ALOGD("textview_key_handler() called");
    return 0;
}

/* Demangled: ui_clear_key_queue */
extern "C" __attribute__((visibility("default"))) int ui_clear_key_queue(void) {
    ALOGD("ui_clear_key_queue() called");
    return 0;
}

/* Demangled: ui_wait_phisical_key */
extern "C" __attribute__((visibility("default"))) int ui_wait_phisical_key(void) {
    ALOGD("ui_wait_phisical_key() called");
    return 0;
}

/* Exported Object: result */
extern "C" __attribute__((visibility("default"))) void* result = NULL;

/* Demangled: get_avail_textline */
extern "C" __attribute__((visibility("default"))) int get_avail_textline(void) {
    ALOGD("get_avail_textline() called");
    return 0;
}

/* Demangled: ui_print */
extern "C" __attribute__((visibility("default"))) int ui_print(void) {
    ALOGD("ui_print() called");
    return 0;
}

/* Demangled: gr_fb_data */
extern "C" __attribute__((visibility("default"))) int gr_fb_data(void) {
    ALOGD("gr_fb_data() called");
    return 0;
}

/* Demangled: gr_blit */
extern "C" __attribute__((visibility("default"))) int gr_blit(void) {
    ALOGD("gr_blit() called");
    return 0;
}

/* Demangled: paintview_key_handler */
extern "C" __attribute__((visibility("default"))) int paintview_key_handler(void) {
    ALOGD("paintview_key_handler() called");
    return 0;
}

/* Demangled: ui_fb_height */
extern "C" __attribute__((visibility("default"))) int ui_fb_height(void) {
    ALOGD("ui_fb_height() called");
    return 0;
}

/* Demangled: ui_init_paintview */
extern "C" __attribute__((visibility("default"))) int ui_init_paintview(void) {
    ALOGD("ui_init_paintview() called");
    return 0;
}

/* Exported Object: g_CBTN */
extern "C" __attribute__((visibility("default"))) void* g_CBTN = NULL;

/* Exported Object: gr_font_small */
extern "C" __attribute__((visibility("default"))) void* gr_font_small = NULL;

/* Demangled: gr_get_height */
extern "C" __attribute__((visibility("default"))) int gr_get_height(void) {
    ALOGD("gr_get_height() called");
    return 0;
}

/* Demangled: gr_get_width */
extern "C" __attribute__((visibility("default"))) int gr_get_width(void) {
    ALOGD("gr_get_width() called");
    return 0;
}

/* Demangled: ui_key_pressed */
extern "C" __attribute__((visibility("default"))) int ui_key_pressed(void) {
    ALOGD("ui_key_pressed() called");
    return 0;
}

/* Exported Object: Font_Big */
extern "C" __attribute__((visibility("default"))) void* Font_Big = NULL;

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: gr_exit */
extern "C" __attribute__((visibility("default"))) int gr_exit(void) {
    ALOGD("gr_exit() called");
    return 0;
}

/* Exported Object: font_32_32 */
extern "C" __attribute__((visibility("default"))) void* font_32_32 = NULL;

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: gr_circle */
extern "C" __attribute__((visibility("default"))) int gr_circle(void) {
    ALOGD("gr_circle() called");
    return 0;
}

/* Demangled: gr_line */
extern "C" __attribute__((visibility("default"))) int gr_line(void) {
    ALOGD("gr_line() called");
    return 0;
}

/* Demangled: res_create_surface */
extern "C" __attribute__((visibility("default"))) int res_create_surface(void) {
    ALOGD("res_create_surface() called");
    return 0;
}

/* Demangled: ui_init_itemview */
extern "C" __attribute__((visibility("default"))) int ui_init_itemview(void) {
    ALOGD("ui_init_itemview() called");
    return 0;
}

/* Exported Object: GGL_SUBPIXEL_BITS */
extern "C" __attribute__((visibility("default"))) void* GGL_SUBPIXEL_BITS = NULL;

/* Demangled: ui_circle */
extern "C" __attribute__((visibility("default"))) int ui_circle(void) {
    ALOGD("ui_circle() called");
    return 0;
}

/* Demangled: ui_init_imageview */
extern "C" __attribute__((visibility("default"))) int ui_init_imageview(void) {
    ALOGD("ui_init_imageview() called");
    return 0;
}

/* Demangled: add_event */
extern "C" __attribute__((visibility("default"))) int add_event(void) {
    ALOGD("add_event() called");
    return 0;
}
