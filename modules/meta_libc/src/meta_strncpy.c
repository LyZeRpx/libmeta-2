/*
** EPITECH PROJECT, 2024
** MY_PROJECT
** File description:
** DESCRIPTION
*/

#include "meta_libc.h"

char *my_strncpy(char *dest, char *src, int n)
{
    int i = 0;

    for (; src[i] != '\0' && i <= n; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
