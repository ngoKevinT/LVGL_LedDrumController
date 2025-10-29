/**
 * @file simple_btn_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "simple_btn_gen.h"
#include "LedDrumController.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * simple_btn_create(lv_obj_t * parent, const char * label_text)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_base;
    static lv_style_t style_pressed;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_base);
        lv_style_set_bg_opa(&style_base, (255 * 100 / 100));
        lv_style_set_bg_color(&style_base, lv_color_hex(0xBBBBBB));
        lv_style_set_width(&style_base, 243);
        lv_style_set_height(&style_base, 120);
        lv_style_set_border_width(&style_base, 1);
        lv_style_set_border_color(&style_base, lv_color_hex(0x000000));
        lv_style_set_border_opa(&style_base, 255);
        lv_style_set_pad_hor(&style_base, 0);
        lv_style_set_pad_ver(&style_base, 0);
        lv_style_set_text_color(&style_base, lv_color_hex3(0x000));

        lv_style_init(&style_pressed);
        lv_style_set_recolor(&style_pressed, lv_color_hex3(0xFFF));
        lv_style_set_recolor_opa(&style_pressed, (255 * 20 / 100));

        style_inited = true;
    }

    lv_obj_t * lv_button_0 = lv_button_create(parent);
    lv_obj_set_name_static(lv_button_0, "simple_btn_#");

    lv_obj_remove_style_all(lv_button_0);
    lv_obj_add_style(lv_button_0, &style_base, 0);
    lv_obj_add_style(lv_button_0, &style_pressed, LV_STATE_PRESSED);
    lv_obj_t * lv_label_0 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_0, label_text);
    lv_obj_set_align(lv_label_0, LV_ALIGN_CENTER);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_button_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

