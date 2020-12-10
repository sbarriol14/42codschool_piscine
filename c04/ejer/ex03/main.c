
#include <stdio.h>

int ft_atoi(char *str);

int		main(void)
{
	char num1[] = "       ---+-++--1234cba78";
    char num2[] = "      ---++++--5678_wz34";
    char num3[] = "        +++----xyz";
	char num4[] = "        +++----2147483647";
char num5[] = "        +++-----2147483648";

    int i1;
    int i2;
    int i3;
	int i4;
	int i5;

    i1 = ft_atoi(num1);
    i2 = ft_atoi(num2);
    i3 = ft_atoi(num3);
	 i4 = ft_atoi(num4);
	 i5 = ft_atoi(num5);
	

    printf("%d", i1);
    printf("%c", '\n');
    printf("%d", i2);
    printf("%c", '\n');
    printf("%d", i3);
    printf("%c", '\n');
    printf("%d", i4);
    printf("%c", '\n');
    printf("%d", i5);

	return(0);
}