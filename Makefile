NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar ru
RM = rm -f

c-files = ft_printf.c ft_nb_to_hex.c ft_deci_fd.c ft_nb_to_hex_upper.c libft/ft_calloc.c libft/ft_bzero.c libft/ft_putchar_fd.c libft/ft_putnbr_fd.c libft/ft_putstr_fd.c libft/ft_strlen.c

c-bonus = 

o-bonus = $(c-bonus:.c=.o)
o-files = $(c-files:.c=.o)

ifdef WITH_BONUS
OBJ_FILES = $(o-files) $(o-bonus)
else
OBJ_FILES = $(o-files)
endif

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

bonus: 
	$(MAKE) WITH_BONUS=1
