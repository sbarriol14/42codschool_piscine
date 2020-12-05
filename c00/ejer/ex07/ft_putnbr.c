/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:17:41 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/02 20:09:51 by sbarrio-         ###   ########.fr       */
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

void	ft_putnbr(int nb)
{
	int res;
	int div;

	res = 0;
	div = 0;
	if (nb == INT_MIN)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(1474833648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	else if (nb > 0 && nb < 10)
		ft_putchar(ft_inttochar(nb));
	else
	{
		res = (nb % 10);
		div = (nb / 10);
		ft_putnbr(div);
		ft_putchar(ft_inttochar(res));
	}
}

int main(void)
{
	ft_putnbr(100);
	return(0);
}
