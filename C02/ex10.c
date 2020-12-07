
unsigned int ft_strlcpy(char *dest,char *src,unsigned int size)
{
	int i;

	i = 0;

	while(i < size)
	{
		dest[i]=src[i];
		i++;
	}
	return (i)
}
