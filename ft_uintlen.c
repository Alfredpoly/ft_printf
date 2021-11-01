#include "ft_printf.h"

int	ft_uintlen(unsigned int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count++;
	if (n == 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
