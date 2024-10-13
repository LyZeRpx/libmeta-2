/*
** EPITECH PROJECT, 2024
** meta_PROJECT
** File description:
** DESCRIPTION
*/

#include "meta_libc.h"

char *meta_strncat(char *dest, char const *src, int n)
{
    dest = meta_strncpy(dest + meta_strlen(src), (char *)src, n);
    return dest;
}
