
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int     main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int c = 0;

    if (argc != 2)
    {
        ft_putchar('\n');
        return (0);
    }
    while (argv[1][i] != '\0')
    {
        j = 0;
        if (argv[1][i] <= 'z' && argv[1][i] >= 'a')
        {
            c = argv[1][i] - 'a' + 1;
            while (j < c)
            {
                ft_putchar(argv[1][i]);
                j++;
            }
        }
        i++;
    }  
    ft_putchar('\n');
    return (0); 

}