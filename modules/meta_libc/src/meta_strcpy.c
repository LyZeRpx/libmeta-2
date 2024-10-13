/*
** EPITECH PROJECT, 2024
** meta_PROJECT
** File description:
** DESCRIPTION
*/

#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include "meta_libc.h"

char *meta_strcpy(char *dest, char *src)
{
    size_t i = 0;

    for (; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
