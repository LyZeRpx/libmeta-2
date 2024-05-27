/*
** EPITECH PROJECT, 2024
** new_project
** File description:
** project.h
*/

#ifndef META_CSFML_H
    #define META_CSFML_H
    #include "meta_assets.h"
    #include "meta_event_manager.h"
    #include "meta_window.h"

typedef struct main_window_s {
    sfRenderWindow *window;
    sfSprite *window_sprite;
    sfTexture *texture;
} main_window_t;
#endif
