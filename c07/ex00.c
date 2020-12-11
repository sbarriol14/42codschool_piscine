
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *temp;
	int size = ft_strlen(src);
	temp = (char)malloc(sizeof(char) * size);
	

	 int i = 0;
	 while (src[i] != '\0')
	 {
	 		temp[i] = src[i];
	 		i++;
	 }
	
	return(temp);
}
