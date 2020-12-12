/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <sbarrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:38:13 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/12 21:48:16 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	sizesrc;
	unsigned int	sizedest;

	sizedest = ft_strlen(dest);
	sizesrc = ft_strlen(src);
	i = 0;
	j = sizedest;
	if (n < sizesrc)
		return (sizesrc + n);
	while (i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (sizedest + sizesrc);
}
