/**
 * @file LedDrumController_gen.h
 */

#ifndef LEDDRUMCONTROLLER_GEN_H
#define LEDDRUMCONTROLLER_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/*-------------------
 * Permanent screens
 *------------------*/

extern lv_obj_t * main_screen;

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Fonts
 *----------------*/

/*----------------
 * Images
 *----------------*/

/*----------------
 * Subjects
 *----------------*/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

/**
 * Initialize the component library
 */

void LedDrumController_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widget and components of this library*/
#include "components/color_ctrl/color_ctrl_gen.h"
#include "components/mode_ctrl/mode_ctrl_gen.h"
#include "components/simple_btn/simple_btn_gen.h"
#include "components/sync_btn/sync_btn_gen.h"
#include "screens/main/main_screen_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LEDDRUMCONTROLLER_GEN_H*/