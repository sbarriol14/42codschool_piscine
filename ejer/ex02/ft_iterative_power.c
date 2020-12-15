
int ft_iterative_power(int nb, int power)
{
    int i;
    int p;

    if (nb < 0)
        return (0);
    if (nb == 0)
        return (1);
    i = 0;
    p = 1;
    while (i++ < power)
    {
       p *= nb;
    }
    return (p);
 }