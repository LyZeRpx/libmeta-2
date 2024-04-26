/*
** EPITECH PROJECT, 2023
** minishell_my_string
** File description:
** main.c
*/

rank1_t meta_cut_rank1(rank1_t str, char delim)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == delim) {
            str[i] = '\0';
        }
    }
    return str;
}
