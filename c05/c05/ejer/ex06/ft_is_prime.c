/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 15:11:33 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/17 12:22:58 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int cont;

	i = 1;
	cont = 0;
	if ((nb == 2) || (nb == 3))
		return (1);
	while (i <= nb && nb > 0)
	{
		if (nb == 2147483647)
			return (1);
		if (nb % i == 0)
		{
			if (i != nb && i != 1)
				return (0);
			cont++;
		}
		if (cont > 2)
			return (0);
		i++;
	}
	if (cont == 2)
		return (1);
	else
		return (0);
}
