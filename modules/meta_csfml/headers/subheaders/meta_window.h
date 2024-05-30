/*
** EPITECH PROJECT, 2023
** libmeta
** File description:
** meta_window.h
*/

#ifndef META_WINDOW_H
    #define META_WINDOW_H
    #include <SFML/Graphics.h>
typedef struct window_s {
    sfRenderWindow *window;
    sfSprite *window_sprite;
    sfTexture *texture;
} window_t;
sfRenderWindow *meta_new_window(char *title);
window_t *meta_init_window(char *title, char *filename);
void meta_refresh_screen(window_t *main_window);
void meta_kill_window(window_t *main_window);

#endif
