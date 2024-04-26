/*
** EPITECH PROJECT, 2023
** meta_libc
** File description:
** meta_libc.h
*/

#ifndef META_LIBC_H
    #define META_LIBC_H
    #include <stdbool.h>
    #include "meta_pm_typedefs.h"

int meta_atoi(char const *str);
int meta_is_prime(int nb);
bool meta_isneg(int to_check);
int meta_mprintf(char const *format, ...);
int meta_printf(char const *format, ...);
int meta_put_nbr(int nb);
int meta_strlen(char const *str);
int meta_putchar(char c);
int meta_putstr(char const *str);
rank2_t meta_promote_rank1(char *str, const char limiter);
#endif
