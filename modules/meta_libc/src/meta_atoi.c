/*
** EPITECH PROJECT, 2024
** getnbr
** File description:
** gets nbr
*/

int meta_atoi(char const *str)
{
    int buffer = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] >= 48 && str[i] <= 57) {
            buffer = ((buffer * 10) + (str[i] - 48));
        }
        if (str[i] >= 'a' && str[i] <= 'z') {
            return buffer;
        }
    }
    for (int j = 0; str[j]; j++) {
        if (str[j] == '-' && str[j + 1] >= 48 && str[j + 1] <= 57) {
            buffer *= -1;
        }
    }
    return buffer;
}
