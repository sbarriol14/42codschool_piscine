
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *temp;
	//añadir strlen
	temp = (char)malloc(sizeof(char) * size);
	temp = src;
	/* añadir
	 * int i = 0;
	 * while (src[i] != '\0')
	 * {
	 * 		temp[i] = src[i];
	 * 		i++;
	 * }
	 */
	return(temp);
}
