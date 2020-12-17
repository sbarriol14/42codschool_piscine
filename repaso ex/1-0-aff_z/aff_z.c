
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main(int argc, char **argv)
{
    int n;
    char **str;

    n = argc;
    str = argv;

    ft_putchar('z');
    ft_putchar('\n');
    return (0);
}