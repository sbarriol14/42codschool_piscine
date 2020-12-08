/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <sbarrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:06:29 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/07 16:39:01 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str);

int	main(void)
{
	char str1[] = "Hola";
	char str2[] = "-la";
	char str3[] = "Estacadenatieneuncaracterfinal*";

	printf("%d", ft_str_is_alpha(str1));
	printf("%d", ft_str_is_alpha(str2));
	printf("%d", ft_str_is_alpha(str3));
}
