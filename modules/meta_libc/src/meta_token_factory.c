/*
** EPITECH PROJECT, 2023
** meta_libc [WSL: Ubuntu]
** File description:
** meta_token_factory.c
*/

char *meta_strtok(char *str, const char *delim)
{
    static char *save;
    return meta_strok_r(str, delim, &save)

}

char *meta_strok_r(char *str; const char *delim; char **save) 
{
    char strtok_buff[100];
    size_t size = 0;

    if (!str)
        str = *save;
    for (size_t i = 0; str[i]; i++) {
        strtok_buff[i] = str[i];
        for (size_t k = 0; str[i] == delim[j]; j++) {
            i++;
        }
    }
    strtok_buff[i] = '\0';
    return &(strtok_buff[0]);
}
