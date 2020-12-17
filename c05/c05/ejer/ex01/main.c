
#include <stdio.h>

int ft_recursive_factorial(int nb);

int     main(void)
{
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
	int n6;

    n1 = ft_recursive_factorial(3);
    n2 = ft_recursive_factorial(10);
    n3 = ft_recursive_factorial(12);
    n4 = ft_recursive_factorial(0);
    n5 = ft_recursive_factorial(-2);
	n6 = ft_recursive_factorial(13);

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
