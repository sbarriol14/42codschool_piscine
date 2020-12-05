/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:17:41 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/03 20:08:10 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_inttochar(int i)
{
	char c;

	c = i + '0';
	return (c);
}

void	ft_putintmin(void)
{
	ft_putchar('-');
	ft_putchar('2');
}

int		ft_changesign(int nb)
{
	ft_putchar('-');
	nb = -nb;
	return (nb);
}

void	ft_putnbr(int nb)
{
	int res;
	int div;

	res = 0;
	div = 0;
	if (nb == INT_MIN)
	{
		ft_putintmin();
		ft_putnbr(1474833648);
	}
	else
	{
		if (nb < 0)
			nb = ft_changesign(nb);
		if (nb >= 0 && nb < 10)
			ft_putchar(ft_inttochar(nb));
		else if (nb <= INT_MAX)
		{
			res = (nb % 10);
			div = (nb / 10);
			ft_putnbr(div);
			ft_putchar(ft_inttochar(res));
		}
	}
}
