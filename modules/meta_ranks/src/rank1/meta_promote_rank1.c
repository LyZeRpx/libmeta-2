/*
** EPITECH PROJECT, 2024
** meta_PROJECT
** File description:
** DESCRIPTION
*/

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>
#include "meta_ranks.h"

bool is_alphanum(char c)
{
    return (IS_ALPHA(c) || IS_NUM(c));
}

static void skip_word(char const *str, size_t *i)
{
    for (; str[*i] && is_alphanum(str[*i]); (*i)++);
}

static size_t count_delims(char const *str)
{
    size_t count = 0;
    size_t i = 0;

    while (str[i]) {
        if (is_alphanum(str[i])) {
            skip_word(str, &i);
            count++;
        } else {
            i++;
        }
    }
    return count;
}

char *meta_strtok(char **str)
{
    size_t i = 0;
    size_t j = 0;
    char *buff = NULL;

    if (str == NULL) {
        i = 0;
    }
    buff = malloc(sizeof(char) * meta_strlen(*str) + 1);
    if (!buff)
        return NULL;
    for (; (*str)[i] && is_alphanum((*str)[i]); i++) {
        buff[j] = (*str)[i];
        j++;
    }
    for (; !is_alphanum((*str)[i]); i++);
    *str += i;
    return buff;
}

char **meta_str_to_word_array(char const *str)
{
    size_t size = count_delims(str);
    char **word_array = malloc(sizeof(char *) * (size + 1));
    char **adr = (char **)&str;
    size_t i = 0;

    if (!word_array || !str)
        return NULL;
    for (; i < size; i++)
        word_array[i] = meta_strtok(adr);
    word_array[i] = NULL;
    return word_array;
}
