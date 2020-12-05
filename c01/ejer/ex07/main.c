/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 14:45:53 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/03 14:52:16 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int tab[] = { 1, 2, 3, 4 }; 
	
	ft_rev_int_tab( tab, 4);
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);


	ft_rev_int_tab( tab, 0);
	
	tab[] = { NULL };
	ft_rev_int_tab( tab, 3);
}
