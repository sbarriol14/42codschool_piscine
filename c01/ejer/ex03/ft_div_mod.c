/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 19:06:03 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/03 14:20:57 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if(a != 0)
	{
		*div = (a / b);
		*mod = (a % b);
	}
	else
	{
		*div = 1;
		*mod = 1;
	}
}
