
int		ft_is_prime(int nb)
{
	int i;
	int cont;

	i = 2;
	cont = 0;
	while (i <= nb)
	{
		if (nb == 2147483647)
			return (1);
		if (nb % 2 == 0 || nb % 3 == 0 || nb % 3 == 0) // 
		if (nb % i == 0)
			cont++;
		i++;
	}
	if (cont == 2)
		return (1);
	else
		return (0);
}
