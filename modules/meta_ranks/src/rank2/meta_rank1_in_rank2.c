/*
** EPITECH PROJECT, 2024
** minishell
** File description:
** minishell1.c
*/

#include <stddef.h>
#include "meta_rank2.h"
#include "dependency.h"

char *meta_rank1_in_rank2(char **array, char *delim)
{
    int i = 0;
    int delim_len = meta_strlen(delim);

    for (; array[i] != NULL; i++) {
        if (meta_strncmp(array[i], delim, delim_len) == 0) {
            return array[i];
        }
    }
    return NULL;
}
