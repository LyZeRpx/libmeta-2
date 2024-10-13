/*
** EPITECH PROJECT, 2024
** meta_libc
** File description:
** meta_libc.h
*/

#ifndef META_LIBC_H
    #define META_LIBC_H
    #include <stdbool.h>
int meta_atoi(char const *str);
int meta_is_prime(int nb);
bool meta_isneg(int to_check);
int meta_mprintf(char const *format, ...);
int meta_put_nbr(int nb);
int meta_putchar(char c);
int meta_putstr(char const *str);
char *meta_strcat(char *dest, char const *src);
int meta_strcmp(char const *s1, char const *s2);
char *meta_strcpy(char *dest, char *src);
char *meta_strdup(char *src);
int meta_strlen(char const *str);
char *meta_strncat(char *dest, char const *src, int n);
int meta_strncmp(char const *s1, char const *s2, int n);
char **meta_promote_str(char *str, const char limiter);
char *meta_strstr(char *str, char const *to_find);
#endif
