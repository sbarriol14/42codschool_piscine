/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <sbarrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:06:29 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/07 20:37:25 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcapitalize(char *str);

int	main(void)
{
	char str1[] = "a ver que esto tiEne que -funcionar con 12todos";
	char str2[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str3[] = " a ver si aqui +me consigue2epa";
	ft_strcapitalize(str1);
	ft_strcapitalize(str2);
	ft_strcapitalize(str3);

	printf("%s", str1);
	printf("\n");
	printf("%s", str2);
	printf("\n");
	printf("%s", str3);
}