#include "ft_printf.h"

void	ft_puthex_fd(unsigned long int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n > 15)
	{
		ft_puthex_fd(n / 16, fd);
		ft_puthex_fd(n % 16, fd);
	}
	if (n <= 9)
		ft_putchar_fd(n + '0', fd);
	if (n > 9 && n < 16)
		ft_putchar_fd(97 - 10 + n, fd);
}
