/*
** EPITECH PROJECT, 2023
** meta_csfml
** File description:
** meta_sprites.c
*/

#include "meta_csfml.h"

sfSprite **meta_create_assets(size_t asset_quantity, char *texture_name)
{
    sfTexture *asset_texture = sfTexture_createFromFile(texture_name, NULL);
    sfSprite **assets = malloc(sizeof(sfSprite *) * asset_quantity + 1);

    if (!assets) {
        return;
    }
    for (size_t i = 0; i <= asset_quantity; i++) {
        assets[i] = sfSprite_create();
        sfSprite_setTexture(assets[i], asset_texture, sfTrue);
    }
    return assets;
}

void meta_free_assets(void **assets)
{
    for (size_t i = 0; assets[i] != NULL; i++) {
        free(assets[i]);
    }
}

void meta_destroy_sprites(sfSprite **sprites)
{
    for (size_t i = 0; sprites[i]; i++) {
        sfSprite_destroy(sprites[i]);
    }
}

void meta_destroy_texture(sfTexture **textures)
{
    for (size_t i = 0; textures[i]; i++) {
        sfTexture_destroy(textures[i]);
    }
}

void meta_render_assets(sfSprite **assets, sfRenderWindow *window)
{
    for (size_t i = 0; assets[i]; i++) {
        sfRenderWindow_drawSprite(window, assets[i], NULL);
    }
}
