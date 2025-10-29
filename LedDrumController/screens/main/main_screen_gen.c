/**
 * @file main_screen_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "main_screen_gen.h"
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

lv_obj_t * main_screen_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    if (main_screen == NULL) main_screen = lv_obj_create(NULL);
    lv_obj_t * lv_obj_0 = main_screen;
    lv_obj_set_name_static(lv_obj_0, "main_screen_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_width(lv_obj_0, lv_pct(100));
    lv_obj_set_height(lv_obj_0, lv_pct(100));
    lv_obj_set_style_pad_all(lv_obj_0, 20, 0);

    lv_obj_t * color_ctrl_0 = color_ctrl_create(lv_obj_0);
    
    lv_obj_t * mode_ctrl_0 = mode_ctrl_create(lv_obj_0);
    
    lv_obj_t * sync_btn_0 = sync_btn_create(lv_obj_0, "Click Me");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

