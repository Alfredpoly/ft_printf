#include "ft_printf.h"

int	ft_hexlen(unsigned long n)
{
	int	ret;

	ret = 0;
	if (n == 0)
		ret++;
	while (n > 0)
	{
		n = n / 16;
		ret++;
	}
	return (ret);
}
