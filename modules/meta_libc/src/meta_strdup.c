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
    int i = 0;

    if (!str || !dup)
        return NULL;
    for (; str[i]; i++) {
        dup[i] = str[i];
    }
    str[i] = '\0';
    return str;
}
