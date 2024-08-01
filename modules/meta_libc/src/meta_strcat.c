/*
** EPITECH PROJECT, 2024
** minishell
** File description:
** minishell1.c
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "meta_libc.h"

char *meta_strconcat(char const *a, char const *b)
{
    int i = 0;
    size_t size = meta_strlen(a) + meta_strlen(b);
    char *result = malloc(sizeof(char) * (size + 1));

    if (!result) {
        return NULL;
    }
    for (; a[i] != '\0'; i++) {
        result[i] = a[i];
    }
    for (int j = 0; b[j] != '\0'; j++) {
        result[i] = b[j];
        i++;
    }
    result[i] = '\0';
    return result;
}
