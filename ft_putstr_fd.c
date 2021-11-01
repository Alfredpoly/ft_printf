#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		s = "(null)";
	write(fd, s, ft_strlen(s));
	return (ft_strlen(s));
}
