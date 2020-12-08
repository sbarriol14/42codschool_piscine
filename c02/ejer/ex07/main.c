/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <sbarrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:06:29 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/07 16:43:57 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strupcase(char *str);

int	main(void)
{
	char str1[] = "hola";
	char str2[] = "Hola";

	printf("%d", ft_strupcase(str1));
	printf("%d", ft_strupcase(str2));
}