/*
** EPITECH PROJECT, 2024
** minishell1
** File description:
** meta_arrfuse.c
*/

#include "meta/libc/printers.h"
#include "stddef.h"
#include "stdlib.h"
#include "meta/libc/string.h"

static size_t get_total_size(char **array)
{
    size_t sum = 0;

    for (size_t i = 0; array[i] != nullptr; i++) {
        sum += meta_strlen(array[i]);
    }
    return sum;
}

char *meta_arrfuse(char **array)
{
    size_t i = 0;
    size_t total_size = get_total_size(array);
    char *str = malloc(sizeof(char) * (total_size + 1));

    for (; array[i]; i++) {
        meta_strcpy(str + meta_strlen(str), array[i]);
        str[meta_strlen(str)] = ' ';
    }
    str[meta_strlen(str) - 1] = '\0';
    return str;
}
