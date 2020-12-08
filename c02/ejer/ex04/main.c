/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <sbarrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:06:29 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/07 16:39:14 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int	main(void)
{
	char str1[] = "hola";
	char str2[] = "Hola";
	char str3[] = "estacadenatieneuncaracterfinalA";

	printf("%d", ft_str_is_lowercase(str1));
	printf("%d", ft_str_is_lowercase(str2));
	printf("%d", ft_str_is_lowercase(str3));
}