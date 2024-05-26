/*
** EPITECH PROJECT, 2023
** meta_csfml
** File description:
** meta_new_window.c
*/

#include "meta_csfml.h"

sfRenderWindow *meta_new_window(char *title)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window = sfRenderWindow_create(mode, title,
    sfResize | sfClose, NULL);

    return window;
}

sfSprite *meta_set_window_background(const char *img_name)
{
    const sfSprite *window_sprite = sfSprite_create();
    const sfTexture *back_image = sfTexture_createFromFile(img_name, NULL);

    sfSprite_setTexture(window_sprite, back_image, sfTrue);
    return window_sprite;
}

void meta_refresh_screen(sfRenderWindow *window, sfSprite *window_background)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, window_background, NULL);
}

void meta_kill_window(sfRenderWindow *window, sfSprite *back, sfTexture *img)
{
    sfSprite_destroy(back);
    sfText_destroy(img);
    sfRenderWindow_destroy(window);
}
