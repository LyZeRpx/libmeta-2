/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "meta_rank2.h"
#include "dependency.h"

char **meta_rank2_clone(char **to_clone)
{
    int i = 0;
    size_t size = meta_rank2_size(to_clone);
    char **clone;

    clone = malloc(sizeof(char *) * (size + 1));
    for (; to_clone[i] != NULL; i++) {
        clone[i] = meta_strdup(clone[i], to_clone[i]);
    }
    return clone;
}
