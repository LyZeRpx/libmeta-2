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
sfSprite *meta_set_window_background(const char *img_name);
void meta_refresh_screen(sfRenderWindow *window, sfSprite *window_background);
void meta_kill_window(sfRenderWindow *window, sfSprite *back, sfTexture *img);
#endif
