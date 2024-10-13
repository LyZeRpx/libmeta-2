/*
** EPITECH PROJECT, 2024
** meta_PROJECT
** File description:
** DESCRIPTION
*/

#include <stdbool.h>
#include <limits.h>
#include <stdio.h>

static bool is_out_of_bounds(signed long long nb)
{
    return (nb > INT_MAX);
}

static bool meta_is_digit(char c)
{
    return (c >= '0' && c <= '9');
}

int meta_atoi(char const *str)
{
    signed long long result = 0;
    int i = 0;
    int neg = 1;

    for (; !(meta_is_digit(str[i])) && str[i] != '\0'; i++) {
        if (str[i] == '-')
            neg *= (-1);
    }
    for (; meta_is_digit(str[i]) && str[i] != '\0'; i++) {
        result = (result * 10) + (str[i] - 48);
    }
    return !is_out_of_bounds(result) ? result * neg : 0;
}
