/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 12:43:16 by egomez-a          #+#    #+#             */
/*   Updated: 2020/12/08 13:05:04 by egomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hex(unsigned char str);
void	ft_putchar(char c);

void	ft_putstr_non_printable(char *str)
{
	char			c;
	unsigned char	n;

	c = 92;
	while (*str)
	{
		if (*str < ' ' || *str == 127)
		{
			write(1, &c, 1);
			n = (unsigned char)*str;
			hex(n);
		}
		else
			ft_putchar(*str);
		str++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hex(unsigned char str)
{
	unsigned char cociente;
	unsigned char resto;

	cociente = str / 16;
	resto = str % 16;
	if (cociente >= 10)
		ft_putchar(cociente + 87);
	else
		ft_putchar(cociente + '0');
	if (resto >= 10)
		ft_putchar(resto + 87);
	else
		ft_putchar(resto + '0');
}
