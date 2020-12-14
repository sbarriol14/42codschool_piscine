/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarrio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 17:42:41 by sbarrio-          #+#    #+#             */
/*   Updated: 2020/12/14 18:26:38 by sbarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



//maaaaaal


#include <unistd.h>

int        size_base(char *base);
int        compro_base(char *base);

void    ft_putnbr_base(int nbr, char *base)
{
    unsigned int    cont;
    int                cont_base;

    cont = nbr;
    cont_base = size_base(base);
    if (compro_base(base) == 1)
        return ;
    else if (nbr == -2147483648)
    {
        write(1, "-", 1);
        ft_putnbr_base(nbr / size_base(base) * (-1), base);
        ft_putnbr_base(nbr % size_base(base) * (-1), base);
    }
    else if (nbr < 0)
    {
        write(1, "-", 1);
        ft_putnbr_base(nbr * (-1), base);
    }
    else if (nbr >= size_base(base))
    {
        ft_putnbr_base(nbr / size_base(base), base);
        ft_putnbr_base(nbr % size_base(base), base);
    }
    else
        write(1, &base[nbr], 1);
}

int        size_base(char *base)
{
    int i;

    i = 0;
    while (base[i] != '\0')
        i++;
    return (i);
}

int        compro_base(char *base)
{
    int i;
    int j;

    i = 0;
    while (base[i] != '\0')
    {
        if (base[i] == '-'  base[i] == '+'  base[i] < 32 || base[i] > 126)
            return (1);
        j = 0;
        while (j <= i)
        {
            if (base[i] == base[j] && i != j)
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}