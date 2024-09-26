/*
** EPITECH PROJECT, 2024
** minishell
** File description:
** minishell1.c
*/

#include <stdlib.h>
#include "meta_libc.h"

char *meta_strdup(char *src)
{
    int i;
    char *dest = malloc(sizeof(char) * (meta_strlen(src)) + 1);

    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = src[i];
    return dest;
}
