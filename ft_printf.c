#include "ft_printf.h"
#include "libft/libft.h"

t_print	*ft_initialize_tab(t_print *tab)
{
	tab->wdt = 0;
	tab->prc = 0;
	tab->zero = 0;
	tab->pnt = 0;
	tab->dash = 0;
	tab->tl = 0;
	tab->sign = 0;
	tab->is_zero = 0;
	tab->perc = 0;
	tab->sp = 0;
	return (tab);
}

int	ft_printf(const char *format, ...)
{
	t_print	*tab;
	int		i;

	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab)
		return (0);
	ft_initialize_tab(tab);
	va_start(tab->args, format);
	while (format[i] != '\0')
	{
		// if (format[i] == '%')
			// ft_what_format(format, i + 1);
		// else
		write(1, format[i], 1);
		i++;
	}
	va_end(tab->args);
	return (i);
}

int	main()
{
	ft_printf("tsted");
}
