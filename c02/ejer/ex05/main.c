/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <sbarrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:06:29 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/07 16:40:52 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int	main(void)
{
	char str1[] = "HOLA";
	char str2[] = "hOLA";
	char str3[] = "ESTACADENAFINALa";

	printf("%d", ft_str_is_uppercase(str1));
	printf("%d", ft_str_is_uppercase(str2));
	printf("%d", ft_str_is_uppercase(str3));
}