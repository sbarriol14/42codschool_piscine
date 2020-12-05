/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 15:13:38 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/11/28 18:06:57 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int num);

void	 rush04(int x, int y)

{
	int i,j;
	i, j =1;
	if ( x > 0 && > 0 )
	{
		ft_putchar('A',1);
		if (x > 1) 
		{
			while(i<(x-1))
			{
				ft_putchar('B',1);
				i++;
			}	
			ft_putchar('C',1);
		}
		ft_putchar('\n',1);
		while(j<(y-1))
		{
			ft_putchar('B',1);
			if ( x > 1)
			{
				ft_putchar(' ', (i-1));
				ft_putchar('B', 1);
			}
			ft_putchar('\n',1);
			j++;
		}
		if ( y > 1 )
		{
			ft_putchar('C', 1);
			if (x > 1)
			{
				ft_putchar('B', (i-1));
				ft_putchar('A',1);
			}
			ft_putchar('\n',1);
		}
	}
}
