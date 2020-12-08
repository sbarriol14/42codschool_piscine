/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <sbarrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:52:59 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/08 21:15:53 by sbarrio-         ###   ########.fr       */
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

 char   *ft_strcat(char *dest, char *src)
 {
    int i;
    int j;
    int sizesrc;
    int sizedest;

    sizedest = ft_strlen(dest);
    sizesrc = ft_strlen(src);
    i = 0;
    j = sizedest;
    while ((i < sizesrc))
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[sizedest + sizesrc] = '\0';
    return (dest);
 }
