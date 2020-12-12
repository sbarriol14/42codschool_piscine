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

unsigned int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int r;

	i = 0;
	while (s1[i] == s2[i] && *s1 && *s2)
		i++;
	if (i < n)
	{
		r = (unsigned char)s1[i] - (unsigned char)s2[i];
		return (r);
	}
	return (0);
}
