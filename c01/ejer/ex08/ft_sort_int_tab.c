/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:02:34 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/03 18:40:42 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int newt[size];
	int i;
	int j;
	int maxnum;
	int pos;

	if(size > 0)
	{
		j = 0;
		maxnum = 0;
		pos = 0;

		while(j < size)
		{
			while(i < size)
			{
				i = 0;
				if(tab[i] != '\0' && tab[i] > maxnum)
				{
					maxnum = tab[i];
					tab[i] = '\0';
				}
				i++;
			}
			newt[((size - 1) - i)] = maxnum;
			j++;
		}
		i = 0;
		while(i < size)
		{
			tab[i] = newt[i];
		}
	}
}
