
int ft_recursive_factorial(int nb)
{
    int f;

    if (nb == 0)
        return (1);
    f = nb;
    f = f * (ft_recursive_factorial(nb - 1));
    return (f);
}