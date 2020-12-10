
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

int		ft_str_is_numeric(char str)
{
	if ( !((str <= '9')  && (str >= '0')))
		return (0);
	return (1);
}

/*
int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	if (*str == '\0')
		return (1);
	while(str[i] != '\0')
	{
		if ( !((str[i] <= '9')  && (str[i] >= '0')))
			return (0);
		i++;
	}
	return (1);
}
*/


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
	while(i < size && (ft_str_is_numeric(str[i]) == 0))
	{
		if (str[i])
		//incluir aqui para que si encuentra lettras pare
		if(str[i] == '-')
			s = -s;
		i++;
	}
	num = 0;
	p = 1;
	while (i < size && (ft_str_is_numeric(str[i]) == 1))
	{
		num = num * p + (int)(str[i] - '0');
		p = 10;
		i++;
	}
	return (s * num);
}