/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarcia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 12:47:39 by dagarcia          #+#    #+#             */
/*   Updated: 2020/12/04 12:58:12 by dagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char *s1;
	char *s2;
	int a;
	unsigned int n;

	n = 5;
	s1 = "zZzzzzzzzz";
	s2 = "zzzzzzzzZ";
	a = ft_strncmp(s1, s2, n);
	printf("%i", a);
	return (0);
}
