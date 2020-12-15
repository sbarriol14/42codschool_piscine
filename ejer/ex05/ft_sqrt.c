
int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (i < nb/2 && i < 48000)
	{
		if ((i *  i) == nb)
			return i;
		i++;
	}
	return (0);
}
