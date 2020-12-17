
#include <unistd.h>
#include <stdio.h>

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

int     ft_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int     main(int argc, char **argv)
{
    int size;
    int i = 0;
    int s1;
    int s2;


    size = ft_strlen(argv[1]);
    s1 = ft_strlen(argv[2]);
    s2 = ft_strlen(argv[3]);
    //printf("%c", argv[2][0]);
    //printf("%d", size);
    if (s1 != 1 || s2 != 1)
        return (0);
    if (argc != 4)
        return (0);
    while (i < size)
    {
        //printf("%c", argv[1][i]);
        //printf("%c", argv[2][0]);
        //printf("%c", argv[3][0]);
        if (argv[1][i] == argv[2][0])
            ft_putchar(argv[3][0]);
        else
        {
            ft_putchar(argv[1][i]);
        }
        
        i++;
    }
    //ft_putstr(argv[1]);
    ft_putchar('\n');
}