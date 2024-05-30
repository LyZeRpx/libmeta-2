/*
** EPITECH PROJECT, 2023
** libmeta
** File description:
** meta_assets.h
*/

#ifndef META_ASSETS_H
    #define META_ASSETS_H
    #include <SFML/Graphics.h>
#define CENTER_DIFF object_1.postiton - object_2.postiton
#define RADIUS_DIFF ((object_1_texture_size / 2) + (object_2_texture_size / 2))

/**
 * @brief The structure for objects in meta_csfml
 *
 * Description
*/
typedef struct meta_assets_s
{
    sfSprite *asset; ///< The asset's Sprite
    sfTexture *texture; ///< The asset's texture
    sfVector2f position; ///< The asset's position
}meta_assets_t;

/**
 * @brief Creates csfml assets with chosen texture
 *
 * Description
 *
 * @param asset_quantity how much assets will be generated
 * @param texture_name the path to the texture file
 * @returns A set of meta_assets usable by the csfml module
*/
sfSprite **meta_create_assets(size_t asset_quantity, char *texture_name);

/**
 * @brief frees a set of csfml assets.
 *
 * Description
 *
 * @param assets The assets to be freed.
*/
void meta_free_assets(void **assets);

/**
 * @brief destroys a set of csfml sprites.
 *
 * Description
 *
 * @param sprites The sprites to be freed.
*/
void meta_destroy_sprites(sfSprite **sprites);

/**
 * @brief destroys a set of csfml textures.
 *
 * Description
 *
 * @param sprites The sprites to be freed.
*/
void meta_destroy_texture(sfTexture **textures);

/**
 * @brief Renders a set of assets on a window.
 *
 * Description
 *
 * @param assets The assets to display.
 * @param window The to display the assets onto.
*/
void meta_render_assets(sfSprite **assets, sfRenderWindow *window);
#endif
