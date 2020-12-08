/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <sbarrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:06:29 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/07 16:45:16 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlowercase(char *str);

int	main(void)
{
	char str1[] = "HOLA";
	char str2[] = "holA";
	char str3[] = "hola";

	printf("%d", ft_strlowercase(str1));
	printf("%d", ft_strlowercase(str2));
	printf("%d", ft_strlowercase(str3));

}