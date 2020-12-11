
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

	i = argc;
	while (i > 1)
	{
		ft_putstr(argv[i]);
		write (1, '\n', 1);
		i--;
	}
}
