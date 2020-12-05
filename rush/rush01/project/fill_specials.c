/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_specials.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epeters- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 13:37:32 by epeters-          #+#    #+#             */
/*   Updated: 2020/12/05 17:16:23 by epeters-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_cols(int map[4][4], int *parameters, int i);
void	check_rows(int map[4][4], int *parameters, int i);

void	fill_specials(int map[4][4],int *parameters)
{
	int i;
	int c4;

	i = 0;
	while (i < 8)
	{
		check_cols(map, parameters, i);
		i++;
	}
	while (i < 16)
	{
		check_rows(map, parameters, i);
		i++;
	}
}
	
void	check_cols(int map[4][4], int *parameters, int i)
{
	int x;
	int y;
	int box;

	if (parameters[i] == 4 || parameters[i] == 1)
	{
		x = i > 3 ? i - 4 : i;
		y = i > 3 ? 3 : 0;
		if (parameters[i] == 4)
		{
			box = 1;
			while (box < 5)
			{
				map[x][y] = box;
				box++;
				i > 3 ? y-- : y++;
			}
		}
		else
			map[x][y] = 4;
	}
}

void	check_rows(int map[4][4], int *parameters, int i)
{
	int x;
	int y;
	int box;

	if (parameters[i] == 4 || parameters[i] == 1)
	{
		y = i > 11 ? i - 12 : i - 8;
		x = i > 11 ? 3 : 0;
		if (parameters[i] == 4)
		{
			box = 1;
			while (box < 5)
			{
				map[x][y] = box;
				box++;
				i > 11 ? x-- : x++;
			}
		}
		else
		map[x][y] = 4;
	}
}
