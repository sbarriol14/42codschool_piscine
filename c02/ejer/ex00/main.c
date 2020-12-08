#include <stdio.h>
#include <string.h>

char     *ft_strcpy(char *dest, char *src);

int     main(void)
{
    char str1[] = "CopiadoSi";
    char str2[] = "Aquicopio";

    printf("%s", ft_strcpy(str2, str1));
    printf("%s", strcpy(str2, str1));

    char str3[] = "Copiado";
    char str4[] = "Aquicopio";

    printf("%s", ft_strcpy(str2, str1));
    printf("%s", strcpy(str2, str1));

    char str5[] = "CopiadoSi";
    char str6[] = "Aqui";

    printf("%s", ft_strcpy(str2, str1));
    printf("%s", strcpy(str2, str1));

}