/*
** EPITECH PROJECT, 2024
** minishell_meta_string
** File description:
** main.c
*/

#include <unistd.h>

int meta_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}
