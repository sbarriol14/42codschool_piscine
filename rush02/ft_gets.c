/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gets.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 16:30:06 by asydykna          #+#    #+#             */
/*   Updated: 2020/12/12 16:48:38 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCHAR 1000

char	*ft_gets(char string[], int bytes, FILE *fp)
{
	int c;
	int i;

	i = 0;
	if (bytes <= 0)
		return (string);

	while (i < bytes - 1 && ((c = getc(fp)) != EOF))
	{
		string[i++] = c;
		if (c == '\n')
			break ;
	}
	string[i] = '\0';

	if (i > 0)
	{
		return (string);
	}
	else
		return (NULL);
}

int main() {
    FILE *fp;
    char str[MAXCHAR];
    char* filename = "numbers.dict.txt";
 
    fp = fopen(filename, "r");
    if (fp == NULL){
        printf("Could not open file %s",filename);
        return 1;
    }
    while (ft_gets(str, MAXCHAR, fp) != NULL)
        printf("%s", str);
    fclose(fp);
    return 0;
}