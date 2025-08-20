/*
** EPITECH PROJECT, 2025
** meta_libc
** File description:
** meta_strlen.c
*/

#include <stddef.h>
#include <unistd.h>
#include "meta/utils.h"

ssize_t meta_strlen(char const *str)
{
    ssize_t len = 0;

    BREAKPOINT(str EQUALS nullptr, META_FUNC_ERR);
    for (; str[len]; len++);
    return len;
}
