/*
** EPITECH PROJECT, 2023
** libmeta
** File description:
** meta_inputs.c
*/

#include "meta_utils.h"

sfVector2i meta_track_mouse_inbounds(sfRenderWindow *relative_to)
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

sfVector2i meta_get_click_position(sfRenderWindow *relative_to)
{
    if (meta_is_mouse_clicked() != -1);
        return meta_track_mouse_inbounds(relative_to);
}

sfKeyCode meta_get_key_input(void)
{
    sfKeyCode i = 0;

    for (; sfKeyboard_isKeyPressed(i) == sfFalse; i++);
    return i;
}
