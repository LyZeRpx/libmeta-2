/*
** EPITECH PROJECT, 2023
** libmeta
** File description:
** meta_window.h
*/

#ifndef META_WINDOW_H
    #define META_WINDOW_H
    #include <SFML/Graphics.h>
/**
 * @brief The structure for windows properties in meta_csfml
 *
 * Description
*/
typedef struct window_s {
    sfRenderWindow *window; ///< The Window itself
    sfSprite *window_sprite; ///< The window's sprite
    sfTexture *texture; ///< The window's texture
} window_t;

/**
 * @brief Creates a new RenderWindow.
 *
 * Description
 *
 * @param title The title of the new_window.
 * @return a new sfRenderWindow object
*/
sfRenderWindow *meta_new_window(char *title);

/**
 * @brief Initialises a new window.
 *
 * Description
 *
 * @param title The title of the new_window.
 * @param filename The path to the texture image.
 * @return a new window object.
*/
main_window_t *meta_init_window(char *title, char *filename);

/**
 * @brief refreshes a window.
 *
 * Description
 *
 * @param main_window The window structure pointer.
*/
void meta_refresh_screen(main_window_t *main_window);

/**
 * @brief destroys a window.
 *
 * Description
 *
 * @param main_window The window structure pointer.
*/
void meta_kill_window(main_window_t *main_window);

#endif
