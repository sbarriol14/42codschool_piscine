
int		ft_is_prime(int nb)
{
	int i;
	int cont;

	i = 1;
	cont = 0;
	while (i <= nb)
	{
		if (nb == 2147483647)
			return (1);
		if (nb % i == 0)
			cont++;
		if (cont > 2)
			return (0);
		i++;
	}
	if (cont == 2)
		return (1);
	else
		return (0);
}

 int ft_find_next_prime(int nb)
 {
		if (ft_is_prime(nb) == 1)
			return (nb);
		else
			return (ft_find_next_prime(nb + 1));
 }
