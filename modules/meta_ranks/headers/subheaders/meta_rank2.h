/*
** EPITECH PROJECT, 2023
** meta_pm
** File description:
** meta_rank1.h
*/

#ifndef META_RANK2_H
    #define META_RANK2_H
    #include <stddef.h>
char **meta_extend_rank2(char **parent, size_t added_slots);
void meta_free_rank2(char **dbl_array);
void meta_print_rank2(char **array);
char *meta_rank1_in_rank2(char **array, char *delim);
int meta_rank1_in_rank2_index(char **array, char *delim);
char **meta_rank2_clone(char **to_clone);
size_t meta_rank2_size(char **dbl_array);
#endif
