/*
** EPITECH PROJECT, 2023
** libmeta
** File description:
** meta_events.c
*/

#include "meta_csfml.h"
#include <stdarg.h>
#include <stdint.h>

short int meta_event_handler(main_window_t *meta_win, sfEvent event)
{
   while (sfRenderWindow_pollEvent(meta_win->window, &event)) {
        switch (event.type) {
            case sfEvtClosed:
                meta_kill_window(meta_win->window, meta_win->window_sprite);
                break;
            case :

                break;
   }

    }
    return 0;
}
