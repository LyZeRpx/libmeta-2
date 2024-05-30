/*
** EPITECH PROJECT, 2023
** libmeta
** File description:
** meta_inputs.h
*/

#ifndef META_INPUTS_H
    #define META_INPUTS_H
    #include "../meta_utils.h"

typedef struct meta_mouse_s {
    sfVector2i mouse_pos;
    sfMouseButton mousemeta_inputs;
}meta_mouse_t;

typedef struct meta_keyboard_s {
    sfKeyCode key;
    sfBool key_held;
}meta_keyboard_t;

#endif
