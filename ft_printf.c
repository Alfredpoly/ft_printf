#include "ft_printf.h"

int	ft_what_format_2(va_list args, const char format)
{
	int					ret;
	unsigned long int	arg;

	ret = 0;
	arg = 0;
	if (format == 'x' || format == 'X' || format == 'u')
	{
		arg = va_arg(args, unsigned int);
		if (format == 'x')
		{
			ft_puthex_fd(arg, 1);
			ret = ft_hexlen(arg);
		}
		else if (format == 'X')
		{
			ft_puthex_upper_fd(arg, 1);
			ret = ft_hexlen(arg);
		}
		else
		{
			ft_deci_fd(arg, 1);
			ret = ft_uintlen(arg);
		}
	}
	return (ret);
}

int	ft_what_format(va_list args, const char format)
{
	int					ret;
	unsigned long int	arg;

	ret = 0;
	arg = 0;
	if (format == 'c')
		ret = ft_putchar_fd(va_arg(args, int), 1);
	if (format == 's')
		ret = ft_putstr_fd(va_arg(args, char *), 1);
	if (format == 'p')
	{
		ret = ft_putstr_fd("0x", 1);
		arg = va_arg(args, unsigned long);
		ft_puthex_fd(arg, 1);
		ret = ret + ft_hexlen(arg);
	}
	if (format == 'd' || format == 'i')
	{
		arg = va_arg(args, long int);
		ft_putnbr_fd(arg, 1);
		ret = ft_intlen(arg);
	}
	if (format == '%')
		ret = ft_putchar_fd(format, 1);
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	int			ret;
	va_list		args;

	ret = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{	
			format++;
			ret = ret + ft_what_format(args, *format);
			ret = ret + ft_what_format_2(args, *format);
		}
		else
			ret = ret + ft_putchar_fd(*format, 1);
		format++;
	}
	va_end(args);
	return (ret);
}
