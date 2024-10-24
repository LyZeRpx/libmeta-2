/*
** EPITECH PROJECT, 2024
** meta_PROJECT
** File description:
** DESCRIPTION
*/

#include <stdlib.h>
#include "meta_libc.h"

char *meta_strdup(char *str)
{
    char *dup = malloc(sizeof(char) * meta_strlen(str) + 1);

    if (!str || !dup)
        return NULL;
    meta_strcpy(dup, str);
    return str;
}
