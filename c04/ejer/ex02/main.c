
#include <unistd.h>

void ft_putnbr(int nb);

int		main(void)
{
	ft_putnbr(0);
	ft_putnbr(9);
	ft_putnbr(10);
	ft_putnbr(-9);
	ft_putnbr(-10);
	ft_putnbr(123);
	ft_putnbr(-123);
	ft_putnbr(2147483647);
	ft_putnbr(-2147483648);
	return(0);
}
