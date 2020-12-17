
#include <stdio.h>

int		ft_fibonacci(int index);

int     main (void)
{
    int f1;
    int f2;
    int f3;
    int f4;
    int f5;
	int f6;

    f1 = ft_fibonacci(2);
    f2 = ft_fibonacci(4);
    f3 = ft_fibonacci(10);
    f4 = ft_fibonacci(12);
    f5 = ft_fibonacci(20);
	f6 = ft_fibonacci(-2);

    printf("%d", f1);
    printf("%c", '\n');
    printf("%d", f2);
    printf("%c", '\n');
    printf("%d", f3);
    printf("%c", '\n');
    printf("%d", f4);
    printf("%c", '\n');
    printf("%d", f5);
    printf("%c", '\n');
	printf("%d", f6);

}
