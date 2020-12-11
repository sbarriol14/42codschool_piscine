
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int r;
	int i;

	if (min >= max)
	{
		range = '\0';
		return (0);
	}
	else
	{
		r = max - min;
		range = (char)malloc(sizeof(max) * r);
		i = 0;
		while (min < max)
		{
			range[i] = min;
			min++;
			i++;
		}
		return(r);
	}
}
