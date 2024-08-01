/*
** EPITECH PROJECT, 2024
** meta_pm
** File description:
** meta_rank1_offset.c
*/

#include "../dependency/dependency.h"
#include "meta_rank1.h"

char *meta_rank1_offset(char *str, char *delim)
{
    return str + meta_strlen(delim);
}
