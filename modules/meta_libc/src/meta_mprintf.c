/*
** EPITECH PROJECT, 2024
** minishell
** File description:
** minishell1.c
*/

#include <stdarg.h>
#include "meta_libc.h"

static void get_flag(char flag, va_list arg)
{
    if (flag == 's') {
        meta_putstr(va_arg(arg, char *));
    }
    if (flag == 'e') {
        meta_puterr(va_arg(arg, char *));
    }
    if (flag == 'd' || flag == 'i') {
        meta_put_nbr(va_arg(arg, int));
    }
    if (flag == 'c') {
        meta_putchar(va_arg(arg, int));
    }
}

int meta_mprintf(char const *format, ...)
{
    va_list arg;
    int i = 0;

    va_start(arg, format);
    for (; format[i] != '\0'; i++) {
        if (format[i] != '%') {
            meta_putchar(format[i]);
        } else {
            i++;
            get_flag(format[i], arg);
        }
    }
    return 0;
}
