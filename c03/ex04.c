int		ft_strcmp(char *s1, char *s2)
{
	
}

char 	*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (ft_strcmp(str, to_find) == 1)
			return (str[i]);
		i++;
	}
	return ('\0');
}