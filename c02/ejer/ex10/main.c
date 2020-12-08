#include <stdio.h>
#include <string.h>

unsigned int     ft_strlcpy(char *dest, char *src, unsigned int n);

int     main(void)
{
    char str1[] = "";
    char str2[] = "Aquicopio";

    unsigned int i1;
    unsigned int i2;


    i1 = ft_strlcpy(str2, str1, 0);

    printf("%s", str1);
    printf("%s", str2);
    printf("%c", '\n');
    printf("%u", i1);

    char str3[] = "";
    char str4[] = "Aquicopio";

    i2 = strlcpy(str4, str3, 0);

    printf("%s", str3);
    printf("%s", str4);
    printf("%c", '\n');
    printf("%u", i2);


}