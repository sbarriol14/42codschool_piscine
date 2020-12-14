/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 17:42:41 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/14 20:15:12 by sbarrio-         ###   ########.fr       */
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

int		ft_char_is_numeric(char str)
{
	if (!((str <= '9') && (str >= '0')))
		return (0);
	return (1);
}

int		ft_char_is_alpha(char str)
{
	if (!((str >= 'A') && (str <= 'Z')))
	{
		if (!((str >= 'a') && (str <= 'z')))
			return (0);
	}
	return (1);
}

int		ft_char_space_or_jump(char str)
{
	if (str != ' ' && str != '+' && str != '-' && str != '\t'
		&& str != '\n' && str != '\v' && str != '\f' && str != '\r')
	{
		return (0);
	}
	return (1);
}

int		ft_atoi(char *str)
{
	int s;
	int p;
	int size;
	int num;
	int i;

	size = ft_strlen(str);
	s = 1;
	i = 0;
	while (i < size && (ft_char_is_numeric(str[i]) == 0))
	{
		if (ft_char_space_or_jump(str[i]) == 0)
			return (0);
		if (str[i] == '-')
			s = -s;
		i++;
	}
	num = 0;
	p = 1;
	while (i < size && (ft_char_is_numeric(str[i]) == 1))
	{
		num = num * p + (int)(str[i] - '0');
		p = 10;
		i++;
	}
	return (s * num);
}
