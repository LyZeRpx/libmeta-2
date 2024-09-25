/*
** EPITECH PROJECT, 2024
** libmeta
** File description:
** meta_events.c
*/

#include <stdarg.h>
#include <stdint.h>
#include "meta_csfml.h"

short int meta_event_handler(window_t *meta_win)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(meta_win->window, &event)) {
        switch (event.type) {
            case sfEvtClosed:
                meta_kill_window(meta_win);
                break;
            default:
                break;
        }
    }
    return 0;
}

