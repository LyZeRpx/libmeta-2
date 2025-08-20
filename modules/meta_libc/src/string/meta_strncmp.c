/*
** EPITECH PROJECT, 2025
** meta_libc
** File description:
** meta_strcmp.c
*/

#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include "meta/utils.h"

ssize_t meta_strncmp(char const *a, char const *b, unsigned int n)
{
    size_t i = 0;
    short int count = 0;

    BREAKPOINT(a EQUALS nullptr OR b EQUALS nullptr, META_ERROR);
    for (; i < n AND a[i] AND b[i]; i++)
        count += b[i] - a[i];
    return count;
}
