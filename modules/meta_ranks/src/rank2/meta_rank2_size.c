/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stddef.h>
#include "meta_rank2.h"

size_t meta_rank2_size(char **dbl_array)
{
    size_t i = 0;

    for (; dbl_array[i] != NULL; i++);
    return i;
}
