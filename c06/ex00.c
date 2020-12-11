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
	char *name;

	name = argv[0];
	ft_putstr(name);
}
