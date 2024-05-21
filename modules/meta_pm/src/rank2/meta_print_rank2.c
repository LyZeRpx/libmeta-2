/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stddef.h>
#include "meta_rank2.h"
#include "dependency.h"

void meta_print_rank2(char **array)
{
    for (int i = 0; array[i] != NULL; i++) {
        meta_putstr(array[i]);
        meta_putchar('\n');
    }
}
