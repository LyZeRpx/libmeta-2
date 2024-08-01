/*
** EPITECH PROJECT, 2024
** minishell_meta_string
** File description:
** main.c
*/

#include <stdlib.h>
#include <stddef.h>
#include "meta_rank2.h"

void meta_free_rank2(char **dbl_array)
{
    for (int i = 0; dbl_array[i] != NULL; i++) {
        free(dbl_array[i]);
    }
    free(dbl_array);
}
