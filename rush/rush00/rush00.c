/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:19:07 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/11/28 20:02:24 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(char c);

void	rush04(int x, int y)

{
	int i;
	int j;
	i=1;
	j=1;
	if ( x > 0 && y > 0)
	{
		while ( j  <= y )
		{	
			i=1;
			while (i <= x)
			{
				if ((i <  2 && j <  2) || (i == x && j == y && i > 1 && j > 1) || (i == 1 && j == y ) || ( i == x && j == 1) )
					ft_putchar('o');
				else if ( (i == 1 && 1 < j && j < y ) || ( i == x && 1 < j && j < y))
					ft_putchar ('|');
				else if ( (j == 1 && 1 < i && i < x ) || (j == y && 1 < i && i < x))
					ft_putchar('-');
				else if ( 1 < i && i < x  && 1 < j && j < y) 
					ft_putchar(' ');
				i++;
			}
			ft_putchar('\n');
			j++;
		}
	}
}

