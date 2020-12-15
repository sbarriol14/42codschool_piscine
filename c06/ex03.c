
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


int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int r;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			return (r);
		}
		i++;
	}
	return (0);
}

void	ft_swap(int *a, int *b)
{
	int x;

	x = *b;
	*b = *a;
	*a = x;
}

int		main(int argc, char **argv)
{
	int i;


	i = 1;
	while (i < argc - 1)
	{
		if (argv[i] > argv[i + 1])
			ft_swap(argv[i], argv[i + 1]);
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	write (1, '\n', 1);
}
