/*
** EPITECH PROJECT, 2023
** meta_pm
** File description:
** meta_rank1.h
*/

#ifndef META_RANK1_H
    #define META_RANK1_H
/**
 * @brief Counts the occurences of a character in a string.
 *
 * Description
 * @param str The string you want to inspect.
 * @param to_count The character you want to count.
 * @return the amount of occurences of to_count.
*/
int meta_countchar(char *str, char to_count);

/**
 * @brief Cuts a string when a delimiter is met.
 *
 * Description
 * @param str The string you want to cut.
 * @param delim Where the string will be cut.
 * @return The cut version of the string 
*/
char *meta_cut_rank1(char *str, char delim);

/**
 * @brief Turns a file into a computable string.
 *
 * Description
 * @param filename The file you want to convert into a string.
*/
char *meta_file_to_rank1(char *filename);

/**
 * @brief Promotes a string into an array of strings.
 *
 * Description
 * @param str The string you want to promote.
 * @param delim The delimiter which will determine the cut between strings.
*/
char **meta_promote_rank1(char *str, const char delim);

/**
 * @brief Skips the delimiter.
 *
 * Description
 * @param str The string you want to offset.
 * @param delim The string to get rid of.
 * @return The offset version of the string .
*/
char *meta_rank1_offset(char *str, char *delim);
#endif
