/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

#include <stdbool.h>

bool meta_isneg(int to_check)
{
    if (to_check <= 0) {
        return true;
    }
    return false;
}
