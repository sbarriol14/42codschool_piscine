/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 14:29:28 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/04 13:56:20 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstrnums(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
}

void	ft_putstrcoma(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_putstrbucled4(char d1, char d2, char d3, char d4)
{
	char i;

	i = d4;
	while (d4 <= '9')
	{
		ft_putstrnums(d1, d2, d3, d4);
		if (!(d1 == '9' && d2 == '8' && d3 == '9' && d4 == '9'))
			ft_putstrcoma();
		d4++;
	}
}

void	ft_print_comb2(void)
{
	char d1;
	char d2;
	char d3;
	char d4;

	d1 = '0';
	while (d1 <= '9')
	{
		d2 = '0';
		while ((d2 <= '9'))
		{
			d3 = d1;
			d4 = d2 + 1;
			while ((d3 <= '9'))
			{
				ft_putstrbucled4(d1, d2, d3, d4);
				d4 = d2 + 1;
				d3++;	
			}
			d2++;
		}
		d1++;
	}
}
