
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	char *cat;
	cat = (char)malloc(sizeof(strs[0]) * size);

	if (size <= 0)
	{
		free(cat);
		return (cat);
	}
	else
	{
		i = 0;
		while (strs[i] !=  0)
		{
			if (i != 0)
				cat = ft_strcat(cat, sep);
			cat = ft_strcat(cat, strs[i]);
			i++;
		}
		return(cat);
	}
}
