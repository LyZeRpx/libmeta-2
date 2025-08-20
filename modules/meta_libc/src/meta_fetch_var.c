/*
** EPITECH PROJECT, 2024
** minishell1
** File description:
** meta_fetch_var.c
*/

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "meta/libc/string.h"
#include "meta/utils.h"


char *meta_fetch_var(char *needle, char **src)
{
    for (size_t i = 0; src[i] != nullptr; i++)
        BREAKPOINT(META_STR_BEGINS(src[i], needle),
        meta_strdup(src[i] + meta_strlen(needle)));
    return nullptr;
}
