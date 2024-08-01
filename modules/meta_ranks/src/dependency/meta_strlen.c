/*
** EPITECH PROJECT, 2024
** minishell_meta_string
** File description:
** main.c
*/

#include "dependency.h"

int meta_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}
