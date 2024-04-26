/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stddef.h>

int meta_rank2_size(rank2_t dbl_array)
{
    int i = 0;

    for (; dbl_array[i] != NULL; i++);
    return i;
}
