
#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
    write(1, &c, 1)
}

void	ft_initialize(int col1up, int col2up, int col3up, int col4up, int col1down, int col2down, int col3down, int col4down, int rowleft1, int rowleft2, int rowleft3, int rowleft4, int rowright1, int rowright2, int rowright3, int rowright4)
{
	int col;
	int row;
    if ( (x < 0) || (y < 0) || (x == INT_MAX) || (y ==INT_MIN))
    {
        col = 1;
	    row = 1;
	    while (row <= y)
	    {
		    while (col <= x)
		    {
			    if ((col == 1 && row == 1) || (col == x && row == 1))
				    ft_putchar('o');
			    else if ((col == 1 && row == y) || (col == x && row == y))
				    ft_putchar('o');
			    else if (row == 1 || row == y)
				    ft_putchar('-');
			    else if (col == 1 || col == x)
				    ft_putchar('|');
			    else
				    ft_putchar(' ');
			    col++;
		    }
		    ft_putchar('\n');
		    col = 1;
		    row++;
	    }
    }
	
}
