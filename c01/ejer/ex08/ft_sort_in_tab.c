#include <unistd.h>
#include <limits.h>

void 	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int min;
	int *tab2;

	i = 0;
	min = INT_MAX;
	*tab2 = *tab;
	while (j < size)
	{
		while (i < size)
		{
			if (tab2[i] < min)
				min = tab2[i];
			i++;
		}
		tab[j] = min;
		j++;
	}


}
