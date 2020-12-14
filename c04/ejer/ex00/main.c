
#include <stdio.h>

int	ft_strlen(char *str);

int main(void)
{
	char *string = "HolaMundo";
	int i = 0;

	i = ft_strlen(string);
	printf("%d", i);
}
