
#include <stdio.h>
#include <string.h>

char		*ft_strcat(char *dest, char *src);

int 	main(void)
{
	char str1[] = "Hello";
	char str2[] = "World";

	printf("%s", strcat(str1, str2));
	printf("%s", ft_strcat(str1, str2));
	
	char str3[] = "Chotoko";
	char str4[] = "Eu";

	//printf("%s", strcat(str3, str4));
	//printf("%s", ft_strcat(str3, str4));
	printf("%d", ft_strcat(str4, str3));
	printf("%d", strcat(str4, str3));
}