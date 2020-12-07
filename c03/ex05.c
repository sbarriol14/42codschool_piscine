
unsigned int ft_strlcat(char *dest,char *src,unsigned int size)
{
	int i;
	int j;
	char *temp;
	
	temp = src;
	i = 0;
	j = size;
	while (i < size)
	{
		temp[j] = dest[i];
		i++;
		j++;
	}
	dest = src
	return (j+i);
}

