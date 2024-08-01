/*
** EPITECH PROJECT, 2024
** meta_printf
** File description:
** meta_put_nbr.c
*/

#include "meta_libc.h"

int meta_put_nbr(int nb)
{
    int i = 0;
    int count = 0;

    if (nb < 0) {
        nb *= -1;
        meta_putchar('-');
        count++;
    }
    if (nb < 10) {
        meta_putchar(nb + 48);
        count++;
    } else {
        count += meta_put_nbr(nb / 10);
        i = (nb % 10);
        meta_putchar(i + 48);
        count++;
    }
    return count;
}
