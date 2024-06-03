/*
** EPITECH PROJECT, 2023
** libmeta
** File description:
** meta_inputs.h
*/

#ifndef META_INPUTS_H
    #define META_INPUTS_H
    #include "../meta_utils.h"
    #include "meta_assets.h"
#define X_EQUALITY mouse_pos.x == asset.position.x
#define Y_EQUALITY mouse_pos.y == asset.position.y
typedef struct meta_mouse_s {
    sfVector2i mouse_pos;
    sfMouseButton mousemeta_inputs;
}meta_mouse_t;

typedef struct meta_keyboard_s {
    sfKeyCode key;
    sfBool key_held;
}meta_keyboard_t;
sfVector2i meta_track_mouse(sfRenderWindow *relative_to);
sfMouseButton meta_mouse_button_get(void);
sfBool meta_is_mouse_clicked(void);
sfVector2i meta_get_click_position(sfRenderWindow *relative_to);
sfKeyCode meta_get_key_input(void);
sfBool meta_detect_click_on_asset(meta_assets_t asset, sfRenderWindow *window);
#endif
