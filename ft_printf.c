#include "ft_printf.h"
#include "../libft/libft.h"
#include <stdio.h>

t_print	*ft_initialize_tab(t_print *tab)
{
	tab->zero = 0;
	tab->tl = 0;
	tab->is_zero = 0;
	tab->perc = 0;
	tab->sp = 0;
	return (tab);
}

void	ft_print_char(t_print *tab)
{
	char	a;

	a = va_arg(tab->args, int);
}

void	ft_what_format(t_print *tab, const char *format, int pos)
{
	
	// if (format[pos] == 'c')
	// 	ft_print_char(tab);
	// if (format[pos] == 's')
	// {
	// }
	// if (format[pos] == 'p')
	// {
	// }
	// if (format[pos] == 'd' || format[pos] == 'i')
	// {
	// }
	// if (format[pos] == 'u')
	// {
	// }
	// if (format[pos] == 'x')
	// {
	// }
	// if (format[pos] == 'X')
	// {
	// }
	// if (format[pos] == '%')
	// {
	// }
}


int	ft_printf(const char *format, ...)
{
	t_print	*tab;
	int		i;

	i = 0;
	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab)
		return (0);
	ft_initialize_tab(tab);
	va_start(tab->args, format);
	while (format[i++] != '\0')
	{
		if (format[i] == '%')
			ft_what_format(tab, format, i + 1);
		else
			write(1, &format[i], 1);
	}
	va_end(tab->args);
	return (i);
}

int	main()
{
	ft_printf("tsted %c", 'a');
}
