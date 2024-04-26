/*
** EPITECH PROJECT, 2023
** minishell_my_string
** File description:
** main.c
*/

#include <stdlib.h>
#include <stddef.h>

void meta_free_rank2(rank1_t*dbl_array)
{
    for (int i = 0; dbl_array[i] != NULL; i++) {
        free(dbl_array[i]);
    }
    free(dbl_array);
}
