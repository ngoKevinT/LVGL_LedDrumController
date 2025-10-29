/**
 * @file mode_ctrl_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "mode_ctrl_gen.h"
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

lv_obj_t * mode_ctrl_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_base;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_base);
        lv_style_set_pad_hor(&style_base, 0);
        lv_style_set_pad_ver(&style_base, 0);
        lv_style_set_radius(&style_base, 0);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "mode_ctrl_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_ROW);
    lv_obj_set_width(lv_obj_0, LV_SIZE_CONTENT);
    lv_obj_set_height(lv_obj_0, LV_SIZE_CONTENT);

    lv_obj_add_style(lv_obj_0, &style_base, 0);
    lv_obj_t * simple_btn_0 = simple_btn_create(lv_obj_0, "MODE DOWN");
    
    lv_obj_t * simple_btn_1 = simple_btn_create(lv_obj_0, "MODE UP");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

