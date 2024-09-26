/*
** EPITECH PROJECT, 2024
** meta_sokoban
** File description:
** src/meta_sokoban.c
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "dependency.h"

static int count_limiters(char *str, char target)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }
    return count + 1;
}

char **meta_promote_rank1(char *str, const char limiter)
{
    char **word_array = malloc(sizeof(char *) * count_limiters(str, limiter) + 1);
    char buffer[256];
    size_t j = 0;
    size_t k = 0;

    for (; word_array[k]; k++) {
        for (size_t i = 0; str[i] != limiter; i++) {
            str[i] = buffer[j];
        }
        j = 0;
        word_array[k] = meta_strdup(buffer);
    }
    word_array[k + 1] = NULL;
    return word_array;
}
