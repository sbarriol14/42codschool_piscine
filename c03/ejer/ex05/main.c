
#include <stdio.h>
#include <string.h>

char    ft_strstr(char *dest, char *src);

int 	main(void)
{
	char str1[] = "Hello";
	char str2[] = "World";

	printf("%d", strncat(str1, str2, 4));
	printf("%d", ft_strncat(str1, str2, 4));
	
	char str3[] = "Chotoko";
	char str4[] = "Eu Rules";

	printf("%d", strncat(str3, str4, 6));
	printf("%d", ft_strncat(str3, str4, 6));
	printf("%d", ft_strncat(str4, str3, 2));
	printf("%d", strncat(str4, str3, 2));
}