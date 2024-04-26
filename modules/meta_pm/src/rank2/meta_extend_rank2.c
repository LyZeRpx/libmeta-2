/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "meta_typdefs.h"

rank2_t meta_extend_rank2(rank2_t parent, size_t added_slots)
{
    size_t size = meta_rank2_size(parent) + added_slots;
    rank2_t child = malloc(sizeof(char *) * size);

    return child;
}
