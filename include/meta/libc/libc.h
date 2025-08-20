/*
** EPITECH PROJECT, 2025
** meta_libc
** File description:
** meta_libc.h
*/

#ifndef META_LIBC
    #define META_LIBC

    #include <stddef.h>
    #include <stdarg.h>
    #include <stdbool.h>
    #include <unistd.h>

int meta_atoi(char const *str);
long meta_atol(char const *str);
long long meta_atoll(char const *str);

void *meta_memset(char *ptr, char memb, size_t size);
void *meta_calloc(size_t n, size_t size);
ssize_t index_of(char *str, char c);

#endif
