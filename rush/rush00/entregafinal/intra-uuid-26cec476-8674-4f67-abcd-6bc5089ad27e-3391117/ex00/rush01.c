/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 18:44:04 by brodrigu          #+#    #+#             */
/*   Updated: 2020/11/29 21:00:55 by brodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int col;
	int row;

	col = 1;
	row = 1;
	while (row <= y)
	{
		while (col <= x)
		{
			if (col == 1 && row == 1)
				ft_putchar('/');
			else if ((col == 1 && row == y) || (col == x && row == 1))
				ft_putchar('\\');
			else if (col == x && row == y)
				ft_putchar('/');
			else if ((row == 1 || row == y) || (col == 1 || col == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		col = 1;
		row++;
	}
}
