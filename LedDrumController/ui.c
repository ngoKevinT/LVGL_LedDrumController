/**
 * @file ui.c
 */

/*********************
 *      INCLUDES
 *********************/
#include "ui.h"
#include "lvgl.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/
LV_IMAGE_DECLARE(wallpaper1);

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void ui_init(const char * asset_path)
{
    LV_LOG_USER("ui_init()\n");
    LedDrumController_init(asset_path);

    lv_obj_t *screen = lv_screen_active();

    static lv_style_t style_screen;
    lv_style_init(&style_screen);

    lv_style_set_bg_image_src(&style_screen, &wallpaper1);
    lv_style_set_bg_image_tiled(&style_screen, true);
    lv_obj_set_style_pad_all(screen, 0, 0);
    lv_obj_add_style(screen, &style_screen, 0);
}

/**********************
 *   STATIC FUNCTIONS
 **********************/