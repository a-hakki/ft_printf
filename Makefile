NAME = libftprintf.a
source =  \
	  ft_printf.c \
	  ft_checknext.c \
	  ft_isvalid.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_putadrs.c \
	  ft_putadrsx.c \
	  ft_putnum.c

object = $(source:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all:$(object) $(NAME)

$(NAME): $(object)
	ar rc $(NAME) $(object)

clean:
	rm -f $(object)

fclean: clean
	rm -f $(NAME)

re: fclean all

.SECONDARY: $(object)

.PHONY: clean

