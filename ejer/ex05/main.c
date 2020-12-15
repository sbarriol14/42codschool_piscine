
#include <stdio.h>
#include <limits.h>

int		ft_sqrt(int nb);

int     main(void)
{
    int r1;
    int r2;
    int r3;
    int r4;
    int r5;
	int r6;
	int r7;

    r1 = ft_sqrt(4);
    r2 = ft_sqrt(16);
    r3 = ft_sqrt(25);
    r4 = ft_sqrt(-25);
    r5 = ft_sqrt(0);
	r6 = ft_sqrt(2025000000);
	r7 = ft_sqrt(INT_MAX);

	printf("%d", r1);
	printf("%c", '\n');
	printf("%d", r2);
	printf("%c", '\n');
	printf("%d", r3);
	printf("%c", '\n');
	printf("%d", r4);
	printf("%c", '\n');
	printf("%d", r5);
	printf("%c", '\n');
	printf("%d", r6);
	printf("%c", '\n');
	printf("%d", r7);

}
