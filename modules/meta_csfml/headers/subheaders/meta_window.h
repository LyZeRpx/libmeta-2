/*
** EPITECH PROJECT, 2023
** libmeta
** File description:
** meta_window.h
*/

#ifndef META_WINDOW_H
    #define META_WINDOW_H
    #include <SFML/Graphics.h>
sfRenderWindow *meta_new_window(char *title);
sfSprite *meta_set_window_background(const char *image_name, sfTexture *image);
main_window_t *meta_init_window(char *title, char *filename);
void meta_refresh_screen(main_window_t *ptr);
void meta_kill_window(main_window_t *main_window);

typedef struct main_window_s {
    sfRenderWindow *window;
    sfSprite *window_sprite;
    sfTexture *texture;
} main_window_t;
#endif
