/*
** EPITECH PROJECT, 2023
** minishell_meta_string
** File description:
** main.c
*/

char *meta_cut_rank1(char *str, char delim)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == delim) {
            str[i] = '\0';
        }
    }
    return str;
}
