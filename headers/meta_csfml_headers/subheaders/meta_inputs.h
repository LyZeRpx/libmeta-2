/*
** EPITECH PROJECT, 2024
** libmeta
** File description:
** meta_inputs.h
*/

#ifndef META_INPUTS_H
    #define META_INPUTS_H
    #include "../meta_utils.h"
/**
 * @brief The structure for mouse properties in meta_csfml
 *
 * Description
*/
typedef struct meta_mouse_s {
    sfVector2i mouse_pos; ///< The position of the mouse
    sfMouseButton mouse_inputs; ///< The buttons of the mouse
}meta_mouse_t;

/**
 * @brief The structure for keyboard properties in meta_csfml
 *
 * Description
*/
typedef struct meta_keyboard_s {
    sfKeyCode key; ///< A native csfml enum for keys 
    sfBool key_held; ///< An indicator for hold state
}meta_keyboard_t;

#endif
