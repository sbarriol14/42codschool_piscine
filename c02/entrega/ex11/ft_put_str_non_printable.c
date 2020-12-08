/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str_non_printable.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <sbarrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 13:17:30 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/08 18:47:17 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_printable(char str)
{
    if (((str <= 126)  && (str >= 32)))
			return (1);
    else
        return (0);
}

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if (*str == '\0')
		return (1);
	while(str[i] != '\0')
	{
		if (!((str[i] <= 126)  && (str[i] >= 32)))
			return (0);
		i++;
	}
	return (1);
}

int     convert_hexadecim()
{
    
}

 void   ft_putstr_non_printable(char *str)
 {
    int i;
    char *hex;
    int hexa;

    hex = "0123456789abcdef";

    i = 0;
    if (ft_str_is_printable(str) == 0)
    {
        while (str[i] != '\0')
        {
            if ((ft_char_is_printable(str[i]) == 0))
            {
                hexa = (str[i] / 16);
                str[i] = hex[hexa];    
            }      
            i++;
        }
    }
 }
 



