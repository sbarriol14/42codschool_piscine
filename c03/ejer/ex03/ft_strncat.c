/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <sbarrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:53:14 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/08 21:18:48 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

 char   *ft_strncat(char *dest, char *src, unsigned int n)
 {
    int i;
    int j;
    int sizesrc;
    int sizedest;

    sizedest = ft_strlen(dest);
    sizesrc = ft_strlen(src);
    i = 0;
    j = sizedest;
    while ((i < n))
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[sizedest + i] = '\0';
    return (dest);
 }

