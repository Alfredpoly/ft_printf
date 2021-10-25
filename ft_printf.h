#include <stdarg.h>
#include <unistd.h>

typedef struct s_print
{
	va_list	args;
	int		zero;
	int		tl;
	int		is_zero;
	int		perc;
	int		sp;
}	t_print;