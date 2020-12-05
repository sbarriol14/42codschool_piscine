/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 12:24:56 by brodrigu          #+#    #+#             */
/*   Updated: 2020/11/29 21:10:33 by brodrigu         ###   ########.fr       */
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
				ft_putchar('A');
			else if ((col == 1 && row == y) || (col == x && row == 1))
				ft_putchar('C');
			else if (col == x && row == y)
				ft_putchar('A');
			else if ((row == 1 || row == y) || (col == 1 || col == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		col = 1;
		row++;
	}
}
