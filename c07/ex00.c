
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *temp;

	temp = (char)malloc(sizeof(src));
	temp = src;
	/*
	 * int i = 0;
	 * while (src[i] != '\0')
	 * {
	 * 		temp[i] = src[i];
	 * 		i++;
	 * }
	 */
	return(temp);
}
