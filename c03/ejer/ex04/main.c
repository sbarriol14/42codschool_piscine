
#include <stdio.h>
#include <string.h>

char 	*ft_strstr(char *str, char *to_find);

int 	main(void)
{
	char str1[] = "HelloWorld";
	char str2[] = "World";

	printf("%d", strstr(str1, str2));
	printf("%d", ft_strstr(str1, str2));
	
	char str3[] = "Chotoko";
	char str4[] = "Eu Rules";

	printf("%d", strstr(str3, str4));
	printf("%d", ft_strstr(str3, str4));
	printf("%d", ft_strstr(str4, str3));
	printf("%d", strstr(str4, str3));
}