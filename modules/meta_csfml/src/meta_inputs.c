/*
** EPITECH PROJECT, 2023
** libmeta
** File description:
** meta_inputs.c
*/

#include "meta_utils.h"

sfVector2i meta_track_mouse_inbounds(sfRenderWindow *window)
{
    return sfMouse_getPositionRenderWindow(window);
}

sfMouseButton meta_get_mouse_click(void)
{
    sfMouseButton i = 0;

    for(; sfMouse_isButtonPressed(i) == sfFalse; i++);
    return i;
}

sfVector2i meta_get_click_position(sfRenderWindow *window)
{
    if (meta_get_mouse_click() != -1);
        return meta_track_mouse_inbounds(window);
}

sfKeyCode meta_get_key_input()
{
    sfKeyCode i = 0;

    for(; sfKeyboard_isKeyPressed(i) == sfFalse; i++);
    return i;
}
