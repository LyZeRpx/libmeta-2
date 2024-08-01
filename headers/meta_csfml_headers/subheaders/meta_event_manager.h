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
/**
 * @brief The meta_csfml event manager.
 *
 * Description
 *
 * @param meta_win The window to check events into.
 * @return A usable event code.
*/
short int meta_event_handler(window_t *meta_win);

/**
 * @brief A collision detector between two objects.
 *
 * Description
 *
 * @param object_1 The first object.
 * @param object_2 The second object.
 * @return sfTrue if there's a collision or sfFalse if not.
*/
sfBool meta_detect_collision(meta_assets_t object_1, meta_assets_t object_2);
#endif
