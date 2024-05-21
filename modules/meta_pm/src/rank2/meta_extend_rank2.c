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

char **meta_extend_rank2(char **parent, size_t added_slots)
{
    size_t size = meta_rank2_size(parent) + added_slots;
    char **child = malloc(sizeof(char *) * size);

    if (!child) {
        return parent;
    }
    return child;
}
