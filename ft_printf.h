#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <wchar.h>
# include <stdlib.h>

void	ft_deci_fd(unsigned int n, int fd);
void	ft_puthex_fd(unsigned long n, int fd);
int		ft_printf(const char *format, ...);
void	ft_bzero(void *dest, size_t len);
size_t	ft_strlen(const char *str);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *str, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_intlen(int n);
int		ft_uintlen(unsigned int n);
int		ft_hexlen(unsigned long n);
void	ft_puthex_upper_fd(unsigned long int n, int fd);
#endif