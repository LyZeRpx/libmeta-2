/*
** EPITECH PROJECT, 2024
** MY_PROJECT
** File description:
** DESCRIPTION
*/

#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>

#define IS_ALPHA ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
#define IS_NUM (c >= '0' && c <= '9')

char *my_strtok(char **str);
int my_strlen(char *str);

bool is_alphanum(char c)
{
    return (IS_ALPHA || IS_NUM);
}

static size_t count_delims(char const *str)
{
    size_t count = 0;

    for (size_t i = 0; str[i]; i++) {
        if (!is_alphanum(str[i]))
            count++;
    }
    return count;
}

char *my_strtok(char **str)
{
    size_t i = 0;
    size_t j = 0;
    char *buff = NULL;

    if (str == NULL) {
        i = 0;
    }
    buff = malloc(sizeof(char) * my_strlen(*str) + 1);
    for (; (*str)[i] && is_alphanum((*str)[i]); i++) {
        buff[j] = (*str)[i];
        j++;
    }
    for (; !is_alphanum((*str)[i]); i++);
    *str += i;
    return buff;
}

char **my_str_to_word_array(char const *str)
{
    size_t size = count_delims(str);
    char **word_array = malloc(sizeof(char *) * (size + 1));
    char **adr = (char **)&str;
    size_t i = 0;

    if (!word_array)
        return NULL;
    for (; i <= size; i++) {
        word_array[i] = my_strtok(adr);
    }
    word_array[i] = NULL;
    return word_array;
}
