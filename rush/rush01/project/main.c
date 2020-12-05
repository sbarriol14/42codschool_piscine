/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epeters- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 11:37:04 by epeters-          #+#    #+#             */
/*   Updated: 2020/12/05 12:51:26 by epeters-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	create_map(int *parameters);
int 	get_parameters(char *input, int *parameters);
int		check_parameters(int *parameters);
//recibe parametros y corre el programa o da error
int		main(int argc, char **argv)
{
	int parameters[16];
	int count;
	
	printf("argc: %d\n", argc);
	if (argc == 2)
	{
		count = get_parameters(argv[1], parameters);
		printf("Count es: %d\n", count);
		if (count == 16)
		{
			if(check_parameters(parameters))
			{	printf("Parametros validos!");
				create_map(parameters);
			}	
			else
				write(1, "Error\n", 6);
		}
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);

}
//extrae parametros de la string y los coloca en el array de int
int 	get_parameters(char *input, int *parameters)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (input[i] != 0)
	{
		if (input[i] >= '1' && input[i] <= '4')
			if (input[i + 1] == ' ' || input[i + 1] == '\0')
			{
				parameters[j] = (int)(input[i] - '0');
				j++;
				i++;
			}
		if (input[i] == ' ')
			i++;
		else if (input[i] != 0)
			return (0);
	}
	return (j);
}
//revisa que las combinaciones sean validas
int		check_parameters(int *parameters)
{
	int i;

	i = 0;
	while (i < 12)
	{
		if ((parameters[i] + parameters[i + 4]) > 5)
			return (0);
		else if ((parameters[i] + parameters[i + 4]) < 3)
			return (0);
		else if ((parameters[i] == 4) && (parameters[i + 4] != 1))
			return (0);
		else
			i++;
	}
	return (1);
}
