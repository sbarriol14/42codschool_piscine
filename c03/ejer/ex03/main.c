
#include <stdio.h>
#include <strings.h>

char		*ft_strncat(char *dest, char *src, unsigned int n);

int 	main(void)
{
	char str1[] = "Hello";
	char str2[] = "World";

	printf("%s", strncat(str1, str2, 4));
	printf("%s", ft_strncat(str1, str2, 4));
	
	char str3[] = "Chotoko";
	char str4[] = "Eu Rules";

	printf("%s", strncat(str3, str4, 6));
	printf("%s", ft_strncat(str3, str4, 6));
	printf("%s", ft_strncat(str4, str3, 2));
	printf("%s", strncat(str4, str3, 2));
}