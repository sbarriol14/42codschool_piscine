/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <sbarrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:52:37 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/12 21:11:56 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;
	int				i;
	int				j;

	x = 0;
	i = 0;
	j = 0;
	while (s1[i] == s2[j] && *s1 && s2)
	{
		s1++;
		s2++;
		x++;
	}
	if (x < n)
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[j]);
	}
	else
	{
		return (0);
	}
	return (0);
}
