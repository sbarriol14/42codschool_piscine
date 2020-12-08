/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <sbarrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:04:53 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/08 21:14:53 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int 	main(void)
{
	char str1[] = "Hola";
	char str2[] = "Hola";

	printf("%d", strncmp(str1, str2, 4));
	printf("%d", ft_strncmp(str1, str2, 4));
	
	char str3[] = "aaaa";
	char str4[] = "abbb";

	printf("%d", strncmp(str3, str4, 4));
	printf("%d", ft_strncmp(str3, str4, 4));
	printf("%d", ft_strncmp(str4, str3, 2));
	printf("%d", strncmp(str4, str3, 2));
}