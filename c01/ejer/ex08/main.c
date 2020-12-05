/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 14:53:45 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/03 19:09:25 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int tab[] = { 6 , 4, 2, 1 , 5 }; 
	ft_sort_int_tab(tab, 5);
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("%d", tab[4]);

	int tabr[] = { 7 , 4, 7, 4 , 5 }; 
	ft_sort_int_tab(tab, 5);
	printf("%d", tabr[0]);
	printf("%d", tabr[1]);
	printf("%d", tabr[2]);
	printf("%d", tabr[3]);
	printf("%d", tabr[4]);

	return (0);
}
