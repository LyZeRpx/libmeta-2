/*
** EPITECH PROJECT, 2024
** meta_pm
** File description:
** meta_rank1.h
*/

#ifndef META_RANK1_H
    #define META_RANK1_H
int meta_countchar(char *array, char to_count);
char *meta_cut_rank1(char *str, char delim);
char *meta_file_to_rank1(char *filename);
char **meta_promote_rank1(char *str, const char limiter);
char *meta_rank1_offset(char *str, char *delim);
#endif
