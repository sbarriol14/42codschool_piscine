/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <sbarrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:53:34 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/08 19:51:56 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int r;

	i = 0;
	while(s1[i] != '\0')
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

char 	*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (ft_strcmp(str, to_find) == 0)
			return (*(str + i));
		i++;
	}
	return ('\0');
}
