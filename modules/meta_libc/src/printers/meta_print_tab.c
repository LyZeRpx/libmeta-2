/*
** EPITECH PROJECT, 2024
** minishell1
** File description:
** meta_print_tab.c
*/

#include <stddef.h>
#include "meta/utils.h"
#include "meta/libc/printers.h"

void meta_print_tab(char *const *tab)
{
    for (size_t i = 0; tab[i] != nullptr; i++)
        meta_mprintf(STRING_LN, tab[i]);
}
