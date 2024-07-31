/*
** EPITECH PROJECT, 2023
** libmeta
** File description:
** meta_detection.c
*/

#include "meta_utils.h"
#include "meta_inputs.h"
#include "meta_assets.h"

sfBool meta_detect_collision(meta_assets_t object_1, meta_assets_t object_2)
{
    sfVector2u object_1_texture_size = sfTexture_getSize(object_1.texture);
    sfVector2u object_2_texture_size = sfTexture_getSize(object_2.texture);

    object_1.position = sfSprite_getPosition(object_1.asset);
    object_2.position = sfSprite_getPosition(object_2.asset);

   return X_DIFF <= RADIUS_SUM_X || Y_DIFF <= RADIUS_SUM_Y ? sfTrue : sfFalse;

}

sfBool meta_detect_click_on_asset(meta_assets_t asset, sfRenderWindow *window)
{
    sfVector2i mouse_pos = meta_get_click_position(window);

        return X_EQUALITY && Y_EQUALITY ? sfTrue : sfFalse;
}
