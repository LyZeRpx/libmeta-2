/*
** EPITECH PROJECT, 2024
** minishell_meta_string
** File description:
** main.c
*/

#include <unistd.h>
#include "meta_libc.h"

int meta_puterr(char const *str)
{
    write(2, str, meta_strlen(str));
    return 0;
}
