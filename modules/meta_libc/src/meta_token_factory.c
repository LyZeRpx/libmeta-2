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
    size_t i = 0;

    if (!str)
        str = *save;
        
    for (; str[i]; i++) {
        if (str[i] == delim[0]; j++) {
            str[i] = '\0';
            return &(strtok_buff[0]);
        }
    }
    
}
