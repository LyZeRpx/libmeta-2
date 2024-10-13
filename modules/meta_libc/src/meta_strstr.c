/*
** EPITECH PROJECT, 2024
** meta_PROJECT
** File description:
** DESCRIPTION
*/

#include <stddef.h>
#include "meta_libc.h"

char *meta_strstr(char *str, char const *to_find)
{
    int needle_len = meta_strlen(to_find);
    int size = meta_strlen(str);

    for (int i = 0; (str[i] != '\0') && (i + needle_len <= size); i++) {
        if (meta_strncmp(str + i, to_find, needle_len) == 0) {
            return str + i;
        }
    }
    return NULL;
}
