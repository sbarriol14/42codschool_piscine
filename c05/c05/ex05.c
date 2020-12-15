
int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (i < nb/2)
	{
		if (nb / i == i && nb % i == 0)
			return i;
		i++;
	}
	return (0);
}
