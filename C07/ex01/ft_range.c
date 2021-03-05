#include <stdlib.h>

int     *ft_range(int min, int max)
{
    int i;
    int range;
    int *dest;

    i = 0;
    range = max - min - 1;
    if (min >= max)
        return (0);
    while (i <= range)
    {
        dest[i] = min + i;
        i++;
    }
    return (dest);
}