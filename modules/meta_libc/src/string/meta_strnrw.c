/*
** EPITECH PROJECT, 2025
** libmeta [WSL: Ubuntu]
** File description:
** meta_strnrw.c
*/

#include "meta/utils.h"
#include "meta/libc/string.h"

void meta_strnrw(unsigned int fwd, char **str, unsigned bkwd)
{
    ssize_t len = meta_strlen(*str);

    if (len == -1 || bkwd > len || fwd > len)
        return;
    (*str)[len - bkwd] = '\0';
    (*str) += fwd;
}
