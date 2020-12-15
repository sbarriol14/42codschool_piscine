
int		ft_is_prime(int nb)
{
	int i;
	int cont;

	i = nb;
	while (i > 0)
	{
		if (nb % i == 0)
			cont++;
		i--;
	}
	if (cont == 2)
		return (1);
	else
		return (0);
}
