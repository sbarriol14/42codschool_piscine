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

int        error_base(char *base, int tam);
int        espacios_menos(char *str, int *p);
int        sacar_base(char c, char *base);
int        contenido(char c, char *base);

int        ft_atoi_base(char *str, char *base)
{
    int result;
    int signo;
    int size_base;
    int i;

    result = 0;
    signo = 1;
    size_base = 0;
    i = 0;
    while (base[i] != '\0')
        i++;
    size_base = i;
    if (error_base(base, size_base) == 0)
        return (0);
    if ((espacios_menos(str, &i) % 2) == 0)
        signo = -1;
    while (str[i] && contenido(str[i], base))
    {
        result *= size_base;
        result -= sacar_base(str[i], base);
        i++;
    }
    return (result *= signo);
}

int        error_base(char *base, int tam)
{
    int i;
    int j;

    if (tam < 2)
        return (0);
    i = 0;
    while (base[i] != '\0')
    {
        if (base[i] == '-'  base[i] == '+'  base[i] < 32  base[i] > 126)
            return (0);
        j = i + 1;
        while (base[j] != '\0')
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int        espacios_menos(char *str, int *p)
{
    int minimo;
    int i;

    i = 0;
    minimo = 0;
    while (str[i] && (str[i] == '\f'  str[i] == '\t'  str[i] == ' '
                 str[i] == '\n'  str[i] == '\r'  str[i] == '\v'))
        i++;
    while ((str[i] != '\0') && (str[i] == '-' || str[i] == '+'))
    {
        if (str[i] == '-')
            minimo++;
        i++;
    }
    *p = i;
    return (minimo);
}

int        sacar_base(char c, char *base)
{
    int i;

    i = 0;
    while (base[i] != c && base[i])
    {
        if (base[i] == c)
            return (i);
        i++;
    }
    return (i);
}

int        contenido(char c, char *base)
{
    int i;

    i = 0;
    while (base[i] != c && base[i])
        i++;
    if (base[i] == '\0')
        return (0);
    else
        return (1);
}