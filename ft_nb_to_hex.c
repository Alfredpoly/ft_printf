#include "libft/libft.h"

char	*ft_nb_to_hex(long int n)
{
	long int	origin;
	int			rem;
	char		*crem;
	int			len;

	len = 0;
	origin = n;
	while (origin != 0)
	{
		origin = origin / 16;
		len++;
	}
	crem = ft_calloc((len + 1), sizeof(char));
	while (n != 0)
	{
		rem = n % 16;
		n = n / 16;
		len--;
		if (rem > 9)
			crem[len] = 97 + rem - 10;
		else
			crem[len] = rem + '0';
	}
	return (crem);
}
