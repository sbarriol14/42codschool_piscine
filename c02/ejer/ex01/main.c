#include <stdio.h>
#include <string.h>

char     *ft_strncpy(char *dest, char *src, int n);

int     main(void)
{
    char str1[] = "CopiadoSi";
    char str2[] = "Aquicopio";

    printf("%s", ft_strncpy(str2, str1, 4));
    printf("%s", strncpy(str2, str1, 4));

    char str3[] = "CopiadoSi";
    char str4[] = "Aquicopio";

    printf("%s", ft_strncpy(str2, str1, 10));
    printf("%s", strncpy(str2, str1, 10));

    char str5[] = "CopiadoSi";
    char str6[] = "Aqui";

    printf("%s", ft_strncpy(str2, str1, 12));
    printf("%s", strncpy(str2, str1, 12));

}