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

int		ft_str_is_numeric(char *str);

int	main(void)
{
	char str1[] = "1234";
	char str2[] = "H1234567";
	char str3[] = "1234574H";

	printf("%d", ft_str_is_numeric(str1));
	printf("%d", ft_str_is_numeric(str2));
	printf("%d", ft_str_is_numeric(str3));
}