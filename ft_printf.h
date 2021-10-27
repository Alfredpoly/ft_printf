#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int		ft_deci_fd(unsigned int n, int fd);
char	*ft_nb_to_hex(int n);
char	*ft_nb_to_hex_upper(int n);
int	ft_printf(const char *format, ...);

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	ft_bzero(void *dest, size_t len);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memset(void *dest, int ch, size_t len);
char	*ft_strchr(const char *str, int c);
char	*ft_strchrset(const char *str, const char *charset);
char	*ft_strdup(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *str, int c);
char	*ft_strrchrset(const char *str, const char *charset);
char	*ft_substr(char const *str, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *str, char const *set);
char	**ft_split(char const *str, char c);
char	*ft_strsep(char **stringp, const char *delim);
char	*ft_itoa(int num);
char	*ft_strmapi(char const *str, char (*func)(unsigned int, char));
void	ft_striteri(char *str, void (*func)(unsigned int, char*));
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *str, int fd);
int		ft_putnbr_fd(int n, int fd);