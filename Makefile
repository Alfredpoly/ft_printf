NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar ru
RM = rm -f

c-files = ft_uintlen.c ft_puthex_upper_fd.c ft_hexlen.c ft_intlen.c ft_printf.c ft_puthex_fd.c ft_deci_fd.c ft_bzero.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strlen.c

o-files = $(c-files:.c=.o)

OBJ_FILES = $(o-files)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(AR) $(NAME) $(OBJ_FILES)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(o-files) $(o-bonus)

fclean: clean
	rm -f $(NAME)

re: fclean all

