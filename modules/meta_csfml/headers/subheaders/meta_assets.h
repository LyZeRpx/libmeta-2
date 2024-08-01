/*
** EPITECH PROJECT, 2024
** libmeta
** File description:
** meta_assets.h
*/

#ifndef META_ASSETS_H
    #define META_ASSETS_H
    #include <SFML/Graphics.h>
#define X_DIFF object_2.position.x - object_1.position.x
#define Y_DIFF object_2.position.y - object_1.position.y
#define RADIUS_SUM_X object_1_texture_size.x + object_2_texture_size.x
#define RADIUS_SUM_Y object_1_texture_size.y + object_2_texture_size.y
typedef struct meta_assets_s
{
    sfSprite *asset;
    sfTexture *texture;
    sfVector2f position;
}meta_assets_t;

sfSprite **meta_create_assets(size_t asset_quantity, char *texture_name);
void meta_free_assets(void **assets);
void meta_destroy_sprites(sfSprite **sprites);
void meta_destroy_texture(sfTexture **textures);
void meta_render_assets(sfSprite **assets, sfRenderWindow *window);
#endif
