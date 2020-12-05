/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:50:03 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/01 17:27:41 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_is_negative(int n)
{
	char positivo;
	char negativo;

	negativo = 'N';
	positivo = 'P';
	if (n < 0)
		write(1, &negativo, 1);
	if (n >= 0)
		write(1, &positivo, 1);
}
