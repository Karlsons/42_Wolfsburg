#include <stdlib.h>

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strdup(char *src)
{
    int         i;
    char    *dest;

    i = 0;
    if ((dest = (char *)malloc(ft_str_length(src) * sizeof(char) + 1)) == 0)
        return (0);
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}