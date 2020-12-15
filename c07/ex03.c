
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;
	int		sizesrc;
	int		sizedest;

	sizedest = ft_strlen(dest);
	sizesrc = ft_strlen(src);
	i = 0;
	j = sizedest;
	while ((i < sizesrc))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[sizedest + sizesrc] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	char *cat;
	cat = (char**)malloc(sizeof(char*) * size);

	if (size <= 0)
	{
		free(cat);
		return (cat);
	}
	else
	{
		cat = strs[0];
		i = 1;
		while (i < size)
		{

			cat = ft_strcat(cat, sep);
			cat = ft_strcat(cat, strs[i]);
			i++;
		}
		return(cat);
	}
}
