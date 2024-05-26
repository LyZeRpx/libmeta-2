/*
** EPITECH PROJECT, 2023
** libmeta
** File description:
** meta_events.c
*/

#include "meta_csfml.h"
#include <stdarg.h>
#include <stdint.h>

short int meta_event_handler(sfRenderWindow *window, sfEvent event)
{
   while (sfRenderWindow_pollEvent(window, &event)) {
    switch (event.type)
    {
    case sfEvtClosed:
        meta_kill_window(window, sprite);
        break;

    default:
        break;
    }
   }

    return 0;
}
