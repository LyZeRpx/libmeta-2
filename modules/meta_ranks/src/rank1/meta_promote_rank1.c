/*
** EPITECH PROJECT, 2024
** MY_PROJECT
** File description:
** DESCRIPTION
*/

#include <stdlib.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "meta_libc.h"

static int count_limiters(char *str, char target)
{
    size_t count = 0;

    for (size_t i = 0; str[i]; i++) {
        if (!is_alphanum(str[i]))
            count++;
    }
    return count;
}

char **meta_promote_str(char *str, const char limiter)
{
    char **word_array = NULL;
    int y = 0;
    int x = 0;
    int i = 0;

    word_array = malloc(sizeof(char *) * (count_limiters(str, limiter) + 1));
    for (; y != count_limiters(str, limiter); y++) {
        word_array[y] = malloc((sizeof(char) * (meta_strlen(str) + 1)));
        for (; str[i] != limiter && str[i] != '\0'; i++) {
            word_array[y][x] = str[i];
            x++;
        }
        for (; str[i] == limiter; i++);
        word_array[y][x] = '\0';
        x = 0;
    }
    word_array[i] = NULL;
    return word_array;
}
