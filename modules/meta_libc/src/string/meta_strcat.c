/*
** EPITECH PROJECT, 2025
** meta_libc [WSL: Ubuntu]
** File description:
** meta_strcat.c
*/

#include "meta/utils.h"
#include "meta/libc/string.h"
#include <stdio.h>

char *meta_strcat(char *dest, const char *src)
{
    if (META_STR_EQ_NULL(dest))
        return nullptr;
    meta_strcpy(dest + meta_strlen(dest), src);
    return dest;
}
