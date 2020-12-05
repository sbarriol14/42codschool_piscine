/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epeters- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 12:39:10 by epeters-          #+#    #+#             */
/*   Updated: 2020/12/05 14:02:13 by epeters-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fill_specials(int map[4][4],int *parameters);
void	print_map(int map[4][4]);
void	ft_putchar(char c);

void	create_map(int *parameters)
{
	int map[4][4];
	int x;
	int y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			map[x][y] = 0;
			y++;
		}
		x++;
	}
	fill_specials(map, parameters);
	print_map(map);
}

void	print_map(int map[4][4])
{
	int x;
	int y;
	
	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			ft_putchar('0' + map[x][y]);
			x++;
			if (x != 4)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		y++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
