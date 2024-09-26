/*
** EPITECH PROJECT, 2024
** meta_pm
** File description:
** meta_file_to_rank1.c
*/

#include <fcntl.h>
#include <unistd.h>
#include "meta_rank1.h"
#include "../dependency/dependency.h"

char *meta_file_to_rank1(char *filename)
{
    int fd = open(filename, O_RDONLY);
    char buff[1000000];
    char *clone = NULL;

    read(fd, buff, 1000000);
    clone = meta_strdup(buff);
    return clone;
}
