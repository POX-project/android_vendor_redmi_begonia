/*
 * Reverse-Engineered ABI Specification for: libminiui.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libminiui.so
 */

#ifndef BEGONIA_RE_LIBMINIUI_H
#define BEGONIA_RE_LIBMINIUI_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: ev_init */
/* Demangled: ev_init */
int ev_init(void);

/* Symbol: gr_font_big */
/* Demangled: gr_font_big */
extern void* gr_font_big;

/* Symbol: item_rows */
/* Demangled: item_rows */
extern void* item_rows;

/* Symbol: maxrows */
/* Demangled: maxrows */
extern void* maxrows;

/* Symbol: show_slash_screen */
/* Demangled: show_slash_screen */
int show_slash_screen(void);

/* Symbol: ui_new_itemview */
/* Demangled: ui_new_itemview */
int ui_new_itemview(void);

/* Symbol: dispatch_event */
/* Demangled: dispatch_event */
int dispatch_event(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: gr_measure */
/* Demangled: gr_measure */
int gr_measure(void);

/* Symbol: ui_line */
/* Demangled: ui_line */
int ui_line(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: g_RBTN */
/* Demangled: g_RBTN */
extern void* g_RBTN;

/* Symbol: g_touch */
/* Demangled: g_touch */
extern void* g_touch;

/* Symbol: res_free_surface */
/* Demangled: res_free_surface */
int res_free_surface(void);

/* Symbol: get_ev_arr */
/* Demangled: get_ev_arr */
int get_ev_arr(void);

/* Symbol: gr_text */
/* Demangled: gr_text */
int gr_text(void);

/* Symbol: ui_free_itemview */
/* Demangled: ui_free_itemview */
int ui_free_itemview(void);

/* Symbol: ui_wait_key */
/* Demangled: ui_wait_key */
int ui_wait_key(void);

/* Symbol: Font_Small */
/* Demangled: Font_Small */
extern void* Font_Small;

/* Symbol: gr_flip */
/* Demangled: gr_flip */
int gr_flip(void);

/* Symbol: ui_init_textview */
/* Demangled: ui_init_textview */
int ui_init_textview(void);

/* Symbol: get_confirm_key */
/* Demangled: get_confirm_key */
int get_confirm_key(void);

/* Symbol: gr_fb_width */
/* Demangled: gr_fb_width */
int gr_fb_width(void);

/* Symbol: gr_fill */
/* Demangled: gr_fill */
int gr_fill(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: ev_get */
/* Demangled: ev_get */
int ev_get(void);

/* Symbol: gr_init */
/* Demangled: gr_init */
int gr_init(void);

/* Symbol: ui_text */
/* Demangled: ui_text */
int ui_text(void);

/* Symbol: get_ev_head_num */
/* Demangled: get_ev_head_num */
int get_ev_head_num(void);

/* Symbol: gr_fb_height */
/* Demangled: gr_fb_height */
int gr_fb_height(void);

/* Symbol: imageview_key_handler */
/* Demangled: imageview_key_handler */
int imageview_key_handler(void);

/* Symbol: itemview_menu_select */
/* Demangled: itemview_menu_select */
int itemview_menu_select(void);

/* Symbol: paintview_redraw */
/* Demangled: paintview_redraw */
int paintview_redraw(void);

/* Symbol: ui_color */
/* Demangled: ui_color */
int ui_color(void);

/* Symbol: ui_flip */
/* Demangled: ui_flip */
int ui_flip(void);

/* Symbol: gr_color */
/* Demangled: gr_color */
int gr_color(void);

/* Symbol: ui_fill */
/* Demangled: ui_fill */
int ui_fill(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: gr_point */
/* Demangled: gr_point */
int gr_point(void);

/* Symbol: ui_fb_width */
/* Demangled: ui_fb_width */
int ui_fb_width(void);

/* Symbol: ui_init */
/* Demangled: ui_init */
int ui_init(void);

/* Symbol: ui_printf */
/* Demangled: ui_printf */
int ui_printf(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: ev_exit */
/* Demangled: ev_exit */
int ev_exit(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: g_x */
/* Demangled: g_x */
extern void* g_x;

/* Symbol: g_LBTN */
/* Demangled: g_LBTN */
extern void* g_LBTN;

/* Symbol: g_y */
/* Demangled: g_y */
extern void* g_y;

/* Symbol: item_cols */
/* Demangled: item_cols */
extern void* item_cols;

/* Symbol: textview_key_handler */
/* Demangled: textview_key_handler */
int textview_key_handler(void);

/* Symbol: ui_clear_key_queue */
/* Demangled: ui_clear_key_queue */
int ui_clear_key_queue(void);

/* Symbol: ui_wait_phisical_key */
/* Demangled: ui_wait_phisical_key */
int ui_wait_phisical_key(void);

/* Symbol: result */
/* Demangled: result */
extern void* result;

/* Symbol: get_avail_textline */
/* Demangled: get_avail_textline */
int get_avail_textline(void);

/* Symbol: ui_print */
/* Demangled: ui_print */
int ui_print(void);

/* Symbol: gr_fb_data */
/* Demangled: gr_fb_data */
int gr_fb_data(void);

/* Symbol: gr_blit */
/* Demangled: gr_blit */
int gr_blit(void);

/* Symbol: paintview_key_handler */
/* Demangled: paintview_key_handler */
int paintview_key_handler(void);

/* Symbol: ui_fb_height */
/* Demangled: ui_fb_height */
int ui_fb_height(void);

/* Symbol: ui_init_paintview */
/* Demangled: ui_init_paintview */
int ui_init_paintview(void);

/* Symbol: g_CBTN */
/* Demangled: g_CBTN */
extern void* g_CBTN;

/* Symbol: gr_font_small */
/* Demangled: gr_font_small */
extern void* gr_font_small;

/* Symbol: gr_get_height */
/* Demangled: gr_get_height */
int gr_get_height(void);

/* Symbol: gr_get_width */
/* Demangled: gr_get_width */
int gr_get_width(void);

/* Symbol: ui_key_pressed */
/* Demangled: ui_key_pressed */
int ui_key_pressed(void);

/* Symbol: Font_Big */
/* Demangled: Font_Big */
extern void* Font_Big;

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: gr_exit */
/* Demangled: gr_exit */
int gr_exit(void);

/* Symbol: font_32_32 */
/* Demangled: font_32_32 */
extern void* font_32_32;

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: gr_circle */
/* Demangled: gr_circle */
int gr_circle(void);

/* Symbol: gr_line */
/* Demangled: gr_line */
int gr_line(void);

/* Symbol: res_create_surface */
/* Demangled: res_create_surface */
int res_create_surface(void);

/* Symbol: ui_init_itemview */
/* Demangled: ui_init_itemview */
int ui_init_itemview(void);

/* Symbol: GGL_SUBPIXEL_BITS */
/* Demangled: GGL_SUBPIXEL_BITS */
extern void* GGL_SUBPIXEL_BITS;

/* Symbol: ui_circle */
/* Demangled: ui_circle */
int ui_circle(void);

/* Symbol: ui_init_imageview */
/* Demangled: ui_init_imageview */
int ui_init_imageview(void);

/* Symbol: add_event */
/* Demangled: add_event */
int add_event(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMINIUI_H */
