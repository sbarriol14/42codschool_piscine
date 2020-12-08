/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <sbarrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 16:18:43 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/08 13:28:49 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest,char *src,unsigned int size)
{
	unsigned int i;

	i = 0;
	if (size == 0)
		return (i);
	while((src[i] != '\0') && i < size)
	{
		dest[i]=src[i];
		i++;
	}
	dest[size] = '\0';  
	return (i);
}