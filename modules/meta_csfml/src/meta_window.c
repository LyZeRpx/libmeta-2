/*
** EPITECH PROJECT, 2023
** meta_csfml
** File description:
** meta_new_window.c
*/

#include <stdlib.h>
#include "meta_csfml.h"

sfRenderWindow *meta_new_window(char *title)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window = sfRenderWindow_create(mode, title,
    sfResize | sfClose, NULL);

    return window;
}

window_t *meta_init_window(char *title, char *filename)
{
    window_t *ptr = malloc(sizeof(window_t));

    ptr->window = meta_new_window(title);
    ptr->texture = sfTexture_createFromFile(filename, NULL);
    ptr->window_sprite = sfSprite_create();
    sfSprite_setTexture(ptr->window_sprite, ptr->texture, sfTrue);
    return ptr;
}

void meta_refresh_screen(window_t *ptr)
{
    sfRenderWindow_clear(ptr->window, sfBlack);
    sfRenderWindow_drawSprite(ptr->window, ptr->window_sprite, NULL);
}

void meta_kill_window(window_t *main_window)
{
    sfSprite_destroy(main_window->window_sprite);
    sfTexture_destroy(main_window->texture);
    sfRenderWindow_destroy(main_window->window);
}
