/*
** EPITECH PROJECT, 2024
** meta_pm
** File description:
** meta_rank1.h
*/

#ifndef META_RANK2_H
    #define META_RANK2_H
    #include <stddef.h>
/**
 * @brief Clones a rank_2 pointer and allocates more memory.
 *
 * Description
 * @param parent The string you want to cut.
 * @param added_slots Where the string will be cut.
 * @return The clone of the pointer with added slots 
*/
char **meta_extend_rank2(char **parent, size_t added_slots);

/**
 * @brief Frees a rank_2 pointer.
 *
 * Description
 * @param dbl_array Which rank_2 pointer will be freed.
*/
void meta_free_rank2(char **dbl_array);

/**
 * @brief Prints a rank_2 pointer.
 *
 * Description
 * @param dbl_array Which rank_2 pointer will be printed.
*/
void meta_print_rank2(char **dbl_array);

/**
 * @brief Searches a string into a rank_2's slots.
 *
 * Description
 * @param  dbl_array String you want to cut.
 * @param delim The string to find.
 * @return The entire string begining with delim. 
*/
char *meta_rank1_in_rank2(char **dbl_array, char *delim);

/**
 * @brief Searches a string's index into a rank_2's slots.
 *
 * Description
 * @param  dbl_array String you want to cut.
 * @param delim The string to find.
 * @return The entire string's index begining with delim. 
*/
int meta_rank1_in_rank2_index(char **dbl_array, char *delim);

/**
 * @brief Clones a rank_2 pointer.
 *
 * Description
 * @param to_clone The string you want to cut.
 * @return The clone of the pointer.
*/
char **meta_rank2_clone(char **to_clone);

/**
 * @brief Gets a rank_2 size. (does not include the last NULL)
 *
 * Description
 * @param dbl_array The pointer you want to know the size of.
 * @return The size of the pointer.
*/
size_t meta_rank2_size(char **dbl_array);
#endif
