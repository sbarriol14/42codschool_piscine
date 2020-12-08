/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <sbarrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 16:12:46 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/08 17:31:17 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char str)
{
	if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
		return (1);
	else
		return (0);
}

int		ft_str_is_lowercase(char str)
{
	if (str <= 'z' && str >= 'a')
		return (1);
	else
		return (0);
}

int		ft_str_is_uppercase(char str)
{
	if (((str <= 'Z') && (str >= 'A')))
		return (1);
	else
		return (0);
}

void	first_cap(char str)
{
	if (ft_str_is_lowercase(str) == 1)
		str = str - 32;
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	first_cap(str[0]);
	while (str[i] != '\0')
	{
		if ((ft_str_is_lowercase(str[i]) == 1))
		{
			if (ft_str_is_alpha(str[i - 1] == 0))
			{
				if (str[i - 1] <= '9' && str[i - 1] >= '0')
					str[i] = str[i] - 32;
			}
		}
		if (ft_str_is_uppercase(str[i]) == 1 && (i != 0))
		{
			if (ft_str_is_alpha(str[i - 1]) == 1)
			{
				if (str[i - 1] <= '9' && str[i - 1] >= '0')
					str[i] = str[i] + 32;
			}
		}
		i++;
	}
	return (str);
}
