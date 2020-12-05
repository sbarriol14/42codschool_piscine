/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 12:18:29 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/11/28 14:30:25 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush04(int x, int y)
{
	//caso1: x<=0 , y<=0
	if (x<=0 || y<=0)
	{
		ft_putchar('\n');
	}
	//caso2: x=1, y= cualquier valor
	if (x==1)
	{
		ft_putchar('A');
		ft_putchar('\n');
		if (y>1)
		{
			int i;
			i=y;
			while (i>2)
			{
				ft_putchar('B');
				ft_putchar('\n');
				i--;
			}
		ft_putchar('C');
		ft_putchar('\n');	
		}
	}
	//caso3: y=1 y x>1
	if (y==1 && x>1)
	{
		ft_putchar('A');
		int i;
		i=x;
		while (i>2)
		{
			ft_putchar('B');
			i--;
		}	
		ft_putchar('C');
		ft_putchar('\n');
	}
	//caso4: x>1, y>1
	if(x>1 && y>1)
	{
		int i;
		int j;
		i=1;
		j=1;
		ft_putchar('A');
		while(i<(x-1))
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('C');
		ft_putchar('\n');
		while(j<(y-1))
		{
			ft_putchar('B');
			j=1;
			while(j<(x-1))
			{
				ft_putchar(' ');
				j++;
			}
			ft_putchar('B');
			ft_putchar('\n');
			j++;
		}
		i=1;
		ft_putchar('C');
		while(i<(x-1))
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('A');
		ft_putchar('\n');
	}
}
