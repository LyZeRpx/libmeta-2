/*
** EPITECH PROJECT, 2023
** minishell
** File description:
** minishell1.c
*/

int meta_countchar(rank1_t array, char to_count)
{
    int count = 0;

    for (int i = 0; array[i] != '\0'; i++) {
        if (array[i] == to_count) {
            count++;
        }
    }
    return count;
}
