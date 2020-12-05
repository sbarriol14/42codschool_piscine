/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 14:09:10 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/03 14:21:59 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a = 20;
	int b = 5;
	int div=0;
	int mod=0;

	ft_div_mod(a, b, &div, &mod);
	printf("%d", div);
	printf("%s", "--");
	printf("%d", mod);
}
