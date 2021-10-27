#include "ft_printf.h"

int	ft_what_format(va_list args, const char *format, int pos)
{
	int	ret;

	ret = 0;
	if (format[pos] == 'c')
		ret = ft_putchar_fd(va_arg(args, int), 1);
	if (format[pos] == 's')
		ret = ft_putstr_fd(va_arg(args, char *), 1);
	if (format[pos] == 'p')
	{
		ret = ft_putchar_fd('0', 1);
		ret = ret + ft_putchar_fd('x', 1);
		ret = ret + ft_putstr_fd(ft_nb_to_hex(va_arg(args, unsigned long)), 1);
	}
	if (format[pos] == 'd' || format[pos] == 'i')
		ret = ft_putnbr_fd(va_arg(args, int), 1);
	if (format[pos] == 'u')
		ret = ft_deci_fd(va_arg(args, unsigned int), 1);
	if (format[pos] == 'x')
		ret = ft_putstr_fd(ft_nb_to_hex(va_arg(args, int)), 1);
	if (format[pos] == 'X')
		ret = ft_putstr_fd(ft_nb_to_hex_upper(va_arg(args, int)), 1);
	if (format[pos] == '%')
		ret = ft_putchar_fd(format[pos], 1);
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	int			i;
	int			ret;
	va_list		args;

	i = -1;
	ret = -1;
	va_start(args, format);
	while (format[i++] != '\0')
	{
		if (format[i] == '%')
		{
			ret = ret + ft_what_format(args, format, i + 1);
			i++;
		}
		else
			ret = ret + ft_putchar_fd(format[i], 1);
	}
	va_end(args);
	return (ret);
}

// int	main()
// {
// 	int	a;
// 	int b;
// 	int c;
// 	int	*ptr = &a;

// 	b = ft_printf("%c\n", '!');
// 	c = printf("%p\n", ptr);
// 	printf("\nlen		=%d\nlen real	=%d", b, c);
// 	// b = ft_printf("test |%c| |%s| |%p| |%d| |%i| |%u| |%%i| |%x| |%X|\n", 'a', "bdsd", ptr, 1545, 24, 295, 1256, 1256);
// 	// c = printf("test |%c| |%s| |%p| |%d| |%i| |%u| |%%i| |%x| |%X|\n", 'a', "bdsd", ptr, 1545, 24, 295, 1256, 1256);
// 	// printf("\nlen		=%d\nlen real	=%d", b, c);
// }
