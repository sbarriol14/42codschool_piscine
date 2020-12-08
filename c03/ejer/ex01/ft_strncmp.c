/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <sbarrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:52:37 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/08 21:13:20 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int r;

	i = 0;
	while(i < n)
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			return (r);
		}	
		i++;	
	}
	return (0);	
}
