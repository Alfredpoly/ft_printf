#include "libft/libft.h"

int	ft_deci_fd(unsigned int n, int fd)
{
	int	ret;

	ret = 0;
	if (n >= 10)
	{
		ft_deci_fd(n / 10, fd);
		ft_deci_fd(n % 10, fd);
	}
	if (n < 10)
	{
		ft_putchar_fd(n + '0', fd);
		ret++;
	}
	return (ret);
}
