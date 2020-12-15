
int ft_recursive_power(int nb, int power)
{
    int i;
    int p;

    if (nb < 0)
        return (0);
    if (nb == 0)
        return (1);
    if (power == 0)
        return (1);
    i = 0;
    p = nb;
    p *= (ft_recursive_power(nb, power -1));
}
