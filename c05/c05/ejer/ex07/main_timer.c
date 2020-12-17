
#include <stdio.h>
#include <time.h>

int		ft_find_next_prime(int nb);

int             main(void)
{
        int a;
        clock_t t;

        t = clock();
        a = 2147483588;
        printf("%d\n", ft_find_next_prime(a));
        t = clock() - t;
        double time_taken = ((double)t)/CLOCKS_PER_SEC;
        printf("find next prime took %f seconds to execute \n", time_taken);
        return (0);

}