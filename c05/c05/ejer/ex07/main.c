
#include <stdio.h>

int		ft_find_next_prime(int nb);

int     main(void)
{
  	int p1;
    int p2;
    int p3;
    int p4;
    int p5;
	int p6;

    p1 = ft_find_next_prime(3);
	p2 = ft_find_next_prime(10);
	p3 = ft_find_next_prime(50);
	p4 = ft_find_next_prime(98);
	p5 = ft_find_next_prime(-10);
	p6 = ft_find_next_prime(2147483588);

	printf("%d", p1);
	printf("%c", '\n');
	printf("%d", p2);
	printf("%c", '\n');
	printf("%d", p3);
	printf("%c", '\n');
	printf("%d", p4);
	printf("%c", '\n');
	printf("%d", p5);
	printf("%c", '\n');
	printf("%d", p6);

}
