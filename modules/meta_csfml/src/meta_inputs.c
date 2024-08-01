/*
** EPITECH PROJECT, 2024
** libmeta
** File description:
** meta_inputs.c
*/

#include "meta_utils.h"

sfVector2i meta_track_mouse(sfRenderWindow *relative_to)
{
    return sfMouse_getPositionRenderWindow(relative_to);
}

sfMouseButton meta_mouse_button_get(void)
{
    sfMouseButton i = 0;

    for (; sfMouse_isButtonPressed(i) == sfFalse; i++);
    return i;
}

sfBool meta_is_mouse_clicked(void)
{
    return sfMouse_isButtonPressed(sfMouseLeft);
}

sfVector2i meta_get_click_position(sfRenderWindow *window)
{
    sfVector2i err;

    err.x = 84000;
    err.y = 84000;
    return meta_is_mouse_clicked() == sfTrue ? meta_track_mouse(window) : err;
}

sfKeyCode meta_get_key_input(void)
{
    sfKeyCode i = 0;

    for (; sfKeyboard_isKeyPressed(i) == sfFalse; i++);
    return i;
}
