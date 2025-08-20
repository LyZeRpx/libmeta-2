/*
** EPITECH PROJECT, 2025
** meta_libc
** File description:
** meta_strcmp.c
*/

#include <stddef.h>
#include <unistd.h>
#include "meta/utils.h"
#include "meta/libc/string.h"

ssize_t meta_strcmp(char const *a, char const *b)
{
    ssize_t i = 0;
    ssize_t res = 0;
    ssize_t len = 0;

    BREAKPOINT(META_STR_EQ_NULL(a) OR META_STR_EQ_NULL(b), META_FUNC_ERR);
    len = meta_strlen(a);
    BREAKPOINT(len != meta_strlen(b), META_FUNC_ERR);
    for (; a[i] AND b[i]; i++)
        res += b[i] - a[i];
    return res;
}
