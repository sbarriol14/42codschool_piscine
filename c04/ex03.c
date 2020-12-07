
int 	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	if (*str == '\0')
		return (1);
	while(str[i] != '\0')
	{
		if ( !((str[i] <= '9')  && (str[i] >= '0')))
			return (1);
		i++;
	}
	return (0);
}


int		ft_atoi(char *str)
{
	int i;
	int s;
	int j;
	int p;
	int size;
	int num;

	size = ft_strlen(str);
	s = 1;
	i = 0;
	j = 0;
	while(i < size)
	{
		if(str[i] == '-')
			s = -s;
		if(ft_is_numeric(str[i]) == 0)
		{
			j = i;
			i = size;
		}
		i++;
	}
	i = j;
	while ((j < size) && (ft_is_numeric(str[i]) == 0))
	{
		j++;
	}
	num = str[j] - '0';
	p = 0;
	while (i < j)
	{
		num = num + str[i] * (10 * (p));
		p++;
		i++;
	}
	return (s * num);
}
