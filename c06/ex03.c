
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	char **sort;


	i = 0;
	j = 0;
	while (i < argc)
	{
		if ()

		i--;
	}
	write (1, '\n', 1);
}
