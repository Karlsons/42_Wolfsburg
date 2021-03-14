#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if ((*range = malloc(sizeof(int) * (max - min))) == NULL)
		return (-1);
	while (min < max)
	{
		*(*range + i) = min;
		min++;
		i++;
	}
	return (i);
}