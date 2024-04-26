/*
** EPITECH PROJECT, 2024
** minishell
** file description:
** main.c
*/

#include <fcntl.h>
#include <unistd.h>
#include "meta_typdefs.h"

rank1_t meta_file_to_rank1(rank1_t filename)
{
    int fd = open(filename, O_RDONLY);
    char buff[1000000];
    rank1_t clone = NULL;

    read(fd, buff, 1000000);
    clone = my_strdup(clone, buff);
    return clone;
}
