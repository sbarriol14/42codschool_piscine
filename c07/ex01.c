
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *temp;
	int r;
	int i;

	if (min >= max)
		return ('\0');
	else
	{
		r = max - min;
		temp = (int)malloc(sizeof(int) * r);
		i = 0;
		while (min < max)
		{
			temp[i] = min;
			min++;
			i++;
		}
		return(temp);
	}
}
