/*
** EPITECH PROJECT, 2024
** libmeta
** File description:
** meta_event_manager.h
*/

#ifndef META_EVENT_MANAGER
    #define META_EVENT_MANAGER
    #include <SFML/Graphics.h>
    #include "meta_window.h"
short int meta_event_handler(window_t *meta_win);
sfBool meta_detect_collision(meta_assets_t object_1, meta_assets_t object_2);
#endif
