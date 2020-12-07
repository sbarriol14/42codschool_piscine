/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:04:53 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/04 15:13:04 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int 	main(void)
{
	char str1[] = "Hola";
	char str2[] = "Hola";

	printf("%d", strcmp(str1, str2));
	printf("%d", ft_strcmp(str1, str2));
	
	char str3[] = "aaaa";
	char str4[] = "bbbb";

	printf("%d", strcmp(str3, str4));
	printf("%d", ft_strcmp(str3, str4));
	printf("%d", ft_strcmp(str4, str3));
	printf("%d", strcmp(str4, str3));
}
