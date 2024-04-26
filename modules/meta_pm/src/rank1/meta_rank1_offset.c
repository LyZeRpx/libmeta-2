/*
** EPITECH PROJECT, 2023
** meta_pm
** File description:
** meta_rank1_offset.c
*/

#include "meta_pm_typedefs.h"

rank1_t meta_rank1_offset(rank1_t str, rank1_t delim)
{
    return str + meta_strlen(delim);
}
