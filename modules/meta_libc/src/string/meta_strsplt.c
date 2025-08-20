/*
** EPITECH PROJECT, 2024
** minishell2
** File description:
** meta_strsplt.c
*/

#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "meta/libc/string.h"

void *meta_memset(char *ptr, char memb, size_t size)
{
    for (size_t i = 0; i != size; i++)
        ptr[i] = memb;
    return ptr;
}

void *meta_calloc(size_t n, size_t size)
{
    void *ptr = malloc(size * n);

    if (ptr == nullptr)
        return nullptr;
    meta_memset(ptr, 0, size);
    return ptr;
}

ssize_t index_of(char *str, char c)
{
    ssize_t check = 0;

    for (size_t i = 0; str[i]; i++)
        check += str[i] == c;
    return check ? check : -1;
}

static size_t count_delims(char *str, char delim)
{
    size_t count = 0;

    for (size_t i = 0; str[i] != '\0'; i++)
        if (str[i] == delim)
            count++;
    return count;
}

static size_t next_word_len(char *str, char delim)
{
    size_t i = 0;

    for (; str[i] && str[i] != delim; i++);
    return i;
}

static void end_string(size_t *k, char *adr, size_t *j)
{
    (*k)++;
    *adr = '\0';
    *j = 0;
}

char **meta_strsplt(char *str, char delim)
{
    size_t size = count_delims(str, delim);
    char **array = malloc(sizeof(char *) * (size + 2));
    size_t j = 0;
    size_t k = 0;
    size_t i = 0;

    if (array == nullptr)
        return nullptr;
    for (; i < size + 1; i++) {
        array[i] = malloc(sizeof(char) * (next_word_len(str + k, delim) + 1));
        if (array[i] == nullptr)
            return nullptr;
        for (; str[k] != delim && str[k]; j++) {
            array[i][j] = str[k];
            k++;
        }
        end_string(&k, &(array[i][j]), &j);
    }
    array[size + 1] = nullptr;
    return array;
}
