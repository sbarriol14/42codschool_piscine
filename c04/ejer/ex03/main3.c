#include <stdio.h>

int ft_atoi(char *str);

int main ()
{
	char str[] = "   --i-+-+-3254gfs7272-";

	int i;
	
	i = ft_atoi(str);
	printf("%i", i);
	return (0);
}
