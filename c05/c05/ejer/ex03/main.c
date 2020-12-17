
#include <stdio.h>

int ft_recursive_power(int nb, int power);

int     main(void)
{
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int n6;

    n1 = ft_recursive_power(3, 7);
    n2 = ft_recursive_power(10, 5);
    n3 = ft_recursive_power(21, 2);
    n4 = ft_recursive_power(0, 5);
    n5 = ft_recursive_power(-2, 2);
    n6 = ft_recursive_power(2, 0);

    printf("%d", n1);
    printf("%c", '\n');
    printf("%d", n2);
    printf("%c", '\n');
    printf("%d", n3);
    printf("%c", '\n');
    printf("%d", n4);
    printf("%c", '\n');
    printf("%d", n5);
    printf("%c", '\n');
    printf("%d", n6);
}
