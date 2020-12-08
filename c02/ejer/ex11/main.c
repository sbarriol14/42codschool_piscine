/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emollejo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:43:43 by emollejo          #+#    #+#             */
/*   Updated: 2020/12/07 09:41:00 by emollejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int main()
{
	char hex[100]="Coucou\ntu vas bien ?";
//	int a;
	ft_putstr_non_printable(hex);
	return(0);
	//printf("El numero hexadecimal es %s : ",hex);
}