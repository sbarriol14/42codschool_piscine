#include <stdio.h>

int ft_strlen(char *str);

int main()
{
	int i;
	char str[] = "Hola caracola";

	i = ft_strlen(str);
	printf("%i", i);
	return 0;
}
