/*
** EPITECH PROJECT, 2024
** minishell_meta_string
** File description:
** main.c
*/

#include "meta_libc.h"

int meta_strncmp(char *str1, char *str2, int n_th_char)
{
    int i = 0;

    for (;(str1[i] != '\0' && str2[i] != '\0') && i != n_th_char;) {
        if (str1[i] == str2[i]) {
            i++;
        } else {
            return str1[i] - str2[i];
        }
    }
    return 0;
}
