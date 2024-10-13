/*
** EPITECH PROJECT, 2024
** meta_PROJECT
** File description:
** DESCRIPTION
*/

#include <stddef.h>
#include <stdio.h>

int meta_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    for (; (s1[i] == s2[i]) && (s1[i] != '\0') && i < n - 1; i++);
    return s1[i] - s2[i];
}
